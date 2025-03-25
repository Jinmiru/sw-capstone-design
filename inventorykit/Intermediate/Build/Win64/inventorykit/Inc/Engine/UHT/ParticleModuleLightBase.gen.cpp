// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Light/ParticleModuleLightBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLightBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLightBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLightBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleLightBase
void UParticleModuleLightBase::StaticRegisterNativesUParticleModuleLightBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLightBase);
UClass* Z_Construct_UClass_UParticleModuleLightBase_NoRegister()
{
	return UParticleModuleLightBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleLightBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Light" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Light/ParticleModuleLightBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLightBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLightBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleLightBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLightBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLightBase_Statics::ClassParams = {
	&UParticleModuleLightBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLightBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleLightBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleLightBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleLightBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLightBase.OuterSingleton, Z_Construct_UClass_UParticleModuleLightBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleLightBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleLightBase>()
{
	return UParticleModuleLightBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLightBase);
UParticleModuleLightBase::~UParticleModuleLightBase() {}
// End Class UParticleModuleLightBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLightBase, UParticleModuleLightBase::StaticClass, TEXT("UParticleModuleLightBase"), &Z_Registration_Info_UClass_UParticleModuleLightBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLightBase), 1742097497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_41148597(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
