// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Clips/GeoTiffLandscapeClip.h"

#ifdef TERRAINMAGIC_GeoTiffLandscapeClip_generated_h
#error "GeoTiffLandscapeClip.generated.h already included, missing '#pragma once' in GeoTiffLandscapeClip.h"
#endif
#define TERRAINMAGIC_GeoTiffLandscapeClip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGeoTiffInfo ******************************************************
struct Z_Construct_UScriptStruct_FGeoTiffInfo_Statics;
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeoTiffInfo_Statics; \
	TERRAINMAGIC_API static class UScriptStruct* StaticStruct();


struct FGeoTiffInfo;
// ********** End ScriptStruct FGeoTiffInfo ********************************************************

// ********** Begin Class AGeoTiffLandscapeClip ****************************************************
struct Z_Construct_UClass_AGeoTiffLandscapeClip_Statics;
TERRAINMAGIC_API UClass* Z_Construct_UClass_AGeoTiffLandscapeClip_NoRegister();

#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeoTiffLandscapeClip(); \
	friend struct ::Z_Construct_UClass_AGeoTiffLandscapeClip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRAINMAGIC_API UClass* ::Z_Construct_UClass_AGeoTiffLandscapeClip_NoRegister(); \
public: \
	DECLARE_CLASS2(AGeoTiffLandscapeClip, ALandscapeClip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerrainMagic"), Z_Construct_UClass_AGeoTiffLandscapeClip_NoRegister) \
	DECLARE_SERIALIZER(AGeoTiffLandscapeClip)


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGeoTiffLandscapeClip(AGeoTiffLandscapeClip&&) = delete; \
	AGeoTiffLandscapeClip(const AGeoTiffLandscapeClip&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeoTiffLandscapeClip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeoTiffLandscapeClip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGeoTiffLandscapeClip) \
	NO_API virtual ~AGeoTiffLandscapeClip();


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h_38_PROLOG
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h_41_INCLASS_NO_PURE_DECLS \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGeoTiffLandscapeClip;

// ********** End Class AGeoTiffLandscapeClip ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h

// ********** Begin Enum EGeoTiffTargetTextureResolution *******************************************
#define FOREACH_ENUM_EGEOTIFFTARGETTEXTURERESOLUTION(op) \
	op(GTRES_SOURCE) \
	op(GTRES_1024) \
	op(GTRES_2048) \
	op(GTRES_4096) \
	op(GTRES_8192) 
// ********** End Enum EGeoTiffTargetTextureResolution *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
