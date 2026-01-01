// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Clips/BaseLandscapeClip.h"

#ifdef TERRAINMAGIC_BaseLandscapeClip_generated_h
#error "BaseLandscapeClip.generated.h already included, missing '#pragma once' in BaseLandscapeClip.h"
#endif
#define TERRAINMAGIC_BaseLandscapeClip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABaseLandscapeClip *******************************************************
struct Z_Construct_UClass_ABaseLandscapeClip_Statics;
TERRAINMAGIC_API UClass* Z_Construct_UClass_ABaseLandscapeClip_NoRegister();

#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseLandscapeClip(); \
	friend struct ::Z_Construct_UClass_ABaseLandscapeClip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRAINMAGIC_API UClass* ::Z_Construct_UClass_ABaseLandscapeClip_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseLandscapeClip, ALandscapeClip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerrainMagic"), Z_Construct_UClass_ABaseLandscapeClip_NoRegister) \
	DECLARE_SERIALIZER(ABaseLandscapeClip)


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseLandscapeClip(ABaseLandscapeClip&&) = delete; \
	ABaseLandscapeClip(const ABaseLandscapeClip&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseLandscapeClip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseLandscapeClip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseLandscapeClip) \
	NO_API virtual ~ABaseLandscapeClip();


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h_17_PROLOG
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h_20_INCLASS_NO_PURE_DECLS \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseLandscapeClip;

// ********** End Class ABaseLandscapeClip *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h

// ********** Begin Enum EBaseLandscapeClipBaseValue ***********************************************
#define FOREACH_ENUM_EBASELANDSCAPECLIPBASEVALUE(op) \
	op(BLCBV_ZERO) \
	op(BLCBV_ABSOLUTE_MINIMUM) \
	op(BLCBV_ABSOLUTE_MAXIMUM) 
// ********** End Enum EBaseLandscapeClipBaseValue *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
