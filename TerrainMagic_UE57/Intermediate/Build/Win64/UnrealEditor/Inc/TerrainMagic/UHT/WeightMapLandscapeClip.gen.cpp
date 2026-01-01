// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clips/WeightMapLandscapeClip.h"
#include "Types/LandscapeClipPaintLayerSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWeightMapLandscapeClip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ALandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_AWeightMapLandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_AWeightMapLandscapeClip_NoRegister();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWeightMapLandscapeClip **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AWeightMapLandscapeClip;
UClass* AWeightMapLandscapeClip::GetPrivateStaticClass()
{
	using TClass = AWeightMapLandscapeClip;
	if (!Z_Registration_Info_UClass_AWeightMapLandscapeClip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WeightMapLandscapeClip"),
			Z_Registration_Info_UClass_AWeightMapLandscapeClip.InnerSingleton,
			StaticRegisterNativesAWeightMapLandscapeClip,
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
	return Z_Registration_Info_UClass_AWeightMapLandscapeClip.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeightMapLandscapeClip_NoRegister()
{
	return AWeightMapLandscapeClip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeightMapLandscapeClip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Clips/WeightMapLandscapeClip.h" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZIndex_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMultiplier_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multiplier that will use with the following HeightMap range output values. This value doesn't scale with the clip actor's scaling factors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightSaturation_MetaData[] = {
		{ "Category", "01-General|Modify Height" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapBaseSize_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the HeightMap in meters before scaling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMode_MetaData[] = {
		{ "Category", "02-Layer Painting|Fading" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeMaskSpan_MetaData[] = {
		{ "Category", "02-Layer Painting|Fading" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeSaturation_MetaData[] = {
		{ "Category", "02-Layer Painting|Fading" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintLayerSettings_MetaData[] = {
		{ "Category", "02-Layer Painting" },
		{ "ModuleRelativePath", "Public/Clips/WeightMapLandscapeClip.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AWeightMapLandscapeClip constinit property declarations ******************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeightMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightSaturation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightMapBaseSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeMaskSpan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeSaturation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintLayerSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintLayerSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AWeightMapLandscapeClip constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeightMapLandscapeClip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AWeightMapLandscapeClip_Statics

// ********** Begin Class AWeightMapLandscapeClip Property Definitions *****************************
void Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AWeightMapLandscapeClip*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeightMapLandscapeClip), &Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_ZIndex = { "ZIndex", nullptr, (EPropertyFlags)0x0010000000200005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeightMapLandscapeClip, ZIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZIndex_MetaData), NewProp_ZIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_HeightMultiplier = { "HeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeightMapLandscapeClip, HeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMultiplier_MetaData), NewProp_HeightMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_HeightSaturation = { "HeightSaturation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeightMapLandscapeClip, HeightSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightSaturation_MetaData), NewProp_HeightSaturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_HeightMapBaseSize = { "HeightMapBaseSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeightMapLandscapeClip, HeightMapBaseSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapBaseSize_MetaData), NewProp_HeightMapBaseSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_FadeMode = { "FadeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeightMapLandscapeClip, FadeMode), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMode_MetaData), NewProp_FadeMode_MetaData) }; // 1203186355
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_FadeMaskSpan = { "FadeMaskSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeightMapLandscapeClip, FadeMaskSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeMaskSpan_MetaData), NewProp_FadeMaskSpan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_FadeSaturation = { "FadeSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeightMapLandscapeClip, FadeSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeSaturation_MetaData), NewProp_FadeSaturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings, METADATA_PARAMS(0, nullptr) }; // 2141745445
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_PaintLayerSettings = { "PaintLayerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeightMapLandscapeClip, PaintLayerSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintLayerSettings_MetaData), NewProp_PaintLayerSettings_MetaData) }; // 2141745445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeightMapLandscapeClip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_ZIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_HeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_HeightSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_HeightMapBaseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_FadeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_FadeMaskSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_FadeSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_PaintLayerSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeightMapLandscapeClip_Statics::NewProp_PaintLayerSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeightMapLandscapeClip_Statics::PropPointers) < 2048);
// ********** End Class AWeightMapLandscapeClip Property Definitions *******************************
UObject* (*const Z_Construct_UClass_AWeightMapLandscapeClip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALandscapeClip,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeightMapLandscapeClip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeightMapLandscapeClip_Statics::ClassParams = {
	&AWeightMapLandscapeClip::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeightMapLandscapeClip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeightMapLandscapeClip_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeightMapLandscapeClip_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeightMapLandscapeClip_Statics::Class_MetaDataParams)
};
void AWeightMapLandscapeClip::StaticRegisterNativesAWeightMapLandscapeClip()
{
}
UClass* Z_Construct_UClass_AWeightMapLandscapeClip()
{
	if (!Z_Registration_Info_UClass_AWeightMapLandscapeClip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeightMapLandscapeClip.OuterSingleton, Z_Construct_UClass_AWeightMapLandscapeClip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeightMapLandscapeClip.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AWeightMapLandscapeClip);
AWeightMapLandscapeClip::~AWeightMapLandscapeClip() {}
// ********** End Class AWeightMapLandscapeClip ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_WeightMapLandscapeClip_h__Script_TerrainMagic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeightMapLandscapeClip, AWeightMapLandscapeClip::StaticClass, TEXT("AWeightMapLandscapeClip"), &Z_Registration_Info_UClass_AWeightMapLandscapeClip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeightMapLandscapeClip), 1759318626U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_WeightMapLandscapeClip_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_WeightMapLandscapeClip_h__Script_TerrainMagic_326396026{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_WeightMapLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_WeightMapLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
