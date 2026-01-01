// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/TerrainMagicMaterialParam.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTerrainMagicMaterialParam() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicMaterialParam();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETerrainMagicMaterialParamType ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETerrainMagicMaterialParamType;
static UEnum* ETerrainMagicMaterialParamType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETerrainMagicMaterialParamType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETerrainMagicMaterialParamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("ETerrainMagicMaterialParamType"));
	}
	return Z_Registration_Info_UEnum_ETerrainMagicMaterialParamType.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ETerrainMagicMaterialParamType>()
{
	return ETerrainMagicMaterialParamType_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TerrainMagicMaterialParam.h" },
		{ "TMMP_SCALAR.DisplayName", "Scalar" },
		{ "TMMP_SCALAR.Name", "TMMP_SCALAR" },
		{ "TMMP_TEXTURE.DisplayName", "Texture" },
		{ "TMMP_TEXTURE.Name", "TMMP_TEXTURE" },
		{ "TMMP_VECTOR.DisplayName", "Vector" },
		{ "TMMP_VECTOR.Name", "TMMP_VECTOR" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TMMP_SCALAR", (int64)TMMP_SCALAR },
		{ "TMMP_VECTOR", (int64)TMMP_VECTOR },
		{ "TMMP_TEXTURE", (int64)TMMP_TEXTURE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"ETerrainMagicMaterialParamType",
	"ETerrainMagicMaterialParamType",
	Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType()
{
	if (!Z_Registration_Info_UEnum_ETerrainMagicMaterialParamType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETerrainMagicMaterialParamType.InnerSingleton, Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETerrainMagicMaterialParamType.InnerSingleton;
}
// ********** End Enum ETerrainMagicMaterialParamType **********************************************

// ********** Begin ScriptStruct FTerrainMagicMaterialParam ****************************************
struct Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FTerrainMagicMaterialParam); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTerrainMagicMaterialParam); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TerrainMagicMaterialParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/TerrainMagicMaterialParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/TerrainMagicMaterialParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarValue_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/TerrainMagicMaterialParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/TerrainMagicMaterialParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureValue_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/TerrainMagicMaterialParam.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTerrainMagicMaterialParam constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTerrainMagicMaterialParam constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTerrainMagicMaterialParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTerrainMagicMaterialParam;
class UScriptStruct* FTerrainMagicMaterialParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTerrainMagicMaterialParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTerrainMagicMaterialParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTerrainMagicMaterialParam, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("TerrainMagicMaterialParam"));
	}
	return Z_Registration_Info_UScriptStruct_FTerrainMagicMaterialParam.OuterSingleton;
	}

// ********** Begin ScriptStruct FTerrainMagicMaterialParam Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicMaterialParam, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicMaterialParam, Type), Z_Construct_UEnum_TerrainMagic_ETerrainMagicMaterialParamType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2259828134
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_ScalarValue = { "ScalarValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicMaterialParam, ScalarValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarValue_MetaData), NewProp_ScalarValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicMaterialParam, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorValue_MetaData), NewProp_VectorValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_TextureValue = { "TextureValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTerrainMagicMaterialParam, TextureValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureValue_MetaData), NewProp_TextureValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_ScalarValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_VectorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewProp_TextureValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FTerrainMagicMaterialParam Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"TerrainMagicMaterialParam",
	Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::PropPointers),
	sizeof(FTerrainMagicMaterialParam),
	alignof(FTerrainMagicMaterialParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicMaterialParam()
{
	if (!Z_Registration_Info_UScriptStruct_FTerrainMagicMaterialParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTerrainMagicMaterialParam.InnerSingleton, Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTerrainMagicMaterialParam.InnerSingleton);
}
// ********** End ScriptStruct FTerrainMagicMaterialParam ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_TerrainMagicMaterialParam_h__Script_TerrainMagic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETerrainMagicMaterialParamType_StaticEnum, TEXT("ETerrainMagicMaterialParamType"), &Z_Registration_Info_UEnum_ETerrainMagicMaterialParamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2259828134U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTerrainMagicMaterialParam::StaticStruct, Z_Construct_UScriptStruct_FTerrainMagicMaterialParam_Statics::NewStructOps, TEXT("TerrainMagicMaterialParam"),&Z_Registration_Info_UScriptStruct_FTerrainMagicMaterialParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTerrainMagicMaterialParam), 3987957635U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_TerrainMagicMaterialParam_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_TerrainMagicMaterialParam_h__Script_TerrainMagic_3976449839{
	TEXT("/Script/TerrainMagic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_TerrainMagicMaterialParam_h__Script_TerrainMagic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_TerrainMagicMaterialParam_h__Script_TerrainMagic_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_TerrainMagicMaterialParam_h__Script_TerrainMagic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_TerrainMagicMaterialParam_h__Script_TerrainMagic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
