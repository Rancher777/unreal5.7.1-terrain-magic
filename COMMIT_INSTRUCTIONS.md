# Git Commit Instructions

## Quick Commit Commands

If you have git installed and accessible from command line:

```bash
cd D:\unreal\Road2Salvation\Tools\unreal5.7.1-terrain-magic

# Check status
git status

# Add all changes
git add -A

# Or add specific files:
git add Source/TerrainMagic/Private/LandscapeClip.cpp
git add Source/TerrainMagicEditor/Private/LandscapeClipDetails.cpp
git add Source/TerrainMagicEditor/Public/LandscapeClipDetails.h
git add TerrainMagic_MapSelector.py
git add CHANGES_SUMMARY.md

# Commit with message
git commit -m "Update TerrainMagic for UE 5.7: World Partition support, local map selector, grayscale view, and Match Landscape Size fix"

# Push to remote (if configured)
git push
```

## Using Git GUI Tools

If git command line is not in PATH, you can use:

1. **GitHub Desktop** - Open the repository folder and commit through the GUI
2. **SourceTree** - Another GUI git client
3. **VS Code** - Has built-in git support (Source Control panel)
4. **Git Bash** - If Git for Windows is installed, use Git Bash terminal

## Files Changed

The following files have been updated and should be committed:

1. `Source/TerrainMagic/Private/LandscapeClip.cpp`
   - Fixed Match Landscape Size for World Partition
   
2. `Source/TerrainMagicEditor/Private/LandscapeClipDetails.cpp`
   - Updated OnOpenMap() to launch local Python script
   - Added OnImportTileInfo() function
   
3. `Source/TerrainMagicEditor/Public/LandscapeClipDetails.h`
   - Added OnImportTileInfo() declaration
   
4. `TerrainMagic_MapSelector.py` (new file)
   - Local Python map selector with grayscale heightmap view
   
5. `CHANGES_SUMMARY.md` (new file)
   - Documentation of all changes

## Commit Message Suggestions

Short version:
```
Update TerrainMagic for UE 5.7: World Partition support and local map selector
```

Detailed version:
```
Update TerrainMagic for UE 5.7 Compatibility

- Fixed Match Landscape Size to work with World Partition
- Integrated local Python map selector (replaces abandoned web tool)
- Added Import Tile Info functionality for JSON selections
- Added grayscale heightmap view (similar to Tangram Heightmapper)
- Updated editor UI with new buttons and functionality

See CHANGES_SUMMARY.md for full details.
```

