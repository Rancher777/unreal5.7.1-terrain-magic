// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TerrainMagicManager.h"

#ifdef TERRAINMAGIC_TerrainMagicManager_generated_h
#error "TerrainMagicManager.generated.h already included, missing '#pragma once' in TerrainMagicManager.h"
#endif
#define TERRAINMAGIC_TerrainMagicManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FTerrainMagicPaintLayerResult;

// ********** Begin ScriptStruct FTerrainMagicPaintLayerResult *************************************
struct Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics;
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics; \
	TERRAINMAGIC_API static class UScriptStruct* StaticStruct();


struct FTerrainMagicPaintLayerResult;
// ********** End ScriptStruct FTerrainMagicPaintLayerResult ***************************************

// ********** Begin Class ATerrainMagicManager *****************************************************
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTogglePreview); \
	DECLARE_FUNCTION(execFindLandscapePaintLayer); \
	DECLARE_FUNCTION(execHideClipOutlines); \
	DECLARE_FUNCTION(execShowClipOutlines); \
	DECLARE_FUNCTION(execGetHeightMap);


struct Z_Construct_UClass_ATerrainMagicManager_Statics;
TERRAINMAGIC_API UClass* Z_Construct_UClass_ATerrainMagicManager_NoRegister();

#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerrainMagicManager(); \
	friend struct ::Z_Construct_UClass_ATerrainMagicManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRAINMAGIC_API UClass* ::Z_Construct_UClass_ATerrainMagicManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ATerrainMagicManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerrainMagic"), Z_Construct_UClass_ATerrainMagicManager_NoRegister) \
	DECLARE_SERIALIZER(ATerrainMagicManager)


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATerrainMagicManager(ATerrainMagicManager&&) = delete; \
	ATerrainMagicManager(const ATerrainMagicManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrainMagicManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrainMagicManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATerrainMagicManager) \
	NO_API virtual ~ATerrainMagicManager();


#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h_29_PROLOG
#define FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATerrainMagicManager;

// ********** End Class ATerrainMagicManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
