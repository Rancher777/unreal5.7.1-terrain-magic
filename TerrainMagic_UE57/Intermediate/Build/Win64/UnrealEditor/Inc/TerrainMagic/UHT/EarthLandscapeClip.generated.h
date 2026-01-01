// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Clips/EarthLandscapeClip.h"

#ifdef TERRAINMAGIC_EarthLandscapeClip_generated_h
#error "EarthLandscapeClip.generated.h already included, missing '#pragma once' in EarthLandscapeClip.h"
#endif
#define TERRAINMAGIC_EarthLandscapeClip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEarthLandscapeClip ******************************************************
struct Z_Construct_UClass_AEarthLandscapeClip_Statics;
TERRAINMAGIC_API UClass* Z_Construct_UClass_AEarthLandscapeClip_NoRegister();

#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEarthLandscapeClip(); \
	friend struct ::Z_Construct_UClass_AEarthLandscapeClip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRAINMAGIC_API UClass* ::Z_Construct_UClass_AEarthLandscapeClip_NoRegister(); \
public: \
	DECLARE_CLASS2(AEarthLandscapeClip, ALandscapeClip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerrainMagic"), Z_Construct_UClass_AEarthLandscapeClip_NoRegister) \
	DECLARE_SERIALIZER(AEarthLandscapeClip)


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEarthLandscapeClip(AEarthLandscapeClip&&) = delete; \
	AEarthLandscapeClip(const AEarthLandscapeClip&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEarthLandscapeClip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEarthLandscapeClip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEarthLandscapeClip) \
	NO_API virtual ~AEarthLandscapeClip();


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h_34_PROLOG
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h_37_INCLASS_NO_PURE_DECLS \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEarthLandscapeClip;

// ********** End Class AEarthLandscapeClip ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h

// ********** Begin Enum EHeightMapTileWidth *******************************************************
#define FOREACH_ENUM_EHEIGHTMAPTILEWIDTH(op) \
	op(HMW_512) \
	op(HMW_1024) \
	op(HMW_2048) \
	op(HMW_4096) 
// ********** End Enum EHeightMapTileWidth *********************************************************

// ********** Begin Enum EHeightMapTileHeightRange *************************************************
#define FOREACH_ENUM_EHEIGHTMAPTILEHEIGHTRANGE(op) \
	op(HMHR_POSITIVE) \
	op(HMHR_POSITIVE_NEGATIVE) 
// ********** End Enum EHeightMapTileHeightRange ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
