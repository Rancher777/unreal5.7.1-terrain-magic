// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeClip.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLandscapeClip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ALandscapeClip();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ALandscapeClip_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_UOutlineComponent_NoRegister();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELandscapeClipBlendMode ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeClipBlendMode;
static UEnum* ELandscapeClipBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClipBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeClipBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("ELandscapeClipBlendMode"));
	}
	return Z_Registration_Info_UEnum_ELandscapeClipBlendMode.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeClipBlendMode>()
{
	return ELandscapeClipBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LCB_ADD.DisplayName", "Add" },
		{ "LCB_ADD.Name", "LCB_ADD" },
		{ "LCB_AVERAGE.DisplayName", "Average" },
		{ "LCB_AVERAGE.Name", "LCB_AVERAGE" },
		{ "LCB_COPY.DisplayName", "Copy" },
		{ "LCB_COPY.Name", "LCB_COPY" },
		{ "LCB_Max.DisplayName", "Max" },
		{ "LCB_Max.Name", "LCB_Max" },
		{ "LCB_MIN.DisplayName", "Min" },
		{ "LCB_MIN.Name", "LCB_MIN" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LCB_ADD", (int64)LCB_ADD },
		{ "LCB_AVERAGE", (int64)LCB_AVERAGE },
		{ "LCB_MIN", (int64)LCB_MIN },
		{ "LCB_Max", (int64)LCB_Max },
		{ "LCB_COPY", (int64)LCB_COPY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"ELandscapeClipBlendMode",
	"ELandscapeClipBlendMode",
	Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClipBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeClipBlendMode.InnerSingleton, Z_Construct_UEnum_TerrainMagic_ELandscapeClipBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeClipBlendMode.InnerSingleton;
}
// ********** End Enum ELandscapeClipBlendMode *****************************************************

// ********** Begin Enum ELandscapeClipFadeMode ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeClipFadeMode;
static UEnum* ELandscapeClipFadeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClipFadeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeClipFadeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("ELandscapeClipFadeMode"));
	}
	return Z_Registration_Info_UEnum_ELandscapeClipFadeMode.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeClipFadeMode>()
{
	return ELandscapeClipFadeMode_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LCF_BOX.DisplayName", "Box" },
		{ "LCF_BOX.Name", "LCF_BOX" },
		{ "LCF_CIRCULAR.DisplayName", "Circular" },
		{ "LCF_CIRCULAR.Name", "LCF_CIRCULAR" },
		{ "LCF_NONE.DisplayName", "None" },
		{ "LCF_NONE.Name", "LCF_NONE" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LCF_NONE", (int64)LCF_NONE },
		{ "LCF_CIRCULAR", (int64)LCF_CIRCULAR },
		{ "LCF_BOX", (int64)LCF_BOX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"ELandscapeClipFadeMode",
	"ELandscapeClipFadeMode",
	Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClipFadeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeClipFadeMode.InnerSingleton, Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeClipFadeMode.InnerSingleton;
}
// ********** End Enum ELandscapeClipFadeMode ******************************************************

// ********** Begin Enum ELandscapeClipFadeMinimum *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeClipFadeMinimum;
static UEnum* ELandscapeClipFadeMinimum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClipFadeMinimum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeClipFadeMinimum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("ELandscapeClipFadeMinimum"));
	}
	return Z_Registration_Info_UEnum_ELandscapeClipFadeMinimum.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeClipFadeMinimum>()
{
	return ELandscapeClipFadeMinimum_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LCFM_REMAP_MIN.DisplayName", "HeightMap Range Output Min" },
		{ "LCFM_REMAP_MIN.Name", "LCFM_REMAP_MIN" },
		{ "LCFM_ZERO.DisplayName", "0" },
		{ "LCFM_ZERO.Name", "LCFM_ZERO" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LCFM_ZERO", (int64)LCFM_ZERO },
		{ "LCFM_REMAP_MIN", (int64)LCFM_REMAP_MIN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"ELandscapeClipFadeMinimum",
	"ELandscapeClipFadeMinimum",
	Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeClipFadeMinimum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeClipFadeMinimum.InnerSingleton, Z_Construct_UEnum_TerrainMagic_ELandscapeClipFadeMinimum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeClipFadeMinimum.InnerSingleton;
}
// ********** End Enum ELandscapeClipFadeMinimum ***************************************************

// ********** Begin ScriptStruct FLandscapeClipTileRepositioning ***********************************
struct Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLandscapeClipTileRepositioning); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeClipTileRepositioning); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Panning_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In Degrees" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeClipTileRepositioning constinit property declarations ***
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Panning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeClipTileRepositioning constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeClipTileRepositioning>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeClipTileRepositioning;
class UScriptStruct* FLandscapeClipTileRepositioning::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipTileRepositioning.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandscapeClipTileRepositioning.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("LandscapeClipTileRepositioning"));
	}
	return Z_Registration_Info_UScriptStruct_FLandscapeClipTileRepositioning.OuterSingleton;
	}

// ********** Begin ScriptStruct FLandscapeClipTileRepositioning Property Definitions **************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipTileRepositioning, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::NewProp_Panning = { "Panning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipTileRepositioning, Panning), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Panning_MetaData), NewProp_Panning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipTileRepositioning, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::NewProp_Panning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeClipTileRepositioning Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"LandscapeClipTileRepositioning",
	Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::PropPointers),
	sizeof(FLandscapeClipTileRepositioning),
	alignof(FLandscapeClipTileRepositioning),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipTileRepositioning.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeClipTileRepositioning.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeClipTileRepositioning.InnerSingleton);
}
// ********** End ScriptStruct FLandscapeClipTileRepositioning *************************************

// ********** Begin Class ALandscapeClip ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ALandscapeClip;
UClass* ALandscapeClip::GetPrivateStaticClass()
{
	using TClass = ALandscapeClip;
	if (!Z_Registration_Info_UClass_ALandscapeClip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LandscapeClip"),
			Z_Registration_Info_UClass_ALandscapeClip.InnerSingleton,
			StaticRegisterNativesALandscapeClip,
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
	return Z_Registration_Info_UClass_ALandscapeClip.InnerSingleton;
}
UClass* Z_Construct_UClass_ALandscapeClip_NoRegister()
{
	return ALandscapeClip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALandscapeClip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeClip.h" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialZPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutline_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Actor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[] = {
		{ "Category", "Actor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLocation_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeScale_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSize_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialForHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialForWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeClip.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALandscapeClip constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialZPosition;
	static void NewProp_bShowOutline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialForHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialForWeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ALandscapeClip constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeClip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ALandscapeClip_Statics

// ********** Begin Class ALandscapeClip Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_InitialZPosition = { "InitialZPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeClip, InitialZPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialZPosition_MetaData), NewProp_InitialZPosition_MetaData) };
void Z_Construct_UClass_ALandscapeClip_Statics::NewProp_bShowOutline_SetBit(void* Obj)
{
	((ALandscapeClip*)Obj)->bShowOutline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_bShowOutline = { "bShowOutline", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeClip), &Z_Construct_UClass_ALandscapeClip_Statics::NewProp_bShowOutline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOutline_MetaData), NewProp_bShowOutline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeClip, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeClip, OutlineComponent), Z_Construct_UClass_UOutlineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineComponent_MetaData), NewProp_OutlineComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_LandscapeLocation = { "LandscapeLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeClip, LandscapeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLocation_MetaData), NewProp_LandscapeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_LandscapeScale = { "LandscapeScale", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeClip, LandscapeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeScale_MetaData), NewProp_LandscapeScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_LandscapeSize = { "LandscapeSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeClip, LandscapeSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSize_MetaData), NewProp_LandscapeSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_MaterialForHeight = { "MaterialForHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeClip, MaterialForHeight), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialForHeight_MetaData), NewProp_MaterialForHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_MaterialForWeight = { "MaterialForWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeClip, MaterialForWeight), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialForWeight_MetaData), NewProp_MaterialForWeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeClip_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeClip, PreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterial_MetaData), NewProp_PreviewMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeClip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_InitialZPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_bShowOutline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_OutlineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_LandscapeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_LandscapeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_LandscapeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_MaterialForHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_MaterialForWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeClip_Statics::NewProp_PreviewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeClip_Statics::PropPointers) < 2048);
// ********** End Class ALandscapeClip Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_ALandscapeClip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeClip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeClip_Statics::ClassParams = {
	&ALandscapeClip::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALandscapeClip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeClip_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeClip_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscapeClip_Statics::Class_MetaDataParams)
};
void ALandscapeClip::StaticRegisterNativesALandscapeClip()
{
}
UClass* Z_Construct_UClass_ALandscapeClip()
{
	if (!Z_Registration_Info_UClass_ALandscapeClip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeClip.OuterSingleton, Z_Construct_UClass_ALandscapeClip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandscapeClip.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALandscapeClip);
ALandscapeClip::~ALandscapeClip() {}
// ********** End Class ALandscapeClip *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h__Script_TerrainMagic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeClipBlendMode_StaticEnum, TEXT("ELandscapeClipBlendMode"), &Z_Registration_Info_UEnum_ELandscapeClipBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2479256110U) },
		{ ELandscapeClipFadeMode_StaticEnum, TEXT("ELandscapeClipFadeMode"), &Z_Registration_Info_UEnum_ELandscapeClipFadeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1203186355U) },
		{ ELandscapeClipFadeMinimum_StaticEnum, TEXT("ELandscapeClipFadeMinimum"), &Z_Registration_Info_UEnum_ELandscapeClipFadeMinimum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 738197981U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeClipTileRepositioning::StaticStruct, Z_Construct_UScriptStruct_FLandscapeClipTileRepositioning_Statics::NewStructOps, TEXT("LandscapeClipTileRepositioning"),&Z_Registration_Info_UScriptStruct_FLandscapeClipTileRepositioning, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeClipTileRepositioning), 4156952955U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeClip, ALandscapeClip::StaticClass, TEXT("ALandscapeClip"), &Z_Registration_Info_UClass_ALandscapeClip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeClip), 2888425288U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h__Script_TerrainMagic_4180161396{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h__Script_TerrainMagic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h__Script_TerrainMagic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h__Script_TerrainMagic_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_LandscapeClip_h__Script_TerrainMagic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
