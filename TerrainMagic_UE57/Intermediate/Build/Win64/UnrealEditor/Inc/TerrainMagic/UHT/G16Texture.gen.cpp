// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utils/G16Texture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeG16Texture() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TERRAINMAGIC_API UClass* Z_Construct_UClass_UG16Texture();
TERRAINMAGIC_API UClass* Z_Construct_UClass_UG16Texture_NoRegister();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UG16Texture **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UG16Texture;
UClass* UG16Texture::GetPrivateStaticClass()
{
	using TClass = UG16Texture;
	if (!Z_Registration_Info_UClass_UG16Texture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("G16Texture"),
			Z_Registration_Info_UClass_UG16Texture.InnerSingleton,
			StaticRegisterNativesUG16Texture,
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
	return Z_Registration_Info_UClass_UG16Texture.InnerSingleton;
}
UClass* Z_Construct_UClass_UG16Texture_NoRegister()
{
	return UG16Texture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UG16Texture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Utils/G16Texture.h" },
		{ "ModuleRelativePath", "Public/Utils/G16Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/G16Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/G16Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/G16Texture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/G16Texture.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UG16Texture constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureWidth;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UG16Texture constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UG16Texture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UG16Texture_Statics

// ********** Begin Class UG16Texture Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UG16Texture_Statics::NewProp_TextureWidth = { "TextureWidth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UG16Texture, TextureWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureWidth_MetaData), NewProp_TextureWidth_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UG16Texture_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UG16Texture, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directory_MetaData), NewProp_Directory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UG16Texture_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UG16Texture, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UG16Texture_Statics::NewProp_RuntimeTexture = { "RuntimeTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UG16Texture, RuntimeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeTexture_MetaData), NewProp_RuntimeTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UG16Texture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UG16Texture_Statics::NewProp_TextureWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UG16Texture_Statics::NewProp_Directory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UG16Texture_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UG16Texture_Statics::NewProp_RuntimeTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UG16Texture_Statics::PropPointers) < 2048);
// ********** End Class UG16Texture Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_UG16Texture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UG16Texture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UG16Texture_Statics::ClassParams = {
	&UG16Texture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UG16Texture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UG16Texture_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UG16Texture_Statics::Class_MetaDataParams), Z_Construct_UClass_UG16Texture_Statics::Class_MetaDataParams)
};
void UG16Texture::StaticRegisterNativesUG16Texture()
{
}
UClass* Z_Construct_UClass_UG16Texture()
{
	if (!Z_Registration_Info_UClass_UG16Texture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UG16Texture.OuterSingleton, Z_Construct_UClass_UG16Texture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UG16Texture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UG16Texture);
// ********** End Class UG16Texture ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_G16Texture_h__Script_TerrainMagic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UG16Texture, UG16Texture::StaticClass, TEXT("UG16Texture"), &Z_Registration_Info_UClass_UG16Texture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UG16Texture), 4130745274U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_G16Texture_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_G16Texture_h__Script_TerrainMagic_4016981545{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_G16Texture_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Utils_G16Texture_h__Script_TerrainMagic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
