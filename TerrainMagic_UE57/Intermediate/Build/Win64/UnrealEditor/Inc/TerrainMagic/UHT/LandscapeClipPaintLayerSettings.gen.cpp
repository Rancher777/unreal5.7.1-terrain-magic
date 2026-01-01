// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/LandscapeClipPaintLayerSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLandscapeClipPaintLayerSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
TERRAINMAGIC_API UEnum* Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask();
TERRAINMAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum FLandscapeClipPaintLayerSettingsPaintMode *********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FLandscapeClipPaintLayerSettingsPaintMode;
static UEnum* FLandscapeClipPaintLayerSettingsPaintMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FLandscapeClipPaintLayerSettingsPaintMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FLandscapeClipPaintLayerSettingsPaintMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("FLandscapeClipPaintLayerSettingsPaintMode"));
	}
	return Z_Registration_Info_UEnum_FLandscapeClipPaintLayerSettingsPaintMode.OuterSingleton;
}
template<> TERRAINMAGIC_NON_ATTRIBUTED_API UEnum* StaticEnum<FLandscapeClipPaintLayerSettingsPaintMode>()
{
	return FLandscapeClipPaintLayerSettingsPaintMode_StaticEnum();
}
struct Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LCPM_CLEAR.DisplayName", "Clear Layer" },
		{ "LCPM_CLEAR.Name", "LCPM_CLEAR" },
		{ "LCPM_FILL.DisplayName", "Fill Layer" },
		{ "LCPM_FILL.Name", "LCPM_FILL" },
		{ "LCPM_MASKS.DisplayName", "Use Masks" },
		{ "LCPM_MASKS.Name", "LCPM_MASKS" },
		{ "LCPM_Original.DisplayName", "Use Original" },
		{ "LCPM_Original.Name", "LCPM_Original" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LCPM_Original", (int64)LCPM_Original },
		{ "LCPM_FILL", (int64)LCPM_FILL },
		{ "LCPM_CLEAR", (int64)LCPM_CLEAR },
		{ "LCPM_MASKS", (int64)LCPM_MASKS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	"FLandscapeClipPaintLayerSettingsPaintMode",
	"FLandscapeClipPaintLayerSettingsPaintMode",
	Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode()
{
	if (!Z_Registration_Info_UEnum_FLandscapeClipPaintLayerSettingsPaintMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FLandscapeClipPaintLayerSettingsPaintMode.InnerSingleton, Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FLandscapeClipPaintLayerSettingsPaintMode.InnerSingleton;
}
// ********** End Enum FLandscapeClipPaintLayerSettingsPaintMode ***********************************

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsTextureMapMask ********************
struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLandscapeClipPaintLayerSettingsTextureMapMask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeClipPaintLayerSettingsTextureMapMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsTextureMapMask constinit property declarations 
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsTextureMapMask constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeClipPaintLayerSettingsTextureMapMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask;
class UScriptStruct* FLandscapeClipPaintLayerSettingsTextureMapMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("LandscapeClipPaintLayerSettingsTextureMapMask"));
	}
	return Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask.OuterSingleton;
	}

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsTextureMapMask Property Definitions 
void Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FLandscapeClipPaintLayerSettingsTextureMapMask*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipPaintLayerSettingsTextureMapMask), &Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsTextureMapMask, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsTextureMapMask, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsTextureMapMask, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewProp_Contrast,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsTextureMapMask Property Definitions *
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"LandscapeClipPaintLayerSettingsTextureMapMask",
	Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::PropPointers),
	sizeof(FLandscapeClipPaintLayerSettingsTextureMapMask),
	alignof(FLandscapeClipPaintLayerSettingsTextureMapMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask.InnerSingleton);
}
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsTextureMapMask **********************

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsHeightMask ************************
struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLandscapeClipPaintLayerSettingsHeightMask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeClipPaintLayerSettingsHeightMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStart_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEnd_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invert_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsHeightMask constinit property declarations 
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
	static void NewProp_Invert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsHeightMask constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeClipPaintLayerSettingsHeightMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask;
class UScriptStruct* FLandscapeClipPaintLayerSettingsHeightMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("LandscapeClipPaintLayerSettingsHeightMask"));
	}
	return Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask.OuterSingleton;
	}

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsHeightMask Property Definitions ***
void Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FLandscapeClipPaintLayerSettingsHeightMask*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipPaintLayerSettingsHeightMask), &Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsHeightMask, RangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStart_MetaData), NewProp_RangeStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsHeightMask, RangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEnd_MetaData), NewProp_RangeEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsHeightMask, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsHeightMask, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
void Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Invert_SetBit(void* Obj)
{
	((FLandscapeClipPaintLayerSettingsHeightMask*)Obj)->Invert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Invert = { "Invert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipPaintLayerSettingsHeightMask), &Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Invert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invert_MetaData), NewProp_Invert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewProp_Invert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsHeightMask Property Definitions *****
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"LandscapeClipPaintLayerSettingsHeightMask",
	Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::PropPointers),
	sizeof(FLandscapeClipPaintLayerSettingsHeightMask),
	alignof(FLandscapeClipPaintLayerSettingsHeightMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask.InnerSingleton);
}
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsHeightMask **************************

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsNormalMask ************************
struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLandscapeClipPaintLayerSettingsNormalMask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeClipPaintLayerSettingsNormalMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSmoothMultiplier_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invert_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsNormalMask constinit property declarations 
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSmoothMultiplier;
	static void NewProp_Invert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsNormalMask constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeClipPaintLayerSettingsNormalMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask;
class UScriptStruct* FLandscapeClipPaintLayerSettingsNormalMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("LandscapeClipPaintLayerSettingsNormalMask"));
	}
	return Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask.OuterSingleton;
	}

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsNormalMask Property Definitions ***
void Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FLandscapeClipPaintLayerSettingsNormalMask*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipPaintLayerSettingsNormalMask), &Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsNormalMask, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsNormalMask, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsNormalMask, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_NormalSmoothMultiplier = { "NormalSmoothMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsNormalMask, NormalSmoothMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSmoothMultiplier_MetaData), NewProp_NormalSmoothMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Invert_SetBit(void* Obj)
{
	((FLandscapeClipPaintLayerSettingsNormalMask*)Obj)->Invert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Invert = { "Invert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipPaintLayerSettingsNormalMask), &Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Invert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invert_MetaData), NewProp_Invert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_NormalSmoothMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewProp_Invert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsNormalMask Property Definitions *****
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"LandscapeClipPaintLayerSettingsNormalMask",
	Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::PropPointers),
	sizeof(FLandscapeClipPaintLayerSettingsNormalMask),
	alignof(FLandscapeClipPaintLayerSettingsNormalMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask.InnerSingleton);
}
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsNormalMask **************************

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsLocationMask **********************
struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLandscapeClipPaintLayerSettingsLocationMask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeClipPaintLayerSettingsLocationMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVCenter_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandScale_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invert_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsLocationMask constinit property declarations 
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpandScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
	static void NewProp_Invert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Invert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsLocationMask constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeClipPaintLayerSettingsLocationMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask;
class UScriptStruct* FLandscapeClipPaintLayerSettingsLocationMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("LandscapeClipPaintLayerSettingsLocationMask"));
	}
	return Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask.OuterSingleton;
	}

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsLocationMask Property Definitions *
void Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FLandscapeClipPaintLayerSettingsLocationMask*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipPaintLayerSettingsLocationMask), &Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_UVCenter = { "UVCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsLocationMask, UVCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVCenter_MetaData), NewProp_UVCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_ExpandScale = { "ExpandScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsLocationMask, ExpandScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandScale_MetaData), NewProp_ExpandScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsLocationMask, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsLocationMask, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
void Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Invert_SetBit(void* Obj)
{
	((FLandscapeClipPaintLayerSettingsLocationMask*)Obj)->Invert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Invert = { "Invert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipPaintLayerSettingsLocationMask), &Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Invert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invert_MetaData), NewProp_Invert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_UVCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_ExpandScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewProp_Invert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsLocationMask Property Definitions ***
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"LandscapeClipPaintLayerSettingsLocationMask",
	Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::PropPointers),
	sizeof(FLandscapeClipPaintLayerSettingsLocationMask),
	alignof(FLandscapeClipPaintLayerSettingsLocationMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask.InnerSingleton);
}
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsLocationMask ************************

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsAreaNoiseMask *********************
struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLandscapeClipPaintLayerSettingsAreaNoiseMask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeClipPaintLayerSettingsAreaNoiseMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStart_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEnd_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsAreaNoiseMask constinit property declarations 
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsAreaNoiseMask constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeClipPaintLayerSettingsAreaNoiseMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask;
class UScriptStruct* FLandscapeClipPaintLayerSettingsAreaNoiseMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("LandscapeClipPaintLayerSettingsAreaNoiseMask"));
	}
	return Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask.OuterSingleton;
	}

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsAreaNoiseMask Property Definitions 
void Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FLandscapeClipPaintLayerSettingsAreaNoiseMask*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipPaintLayerSettingsAreaNoiseMask), &Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsAreaNoiseMask, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsAreaNoiseMask, RangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStart_MetaData), NewProp_RangeStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsAreaNoiseMask, RangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEnd_MetaData), NewProp_RangeEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsAreaNoiseMask, Seed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsAreaNoiseMask Property Definitions **
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"LandscapeClipPaintLayerSettingsAreaNoiseMask",
	Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::PropPointers),
	sizeof(FLandscapeClipPaintLayerSettingsAreaNoiseMask),
	alignof(FLandscapeClipPaintLayerSettingsAreaNoiseMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask.InnerSingleton);
}
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsAreaNoiseMask ***********************

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsEdgeNoiseMask *********************
struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLandscapeClipPaintLayerSettingsEdgeNoiseMask); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeClipPaintLayerSettingsEdgeNoiseMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStart_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEnd_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsEdgeNoiseMask constinit property declarations 
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsEdgeNoiseMask constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeClipPaintLayerSettingsEdgeNoiseMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask;
class UScriptStruct* FLandscapeClipPaintLayerSettingsEdgeNoiseMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("LandscapeClipPaintLayerSettingsEdgeNoiseMask"));
	}
	return Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask.OuterSingleton;
	}

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettingsEdgeNoiseMask Property Definitions 
void Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FLandscapeClipPaintLayerSettingsEdgeNoiseMask*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeClipPaintLayerSettingsEdgeNoiseMask), &Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsEdgeNoiseMask, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsEdgeNoiseMask, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsEdgeNoiseMask, RangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStart_MetaData), NewProp_RangeStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsEdgeNoiseMask, RangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEnd_MetaData), NewProp_RangeEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettingsEdgeNoiseMask, Seed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsEdgeNoiseMask Property Definitions **
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"LandscapeClipPaintLayerSettingsEdgeNoiseMask",
	Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::PropPointers),
	sizeof(FLandscapeClipPaintLayerSettingsEdgeNoiseMask),
	alignof(FLandscapeClipPaintLayerSettingsEdgeNoiseMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask.InnerSingleton);
}
// ********** End ScriptStruct FLandscapeClipPaintLayerSettingsEdgeNoiseMask ***********************

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettings **********************************
struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLandscapeClipPaintLayerSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeClipPaintLayerSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintLayer_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPaintLayers_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintMode_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightBrightness_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightContrast_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationMask_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "EditCondition", "PaintMode == 3" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalMask_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "EditCondition", "PaintMode == 3" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureMapMask_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "EditCondition", "PaintMode == 3" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMask_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "EditCondition", "PaintMode == 3" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaNoiseMask_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "EditCondition", "PaintMode == 3" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeNoiseMask_MetaData[] = {
		{ "Category", "TerrainMagic" },
		{ "EditCondition", "PaintMode == 3" },
		{ "ModuleRelativePath", "Public/Types/LandscapeClipPaintLayerSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettings constinit property declarations **
	static const UECodeGen_Private::FNamePropertyParams NewProp_PaintLayer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AdditionalPaintLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPaintLayers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PaintMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightContrast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureMapMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AreaNoiseMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeNoiseMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeClipPaintLayerSettings constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeClipPaintLayerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettings;
class UScriptStruct* FLandscapeClipPaintLayerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings, (UObject*)Z_Construct_UPackage__Script_TerrainMagic(), TEXT("LandscapeClipPaintLayerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FLandscapeClipPaintLayerSettings Property Definitions *************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_PaintLayer = { "PaintLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, PaintLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintLayer_MetaData), NewProp_PaintLayer_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_AdditionalPaintLayers_Inner = { "AdditionalPaintLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_AdditionalPaintLayers = { "AdditionalPaintLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, AdditionalPaintLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPaintLayers_MetaData), NewProp_AdditionalPaintLayers_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_PaintMode = { "PaintMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, PaintMode), Z_Construct_UEnum_TerrainMagic_FLandscapeClipPaintLayerSettingsPaintMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintMode_MetaData), NewProp_PaintMode_MetaData) }; // 786198001
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_WeightBrightness = { "WeightBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, WeightBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightBrightness_MetaData), NewProp_WeightBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_WeightContrast = { "WeightContrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, WeightContrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightContrast_MetaData), NewProp_WeightContrast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_LocationMask = { "LocationMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, LocationMask), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationMask_MetaData), NewProp_LocationMask_MetaData) }; // 3168167110
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_NormalMask = { "NormalMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, NormalMask), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalMask_MetaData), NewProp_NormalMask_MetaData) }; // 2623961778
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_TextureMapMask = { "TextureMapMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, TextureMapMask), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureMapMask_MetaData), NewProp_TextureMapMask_MetaData) }; // 2207987727
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_HeightMask = { "HeightMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, HeightMask), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMask_MetaData), NewProp_HeightMask_MetaData) }; // 3851140993
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_AreaNoiseMask = { "AreaNoiseMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, AreaNoiseMask), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaNoiseMask_MetaData), NewProp_AreaNoiseMask_MetaData) }; // 1468852899
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_EdgeNoiseMask = { "EdgeNoiseMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeClipPaintLayerSettings, EdgeNoiseMask), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeNoiseMask_MetaData), NewProp_EdgeNoiseMask_MetaData) }; // 2505590795
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_PaintLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_AdditionalPaintLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_AdditionalPaintLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_PaintMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_WeightBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_WeightContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_LocationMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_NormalMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_TextureMapMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_HeightMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_AreaNoiseMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewProp_EdgeNoiseMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeClipPaintLayerSettings Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
	nullptr,
	&NewStructOps,
	"LandscapeClipPaintLayerSettings",
	Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::PropPointers),
	sizeof(FLandscapeClipPaintLayerSettings),
	alignof(FLandscapeClipPaintLayerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettings.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettings.InnerSingleton);
}
// ********** End ScriptStruct FLandscapeClipPaintLayerSettings ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_LandscapeClipPaintLayerSettings_h__Script_TerrainMagic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ FLandscapeClipPaintLayerSettingsPaintMode_StaticEnum, TEXT("FLandscapeClipPaintLayerSettingsPaintMode"), &Z_Registration_Info_UEnum_FLandscapeClipPaintLayerSettingsPaintMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 786198001U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeClipPaintLayerSettingsTextureMapMask::StaticStruct, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask_Statics::NewStructOps, TEXT("LandscapeClipPaintLayerSettingsTextureMapMask"),&Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsTextureMapMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeClipPaintLayerSettingsTextureMapMask), 2207987727U) },
		{ FLandscapeClipPaintLayerSettingsHeightMask::StaticStruct, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask_Statics::NewStructOps, TEXT("LandscapeClipPaintLayerSettingsHeightMask"),&Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsHeightMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeClipPaintLayerSettingsHeightMask), 3851140993U) },
		{ FLandscapeClipPaintLayerSettingsNormalMask::StaticStruct, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask_Statics::NewStructOps, TEXT("LandscapeClipPaintLayerSettingsNormalMask"),&Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsNormalMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeClipPaintLayerSettingsNormalMask), 2623961778U) },
		{ FLandscapeClipPaintLayerSettingsLocationMask::StaticStruct, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask_Statics::NewStructOps, TEXT("LandscapeClipPaintLayerSettingsLocationMask"),&Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsLocationMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeClipPaintLayerSettingsLocationMask), 3168167110U) },
		{ FLandscapeClipPaintLayerSettingsAreaNoiseMask::StaticStruct, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask_Statics::NewStructOps, TEXT("LandscapeClipPaintLayerSettingsAreaNoiseMask"),&Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsAreaNoiseMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeClipPaintLayerSettingsAreaNoiseMask), 1468852899U) },
		{ FLandscapeClipPaintLayerSettingsEdgeNoiseMask::StaticStruct, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask_Statics::NewStructOps, TEXT("LandscapeClipPaintLayerSettingsEdgeNoiseMask"),&Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettingsEdgeNoiseMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeClipPaintLayerSettingsEdgeNoiseMask), 2505590795U) },
		{ FLandscapeClipPaintLayerSettings::StaticStruct, Z_Construct_UScriptStruct_FLandscapeClipPaintLayerSettings_Statics::NewStructOps, TEXT("LandscapeClipPaintLayerSettings"),&Z_Registration_Info_UScriptStruct_FLandscapeClipPaintLayerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeClipPaintLayerSettings), 2141745445U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_LandscapeClipPaintLayerSettings_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_LandscapeClipPaintLayerSettings_h__Script_TerrainMagic_4231932763{
	TEXT("/Script/TerrainMagic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_LandscapeClipPaintLayerSettings_h__Script_TerrainMagic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_LandscapeClipPaintLayerSettings_h__Script_TerrainMagic_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_LandscapeClipPaintLayerSettings_h__Script_TerrainMagic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_LandscapeClipPaintLayerSettings_h__Script_TerrainMagic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
