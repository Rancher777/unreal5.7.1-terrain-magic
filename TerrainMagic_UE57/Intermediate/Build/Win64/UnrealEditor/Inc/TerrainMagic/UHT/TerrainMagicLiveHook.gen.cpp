// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerrainMagicLiveHook.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTerrainMagicLiveHook() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ATerrainMagicLiveHook();
TERRAINMAGIC_API UClass* Z_Construct_UClass_ATerrainMagicLiveHook_NoRegister();
UPackage* Z_Construct_UPackage__Script_TerrainMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATerrainMagicLiveHook ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATerrainMagicLiveHook;
UClass* ATerrainMagicLiveHook::GetPrivateStaticClass()
{
	using TClass = ATerrainMagicLiveHook;
	if (!Z_Registration_Info_UClass_ATerrainMagicLiveHook.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TerrainMagicLiveHook"),
			Z_Registration_Info_UClass_ATerrainMagicLiveHook.InnerSingleton,
			StaticRegisterNativesATerrainMagicLiveHook,
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
	return Z_Registration_Info_UClass_ATerrainMagicLiveHook.InnerSingleton;
}
UClass* Z_Construct_UClass_ATerrainMagicLiveHook_NoRegister()
{
	return ATerrainMagicLiveHook::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATerrainMagicLiveHook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TerrainMagicLiveHook.h" },
		{ "ModuleRelativePath", "Public/TerrainMagicLiveHook.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATerrainMagicLiveHook constinit property declarations ********************
// ********** End Class ATerrainMagicLiveHook constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrainMagicLiveHook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATerrainMagicLiveHook_Statics
UObject* (*const Z_Construct_UClass_ATerrainMagicLiveHook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainMagicLiveHook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrainMagicLiveHook_Statics::ClassParams = {
	&ATerrainMagicLiveHook::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainMagicLiveHook_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrainMagicLiveHook_Statics::Class_MetaDataParams)
};
void ATerrainMagicLiveHook::StaticRegisterNativesATerrainMagicLiveHook()
{
}
UClass* Z_Construct_UClass_ATerrainMagicLiveHook()
{
	if (!Z_Registration_Info_UClass_ATerrainMagicLiveHook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrainMagicLiveHook.OuterSingleton, Z_Construct_UClass_ATerrainMagicLiveHook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATerrainMagicLiveHook.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATerrainMagicLiveHook);
ATerrainMagicLiveHook::~ATerrainMagicLiveHook() {}
// ********** End Class ATerrainMagicLiveHook ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicLiveHook_h__Script_TerrainMagic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrainMagicLiveHook, ATerrainMagicLiveHook::StaticClass, TEXT("ATerrainMagicLiveHook"), &Z_Registration_Info_UClass_ATerrainMagicLiveHook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrainMagicLiveHook), 4075725204U) },
	};
}; // Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicLiveHook_h__Script_TerrainMagic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicLiveHook_h__Script_TerrainMagic_795997630{
	TEXT("/Script/TerrainMagic"),
	Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicLiveHook_h__Script_TerrainMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Road2Salvation_Plugins_TerrainMagic_UE52_Source_TerrainMagic_Public_TerrainMagicLiveHook_h__Script_TerrainMagic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
