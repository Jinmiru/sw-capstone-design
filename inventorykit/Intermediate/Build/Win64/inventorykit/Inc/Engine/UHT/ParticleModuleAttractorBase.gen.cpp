// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleAttractorBase
void UParticleModuleAttractorBase::StaticRegisterNativesUParticleModuleAttractorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAttractorBase);
UClass* Z_Construct_UClass_UParticleModuleAttractorBase_NoRegister()
{
	return UParticleModuleAttractorBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAttractorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Attraction" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleAttractorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorBase_Statics::ClassParams = {
	&UParticleModuleAttractorBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAttractorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAttractorBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAttractorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAttractorBase.OuterSingleton, Z_Construct_UClass_UParticleModuleAttractorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAttractorBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAttractorBase>()
{
	return UParticleModuleAttractorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorBase);
UParticleModuleAttractorBase::~UParticleModuleAttractorBase() {}
// End Class UParticleModuleAttractorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAttractorBase, UParticleModuleAttractorBase::StaticClass, TEXT("UParticleModuleAttractorBase"), &Z_Registration_Info_UClass_UParticleModuleAttractorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAttractorBase), 2455974478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_2456368609(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
