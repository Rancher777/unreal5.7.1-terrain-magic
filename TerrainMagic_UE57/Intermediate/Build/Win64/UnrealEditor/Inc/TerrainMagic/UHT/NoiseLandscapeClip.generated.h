// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Clips/NoiseLandscapeClip.h"

#ifdef TERRAINMAGIC_NoiseLandscapeClip_generated_h
#error "NoiseLandscapeClip.generated.h already included, missing '#pragma once' in NoiseLandscapeClip.h"
#endif
#define TERRAINMAGIC_NoiseLandscapeClip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANoiseLandscapeClip ******************************************************
struct Z_Construct_UClass_ANoiseLandscapeClip_Statics;
TERRAINMAGIC_API UClass* Z_Construct_UClass_ANoiseLandscapeClip_NoRegister();

#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANoiseLandscapeClip(); \
	friend struct ::Z_Construct_UClass_ANoiseLandscapeClip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRAINMAGIC_API UClass* ::Z_Construct_UClass_ANoiseLandscapeClip_NoRegister(); \
public: \
	DECLARE_CLASS2(ANoiseLandscapeClip, ALandscapeClip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerrainMagic"), Z_Construct_UClass_ANoiseLandscapeClip_NoRegister) \
	DECLARE_SERIALIZER(ANoiseLandscapeClip)


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANoiseLandscapeClip(ANoiseLandscapeClip&&) = delete; \
	ANoiseLandscapeClip(const ANoiseLandscapeClip&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANoiseLandscapeClip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoiseLandscapeClip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANoiseLandscapeClip) \
	NO_API virtual ~ANoiseLandscapeClip();


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h_16_PROLOG
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h_19_INCLASS_NO_PURE_DECLS \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANoiseLandscapeClip;

// ********** End Class ANoiseLandscapeClip ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h

// ********** Begin Enum ELandscapeClipNoiseType ***************************************************
#define FOREACH_ENUM_ELANDSCAPECLIPNOISETYPE(op) \
	op(LCN_MOUNTAIN) 
// ********** End Enum ELandscapeClipNoiseType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
