// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clips/NoiseLandscapeClip.h"
#include "Types/FTerrainMagicRemap.h"
#include "Types/LandscapeClipPaintLayerSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNoiseLandscapeClip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ALandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ANoiseLandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ANoiseLandscapeClip_NoRegister();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicRemap();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELandscapeClipNoiseType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeClipNoiseType;
static UEnum* ELandscapeClipNoiseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClipNoiseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeClipNoiseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("ELandscapeClipNoiseType"));
	}
	return Z_Registration_Info_UEnum_ELandscapeClipNoiseType.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeClipNoiseType>()
{
	return ELandscapeClipNoiseType_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LCN_MOUNTAIN.DisplayName", "Mountain Noise" },
		{ "LCN_MOUNTAIN.Name", "LCN_MOUNTAIN" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LCN_MOUNTAIN", (int64)LCN_MOUNTAIN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"ELandscapeClipNoiseType",
	"ELandscapeClipNoiseType",
	Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClipNoiseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeClipNoiseType.InnerSingleton, Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeClipNoiseType.InnerSingleton;
}
// ********** End Enum ELandscapeClipNoiseType *****************************************************

// ********** Begin Class ANoiseLandscapeClip ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ANoiseLandscapeClip;
UClass* ANoiseLandscapeClip::GetPrivateStaticClass()
{
	using TClass = ANoiseLandscapeClip;
	if (!Z_Registration_Info_UClass_ANoiseLandscapeClip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NoiseLandscapeClip"),
			Z_Registration_Info_UClass_ANoiseLandscapeClip.InnerSingleton,
			StaticRegisterNativesANoiseLandscapeClip,
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
	return Z_Registration_Info_UClass_ANoiseLandscapeClip.InnerSingleton;
}
UClass* Z_Construct_UClass_ANoiseLandscapeClip_NoRegister()
{
	return ANoiseLandscapeClip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANoiseLandscapeClip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Clips/NoiseLandscapeClip.h" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZIndex_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseType_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseScale_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseDetails_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseContrast_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseSharpness_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoiseSeed_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainNoisePosition_MetaData[] = {
		{ "Category", "01-General|Mountain Noise" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapRange_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMultiplier_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multiplier that will use with the following HeightMap range output values. This value doesn't scale with the clip actor's scaling factors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightSaturation_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapBaseSize_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the HeightMap in meters before scaling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMode_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMaskSpan_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeSaturation_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMinimum_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintLayerSettings_MetaData[] = {
		{ "Category", "02-Layer Painting" },
		{ "ModuleRelativePath", "Public/Clips/NoiseLandscapeClip.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ANoiseLandscapeClip constinit property declarations **********************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NoiseType;
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
// ********** End Class ANoiseLandscapeClip constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoiseLandscapeClip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ANoiseLandscapeClip_Statics

// ********** Begin Class ANoiseLandscapeClip Property Definitions *********************************
void Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ANoiseLandscapeClip*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANoiseLandscapeClip), &Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_ZIndex = { "ZIndex", nullptr, (EPropertyFlags)0x0010000000200005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, ZIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZIndex_MetaData), NewProp_ZIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, BlendMode), Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 2479256110
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_NoiseType = { "NoiseType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, NoiseType), Z_Construct_UEnum_TerrainMagic_ELandscapeClipNoiseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseType_MetaData), NewProp_NoiseType_MetaData) }; // 2795773820
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseScale = { "MountainNoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, MountainNoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseScale_MetaData), NewProp_MountainNoiseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseDetails = { "MountainNoiseDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, MountainNoiseDetails), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseDetails_MetaData), NewProp_MountainNoiseDetails_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseContrast = { "MountainNoiseContrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, MountainNoiseContrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseContrast_MetaData), NewProp_MountainNoiseContrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseSharpness = { "MountainNoiseSharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, MountainNoiseSharpness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseSharpness_MetaData), NewProp_MountainNoiseSharpness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseSeed = { "MountainNoiseSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, MountainNoiseSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoiseSeed_MetaData), NewProp_MountainNoiseSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoisePosition = { "MountainNoisePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, MountainNoisePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainNoisePosition_MetaData), NewProp_MountainNoisePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_HeightMapRange = { "HeightMapRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, HeightMapRange), Z_Construct_UScriptStruct_FTerrainMagicRemap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapRange_MetaData), NewProp_HeightMapRange_MetaData) }; // 31547383
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_HeightMultiplier = { "HeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, HeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMultiplier_MetaData), NewProp_HeightMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_HeightSaturation = { "HeightSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, HeightSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightSaturation_MetaData), NewProp_HeightSaturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_HeightMapBaseSize = { "HeightMapBaseSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, HeightMapBaseSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapBaseSize_MetaData), NewProp_HeightMapBaseSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_FadeMode = { "FadeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, FadeMode), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMode_MetaData), NewProp_FadeMode_MetaData) }; // 1203186355
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_FadeMaskSpan = { "FadeMaskSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, FadeMaskSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMaskSpan_MetaData), NewProp_FadeMaskSpan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_FadeSaturation = { "FadeSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, FadeSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeSaturation_MetaData), NewProp_FadeSaturation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_FadeMinimum = { "FadeMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, FadeMinimum), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMinimum_MetaData), NewProp_FadeMinimum_MetaData) }; // 738197981
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings, METADATA_PARAMS(0, nullptr) }; // 2141745445
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_PaintLayerSettings = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANoiseLandscapeClip, PaintLayerSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintLayerSettings_MetaData), NewProp_PaintLayerSettings_MetaData) }; // 2141745445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANoiseLandscapeClip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_ZIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_NoiseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseSharpness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoiseSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_MountainNoisePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_HeightMapRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_HeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_HeightSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_HeightMapBaseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_FadeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_FadeMaskSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_FadeSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_FadeMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseLandscapeClip_Statics::NewProp_PaintLayerSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseLandscapeClip_Statics::PropPointers) < 2048);
// ********** End Class ANoiseLandscapeClip Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_ANoiseLandscapeClip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALandscapeClip,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseLandscapeClip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoiseLandscapeClip_Statics::ClassParams = {
	&ANoiseLandscapeClip::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANoiseLandscapeClip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseLandscapeClip_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseLandscapeClip_Statics::Class_MetaDataParams), Z_Construct_UClass_ANoiseLandscapeClip_Statics::Class_MetaDataParams)
};
void ANoiseLandscapeClip::StaticRegisterNativesANoiseLandscapeClip()
{
}
UClass* Z_Construct_UClass_ANoiseLandscapeClip()
{
	if (!Z_Registration_Info_UClass_ANoiseLandscapeClip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoiseLandscapeClip.OuterSingleton, Z_Construct_UClass_ANoiseLandscapeClip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANoiseLandscapeClip.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ANoiseLandscapeClip);
ANoiseLandscapeClip::~ANoiseLandscapeClip() {}
// ********** End Class ANoiseLandscapeClip ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h__Script_TerrainMagic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeClipNoiseType_StaticEnum, TEXT("ELandscapeClipNoiseType"), &Z_Registration_Info_UEnum_ELandscapeClipNoiseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2795773820U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANoiseLandscapeClip, ANoiseLandscapeClip::StaticClass, TEXT("ANoiseLandscapeClip"), &Z_Registration_Info_UClass_ANoiseLandscapeClip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoiseLandscapeClip), 1036613247U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h__Script_TerrainMagic_992520797{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_NoiseLandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
