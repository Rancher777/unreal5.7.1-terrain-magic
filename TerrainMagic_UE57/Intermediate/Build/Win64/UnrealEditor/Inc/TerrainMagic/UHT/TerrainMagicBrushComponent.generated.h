// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TerrainMagicBrushComponent.h"

#ifdef TERRAINMAGIC_TerrainMagicBrushComponent_generated_h
#error "TerrainMagicBrushComponent.generated.h already included, missing '#pragma once' in TerrainMagicBrushComponent.h"
#endif
#define TERRAINMAGIC_TerrainMagicBrushComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATerrainMagicManager;
class UTexture;
class UTextureRenderTarget2D;
struct FLandscapeClipsInvalidationResponse;

// ********** Begin ScriptStruct FLandscapeClipsInvalidationResponse *******************************
struct Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics;
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics; \
	TERRAINMAGIC_API static class UScriptStruct* StaticStruct();


struct FLandscapeClipsInvalidationResponse;
// ********** End ScriptStruct FLandscapeClipsInvalidationResponse *********************************

// ********** Begin Class UTerrainMagicBrushComponent **********************************************
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessPaintLayerData); \
	DECLARE_FUNCTION(execResetPaintLayerData); \
	DECLARE_FUNCTION(execGetHeightMapVersion); \
	DECLARE_FUNCTION(execResetHeightMapCache); \
	DECLARE_FUNCTION(execCacheHeightMap); \
	DECLARE_FUNCTION(execHasHeightMap); \
	DECLARE_FUNCTION(execEnsureManager); \
	DECLARE_FUNCTION(execHasInvalidatedLandscapeClips); \
	DECLARE_FUNCTION(execPaintLandscapeClips); \
	DECLARE_FUNCTION(execRenderLandscapeClips); \
	DECLARE_FUNCTION(execRenderWeightMap); \
	DECLARE_FUNCTION(execRenderHeightMap); \
	DECLARE_FUNCTION(execInitializeRenderParams); \
	DECLARE_FUNCTION(execSetVectorRenderParams); \
	DECLARE_FUNCTION(execSetScalarRenderParams); \
	DECLARE_FUNCTION(execSetTextureRenderParam); \
	DECLARE_FUNCTION(execSetVectorRenderParam); \
	DECLARE_FUNCTION(execSetScalarRenderParam); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UTerrainMagicBrushComponent_Statics;
TERRAINMAGIC_API UClass* Z_Construct_UClass_UTerrainMagicBrushComponent_NoRegister();

#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTerrainMagicBrushComponent(); \
	friend struct ::Z_Construct_UClass_UTerrainMagicBrushComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRAINMAGIC_API UClass* ::Z_Construct_UClass_UTerrainMagicBrushComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTerrainMagicBrushComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerrainMagic"), Z_Construct_UClass_UTerrainMagicBrushComponent_NoRegister) \
	DECLARE_SERIALIZER(UTerrainMagicBrushComponent)


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTerrainMagicBrushComponent(UTerrainMagicBrushComponent&&) = delete; \
	UTerrainMagicBrushComponent(const UTerrainMagicBrushComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTerrainMagicBrushComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTerrainMagicBrushComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTerrainMagicBrushComponent) \
	NO_API virtual ~UTerrainMagicBrushComponent();


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h_26_PROLOG
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTerrainMagicBrushComponent;

// ********** End Class UTerrainMagicBrushComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
