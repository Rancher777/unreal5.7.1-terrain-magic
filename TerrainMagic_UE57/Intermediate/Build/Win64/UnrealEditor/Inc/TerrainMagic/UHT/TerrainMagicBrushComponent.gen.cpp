// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerrainMagicBrushComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTerrainMagicBrushComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ATerrainMagicManager_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_UTerrainMagicBrushComponent();
TERRAINMAGIC_API UClass* Z_Construct_UClass_UTerrainMagicBrushComponent_NoRegister();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLandscapeClipsInvalidationResponse *******************************
struct Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLandscapeClipsInvalidationResponse); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeClipsInvalidationResponse); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasInvalidated_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedPaintLayers_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeClipsInvalidationResponse constinit property declarations 
	static void NewProp_bHasInvalidated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInvalidated;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AffectedPaintLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedPaintLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeClipsInvalidationResponse constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeClipsInvalidationResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeClipsInvalidationResponse;
class UScriptStruct* FLandscapeClipsInvalidationResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipsInvalidationResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandscapeClipsInvalidationResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("LandscapeClipsInvalidationResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FLandscapeClipsInvalidationResponse.OuterSingleton;
	}

// ********** Begin ScriptStruct FLandscapeClipsInvalidationResponse Property Definitions **********
void Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::NewProp_bHasInvalidated_SetBit(void* Obj)
{
	((FLandscapeClipsInvalidationResponse*)Obj)->bHasInvalidated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::NewProp_bHasInvalidated = { "bHasInvalidated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipsInvalidationResponse), &Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::NewProp_bHasInvalidated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasInvalidated_MetaData), NewProp_bHasInvalidated_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::NewProp_AffectedPaintLayers_Inner = { "AffectedPaintLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::NewProp_AffectedPaintLayers = { "AffectedPaintLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipsInvalidationResponse, AffectedPaintLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedPaintLayers_MetaData), NewProp_AffectedPaintLayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::NewProp_bHasInvalidated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::NewProp_AffectedPaintLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::NewProp_AffectedPaintLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeClipsInvalidationResponse Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"LandscapeClipsInvalidationResponse",
	Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::PropPointers),
	sizeof(FLandscapeClipsInvalidationResponse),
	alignof(FLandscapeClipsInvalidationResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipsInvalidationResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeClipsInvalidationResponse.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeClipsInvalidationResponse.InnerSingleton);
}
// ********** End ScriptStruct FLandscapeClipsInvalidationResponse *********************************

// ********** Begin Class UTerrainMagicBrushComponent Function CacheHeightMap **********************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics
{
	struct TerrainMagicBrushComponent_eventCacheHeightMap_Parms
	{
		UTextureRenderTarget2D* InputHeightMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CacheHeightMap constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputHeightMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CacheHeightMap constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CacheHeightMap Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::NewProp_InputHeightMap = { "InputHeightMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventCacheHeightMap_Parms, InputHeightMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::NewProp_InputHeightMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::PropPointers) < 2048);
// ********** End Function CacheHeightMap Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "CacheHeightMap", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::TerrainMagicBrushComponent_eventCacheHeightMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::TerrainMagicBrushComponent_eventCacheHeightMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execCacheHeightMap)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InputHeightMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CacheHeightMap(Z_Param_InputHeightMap);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function CacheHeightMap ************************

// ********** Begin Class UTerrainMagicBrushComponent Function EnsureManager ***********************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics
{
	struct TerrainMagicBrushComponent_eventEnsureManager_Parms
	{
		ATerrainMagicManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnsureManager constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnsureManager constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnsureManager Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventEnsureManager_Parms, ReturnValue), Z_Construct_UClass_ATerrainMagicManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::PropPointers) < 2048);
// ********** End Function EnsureManager Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "EnsureManager", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::TerrainMagicBrushComponent_eventEnsureManager_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::TerrainMagicBrushComponent_eventEnsureManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execEnsureManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATerrainMagicManager**)Z_Param__Result=P_THIS->EnsureManager();
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function EnsureManager *************************

// ********** Begin Class UTerrainMagicBrushComponent Function GetHeightMapVersion *****************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics
{
	struct TerrainMagicBrushComponent_eventGetHeightMapVersion_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHeightMapVersion constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHeightMapVersion constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHeightMapVersion Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventGetHeightMapVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::PropPointers) < 2048);
// ********** End Function GetHeightMapVersion Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "GetHeightMapVersion", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::TerrainMagicBrushComponent_eventGetHeightMapVersion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::TerrainMagicBrushComponent_eventGetHeightMapVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execGetHeightMapVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHeightMapVersion();
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function GetHeightMapVersion *******************

// ********** Begin Class UTerrainMagicBrushComponent Function HasHeightMap ************************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics
{
	struct TerrainMagicBrushComponent_eventHasHeightMap_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasHeightMap constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasHeightMap constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasHeightMap Property Definitions *************************************
void Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TerrainMagicBrushComponent_eventHasHeightMap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TerrainMagicBrushComponent_eventHasHeightMap_Parms), &Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::PropPointers) < 2048);
// ********** End Function HasHeightMap Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "HasHeightMap", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::TerrainMagicBrushComponent_eventHasHeightMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::TerrainMagicBrushComponent_eventHasHeightMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execHasHeightMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasHeightMap();
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function HasHeightMap **************************

// ********** Begin Class UTerrainMagicBrushComponent Function HasInvalidatedLandscapeClips ********
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics
{
	struct TerrainMagicBrushComponent_eventHasInvalidatedLandscapeClips_Parms
	{
		FLandscapeClipsInvalidationResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasInvalidatedLandscapeClips constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasInvalidatedLandscapeClips constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasInvalidatedLandscapeClips Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventHasInvalidatedLandscapeClips_Parms, ReturnValue), Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse, METADATA_PARAMS(0, nullptr) }; // 66750325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::PropPointers) < 2048);
// ********** End Function HasInvalidatedLandscapeClips Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "HasInvalidatedLandscapeClips", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::TerrainMagicBrushComponent_eventHasInvalidatedLandscapeClips_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::TerrainMagicBrushComponent_eventHasInvalidatedLandscapeClips_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execHasInvalidatedLandscapeClips)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLandscapeClipsInvalidationResponse*)Z_Param__Result=P_THIS->HasInvalidatedLandscapeClips();
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function HasInvalidatedLandscapeClips **********

// ********** Begin Class UTerrainMagicBrushComponent Function Initialize **************************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics
{
	struct TerrainMagicBrushComponent_eventInitialize_Parms
	{
		FTransform InputLandscapeTransform;
		FIntPoint InputLandscapeSize;
		FIntPoint InputRenderTargetSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Initialize constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputLandscapeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputLandscapeSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputRenderTargetSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Initialize constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Initialize Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::NewProp_InputLandscapeTransform = { "InputLandscapeTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventInitialize_Parms, InputLandscapeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::NewProp_InputLandscapeSize = { "InputLandscapeSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventInitialize_Parms, InputLandscapeSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::NewProp_InputRenderTargetSize = { "InputRenderTargetSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventInitialize_Parms, InputRenderTargetSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::NewProp_InputLandscapeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::NewProp_InputLandscapeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::NewProp_InputRenderTargetSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::PropPointers) < 2048);
// ********** End Function Initialize Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "Initialize", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::TerrainMagicBrushComponent_eventInitialize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::TerrainMagicBrushComponent_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execInitialize)
{
	P_GET_STRUCT(FTransform,Z_Param_InputLandscapeTransform);
	P_GET_STRUCT(FIntPoint,Z_Param_InputLandscapeSize);
	P_GET_STRUCT(FIntPoint,Z_Param_InputRenderTargetSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InputLandscapeTransform,Z_Param_InputLandscapeSize,Z_Param_InputRenderTargetSize);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function Initialize ****************************

// ********** Begin Class UTerrainMagicBrushComponent Function InitializeRenderParams **************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics
{
	struct TerrainMagicBrushComponent_eventInitializeRenderParams_Parms
	{
		UTextureRenderTarget2D* InputHeightMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeRenderParams constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputHeightMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeRenderParams constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeRenderParams Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::NewProp_InputHeightMap = { "InputHeightMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventInitializeRenderParams_Parms, InputHeightMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::NewProp_InputHeightMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::PropPointers) < 2048);
// ********** End Function InitializeRenderParams Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "InitializeRenderParams", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::TerrainMagicBrushComponent_eventInitializeRenderParams_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::TerrainMagicBrushComponent_eventInitializeRenderParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execInitializeRenderParams)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InputHeightMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeRenderParams(Z_Param_InputHeightMap);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function InitializeRenderParams ****************

// ********** Begin Class UTerrainMagicBrushComponent Function PaintLandscapeClips *****************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics
{
	struct TerrainMagicBrushComponent_eventPaintLandscapeClips_Parms
	{
		FName LayerName;
		UTextureRenderTarget2D* InputWeightMap;
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PaintLandscapeClips constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputWeightMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PaintLandscapeClips constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PaintLandscapeClips Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventPaintLandscapeClips_Parms, LayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::NewProp_InputWeightMap = { "InputWeightMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventPaintLandscapeClips_Parms, InputWeightMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventPaintLandscapeClips_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::NewProp_InputWeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::PropPointers) < 2048);
// ********** End Function PaintLandscapeClips Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "PaintLandscapeClips", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::TerrainMagicBrushComponent_eventPaintLandscapeClips_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::TerrainMagicBrushComponent_eventPaintLandscapeClips_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execPaintLandscapeClips)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LayerName);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InputWeightMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->PaintLandscapeClips(Z_Param_LayerName,Z_Param_InputWeightMap);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function PaintLandscapeClips *******************

// ********** Begin Class UTerrainMagicBrushComponent Function ProcessPaintLayerData ***************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics
{
	struct TerrainMagicBrushComponent_eventProcessPaintLayerData_Parms
	{
		FName LayerName;
		UTextureRenderTarget2D* RenderTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessPaintLayerData constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessPaintLayerData constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessPaintLayerData Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventProcessPaintLayerData_Parms, LayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventProcessPaintLayerData_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::NewProp_RenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::PropPointers) < 2048);
// ********** End Function ProcessPaintLayerData Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "ProcessPaintLayerData", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::TerrainMagicBrushComponent_eventProcessPaintLayerData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::TerrainMagicBrushComponent_eventProcessPaintLayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execProcessPaintLayerData)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LayerName);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessPaintLayerData(Z_Param_LayerName,Z_Param_RenderTarget);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function ProcessPaintLayerData *****************

// ********** Begin Class UTerrainMagicBrushComponent Function RenderHeightMap *********************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics
{
	struct TerrainMagicBrushComponent_eventRenderHeightMap_Parms
	{
		UTextureRenderTarget2D* InputHeightMap;
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenderHeightMap constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputHeightMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenderHeightMap constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenderHeightMap Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::NewProp_InputHeightMap = { "InputHeightMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventRenderHeightMap_Parms, InputHeightMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventRenderHeightMap_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::NewProp_InputHeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::PropPointers) < 2048);
// ********** End Function RenderHeightMap Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "RenderHeightMap", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::TerrainMagicBrushComponent_eventRenderHeightMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::TerrainMagicBrushComponent_eventRenderHeightMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execRenderHeightMap)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InputHeightMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RenderHeightMap(Z_Param_InputHeightMap);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function RenderHeightMap ***********************

// ********** Begin Class UTerrainMagicBrushComponent Function RenderLandscapeClips ****************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics
{
	struct TerrainMagicBrushComponent_eventRenderLandscapeClips_Parms
	{
		UTextureRenderTarget2D* InputHeightMap;
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenderLandscapeClips constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputHeightMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenderLandscapeClips constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenderLandscapeClips Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::NewProp_InputHeightMap = { "InputHeightMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventRenderLandscapeClips_Parms, InputHeightMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventRenderLandscapeClips_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::NewProp_InputHeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::PropPointers) < 2048);
// ********** End Function RenderLandscapeClips Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "RenderLandscapeClips", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::TerrainMagicBrushComponent_eventRenderLandscapeClips_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::TerrainMagicBrushComponent_eventRenderLandscapeClips_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execRenderLandscapeClips)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InputHeightMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RenderLandscapeClips(Z_Param_InputHeightMap);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function RenderLandscapeClips ******************

// ********** Begin Class UTerrainMagicBrushComponent Function RenderWeightMap *********************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics
{
	struct TerrainMagicBrushComponent_eventRenderWeightMap_Parms
	{
		FName LayerName;
		UTextureRenderTarget2D* InputWeightMap;
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenderWeightMap constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputWeightMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenderWeightMap constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenderWeightMap Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventRenderWeightMap_Parms, LayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::NewProp_InputWeightMap = { "InputWeightMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventRenderWeightMap_Parms, InputWeightMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventRenderWeightMap_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::NewProp_InputWeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::PropPointers) < 2048);
// ********** End Function RenderWeightMap Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "RenderWeightMap", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::TerrainMagicBrushComponent_eventRenderWeightMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::TerrainMagicBrushComponent_eventRenderWeightMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execRenderWeightMap)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LayerName);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InputWeightMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RenderWeightMap(Z_Param_LayerName,Z_Param_InputWeightMap);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function RenderWeightMap ***********************

// ********** Begin Class UTerrainMagicBrushComponent Function ResetHeightMapCache *****************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetHeightMapCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetHeightMapCache constinit property declarations *******************
// ********** End Function ResetHeightMapCache constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetHeightMapCache_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "ResetHeightMapCache", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetHeightMapCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetHeightMapCache_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetHeightMapCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetHeightMapCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execResetHeightMapCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetHeightMapCache();
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function ResetHeightMapCache *******************

// ********** Begin Class UTerrainMagicBrushComponent Function ResetPaintLayerData *****************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics
{
	struct TerrainMagicBrushComponent_eventResetPaintLayerData_Parms
	{
		float ActivationThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetPaintLayerData constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetPaintLayerData constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetPaintLayerData Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::NewProp_ActivationThreshold = { "ActivationThreshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventResetPaintLayerData_Parms, ActivationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationThreshold_MetaData), NewProp_ActivationThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::NewProp_ActivationThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::PropPointers) < 2048);
// ********** End Function ResetPaintLayerData Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "ResetPaintLayerData", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::TerrainMagicBrushComponent_eventResetPaintLayerData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::TerrainMagicBrushComponent_eventResetPaintLayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execResetPaintLayerData)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActivationThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetPaintLayerData(Z_Param_ActivationThreshold);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function ResetPaintLayerData *******************

// ********** Begin Class UTerrainMagicBrushComponent Function SetScalarRenderParam ****************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics
{
	struct TerrainMagicBrushComponent_eventSetScalarRenderParam_Parms
	{
		FName Parameter;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetScalarRenderParam constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetScalarRenderParam constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetScalarRenderParam Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventSetScalarRenderParam_Parms, Parameter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventSetScalarRenderParam_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::PropPointers) < 2048);
// ********** End Function SetScalarRenderParam Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "SetScalarRenderParam", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::TerrainMagicBrushComponent_eventSetScalarRenderParam_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::TerrainMagicBrushComponent_eventSetScalarRenderParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execSetScalarRenderParam)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Parameter);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScalarRenderParam(Z_Param_Parameter,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function SetScalarRenderParam ******************

// ********** Begin Class UTerrainMagicBrushComponent Function SetScalarRenderParams ***************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics
{
	struct TerrainMagicBrushComponent_eventSetScalarRenderParams_Parms
	{
		TMap<FName,float> Params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetScalarRenderParams constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Params_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Params_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetScalarRenderParams constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetScalarRenderParams Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventSetScalarRenderParams_Parms, Params), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::NewProp_Params_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::NewProp_Params_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::PropPointers) < 2048);
// ********** End Function SetScalarRenderParams Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "SetScalarRenderParams", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::TerrainMagicBrushComponent_eventSetScalarRenderParams_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::TerrainMagicBrushComponent_eventSetScalarRenderParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execSetScalarRenderParams)
{
	P_GET_TMAP(FName,float,Z_Param_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScalarRenderParams(Z_Param_Params);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function SetScalarRenderParams *****************

// ********** Begin Class UTerrainMagicBrushComponent Function SetTextureRenderParam ***************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics
{
	struct TerrainMagicBrushComponent_eventSetTextureRenderParam_Parms
	{
		FName Parameter;
		UTexture* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTextureRenderParam constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTextureRenderParam constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTextureRenderParam Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventSetTextureRenderParam_Parms, Parameter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventSetTextureRenderParam_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::PropPointers) < 2048);
// ********** End Function SetTextureRenderParam Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "SetTextureRenderParam", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::TerrainMagicBrushComponent_eventSetTextureRenderParam_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::TerrainMagicBrushComponent_eventSetTextureRenderParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execSetTextureRenderParam)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Parameter);
	P_GET_OBJECT(UTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextureRenderParam(Z_Param_Parameter,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function SetTextureRenderParam *****************

// ********** Begin Class UTerrainMagicBrushComponent Function SetVectorRenderParam ****************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics
{
	struct TerrainMagicBrushComponent_eventSetVectorRenderParam_Parms
	{
		FName Parameter;
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVectorRenderParam constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVectorRenderParam constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVectorRenderParam Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventSetVectorRenderParam_Parms, Parameter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventSetVectorRenderParam_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::PropPointers) < 2048);
// ********** End Function SetVectorRenderParam Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "SetVectorRenderParam", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::TerrainMagicBrushComponent_eventSetVectorRenderParam_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::TerrainMagicBrushComponent_eventSetVectorRenderParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execSetVectorRenderParam)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Parameter);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorRenderParam(Z_Param_Parameter,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function SetVectorRenderParam ******************

// ********** Begin Class UTerrainMagicBrushComponent Function SetVectorRenderParams ***************
struct Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics
{
	struct TerrainMagicBrushComponent_eventSetVectorRenderParams_Parms
	{
		TMap<FName,FVector> Params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVectorRenderParams constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Params_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVectorRenderParams constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVectorRenderParams Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicBrushComponent_eventSetVectorRenderParams_Parms, Params), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::NewProp_Params_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::NewProp_Params_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::PropPointers) < 2048);
// ********** End Function SetVectorRenderParams Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTerrainMagicBrushComponent, nullptr, "SetVectorRenderParams", 	Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::TerrainMagicBrushComponent_eventSetVectorRenderParams_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::TerrainMagicBrushComponent_eventSetVectorRenderParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTerrainMagicBrushComponent::execSetVectorRenderParams)
{
	P_GET_TMAP(FName,FVector,Z_Param_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorRenderParams(Z_Param_Params);
	P_NATIVE_END;
}
// ********** End Class UTerrainMagicBrushComponent Function SetVectorRenderParams *****************

// ********** Begin Class UTerrainMagicBrushComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTerrainMagicBrushComponent;
UClass* UTerrainMagicBrushComponent::GetPrivateStaticClass()
{
	using TClass = UTerrainMagicBrushComponent;
	if (!Z_Registration_Info_UClass_UTerrainMagicBrushComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TerrainMagicBrushComponent"),
			Z_Registration_Info_UClass_UTerrainMagicBrushComponent.InnerSingleton,
			StaticRegisterNativesUTerrainMagicBrushComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTerrainMagicBrushComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTerrainMagicBrushComponent_NoRegister()
{
	return UTerrainMagicBrushComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTerrainMagicBrushComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TerrainMagicBrushComponent.h" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferRenderTargetForHeight_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Here we use this buffer render target to save a copy of a render target\n" },
#endif
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Here we use this buffer render target to save a copy of a render target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferRenderTargetForWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushMaterial_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyRTMaterial_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeTransform_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSize_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetSize_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicBrushComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTerrainMagicBrushComponent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BufferRenderTargetForHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BufferRenderTargetForWeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyRTMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTerrainMagicBrushComponent constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CacheHeightMap"), .Pointer = &UTerrainMagicBrushComponent::execCacheHeightMap },
		{ .NameUTF8 = UTF8TEXT("EnsureManager"), .Pointer = &UTerrainMagicBrushComponent::execEnsureManager },
		{ .NameUTF8 = UTF8TEXT("GetHeightMapVersion"), .Pointer = &UTerrainMagicBrushComponent::execGetHeightMapVersion },
		{ .NameUTF8 = UTF8TEXT("HasHeightMap"), .Pointer = &UTerrainMagicBrushComponent::execHasHeightMap },
		{ .NameUTF8 = UTF8TEXT("HasInvalidatedLandscapeClips"), .Pointer = &UTerrainMagicBrushComponent::execHasInvalidatedLandscapeClips },
		{ .NameUTF8 = UTF8TEXT("Initialize"), .Pointer = &UTerrainMagicBrushComponent::execInitialize },
		{ .NameUTF8 = UTF8TEXT("InitializeRenderParams"), .Pointer = &UTerrainMagicBrushComponent::execInitializeRenderParams },
		{ .NameUTF8 = UTF8TEXT("PaintLandscapeClips"), .Pointer = &UTerrainMagicBrushComponent::execPaintLandscapeClips },
		{ .NameUTF8 = UTF8TEXT("ProcessPaintLayerData"), .Pointer = &UTerrainMagicBrushComponent::execProcessPaintLayerData },
		{ .NameUTF8 = UTF8TEXT("RenderHeightMap"), .Pointer = &UTerrainMagicBrushComponent::execRenderHeightMap },
		{ .NameUTF8 = UTF8TEXT("RenderLandscapeClips"), .Pointer = &UTerrainMagicBrushComponent::execRenderLandscapeClips },
		{ .NameUTF8 = UTF8TEXT("RenderWeightMap"), .Pointer = &UTerrainMagicBrushComponent::execRenderWeightMap },
		{ .NameUTF8 = UTF8TEXT("ResetHeightMapCache"), .Pointer = &UTerrainMagicBrushComponent::execResetHeightMapCache },
		{ .NameUTF8 = UTF8TEXT("ResetPaintLayerData"), .Pointer = &UTerrainMagicBrushComponent::execResetPaintLayerData },
		{ .NameUTF8 = UTF8TEXT("SetScalarRenderParam"), .Pointer = &UTerrainMagicBrushComponent::execSetScalarRenderParam },
		{ .NameUTF8 = UTF8TEXT("SetScalarRenderParams"), .Pointer = &UTerrainMagicBrushComponent::execSetScalarRenderParams },
		{ .NameUTF8 = UTF8TEXT("SetTextureRenderParam"), .Pointer = &UTerrainMagicBrushComponent::execSetTextureRenderParam },
		{ .NameUTF8 = UTF8TEXT("SetVectorRenderParam"), .Pointer = &UTerrainMagicBrushComponent::execSetVectorRenderParam },
		{ .NameUTF8 = UTF8TEXT("SetVectorRenderParams"), .Pointer = &UTerrainMagicBrushComponent::execSetVectorRenderParams },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_CacheHeightMap, "CacheHeightMap" }, // 2178201998
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_EnsureManager, "EnsureManager" }, // 3662999360
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_GetHeightMapVersion, "GetHeightMapVersion" }, // 3117050873
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_HasHeightMap, "HasHeightMap" }, // 4054602566
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_HasInvalidatedLandscapeClips, "HasInvalidatedLandscapeClips" }, // 1968127490
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_Initialize, "Initialize" }, // 3042520740
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_InitializeRenderParams, "InitializeRenderParams" }, // 1084668267
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_PaintLandscapeClips, "PaintLandscapeClips" }, // 2906225672
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_ProcessPaintLayerData, "ProcessPaintLayerData" }, // 3754440051
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderHeightMap, "RenderHeightMap" }, // 1789480783
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderLandscapeClips, "RenderLandscapeClips" }, // 3006833338
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_RenderWeightMap, "RenderWeightMap" }, // 3066209168
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetHeightMapCache, "ResetHeightMapCache" }, // 3287615635
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_ResetPaintLayerData, "ResetPaintLayerData" }, // 1918595979
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParam, "SetScalarRenderParam" }, // 4272717787
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_SetScalarRenderParams, "SetScalarRenderParams" }, // 4058715420
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_SetTextureRenderParam, "SetTextureRenderParam" }, // 670169480
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParam, "SetVectorRenderParam" }, // 779498480
		{ &Z_Construct_UFunction_UTerrainMagicBrushComponent_SetVectorRenderParams, "SetVectorRenderParams" }, // 4072869101
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerrainMagicBrushComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTerrainMagicBrushComponent_Statics

// ********** Begin Class UTerrainMagicBrushComponent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_BufferRenderTargetForHeight = { "BufferRenderTargetForHeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerrainMagicBrushComponent, BufferRenderTargetForHeight), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferRenderTargetForHeight_MetaData), NewProp_BufferRenderTargetForHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_BufferRenderTargetForWeight = { "BufferRenderTargetForWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerrainMagicBrushComponent, BufferRenderTargetForWeight), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferRenderTargetForWeight_MetaData), NewProp_BufferRenderTargetForWeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_BrushMaterial = { "BrushMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerrainMagicBrushComponent, BrushMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushMaterial_MetaData), NewProp_BrushMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_CopyRTMaterial = { "CopyRTMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerrainMagicBrushComponent, CopyRTMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyRTMaterial_MetaData), NewProp_CopyRTMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_LandscapeTransform = { "LandscapeTransform", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerrainMagicBrushComponent, LandscapeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeTransform_MetaData), NewProp_LandscapeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_LandscapeSize = { "LandscapeSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerrainMagicBrushComponent, LandscapeSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSize_MetaData), NewProp_LandscapeSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_RenderTargetSize = { "RenderTargetSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTerrainMagicBrushComponent, RenderTargetSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetSize_MetaData), NewProp_RenderTargetSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_BufferRenderTargetForHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_BufferRenderTargetForWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_BrushMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_CopyRTMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_LandscapeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_LandscapeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::NewProp_RenderTargetSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::PropPointers) < 2048);
// ********** End Class UTerrainMagicBrushComponent Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::ClassParams = {
	&UTerrainMagicBrushComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::Class_MetaDataParams)
};
void UTerrainMagicBrushComponent::StaticRegisterNativesUTerrainMagicBrushComponent()
{
	UClass* Class = UTerrainMagicBrushComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UTerrainMagicBrushComponent()
{
	if (!Z_Registration_Info_UClass_UTerrainMagicBrushComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTerrainMagicBrushComponent.OuterSingleton, Z_Construct_UClass_UTerrainMagicBrushComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTerrainMagicBrushComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTerrainMagicBrushComponent);
UTerrainMagicBrushComponent::~UTerrainMagicBrushComponent() {}
// ********** End Class UTerrainMagicBrushComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h__Script_TerrainMagic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeClipsInvalidationResponse::StaticStruct, Z_Construct_UScriptStruct_FLandscapeClipsInvalidationResponse_Statics::NewStructOps, TEXT("LandscapeClipsInvalidationResponse"),&Z_Registration_Info_UScriptStruct_FLandscapeClipsInvalidationResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeClipsInvalidationResponse), 66750325U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTerrainMagicBrushComponent, UTerrainMagicBrushComponent::StaticClass, TEXT("UTerrainMagicBrushComponent"), &Z_Registration_Info_UClass_UTerrainMagicBrushComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTerrainMagicBrushComponent), 673744816U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h__Script_TerrainMagic_2621170317{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h__Script_TerrainMagic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h__Script_TerrainMagic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicBrushComponent_h__Script_TerrainMagic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
