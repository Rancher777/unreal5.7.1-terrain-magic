// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/FTerrainMagicRemap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFTerrainMagicRemap() {}

// ********** Begin Cross Module References ********************************************************
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicRemap();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTerrainMagicRemap ************************************************
struct Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FTerrainMagicRemap); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTerrainMagicRemap); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/FTerrainMagicRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMin_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/FTerrainMagicRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMax_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/FTerrainMagicRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMin_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/FTerrainMagicRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMax_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/FTerrainMagicRemap.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTerrainMagicRemap constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTerrainMagicRemap constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTerrainMagicRemap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTerrainMagicRemap;
class UScriptStruct* FTerrainMagicRemap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTerrainMagicRemap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTerrainMagicRemap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTerrainMagicRemap, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("TerrainMagicRemap"));
	}
	return Z_Registration_Info_UScriptStruct_FTerrainMagicRemap.OuterSingleton;
	}

// ********** Begin ScriptStruct FTerrainMagicRemap Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::NewProp_InputMin = { "InputMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicRemap, InputMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMin_MetaData), NewProp_InputMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::NewProp_InputMax = { "InputMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicRemap, InputMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMax_MetaData), NewProp_InputMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::NewProp_OutputMin = { "OutputMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicRemap, OutputMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMin_MetaData), NewProp_OutputMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::NewProp_OutputMax = { "OutputMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicRemap, OutputMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMax_MetaData), NewProp_OutputMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::NewProp_InputMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::NewProp_InputMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::NewProp_OutputMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::NewProp_OutputMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FTerrainMagicRemap Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"TerrainMagicRemap",
	Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::PropPointers),
	sizeof(FTerrainMagicRemap),
	alignof(FTerrainMagicRemap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicRemap()
{
	if (!Z_Registration_Info_UScriptStruct_FTerrainMagicRemap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTerrainMagicRemap.InnerSingleton, Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTerrainMagicRemap.InnerSingleton);
}
// ********** End ScriptStruct FTerrainMagicRemap **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_FTerrainMagicRemap_h__Script_TerrainMagic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTerrainMagicRemap::StaticStruct, Z_Construct_UScriptStruct_FTerrainMagicRemap_Statics::NewStructOps, TEXT("TerrainMagicRemap"),&Z_Registration_Info_UScriptStruct_FTerrainMagicRemap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTerrainMagicRemap), 31547383U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_FTerrainMagicRemap_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_FTerrainMagicRemap_h__Script_TerrainMagic_1736405402{
	TEXT("/Script/TerrainMagic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_FTerrainMagicRemap_h__Script_TerrainMagic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_FTerrainMagicRemap_h__Script_TerrainMagic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
