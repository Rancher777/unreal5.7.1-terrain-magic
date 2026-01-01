// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeClip.h"

#ifdef TERRAINMAGIC_LandscapeClip_generated_h
#error "LandscapeClip.generated.h already included, missing '#pragma once' in LandscapeClip.h"
#endif
#define TERRAINMAGIC_LandscapeClip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandscapeClipTileRepositioning ***********************************
struct Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics;
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics; \
	TERRAINMAGIC_API static class UScriptStruct* StaticStruct();


struct FLandscapeClipTileRepositioning;
// ********** End ScriptStruct FLandscapeClipTileRepositioning *************************************

// ********** Begin Class ALandscapeClip ***********************************************************
struct Z_Construct_UClass_ALandscapeClip_Statics;
TERRAINMAGIC_API UClass* Z_Construct_UClass_ALandscapeClip_NoRegister();

#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeClip(); \
	friend struct ::Z_Construct_UClass_ALandscapeClip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRAINMAGIC_API UClass* ::Z_Construct_UClass_ALandscapeClip_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandscapeClip, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerrainMagic"), Z_Construct_UClass_ALandscapeClip_NoRegister) \
	DECLARE_SERIALIZER(ALandscapeClip)


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h_66_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandscapeClip(ALandscapeClip&&) = delete; \
	ALandscapeClip(const ALandscapeClip&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapeClip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeClip); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ALandscapeClip) \
	NO_API virtual ~ALandscapeClip();


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h_63_PROLOG
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h_66_INCLASS_NO_PURE_DECLS \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALandscapeClip;

// ********** End Class ALandscapeClip *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h

// ********** Begin Enum ELandscapeClipBlendMode ***************************************************
#define FOREACH_ENUM_ELANDSCAPECLIPBLENDMODE(op) \
	op(LCB_ADD) \
	op(LCB_AVERAGE) \
	op(LCB_MIN) \
	op(LCB_Max) \
	op(LCB_COPY) 
// ********** End Enum ELandscapeClipBlendMode *****************************************************

// ********** Begin Enum ELandscapeClipFadeMode ****************************************************
#define FOREACH_ENUM_ELANDSCAPECLIPFADEMODE(op) \
	op(LCF_NONE) \
	op(LCF_CIRCULAR) \
	op(LCF_BOX) 
// ********** End Enum ELandscapeClipFadeMode ******************************************************

// ********** Begin Enum ELandscapeClipFadeMinimum *************************************************
#define FOREACH_ENUM_ELANDSCAPECLIPFADEMINIMUM(op) \
	op(LCFM_ZERO) \
	op(LCFM_REMAP_MIN) 
// ********** End Enum ELandscapeClipFadeMinimum ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
