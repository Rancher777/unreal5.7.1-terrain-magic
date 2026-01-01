// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clips/HeightMapLandscapeClip.h"
#include "Types/FTerrainMagicRemap.h"
#include "Types/LandscapeClipPaintLayerSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHeightMapLandscapeClip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_AHeightMapLandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_AHeightMapLandscapeClip_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ALandscapeClip();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FTerrainMagicRemap();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHeightMapLandscapeClip **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHeightMapLandscapeClip;
UClass* AHeightMapLandscapeClip::GetPrivateStaticClass()
{
	using TClass = AHeightMapLandscapeClip;
	if (!Z_Registration_Info_UClass_AHeightMapLandscapeClip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HeightMapLandscapeClip"),
			Z_Registration_Info_UClass_AHeightMapLandscapeClip.InnerSingleton,
			StaticRegisterNativesAHeightMapLandscapeClip,
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
	return Z_Registration_Info_UClass_AHeightMapLandscapeClip.InnerSingleton;
}
UClass* Z_Construct_UClass_AHeightMapLandscapeClip_NoRegister()
{
	return AHeightMapLandscapeClip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHeightMapLandscapeClip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Clips/HeightMapLandscapeClip.h" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZIndex_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMap_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapRange_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMultiplier_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multiplier that will use with the following HeightMap range output values. This value doesn't scale with the clip actor's scaling factors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightSaturation_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapBaseSize_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the HeightMap in meters before scaling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMode_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMaskSpan_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeSaturation_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMinimum_MetaData[] = {
		{ "Category", "01-General|Fading" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintLayerSettings_MetaData[] = {
		{ "Category", "02-Layer Painting" },
		{ "ModuleRelativePath", "Public/Clips/HeightMapLandscapeClip.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AHeightMapLandscapeClip constinit property declarations ******************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMap;
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
// ********** End Class AHeightMapLandscapeClip constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeightMapLandscapeClip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHeightMapLandscapeClip_Statics

// ********** Begin Class AHeightMapLandscapeClip Property Definitions *****************************
void Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AHeightMapLandscapeClip*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeightMapLandscapeClip), &Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_ZIndex = { "ZIndex", nullptr, (EPropertyFlags)0x0010000000200005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, ZIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZIndex_MetaData), NewProp_ZIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, BlendMode), Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 2479256110
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightMap = { "HeightMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, HeightMap), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMap_MetaData), NewProp_HeightMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightMapRange = { "HeightMapRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, HeightMapRange), Z_Construct_UScriptStruct_FTerrainMagicRemap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapRange_MetaData), NewProp_HeightMapRange_MetaData) }; // 31547383
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightMultiplier = { "HeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, HeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMultiplier_MetaData), NewProp_HeightMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightSaturation = { "HeightSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, HeightSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightSaturation_MetaData), NewProp_HeightSaturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightMapBaseSize = { "HeightMapBaseSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, HeightMapBaseSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapBaseSize_MetaData), NewProp_HeightMapBaseSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_FadeMode = { "FadeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, FadeMode), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMode_MetaData), NewProp_FadeMode_MetaData) }; // 1203186355
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_FadeMaskSpan = { "FadeMaskSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, FadeMaskSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMaskSpan_MetaData), NewProp_FadeMaskSpan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_FadeSaturation = { "FadeSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, FadeSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeSaturation_MetaData), NewProp_FadeSaturation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_FadeMinimum = { "FadeMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, FadeMinimum), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMinimum_MetaData), NewProp_FadeMinimum_MetaData) }; // 738197981
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings, METADATA_PARAMS(0, nullptr) }; // 2141745445
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_PaintLayerSettings = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeightMapLandscapeClip, PaintLayerSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintLayerSettings_MetaData), NewProp_PaintLayerSettings_MetaData) }; // 2141745445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeightMapLandscapeClip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_ZIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightMapRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_HeightMapBaseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_FadeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_FadeMaskSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_FadeSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_FadeMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapLandscapeClip_Statics::NewProp_PaintLayerSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapLandscapeClip_Statics::PropPointers) < 2048);
// ********** End Class AHeightMapLandscapeClip Property Definitions *******************************
UObject* (*const Z_Construct_UClass_AHeightMapLandscapeClip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALandscapeClip,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapLandscapeClip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeightMapLandscapeClip_Statics::ClassParams = {
	&AHeightMapLandscapeClip::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHeightMapLandscapeClip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapLandscapeClip_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapLandscapeClip_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeightMapLandscapeClip_Statics::Class_MetaDataParams)
};
void AHeightMapLandscapeClip::StaticRegisterNativesAHeightMapLandscapeClip()
{
}
UClass* Z_Construct_UClass_AHeightMapLandscapeClip()
{
	if (!Z_Registration_Info_UClass_AHeightMapLandscapeClip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeightMapLandscapeClip.OuterSingleton, Z_Construct_UClass_AHeightMapLandscapeClip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeightMapLandscapeClip.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHeightMapLandscapeClip);
AHeightMapLandscapeClip::~AHeightMapLandscapeClip() {}
// ********** End Class AHeightMapLandscapeClip ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_HeightMapLandscapeClip_h__Script_TerrainMagic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeightMapLandscapeClip, AHeightMapLandscapeClip::StaticClass, TEXT("AHeightMapLandscapeClip"), &Z_Registration_Info_UClass_AHeightMapLandscapeClip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeightMapLandscapeClip), 868887478U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_HeightMapLandscapeClip_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_HeightMapLandscapeClip_h__Script_TerrainMagic_2601759843{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_HeightMapLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_HeightMapLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
