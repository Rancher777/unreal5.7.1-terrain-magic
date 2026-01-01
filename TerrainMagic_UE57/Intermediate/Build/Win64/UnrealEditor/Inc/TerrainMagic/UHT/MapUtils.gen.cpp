// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utils/MapUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMapUtils() {}

// ********** Begin Cross Module References ********************************************************
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_EMapSource();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMapSource ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMapSource;
static UEnum* EMapSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMapSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMapSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_EMapSource, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("EMapSource"));
	}
	return Z_Registration_Info_UEnum_EMapSource.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EMapSource>()
{
	return EMapSource_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_EMapSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/MapUtils.h" },
		{ "MS_MAPBOX.DisplayName", "Mapbox" },
		{ "MS_MAPBOX.Name", "MS_MAPBOX" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MS_MAPBOX", (int64)MS_MAPBOX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_EMapSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_EMapSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"EMapSource",
	"EMapSource",
	Z_Construct_UEnum_TerrainMagic_EMapSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EMapSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EMapSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_EMapSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_EMapSource()
{
	if (!Z_Registration_Info_UEnum_EMapSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMapSource.InnerSingleton, Z_Construct_UEnum_TerrainMagic_EMapSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMapSource.InnerSingleton;
}
// ********** End Enum EMapSource ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_MapUtils_h__Script_TerrainMagic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMapSource_StaticEnum, TEXT("EMapSource"), &Z_Registration_Info_UEnum_EMapSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2661696501U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_MapUtils_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_MapUtils_h__Script_TerrainMagic_2782578069{
	TEXT("/Script/TerrainMagic"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_MapUtils_h__Script_TerrainMagic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_MapUtils_h__Script_TerrainMagic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
