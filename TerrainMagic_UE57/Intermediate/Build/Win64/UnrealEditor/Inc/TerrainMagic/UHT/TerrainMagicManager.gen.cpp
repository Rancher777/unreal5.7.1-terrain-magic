// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerrainMagicManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTerrainMagicManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ATerrainMagicManager();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ATerrainMagicManager_NoRegister();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTerrainMagicPaintLayerResult *************************************
struct Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FTerrainMagicPaintLayerResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTerrainMagicPaintLayerResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundPaintLayer_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintLayer_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTerrainMagicPaintLayerResult constinit property declarations *****
	static void NewProp_FoundPaintLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FoundPaintLayer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PaintLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTerrainMagicPaintLayerResult constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTerrainMagicPaintLayerResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTerrainMagicPaintLayerResult;
class UScriptStruct* FTerrainMagicPaintLayerResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTerrainMagicPaintLayerResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTerrainMagicPaintLayerResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("TerrainMagicPaintLayerResult"));
	}
	return Z_Registration_Info_UScriptStruct_FTerrainMagicPaintLayerResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FTerrainMagicPaintLayerResult Property Definitions ****************
void Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::NewProp_FoundPaintLayer_SetBit(void* Obj)
{
	((FTerrainMagicPaintLayerResult*)Obj)->FoundPaintLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::NewProp_FoundPaintLayer = { "FoundPaintLayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTerrainMagicPaintLayerResult), &Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::NewProp_FoundPaintLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundPaintLayer_MetaData), NewProp_FoundPaintLayer_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::NewProp_PaintLayer = { "PaintLayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicPaintLayerResult, PaintLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintLayer_MetaData), NewProp_PaintLayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::NewProp_FoundPaintLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::NewProp_PaintLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FTerrainMagicPaintLayerResult Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"TerrainMagicPaintLayerResult",
	Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::PropPointers),
	sizeof(FTerrainMagicPaintLayerResult),
	alignof(FTerrainMagicPaintLayerResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult()
{
	if (!Z_Registration_Info_UScriptStruct_FTerrainMagicPaintLayerResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTerrainMagicPaintLayerResult.InnerSingleton, Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTerrainMagicPaintLayerResult.InnerSingleton);
}
// ********** End ScriptStruct FTerrainMagicPaintLayerResult ***************************************

// ********** Begin Class ATerrainMagicManager Function FindLandscapePaintLayer ********************
struct Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics
{
	struct TerrainMagicManager_eventFindLandscapePaintLayer_Parms
	{
		FVector Location;
		FTerrainMagicPaintLayerResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindLandscapePaintLayer constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindLandscapePaintLayer constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindLandscapePaintLayer Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicManager_eventFindLandscapePaintLayer_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicManager_eventFindLandscapePaintLayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult, METADATA_PARAMS(0, nullptr) }; // 84760040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::PropPointers) < 2048);
// ********** End Function FindLandscapePaintLayer Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrainMagicManager, nullptr, "FindLandscapePaintLayer", 	Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::TerrainMagicManager_eventFindLandscapePaintLayer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::TerrainMagicManager_eventFindLandscapePaintLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrainMagicManager::execFindLandscapePaintLayer)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTerrainMagicPaintLayerResult*)Z_Param__Result=ATerrainMagicManager::FindLandscapePaintLayer(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class ATerrainMagicManager Function FindLandscapePaintLayer **********************

// ********** Begin Class ATerrainMagicManager Function GetHeightMap *******************************
struct Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics
{
	struct TerrainMagicManager_eventGetHeightMap_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHeightMap constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHeightMap constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHeightMap Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TerrainMagicManager_eventGetHeightMap_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::PropPointers) < 2048);
// ********** End Function GetHeightMap Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrainMagicManager, nullptr, "GetHeightMap", 	Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::TerrainMagicManager_eventGetHeightMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::TerrainMagicManager_eventGetHeightMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrainMagicManager::execGetHeightMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetHeightMap();
	P_NATIVE_END;
}
// ********** End Class ATerrainMagicManager Function GetHeightMap *********************************

// ********** Begin Class ATerrainMagicManager Function HideClipOutlines ***************************
struct Z_Construct_UFunction_ATerrainMagicManager_HideClipOutlines_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HideClipOutlines constinit property declarations **********************
// ********** End Function HideClipOutlines constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrainMagicManager_HideClipOutlines_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrainMagicManager, nullptr, "HideClipOutlines", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainMagicManager_HideClipOutlines_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrainMagicManager_HideClipOutlines_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATerrainMagicManager_HideClipOutlines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrainMagicManager_HideClipOutlines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrainMagicManager::execHideClipOutlines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideClipOutlines();
	P_NATIVE_END;
}
// ********** End Class ATerrainMagicManager Function HideClipOutlines *****************************

// ********** Begin Class ATerrainMagicManager Function ShowClipOutlines ***************************
struct Z_Construct_UFunction_ATerrainMagicManager_ShowClipOutlines_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowClipOutlines constinit property declarations **********************
// ********** End Function ShowClipOutlines constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrainMagicManager_ShowClipOutlines_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrainMagicManager, nullptr, "ShowClipOutlines", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainMagicManager_ShowClipOutlines_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrainMagicManager_ShowClipOutlines_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATerrainMagicManager_ShowClipOutlines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrainMagicManager_ShowClipOutlines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrainMagicManager::execShowClipOutlines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowClipOutlines();
	P_NATIVE_END;
}
// ********** End Class ATerrainMagicManager Function ShowClipOutlines *****************************

// ********** Begin Class ATerrainMagicManager Function TogglePreview ******************************
struct Z_Construct_UFunction_ATerrainMagicManager_TogglePreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TogglePreview constinit property declarations *************************
// ********** End Function TogglePreview constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrainMagicManager_TogglePreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrainMagicManager, nullptr, "TogglePreview", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrainMagicManager_TogglePreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrainMagicManager_TogglePreview_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATerrainMagicManager_TogglePreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrainMagicManager_TogglePreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrainMagicManager::execTogglePreview)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePreview();
	P_NATIVE_END;
}
// ********** End Class ATerrainMagicManager Function TogglePreview ********************************

// ********** Begin Class ATerrainMagicManager *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATerrainMagicManager;
UClass* ATerrainMagicManager::GetPrivateStaticClass()
{
	using TClass = ATerrainMagicManager;
	if (!Z_Registration_Info_UClass_ATerrainMagicManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TerrainMagicManager"),
			Z_Registration_Info_UClass_ATerrainMagicManager.InnerSingleton,
			StaticRegisterNativesATerrainMagicManager,
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
	return Z_Registration_Info_UClass_ATerrainMagicManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ATerrainMagicManager_NoRegister()
{
	return ATerrainMagicManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATerrainMagicManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TerrainMagicManager.h" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastZIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLocationBeforePreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferRenderTargetForHeight_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Here we use this buffer render target to save a copy of a render target\n" },
#endif
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Here we use this buffer render target to save a copy of a render target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferRenderTargetForWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRenderTargetForHeight_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the initial render target & we need to keep a copy for the later use\n" },
#endif
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the initial render target & we need to keep a copy for the later use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Actor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshComponent_MetaData[] = {
		{ "Category", "TerrainMagic|General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeTransform_MetaData[] = {
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSize_MetaData[] = {
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetSize_MetaData[] = {
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeChunks_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// World Partition support: Cache of all landscape chunks in the world\n" },
#endif
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World Partition support: Cache of all landscape chunks in the world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyRTMaterial_MetaData[] = {
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintLayerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRenderTarget_MetaData[] = {
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightRenderTarget_MetaData[] = {
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedHeightMap_MetaData[] = {
		{ "Category", "TerrainMagic|General" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBaseColor_MetaData[] = {
		{ "Category", "TerrainMagic|PreviewMesh" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewRoughness_MetaData[] = {
		{ "Category", "TerrainMagic|PreviewMesh" },
		{ "ModuleRelativePath", "Public/TerrainMagicManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATerrainMagicManager constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastZIndex;
	static void NewProp_bShowPreviewMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreviewMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeLocationBeforePreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BufferRenderTargetForHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BufferRenderTargetForWeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseRenderTargetForHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeChunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeChunks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyRTMaterial;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PaintLayerData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintLayerData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PaintLayerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintLayerNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedHeightMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewBaseColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewRoughness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATerrainMagicManager constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindLandscapePaintLayer"), .Pointer = &ATerrainMagicManager::execFindLandscapePaintLayer },
		{ .NameUTF8 = UTF8TEXT("GetHeightMap"), .Pointer = &ATerrainMagicManager::execGetHeightMap },
		{ .NameUTF8 = UTF8TEXT("HideClipOutlines"), .Pointer = &ATerrainMagicManager::execHideClipOutlines },
		{ .NameUTF8 = UTF8TEXT("ShowClipOutlines"), .Pointer = &ATerrainMagicManager::execShowClipOutlines },
		{ .NameUTF8 = UTF8TEXT("TogglePreview"), .Pointer = &ATerrainMagicManager::execTogglePreview },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATerrainMagicManager_FindLandscapePaintLayer, "FindLandscapePaintLayer" }, // 395800802
		{ &Z_Construct_UFunction_ATerrainMagicManager_GetHeightMap, "GetHeightMap" }, // 1685261931
		{ &Z_Construct_UFunction_ATerrainMagicManager_HideClipOutlines, "HideClipOutlines" }, // 2800773637
		{ &Z_Construct_UFunction_ATerrainMagicManager_ShowClipOutlines, "ShowClipOutlines" }, // 3397415708
		{ &Z_Construct_UFunction_ATerrainMagicManager_TogglePreview, "TogglePreview" }, // 82571499
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrainMagicManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATerrainMagicManager_Statics

// ********** Begin Class ATerrainMagicManager Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LastZIndex = { "LastZIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, LastZIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastZIndex_MetaData), NewProp_LastZIndex_MetaData) };
void Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_bShowPreviewMesh_SetBit(void* Obj)
{
	((ATerrainMagicManager*)Obj)->bShowPreviewMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_bShowPreviewMesh = { "bShowPreviewMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATerrainMagicManager), &Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_bShowPreviewMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPreviewMesh_MetaData), NewProp_bShowPreviewMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeLocationBeforePreview = { "LandscapeLocationBeforePreview", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, LandscapeLocationBeforePreview), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLocationBeforePreview_MetaData), NewProp_LandscapeLocationBeforePreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, PreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterial_MetaData), NewProp_PreviewMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_BufferRenderTargetForHeight = { "BufferRenderTargetForHeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, BufferRenderTargetForHeight), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferRenderTargetForHeight_MetaData), NewProp_BufferRenderTargetForHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_BufferRenderTargetForWeight = { "BufferRenderTargetForWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, BufferRenderTargetForWeight), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferRenderTargetForWeight_MetaData), NewProp_BufferRenderTargetForWeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_BaseRenderTargetForHeight = { "BaseRenderTargetForHeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, BaseRenderTargetForHeight), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRenderTargetForHeight_MetaData), NewProp_BaseRenderTargetForHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PreviewMeshComponent = { "PreviewMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, PreviewMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshComponent_MetaData), NewProp_PreviewMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeTransform = { "LandscapeTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, LandscapeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeTransform_MetaData), NewProp_LandscapeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeSize = { "LandscapeSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, LandscapeSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSize_MetaData), NewProp_LandscapeSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_RenderTargetSize = { "RenderTargetSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, RenderTargetSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetSize_MetaData), NewProp_RenderTargetSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeChunks_Inner = { "LandscapeChunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeChunks = { "LandscapeChunks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, LandscapeChunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeChunks_MetaData), NewProp_LandscapeChunks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_CopyRTMaterial = { "CopyRTMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, CopyRTMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyRTMaterial_MetaData), NewProp_CopyRTMaterial_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PaintLayerData_Inner = { "PaintLayerData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PaintLayerData = { "PaintLayerData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, PaintLayerData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintLayerData_MetaData), NewProp_PaintLayerData_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PaintLayerNames_Inner = { "PaintLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PaintLayerNames = { "PaintLayerNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, PaintLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintLayerNames_MetaData), NewProp_PaintLayerNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_HeightRenderTarget = { "HeightRenderTarget", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, HeightRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRenderTarget_MetaData), NewProp_HeightRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_WeightRenderTarget = { "WeightRenderTarget", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, WeightRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightRenderTarget_MetaData), NewProp_WeightRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_CachedHeightMap = { "CachedHeightMap", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, CachedHeightMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedHeightMap_MetaData), NewProp_CachedHeightMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PreviewBaseColor = { "PreviewBaseColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, PreviewBaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBaseColor_MetaData), NewProp_PreviewBaseColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PreviewRoughness = { "PreviewRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainMagicManager, PreviewRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewRoughness_MetaData), NewProp_PreviewRoughness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrainMagicManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LastZIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_bShowPreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeLocationBeforePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PreviewMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_BufferRenderTargetForHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_BufferRenderTargetForWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_BaseRenderTargetForHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PreviewMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_RenderTargetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeChunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_LandscapeChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_CopyRTMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PaintLayerData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PaintLayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PaintLayerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PaintLayerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_HeightRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_WeightRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_CachedHeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PreviewBaseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainMagicManager_Statics::NewProp_PreviewRoughness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainMagicManager_Statics::PropPointers) < 2048);
// ********** End Class ATerrainMagicManager Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ATerrainMagicManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainMagicManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrainMagicManager_Statics::ClassParams = {
	&ATerrainMagicManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATerrainMagicManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainMagicManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainMagicManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrainMagicManager_Statics::Class_MetaDataParams)
};
void ATerrainMagicManager::StaticRegisterNativesATerrainMagicManager()
{
	UClass* Class = ATerrainMagicManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATerrainMagicManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_ATerrainMagicManager()
{
	if (!Z_Registration_Info_UClass_ATerrainMagicManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrainMagicManager.OuterSingleton, Z_Construct_UClass_ATerrainMagicManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATerrainMagicManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATerrainMagicManager);
ATerrainMagicManager::~ATerrainMagicManager() {}
// ********** End Class ATerrainMagicManager *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h__Script_TerrainMagic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTerrainMagicPaintLayerResult::StaticStruct, Z_Construct_UScriptStruct_FTerrainMagicPaintLayerResult_Statics::NewStructOps, TEXT("TerrainMagicPaintLayerResult"),&Z_Registration_Info_UScriptStruct_FTerrainMagicPaintLayerResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTerrainMagicPaintLayerResult), 84760040U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrainMagicManager, ATerrainMagicManager::StaticClass, TEXT("ATerrainMagicManager"), &Z_Registration_Info_UClass_ATerrainMagicManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrainMagicManager), 600111884U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h__Script_TerrainMagic_1431793764{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h__Script_TerrainMagic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h__Script_TerrainMagic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicManager_h__Script_TerrainMagic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
