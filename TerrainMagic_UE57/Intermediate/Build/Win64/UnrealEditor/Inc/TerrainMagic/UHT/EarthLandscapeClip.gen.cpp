// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clips/EarthLandscapeClip.h"
#include "LandscapeClip.h"
#include "Types/FTerrainMagicRemap.h"
#include "Types/LandscapeClipPaintLayerSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEarthLandscapeClip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_AEarthLandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_AEarthLandscapeClip_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ALandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_UG16Texture_NoRegister();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_EMapSource();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicRemap();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EHeightMapTileWidth *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeightMapTileWidth;
static UEnum* EHeightMapTileWidth_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHeightMapTileWidth.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHeightMapTileWidth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("EHeightMapTileWidth"));
	}
	return Z_Registration_Info_UEnum_EHeightMapTileWidth.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EHeightMapTileWidth>()
{
	return EHeightMapTileWidth_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HMW_1024.DisplayName", "1024" },
		{ "HMW_1024.Name", "HMW_1024" },
		{ "HMW_2048.DisplayName", "2048" },
		{ "HMW_2048.Name", "HMW_2048" },
		{ "HMW_4096.DisplayName", "4096" },
		{ "HMW_4096.Name", "HMW_4096" },
		{ "HMW_512.DisplayName", "512" },
		{ "HMW_512.Name", "HMW_512" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "HMW_512", (int64)HMW_512 },
		{ "HMW_1024", (int64)HMW_1024 },
		{ "HMW_2048", (int64)HMW_2048 },
		{ "HMW_4096", (int64)HMW_4096 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"EHeightMapTileWidth",
	"EHeightMapTileWidth",
	Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth()
{
	if (!Z_Registration_Info_UEnum_EHeightMapTileWidth.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeightMapTileWidth.InnerSingleton, Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHeightMapTileWidth.InnerSingleton;
}
// ********** End Enum EHeightMapTileWidth *********************************************************

// ********** Begin Enum EHeightMapTileHeightRange *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeightMapTileHeightRange;
static UEnum* EHeightMapTileHeightRange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHeightMapTileHeightRange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHeightMapTileHeightRange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("EHeightMapTileHeightRange"));
	}
	return Z_Registration_Info_UEnum_EHeightMapTileHeightRange.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EHeightMapTileHeightRange>()
{
	return EHeightMapTileHeightRange_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HMHR_POSITIVE.DisplayName", "Positive Only" },
		{ "HMHR_POSITIVE.Name", "HMHR_POSITIVE" },
		{ "HMHR_POSITIVE_NEGATIVE.DisplayName", "Positive & Negative" },
		{ "HMHR_POSITIVE_NEGATIVE.Name", "HMHR_POSITIVE_NEGATIVE" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "HMHR_POSITIVE", (int64)HMHR_POSITIVE },
		{ "HMHR_POSITIVE_NEGATIVE", (int64)HMHR_POSITIVE_NEGATIVE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"EHeightMapTileHeightRange",
	"EHeightMapTileHeightRange",
	Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange()
{
	if (!Z_Registration_Info_UEnum_EHeightMapTileHeightRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeightMapTileHeightRange.InnerSingleton, Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHeightMapTileHeightRange.InnerSingleton;
}
// ********** End Enum EHeightMapTileHeightRange ***************************************************

// ********** Begin Class AEarthLandscapeClip ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEarthLandscapeClip;
UClass* AEarthLandscapeClip::GetPrivateStaticClass()
{
	using TClass = AEarthLandscapeClip;
	if (!Z_Registration_Info_UClass_AEarthLandscapeClip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EarthLandscapeClip"),
			Z_Registration_Info_UClass_AEarthLandscapeClip.InnerSingleton,
			StaticRegisterNativesAEarthLandscapeClip,
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
	return Z_Registration_Info_UClass_AEarthLandscapeClip.InnerSingleton;
}
UClass* Z_Construct_UClass_AEarthLandscapeClip_NoRegister()
{
	return AEarthLandscapeClip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEarthLandscapeClip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Clips/EarthLandscapeClip.h" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_G16Texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZIndex_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMap_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileDownloadProgress_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapSource_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileInfoString_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileResolution_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRange_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileRepositioning_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurDistance_MetaData[] = {
		{ "Category", "01-General|Radial Blur" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurDistanceSteps_MetaData[] = {
		{ "Category", "01-General|Radial Blur" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurRadialSteps_MetaData[] = {
		{ "Category", "01-General|Radial Blur" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseInfluence_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseScale_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseDetails_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseContrast_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseSharpness_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseSeed_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoisePosition_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapRange_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMultiplier_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multiplier that will use with the following HeightMap range output values. This value doesn't scale with the clip actor's scaling factors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightSaturation_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapBaseSize_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the HeightMap in meters before scaling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMode_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMaskSpan_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeSaturation_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMinimum_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintLayerSettings_MetaData[] = {
		{ "Category", "02-Layer Painting" },
		{ "ModuleRelativePath", "Public/Clips/EarthLandscapeClip.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AEarthLandscapeClip constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_G16Texture;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileDownloadProgress;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MapSource;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileInfoString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeightRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileRepositioning;
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightMapRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeightMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightSaturation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightMapBaseSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeMaskSpan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeSaturation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeMinimum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintLayerSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintLayerSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AEarthLandscapeClip constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEarthLandscapeClip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEarthLandscapeClip_Statics

// ********** Begin Class AEarthLandscapeClip Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_G16Texture = { "G16Texture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, G16Texture), Z_Construct_UClass_UG16Texture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_G16Texture_MetaData), NewProp_G16Texture_MetaData) };
void Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AEarthLandscapeClip*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEarthLandscapeClip), &Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_ZIndex = { "ZIndex", nullptr, (EPropertyFlags)0x0010000000200005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, ZIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZIndex_MetaData), NewProp_ZIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, BlendMode), Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 2479256110
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightMap = { "HeightMap", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, HeightMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMap_MetaData), NewProp_HeightMap_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_TileDownloadProgress = { "TileDownloadProgress", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, TileDownloadProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileDownloadProgress_MetaData), NewProp_TileDownloadProgress_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MapSource = { "MapSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, MapSource), Z_Construct_UEnum_TerrainMagic_EMapSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapSource_MetaData), NewProp_MapSource_MetaData) }; // 2661696501
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_TileInfoString = { "TileInfoString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, TileInfoString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileInfoString_MetaData), NewProp_TileInfoString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_TileResolution = { "TileResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, TileResolution), Z_Construct_UEnum_TerrainMagic_EHeightMapTileWidth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileResolution_MetaData), NewProp_TileResolution_MetaData) }; // 2852071077
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightRange = { "HeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, HeightRange), Z_Construct_UEnum_TerrainMagic_EHeightMapTileHeightRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRange_MetaData), NewProp_HeightRange_MetaData) }; // 2398353688
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_TileRepositioning = { "TileRepositioning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, TileRepositioning), Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileRepositioning_MetaData), NewProp_TileRepositioning_MetaData) }; // 4156952955
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_BlurDistance = { "BlurDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, BlurDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurDistance_MetaData), NewProp_BlurDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_BlurDistanceSteps = { "BlurDistanceSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, BlurDistanceSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurDistanceSteps_MetaData), NewProp_BlurDistanceSteps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_BlurRadialSteps = { "BlurRadialSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, BlurRadialSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurRadialSteps_MetaData), NewProp_BlurRadialSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_NoiseInfluence = { "NoiseInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, NoiseInfluence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseInfluence_MetaData), NewProp_NoiseInfluence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseScale = { "MountainNoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, MountainNoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseScale_MetaData), NewProp_MountainNoiseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseDetails = { "MountainNoiseDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, MountainNoiseDetails), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseDetails_MetaData), NewProp_MountainNoiseDetails_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseContrast = { "MountainNoiseContrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, MountainNoiseContrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseContrast_MetaData), NewProp_MountainNoiseContrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseSharpness = { "MountainNoiseSharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, MountainNoiseSharpness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseSharpness_MetaData), NewProp_MountainNoiseSharpness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseSeed = { "MountainNoiseSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, MountainNoiseSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseSeed_MetaData), NewProp_MountainNoiseSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoisePosition = { "MountainNoisePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, MountainNoisePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoisePosition_MetaData), NewProp_MountainNoisePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightMapRange = { "HeightMapRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, HeightMapRange), Z_Construct_UScriptStruct_FTerrainMagicRemap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapRange_MetaData), NewProp_HeightMapRange_MetaData) }; // 31547383
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightMultiplier = { "HeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, HeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMultiplier_MetaData), NewProp_HeightMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightSaturation = { "HeightSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, HeightSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightSaturation_MetaData), NewProp_HeightSaturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightMapBaseSize = { "HeightMapBaseSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, HeightMapBaseSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapBaseSize_MetaData), NewProp_HeightMapBaseSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_FadeMode = { "FadeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, FadeMode), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMode_MetaData), NewProp_FadeMode_MetaData) }; // 1203186355
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_FadeMaskSpan = { "FadeMaskSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, FadeMaskSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMaskSpan_MetaData), NewProp_FadeMaskSpan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_FadeSaturation = { "FadeSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, FadeSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeSaturation_MetaData), NewProp_FadeSaturation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_FadeMinimum = { "FadeMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, FadeMinimum), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMinimum_MetaData), NewProp_FadeMinimum_MetaData) }; // 738197981
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings, METADATA_PARAMS(0, nullptr) }; // 2141745445
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_PaintLayerSettings = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEarthLandscapeClip, PaintLayerSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintLayerSettings_MetaData), NewProp_PaintLayerSettings_MetaData) }; // 2141745445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEarthLandscapeClip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_G16Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_ZIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_TileDownloadProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MapSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_TileInfoString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_TileResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_TileRepositioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_BlurDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_BlurDistanceSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_BlurRadialSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_NoiseInfluence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseSharpness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoiseSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_MountainNoisePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightMapRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_HeightMapBaseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_FadeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_FadeMaskSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_FadeSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_FadeMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEarthLandscapeClip_Statics::NewProp_PaintLayerSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEarthLandscapeClip_Statics::PropPointers) < 2048);
// ********** End Class AEarthLandscapeClip Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_AEarthLandscapeClip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALandscapeClip,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEarthLandscapeClip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEarthLandscapeClip_Statics::ClassParams = {
	&AEarthLandscapeClip::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEarthLandscapeClip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEarthLandscapeClip_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEarthLandscapeClip_Statics::Class_MetaDataParams), Z_Construct_UClass_AEarthLandscapeClip_Statics::Class_MetaDataParams)
};
void AEarthLandscapeClip::StaticRegisterNativesAEarthLandscapeClip()
{
}
UClass* Z_Construct_UClass_AEarthLandscapeClip()
{
	if (!Z_Registration_Info_UClass_AEarthLandscapeClip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEarthLandscapeClip.OuterSingleton, Z_Construct_UClass_AEarthLandscapeClip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEarthLandscapeClip.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEarthLandscapeClip);
AEarthLandscapeClip::~AEarthLandscapeClip() {}
// ********** End Class AEarthLandscapeClip ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h__Script_TerrainMagic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHeightMapTileWidth_StaticEnum, TEXT("EHeightMapTileWidth"), &Z_Registration_Info_UEnum_EHeightMapTileWidth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2852071077U) },
		{ EHeightMapTileHeightRange_StaticEnum, TEXT("EHeightMapTileHeightRange"), &Z_Registration_Info_UEnum_EHeightMapTileHeightRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2398353688U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEarthLandscapeClip, AEarthLandscapeClip::StaticClass, TEXT("AEarthLandscapeClip"), &Z_Registration_Info_UClass_AEarthLandscapeClip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEarthLandscapeClip), 2548274650U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h__Script_TerrainMagic_2976952163{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_EarthLandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
