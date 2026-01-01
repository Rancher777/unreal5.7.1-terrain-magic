// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clips/GeoTiffLandscapeClip.h"
#include "LandscapeClip.h"
#include "Types/FTerrainMagicRemap.h"
#include "Types/LandscapeClipPaintLayerSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGeoTiffLandscapeClip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_AGeoTiffLandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_AGeoTiffLandscapeClip_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ALandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_UG16Texture_NoRegister();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FGeoTiffInfo();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicRemap();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGeoTiffTargetTextureResolution *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeoTiffTargetTextureResolution;
static UEnum* EGeoTiffTargetTextureResolution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGeoTiffTargetTextureResolution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGeoTiffTargetTextureResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("EGeoTiffTargetTextureResolution"));
	}
	return Z_Registration_Info_UEnum_EGeoTiffTargetTextureResolution.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeoTiffTargetTextureResolution>()
{
	return EGeoTiffTargetTextureResolution_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "GTRES_1024.DisplayName", "1024" },
		{ "GTRES_1024.Name", "GTRES_1024" },
		{ "GTRES_2048.DisplayName", "2048" },
		{ "GTRES_2048.Name", "GTRES_2048" },
		{ "GTRES_4096.DisplayName", "4096" },
		{ "GTRES_4096.Name", "GTRES_4096" },
		{ "GTRES_8192.DisplayName", "8192" },
		{ "GTRES_8192.Name", "GTRES_8192" },
		{ "GTRES_SOURCE.DisplayName", "Source Resolution" },
		{ "GTRES_SOURCE.Name", "GTRES_SOURCE" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "GTRES_SOURCE", (int64)GTRES_SOURCE },
		{ "GTRES_1024", (int64)GTRES_1024 },
		{ "GTRES_2048", (int64)GTRES_2048 },
		{ "GTRES_4096", (int64)GTRES_4096 },
		{ "GTRES_8192", (int64)GTRES_8192 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"EGeoTiffTargetTextureResolution",
	"EGeoTiffTargetTextureResolution",
	Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution()
{
	if (!Z_Registration_Info_UEnum_EGeoTiffTargetTextureResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeoTiffTargetTextureResolution.InnerSingleton, Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGeoTiffTargetTextureResolution.InnerSingleton;
}
// ********** End Enum EGeoTiffTargetTextureResolution *********************************************

// ********** Begin ScriptStruct FGeoTiffInfo ******************************************************
struct Z_Construct_UScriptStruct_FGeoTiffInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGeoTiffInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGeoTiffInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureResolution_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelToMetersRatio_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGeoTiffInfo constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PixelToMetersRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGeoTiffInfo constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeoTiffInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGeoTiffInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGeoTiffInfo;
class UScriptStruct* FGeoTiffInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGeoTiffInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGeoTiffInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeoTiffInfo, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("GeoTiffInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FGeoTiffInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FGeoTiffInfo Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::NewProp_TextureResolution = { "TextureResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoTiffInfo, TextureResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureResolution_MetaData), NewProp_TextureResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoTiffInfo, Origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::NewProp_PixelToMetersRatio = { "PixelToMetersRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoTiffInfo, PixelToMetersRatio), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelToMetersRatio_MetaData), NewProp_PixelToMetersRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoTiffInfo, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::NewProp_TextureResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::NewProp_PixelToMetersRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGeoTiffInfo Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"GeoTiffInfo",
	Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::PropPointers),
	sizeof(FGeoTiffInfo),
	alignof(FGeoTiffInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeoTiffInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FGeoTiffInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGeoTiffInfo.InnerSingleton, Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGeoTiffInfo.InnerSingleton);
}
// ********** End ScriptStruct FGeoTiffInfo ********************************************************

// ********** Begin Class AGeoTiffLandscapeClip ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGeoTiffLandscapeClip;
UClass* AGeoTiffLandscapeClip::GetPrivateStaticClass()
{
	using TClass = AGeoTiffLandscapeClip;
	if (!Z_Registration_Info_UClass_AGeoTiffLandscapeClip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GeoTiffLandscapeClip"),
			Z_Registration_Info_UClass_AGeoTiffLandscapeClip.InnerSingleton,
			StaticRegisterNativesAGeoTiffLandscapeClip,
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
	return Z_Registration_Info_UClass_AGeoTiffLandscapeClip.InnerSingleton;
}
UClass* Z_Construct_UClass_AGeoTiffLandscapeClip_NoRegister()
{
	return AGeoTiffLandscapeClip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGeoTiffLandscapeClip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Clips/GeoTiffLandscapeClip.h" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_G16Texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoTiffInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZIndex_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetResolution_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMap_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileRepositioning_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapRange_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMultiplier_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multiplier that will use with the following HeightMap range output values. This value doesn't scale with the clip actor's scaling factors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightSaturation_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapBaseSize_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the HeightMap in meters before scaling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMode_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMaskSpan_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeSaturation_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMinimum_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurDistance_MetaData[] = {
		{ "Category", "01-General|Radial Blur" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurDistanceSteps_MetaData[] = {
		{ "Category", "01-General|Radial Blur" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurRadialSteps_MetaData[] = {
		{ "Category", "01-General|Radial Blur" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseInfluence_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseScale_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseDetails_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseContrast_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseSharpness_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseSeed_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoisePosition_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintLayerSettings_MetaData[] = {
		{ "Category", "02-Layer Painting" },
		{ "ModuleRelativePath", "Public/Clips/GeoTiffLandscapeClip.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AGeoTiffLandscapeClip constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_G16Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoTiffInfo;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetResolution;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileRepositioning;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightMapRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeightMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightSaturation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightMapBaseSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeMaskSpan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeSaturation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeMinimum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlurDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlurDistanceSteps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlurRadialSteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseInfluence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainNoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainNoiseDetails;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainNoiseContrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainNoiseSharpness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainNoiseSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MountainNoisePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintLayerSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintLayerSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGeoTiffLandscapeClip constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoTiffLandscapeClip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGeoTiffLandscapeClip_Statics

// ********** Begin Class AGeoTiffLandscapeClip Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_G16Texture = { "G16Texture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, G16Texture), Z_Construct_UClass_UG16Texture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_G16Texture_MetaData), NewProp_G16Texture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_GeoTiffInfo = { "GeoTiffInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, GeoTiffInfo), Z_Construct_UScriptStruct_FGeoTiffInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoTiffInfo_MetaData), NewProp_GeoTiffInfo_MetaData) }; // 3519465639
void Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AGeoTiffLandscapeClip*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeoTiffLandscapeClip), &Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_ZIndex = { "ZIndex", nullptr, (EPropertyFlags)0x0010000000200005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, ZIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZIndex_MetaData), NewProp_ZIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, BlendMode), Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 2479256110
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_TargetResolution = { "TargetResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, TargetResolution), Z_Construct_UEnum_TerrainMagic_EGeoTiffTargetTextureResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetResolution_MetaData), NewProp_TargetResolution_MetaData) }; // 3858483344
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightMap = { "HeightMap", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, HeightMap), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMap_MetaData), NewProp_HeightMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_TileRepositioning = { "TileRepositioning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, TileRepositioning), Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileRepositioning_MetaData), NewProp_TileRepositioning_MetaData) }; // 4156952955
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightMapRange = { "HeightMapRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, HeightMapRange), Z_Construct_UScriptStruct_FTerrainMagicRemap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapRange_MetaData), NewProp_HeightMapRange_MetaData) }; // 31547383
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightMultiplier = { "HeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, HeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMultiplier_MetaData), NewProp_HeightMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightSaturation = { "HeightSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, HeightSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightSaturation_MetaData), NewProp_HeightSaturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightMapBaseSize = { "HeightMapBaseSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, HeightMapBaseSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapBaseSize_MetaData), NewProp_HeightMapBaseSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_FadeMode = { "FadeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, FadeMode), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMode_MetaData), NewProp_FadeMode_MetaData) }; // 1203186355
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_FadeMaskSpan = { "FadeMaskSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, FadeMaskSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMaskSpan_MetaData), NewProp_FadeMaskSpan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_FadeSaturation = { "FadeSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, FadeSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeSaturation_MetaData), NewProp_FadeSaturation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_FadeMinimum = { "FadeMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, FadeMinimum), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMinimum_MetaData), NewProp_FadeMinimum_MetaData) }; // 738197981
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_BlurDistance = { "BlurDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, BlurDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurDistance_MetaData), NewProp_BlurDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_BlurDistanceSteps = { "BlurDistanceSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, BlurDistanceSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurDistanceSteps_MetaData), NewProp_BlurDistanceSteps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_BlurRadialSteps = { "BlurRadialSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, BlurRadialSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurRadialSteps_MetaData), NewProp_BlurRadialSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_NoiseInfluence = { "NoiseInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, NoiseInfluence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseInfluence_MetaData), NewProp_NoiseInfluence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseScale = { "MountainNoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, MountainNoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseScale_MetaData), NewProp_MountainNoiseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseDetails = { "MountainNoiseDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, MountainNoiseDetails), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseDetails_MetaData), NewProp_MountainNoiseDetails_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseContrast = { "MountainNoiseContrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, MountainNoiseContrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseContrast_MetaData), NewProp_MountainNoiseContrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseSharpness = { "MountainNoiseSharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, MountainNoiseSharpness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseSharpness_MetaData), NewProp_MountainNoiseSharpness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseSeed = { "MountainNoiseSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, MountainNoiseSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseSeed_MetaData), NewProp_MountainNoiseSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoisePosition = { "MountainNoisePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, MountainNoisePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoisePosition_MetaData), NewProp_MountainNoisePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings, METADATA_PARAMS(0, nullptr) }; // 2141745445
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_PaintLayerSettings = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoTiffLandscapeClip, PaintLayerSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintLayerSettings_MetaData), NewProp_PaintLayerSettings_MetaData) }; // 2141745445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_G16Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_GeoTiffInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_ZIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_TargetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_TileRepositioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightMapRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_HeightMapBaseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_FadeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_FadeMaskSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_FadeSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_FadeMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_BlurDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_BlurDistanceSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_BlurRadialSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_NoiseInfluence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseSharpness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoiseSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_MountainNoisePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::NewProp_PaintLayerSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::PropPointers) < 2048);
// ********** End Class AGeoTiffLandscapeClip Property Definitions *********************************
UObject* (*const Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALandscapeClip,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::ClassParams = {
	&AGeoTiffLandscapeClip::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::Class_MetaDataParams)
};
void AGeoTiffLandscapeClip::StaticRegisterNativesAGeoTiffLandscapeClip()
{
}
UClass* Z_Construct_UClass_AGeoTiffLandscapeClip()
{
	if (!Z_Registration_Info_UClass_AGeoTiffLandscapeClip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoTiffLandscapeClip.OuterSingleton, Z_Construct_UClass_AGeoTiffLandscapeClip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeoTiffLandscapeClip.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGeoTiffLandscapeClip);
AGeoTiffLandscapeClip::~AGeoTiffLandscapeClip() {}
// ********** End Class AGeoTiffLandscapeClip ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h__Script_TerrainMagic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGeoTiffTargetTextureResolution_StaticEnum, TEXT("EGeoTiffTargetTextureResolution"), &Z_Registration_Info_UEnum_EGeoTiffTargetTextureResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3858483344U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeoTiffInfo::StaticStruct, Z_Construct_UScriptStruct_FGeoTiffInfo_Statics::NewStructOps, TEXT("GeoTiffInfo"),&Z_Registration_Info_UScriptStruct_FGeoTiffInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeoTiffInfo), 3519465639U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeoTiffLandscapeClip, AGeoTiffLandscapeClip::StaticClass, TEXT("AGeoTiffLandscapeClip"), &Z_Registration_Info_UClass_AGeoTiffLandscapeClip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoTiffLandscapeClip), 2909520839U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h__Script_TerrainMagic_1951364299{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h__Script_TerrainMagic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h__Script_TerrainMagic_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_GeoTiffLandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
