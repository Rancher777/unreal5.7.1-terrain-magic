// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clips/BaseLandscapeClip.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseLandscapeClip() {}

// ********** Begin Cross Module References ********************************************************
TERRAINMAGIC_API UClass* Z_Construct_UClass_ABaseLandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ABaseLandscapeClip_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ALandscapeClip();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBaseLandscapeClipBaseValue ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseLandscapeClipBaseValue;
static UEnum* EBaseLandscapeClipBaseValue_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBaseLandscapeClipBaseValue.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBaseLandscapeClipBaseValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("EBaseLandscapeClipBaseValue"));
	}
	return Z_Registration_Info_UEnum_EBaseLandscapeClipBaseValue.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EBaseLandscapeClipBaseValue>()
{
	return EBaseLandscapeClipBaseValue_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BLCBV_ABSOLUTE_MAXIMUM.DisplayName", "Absolute Maximum" },
		{ "BLCBV_ABSOLUTE_MAXIMUM.Name", "BLCBV_ABSOLUTE_MAXIMUM" },
		{ "BLCBV_ABSOLUTE_MINIMUM.DisplayName", "Absolute Minimum" },
		{ "BLCBV_ABSOLUTE_MINIMUM.Name", "BLCBV_ABSOLUTE_MINIMUM" },
		{ "BLCBV_ZERO.DisplayName", "0" },
		{ "BLCBV_ZERO.Name", "BLCBV_ZERO" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Clips/BaseLandscapeClip.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BLCBV_ZERO", (int64)BLCBV_ZERO },
		{ "BLCBV_ABSOLUTE_MINIMUM", (int64)BLCBV_ABSOLUTE_MINIMUM },
		{ "BLCBV_ABSOLUTE_MAXIMUM", (int64)BLCBV_ABSOLUTE_MAXIMUM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"EBaseLandscapeClipBaseValue",
	"EBaseLandscapeClipBaseValue",
	Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue()
{
	if (!Z_Registration_Info_UEnum_EBaseLandscapeClipBaseValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseLandscapeClipBaseValue.InnerSingleton, Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBaseLandscapeClipBaseValue.InnerSingleton;
}
// ********** End Enum EBaseLandscapeClipBaseValue *************************************************

// ********** Begin Class ABaseLandscapeClip *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseLandscapeClip;
UClass* ABaseLandscapeClip::GetPrivateStaticClass()
{
	using TClass = ABaseLandscapeClip;
	if (!Z_Registration_Info_UClass_ABaseLandscapeClip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BaseLandscapeClip"),
			Z_Registration_Info_UClass_ABaseLandscapeClip.InnerSingleton,
			StaticRegisterNativesABaseLandscapeClip,
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
	return Z_Registration_Info_UClass_ABaseLandscapeClip.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseLandscapeClip_NoRegister()
{
	return ABaseLandscapeClip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseLandscapeClip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Clips/BaseLandscapeClip.h" },
		{ "ModuleRelativePath", "Public/Clips/BaseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/BaseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZIndex_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/BaseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseValuePreset_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/BaseLandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseValue_MetaData[] = {
		{ "Category", "01-General" },
		{ "ModuleRelativePath", "Public/Clips/BaseLandscapeClip.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABaseLandscapeClip constinit property declarations ***********************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BaseValuePreset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABaseLandscapeClip constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseLandscapeClip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABaseLandscapeClip_Statics

// ********** Begin Class ABaseLandscapeClip Property Definitions **********************************
void Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ABaseLandscapeClip*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseLandscapeClip), &Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_ZIndex = { "ZIndex", nullptr, (EPropertyFlags)0x0010000000200005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseLandscapeClip, ZIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZIndex_MetaData), NewProp_ZIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_BaseValuePreset = { "BaseValuePreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseLandscapeClip, BaseValuePreset), Z_Construct_UEnum_TerrainMagic_EBaseLandscapeClipBaseValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseValuePreset_MetaData), NewProp_BaseValuePreset_MetaData) }; // 2617649926
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseLandscapeClip, BaseValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseValue_MetaData), NewProp_BaseValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseLandscapeClip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_ZIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_BaseValuePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLandscapeClip_Statics::NewProp_BaseValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLandscapeClip_Statics::PropPointers) < 2048);
// ********** End Class ABaseLandscapeClip Property Definitions ************************************
UObject* (*const Z_Construct_UClass_ABaseLandscapeClip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALandscapeClip,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLandscapeClip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseLandscapeClip_Statics::ClassParams = {
	&ABaseLandscapeClip::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseLandscapeClip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLandscapeClip_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLandscapeClip_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseLandscapeClip_Statics::Class_MetaDataParams)
};
void ABaseLandscapeClip::StaticRegisterNativesABaseLandscapeClip()
{
}
UClass* Z_Construct_UClass_ABaseLandscapeClip()
{
	if (!Z_Registration_Info_UClass_ABaseLandscapeClip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseLandscapeClip.OuterSingleton, Z_Construct_UClass_ABaseLandscapeClip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseLandscapeClip.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABaseLandscapeClip);
ABaseLandscapeClip::~ABaseLandscapeClip() {}
// ********** End Class ABaseLandscapeClip *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h__Script_TerrainMagic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBaseLandscapeClipBaseValue_StaticEnum, TEXT("EBaseLandscapeClipBaseValue"), &Z_Registration_Info_UEnum_EBaseLandscapeClipBaseValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2617649926U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseLandscapeClip, ABaseLandscapeClip::StaticClass, TEXT("ABaseLandscapeClip"), &Z_Registration_Info_UClass_ABaseLandscapeClip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseLandscapeClip), 2425205881U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h__Script_TerrainMagic_3257316629{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Clips_BaseLandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
