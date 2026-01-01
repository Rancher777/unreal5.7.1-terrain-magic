#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
TerrainMagic Map Selector - Local Python tool for selecting terrain areas
Replaces the web-based map interface at https://www.gdi4k.com/terrainmagic/map

Usage:
    python TerrainMagic_MapSelector.py

Features:
    - Interactive map for selecting terrain areas
    - Draw polygons to select regions
    - Multiple clip selections
    - Export coordinates in TerrainMagic format
    - Convert lat/lon to tile coordinates
    - Grayscale heightmap view (similar to Tangram Heightmapper)
"""

import json
import math
import sys
from typing import List, Tuple, Dict
import folium
from folium.plugins import Draw
from folium import plugins
import webbrowser
import os
from datetime import datetime

# Fix Unicode encoding for Windows console
if sys.platform == 'win32':
    try:
        sys.stdout.reconfigure(encoding='utf-8')
    except AttributeError:
        # Python < 3.7 fallback
        import codecs
        sys.stdout = codecs.getwriter('utf-8')(sys.stdout.buffer, 'strict')


class TerrainMagicMapSelector:
    """Interactive map tool for selecting terrain areas for TerrainMagic clips"""
    
    def __init__(self, center_lat: float = 39.8283, center_lon: float = -98.5795, zoom_start: int = 4):
        """
        Initialize the map selector
        
        Args:
            center_lat: Initial map center latitude (default: USA center)
            center_lon: Initial map center longitude
            zoom_start: Initial zoom level
        """
        self.center_lat = center_lat
        self.center_lon = center_lon
        self.zoom_start = zoom_start
        self.selections = []  # List of selected polygons
        self.map = None
        
    def latlon_to_tile(self, lat: float, lon: float, zoom: int) -> Tuple[int, int]:
        """
        Convert latitude/longitude to tile coordinates (X, Y) at given zoom level
        
        Args:
            lat: Latitude in degrees
            lon: Longitude in degrees
            zoom: Zoom level (0-18 typically)
            
        Returns:
            Tuple of (tile_x, tile_y)
        """
        n = 2.0 ** zoom
        tile_x = int((lon + 180.0) / 360.0 * n)
        lat_rad = math.radians(lat)
        tile_y = int((1.0 - math.asinh(math.tan(lat_rad)) / math.pi) / 2.0 * n)
        return tile_x, tile_y
    
    def tile_to_latlon(self, tile_x: int, tile_y: int, zoom: int) -> Tuple[float, float]:
        """
        Convert tile coordinates to latitude/longitude of tile's northwest corner
        
        Args:
            tile_x: Tile X coordinate
            tile_y: Tile Y coordinate
            zoom: Zoom level
            
        Returns:
            Tuple of (latitude, longitude)
        """
        n = 2.0 ** zoom
        lon = tile_x / n * 360.0 - 180.0
        lat_rad = math.atan(math.sinh(math.pi * (1 - 2 * tile_y / n)))
        lat = math.degrees(lat_rad)
        return lat, lon
    
    def get_bounding_tiles(self, bounds: Dict) -> Dict:
        """
        Get tile coordinates that cover a bounding box
        
        Args:
            bounds: Dict with 'north', 'south', 'east', 'west' keys in degrees
            
        Returns:
            Dict with tile information including X, Y, Zoom and bounds
        """
        # Use zoom level 12 as default (good balance of detail vs coverage)
        # For 5500km route, you might want zoom 8-10 for overview
        zoom = 10
        
        # Get tiles for all four corners
        nw_tile = self.latlon_to_tile(bounds['north'], bounds['west'], zoom)
        ne_tile = self.latlon_to_tile(bounds['north'], bounds['east'], zoom)
        sw_tile = self.latlon_to_tile(bounds['south'], bounds['west'], zoom)
        se_tile = self.latlon_to_tile(bounds['south'], bounds['east'], zoom)
        
        # Find the tile range
        min_x = min(nw_tile[0], ne_tile[0], sw_tile[0], se_tile[0])
        max_x = max(nw_tile[0], ne_tile[0], sw_tile[0], se_tile[0])
        min_y = min(nw_tile[1], ne_tile[1], sw_tile[1], se_tile[1])
        max_y = max(nw_tile[1], ne_tile[1], sw_tile[1], se_tile[1])
        
        # Use center tile for TileInfoString format (X,Y,Zoom)
        center_x = (min_x + max_x) // 2
        center_y = (min_y + max_y) // 2
        
        return {
            'tile_x': center_x,
            'tile_y': center_y,
            'zoom': zoom,
            'tile_info_string': f"{center_x},{center_y},{zoom}",
            'bounds': bounds,
            'tile_bounds': {
                'min_x': min_x,
                'max_x': max_x,
                'min_y': min_y,
                'max_y': max_y
            }
        }
    
    def create_map(self) -> folium.Map:
        """Create and configure the interactive map"""
        # Create map centered on USA (good for Prudhoe Bay to Miami route)
        self.map = folium.Map(
            location=[self.center_lat, self.center_lon],
            zoom_start=self.zoom_start,
            tiles='OpenStreetMap'
        )
        
        # Add Draw plugin for polygon drawing
        draw = Draw(
            export=True,
            position='topleft',
            draw_options={
                'polyline': False,
                'polygon': {
                    'allowIntersection': False,
                    'showArea': True,
                },
                'rectangle': True,
                'circle': False,
                'marker': True,
                'circlemarker': False
            },
            edit_options={'featureGroup': None}
        )
        draw.add_to(self.map)
        
        # Add layer control
        folium.LayerControl().add_to(self.map)
        
        # Add custom JavaScript to capture drawn features
        # This will capture polygons when they're drawn
        draw_script = """
        <script>
        // Initialize storage for drawn features
        if (!window.drawnFeatures) {
            window.drawnFeatures = [];
        }
        
        // Get the Draw feature group (it's created by the Draw plugin)
        var drawControl = null;
        var drawnItems = null;
        
        // Wait for map to be ready, then hook into draw events
        setTimeout(function() {
            // Find the Draw control's feature group
            map.eachLayer(function(layer) {
                if (layer instanceof L.FeatureGroup && layer.options && layer.options.drawnItems !== undefined) {
                    drawnItems = layer;
                }
            });
            
            // If not found, create our own
            if (!drawnItems) {
                drawnItems = new L.FeatureGroup();
                map.addLayer(drawnItems);
            }
            
            // Capture drawn features
            map.on('draw:created', function (e) {
                var type = e.layerType;
                var layer = e.layer;
                
                if (type === 'polygon' || type === 'rectangle') {
                    drawnItems.addLayer(layer);
                    
                    var coords, bounds;
                    if (type === 'rectangle') {
                        // Rectangle has different structure
                        bounds = layer.getBounds();
                        coords = [
                            [bounds.getNorth(), bounds.getWest()],
                            [bounds.getNorth(), bounds.getEast()],
                            [bounds.getSouth(), bounds.getEast()],
                            [bounds.getSouth(), bounds.getWest()],
                            [bounds.getNorth(), bounds.getWest()]  // Close the polygon
                        ];
                    } else {
                        // Polygon
                        var latlngs = layer.getLatLngs()[0];
                        coords = latlngs.map(function(ll) {
                            return [ll.lat, ll.lng];
                        });
                        bounds = layer.getBounds();
                    }
                    
                    var feature = {
                        type: type,
                        coordinates: coords,
                        bounds: {
                            north: bounds.getNorth(),
                            south: bounds.getSouth(),
                            east: bounds.getEast(),
                            west: bounds.getWest()
                        },
                        timestamp: new Date().toISOString()
                    };
                    
                    window.drawnFeatures.push(feature);
                    console.log('Feature added:', feature);
                    console.log('Total features:', window.drawnFeatures.length);
                }
            });
            
            // Also handle deletions
            map.on('draw:deleted', function(e) {
                // Remove from our array if needed
                console.log('Feature deleted');
            });
        }, 500);
        
        // Add export button
        var exportBtn = L.control({position: 'topright'});
        exportBtn.onAdd = function(map) {
            var div = L.DomUtil.create('div', 'export-control');
            div.innerHTML = '<button id="exportBtn" style="padding: 10px; background: #3388ff; color: white; border: none; border-radius: 4px; cursor: pointer; font-weight: bold;">Export Selections</button>';
            return div;
        };
        exportBtn.addTo(map);
        
        // Export button handler
        setTimeout(function() {
            var btn = document.getElementById('exportBtn');
            if (btn) {
                btn.addEventListener('click', function() {
                    if (window.drawnFeatures && window.drawnFeatures.length > 0) {
                        var dataStr = JSON.stringify(window.drawnFeatures, null, 2);
                        var dataBlob = new Blob([dataStr], {type: 'application/json'});
                        var url = URL.createObjectURL(dataBlob);
                        var link = document.createElement('a');
                        link.href = url;
                        var timestamp = new Date().getTime();
                        link.download = 'terrainmagic_selections_' + timestamp + '.json';
                        document.body.appendChild(link);
                        link.click();
                        document.body.removeChild(link);
                        URL.revokeObjectURL(url);
                        alert('Exported ' + window.drawnFeatures.length + ' selection(s)!');
                    } else {
                        alert('No selections to export. Please draw some polygons or rectangles first using the draw tools (top-left).');
                    }
                });
            }
        }, 1000);
        </script>
        """
        
        self.map.get_root().html.add_child(folium.Element(draw_script))
        
        # Add CSS for grayscale heightmap style (like Tangram Heightmapper)
        grayscale_css = """
        <style>
        /* Convert map tiles to grayscale */
        .leaflet-tile-pane {
            filter: grayscale(100%) contrast(1.2) brightness(0.9);
        }
        
        /* Keep the draw controls and UI elements in color */
        .leaflet-control-container,
        .export-control,
        .leaflet-draw-toolbar,
        .leaflet-popup,
        .leaflet-control-layers {
            filter: none !important;
        }
        
        /* Optional: Add heightmap-style appearance */
        .leaflet-container {
            background-color: #1a1a1a;
        }
        
        /* Make drawn polygons stand out more */
        .leaflet-interactive {
            stroke: #00ff00;
            stroke-width: 3;
            stroke-opacity: 1;
            fill-color: #00ff00;
            fill-opacity: 0.2;
        }
        </style>
        """
        self.map.get_root().html.add_child(folium.Element(grayscale_css))
        
        # Add instructions
        instructions = """
        <div style="position: fixed; 
                    top: 10px; left: 50px; width: 320px; height: auto; 
                    background: rgba(255, 255, 255, 0.95); z-index:9999; padding: 10px;
                    border: 2px solid #3388ff; border-radius: 5px; box-shadow: 0 2px 8px rgba(0,0,0,0.3);">
        <h3 style="margin-top: 0;">TerrainMagic Map Selector</h3>
        <p style="font-size: 0.85em; color: #666; margin-top: -10px; font-style: italic;">
        Grayscale Heightmap View (similar to Tangram Heightmapper)
        </p>
        <p><b>Instructions:</b></p>
        <ol style="margin: 0; padding-left: 20px; font-size: 0.9em;">
            <li>Use the draw tools (top-left) to create polygons or rectangles</li>
            <li>You can draw multiple areas</li>
            <li>Click "Export Selections" (top-right) to save your selections</li>
            <li>The exported JSON contains coordinates in TerrainMagic format</li>
        </ol>
        <p style="margin-top: 10px; font-size: 0.85em; color: #666;">
        <b>Tip:</b> For your 5500km route (Prudhoe Bay to Miami), 
        start zoomed out and draw a large polygon covering the entire route.
        </p>
        </div>
        """
        self.map.get_root().html.add_child(folium.Element(instructions))
        
        return self.map
    
    def calculate_bounds_from_coordinates(self, coordinates: List[List[float]]) -> Dict:
        """
        Calculate bounds (north, south, east, west) from a list of coordinates
        
        Args:
            coordinates: List of [lat, lon] or [lon, lat] pairs
            
        Returns:
            Dict with north, south, east, west bounds
        """
        if not coordinates:
            return {'north': 0, 'south': 0, 'east': 0, 'west': 0}
        
        # Check if coordinates are [lat, lon] or [lon, lat] format
        # GeoJSON uses [lon, lat], our custom format uses [lat, lon]
        first_coord = coordinates[0]
        if len(first_coord) >= 2:
            # Check if first value looks like longitude (typically -180 to 180)
            # or latitude (typically -90 to 90)
            is_geojson = abs(first_coord[0]) > 90  # If first > 90, it's likely longitude
        
            if is_geojson:
                # GeoJSON format: [lon, lat]
                lats = [coord[1] for coord in coordinates]
                lons = [coord[0] for coord in coordinates]
            else:
                # Custom format: [lat, lon]
                lats = [coord[0] for coord in coordinates]
                lons = [coord[1] for coord in coordinates]
            
            return {
                'north': max(lats),
                'south': min(lats),
                'east': max(lons),
                'west': min(lons)
            }
        
        return {'north': 0, 'south': 0, 'east': 0, 'west': 0}
    
    def process_selections_file(self, json_file: str) -> List[Dict]:
        """
        Process exported selections JSON file and convert to TerrainMagic format
        Supports both GeoJSON format and custom format
        
        Args:
            json_file: Path to JSON file exported from the map
            
        Returns:
            List of selection dictionaries with tile information
        """
        with open(json_file, 'r') as f:
            data = json.load(f)
        
        # Handle GeoJSON FeatureCollection format
        if isinstance(data, dict) and data.get('type') == 'FeatureCollection':
            features = data.get('features', [])
            processed_features = []
            
            for feature in features:
                if feature.get('type') == 'Feature':
                    geometry = feature.get('geometry', {})
                    geom_type = geometry.get('type', '')
                    coords = geometry.get('coordinates', [])
                    
                    # GeoJSON coordinates are [lon, lat] format and nested
                    # For Polygon: coordinates = [[[lon, lat], [lon, lat], ...]]
                    # For MultiPolygon: coordinates = [[[[lon, lat], ...]], ...]
                    if geom_type == 'Polygon' and len(coords) > 0:
                        # Extract the outer ring (first array)
                        polygon_coords = coords[0]
                        # Convert [lon, lat] to [lat, lon] for our format
                        converted_coords = [[coord[1], coord[0]] for coord in polygon_coords]
                        bounds = self.calculate_bounds_from_coordinates(converted_coords)
                        
                        processed_features.append({
                            'type': 'polygon',
                            'coordinates': converted_coords,
                            'bounds': bounds
                        })
                    elif geom_type == 'MultiPolygon':
                        # Handle MultiPolygon - use first polygon
                        if len(coords) > 0 and len(coords[0]) > 0:
                            polygon_coords = coords[0][0]
                            converted_coords = [[coord[1], coord[0]] for coord in polygon_coords]
                            bounds = self.calculate_bounds_from_coordinates(converted_coords)
                            
                            processed_features.append({
                                'type': 'polygon',
                                'coordinates': converted_coords,
                                'bounds': bounds
                            })
            
            features = processed_features
        
        # Handle custom format (array of features with bounds)
        elif isinstance(data, list):
            features = data
        else:
            raise ValueError(f"Unsupported JSON format. Expected GeoJSON FeatureCollection or array of features, got: {type(data)}")
        
        selections = []
        for i, feature in enumerate(features):
            # If feature already has bounds, use them; otherwise calculate from coordinates
            if isinstance(feature, dict):
                bounds = feature.get('bounds')
                if not bounds:
                    coords = feature.get('coordinates', [])
                    bounds = self.calculate_bounds_from_coordinates(coords)
                
                tile_info = self.get_bounding_tiles(bounds)
                
                selection = {
                    'id': i + 1,
                    'type': feature.get('type', 'polygon'),
                    'bounds': bounds,
                    'coordinates': feature.get('coordinates', []),
                    'tile_info': tile_info,
                    'tile_info_string': tile_info['tile_info_string'],  # Format: "X,Y,Zoom"
                    'note': f"Selection {i + 1}"
                }
                selections.append(selection)
        
        return selections
    
    def export_for_terrainmagic(self, selections: List[Dict], output_file: str = None):
        """
        Export selections in a format that can be easily used with TerrainMagic
        
        Args:
            selections: List of selection dictionaries
            output_file: Output file path (default: terrainmagic_selections_<timestamp>.json)
        """
        if output_file is None:
            timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
            output_file = f"terrainmagic_selections_{timestamp}.json"
        
        export_data = {
            'exported_at': datetime.now().isoformat(),
            'total_selections': len(selections),
            'selections': selections,
            'usage_instructions': {
                'tile_info_string': 'Use the "tile_info_string" value (format: "X,Y,Zoom") in TerrainMagic EarthLandscapeClip TileInfoString property',
                'bounds': 'Use bounds to position your landscape clip actor in Unreal Engine',
                'coordinates': 'Use coordinates to create custom polygons if needed'
            }
        }
        
        with open(output_file, 'w') as f:
            json.dump(export_data, f, indent=2)
        
        print(f"\n[OK] Exported {len(selections)} selections to: {output_file}")
        print("\nTo use in TerrainMagic:")
        print("1. Copy the 'tile_info_string' value from each selection")
        print("2. Paste it into the EarthLandscapeClip 'TileInfoString' property in Unreal Editor")
        print("3. Use the bounds coordinates to position your clip actor")
        
        return output_file


def main():
    """Main function to run the map selector"""
    print("=" * 60)
    print("TerrainMagic Map Selector")
    print("=" * 60)
    print("\nThis tool replaces the web-based map interface.")
    print("You can draw polygons to select terrain areas for your landscape clips.\n")
    
    # Initialize selector
    # Center on USA (good starting point for Prudhoe Bay to Miami route)
    selector = TerrainMagicMapSelector(
        center_lat=45.0,  # Roughly central USA
        center_lon=-100.0,
        zoom_start=4  # Zoomed out to see entire route
    )
    
    # Create map
    print("Creating interactive map...")
    map_obj = selector.create_map()
    
    # Save map to HTML file
    output_html = "terrainmagic_map_selector.html"
    map_obj.save(output_html)
    print(f"\n[OK] Map saved to: {output_html}")
    
    # Open in browser
    file_path = os.path.abspath(output_html)
    print(f"Opening map in browser...")
    webbrowser.open(f"file://{file_path}")
    
    print("\n" + "=" * 60)
    print("Instructions:")
    print("=" * 60)
    print("1. Draw polygons or rectangles on the map to select areas")
    print("2. You can create multiple selections")
    print("3. Click 'Export Selections' button (top-right) to download JSON")
    print("4. Use the process_selections.py script to convert to TerrainMagic format")
    print("\nOr use the interactive Python functions:")
    print("  selector.process_selections_file('your_exported_file.json')")
    print("=" * 60)


if __name__ == "__main__":
    main()

