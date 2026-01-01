// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/OutlineComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOutlineComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
TERRAINMAGIC_API UClass* Z_Construct_UClass_UOutlineComponent();
TERRAINMAGIC_API UClass* Z_Construct_UClass_UOutlineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOutlineComponent ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOutlineComponent;
UClass* UOutlineComponent::GetPrivateStaticClass()
{
	using TClass = UOutlineComponent;
	if (!Z_Registration_Info_UClass_UOutlineComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OutlineComponent"),
			Z_Registration_Info_UClass_UOutlineComponent.InnerSingleton,
			StaticRegisterNativesUOutlineComponent,
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
	return Z_Registration_Info_UClass_UOutlineComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOutlineComponent_NoRegister()
{
	return UOutlineComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOutlineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Types/OutlineComponent.h" },
		{ "ModuleRelativePath", "Public/Types/OutlineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOutlineComponent constinit property declarations ************************
// ********** End Class UOutlineComponent constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutlineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOutlineComponent_Statics
UObject* (*const Z_Construct_UClass_UOutlineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBoxComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutlineComponent_Statics::ClassParams = {
	&UOutlineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOutlineComponent_Statics::Class_MetaDataParams)
};
void UOutlineComponent::StaticRegisterNativesUOutlineComponent()
{
}
UClass* Z_Construct_UClass_UOutlineComponent()
{
	if (!Z_Registration_Info_UClass_UOutlineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutlineComponent.OuterSingleton, Z_Construct_UClass_UOutlineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOutlineComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOutlineComponent);
UOutlineComponent::~UOutlineComponent() {}
// ********** End Class UOutlineComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_OutlineComponent_h__Script_TerrainMagic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOutlineComponent, UOutlineComponent::StaticClass, TEXT("UOutlineComponent"), &Z_Registration_Info_UClass_UOutlineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutlineComponent), 3911356531U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_OutlineComponent_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_OutlineComponent_h__Script_TerrainMagic_4159801780{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_OutlineComponent_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_Types_OutlineComponent_h__Script_TerrainMagic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
