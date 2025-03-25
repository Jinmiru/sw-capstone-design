// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/SubUV/ParticleModuleSubUVBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUVBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSubUVBase
void UParticleModuleSubUVBase::StaticRegisterNativesUParticleModuleSubUVBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSubUVBase);
UClass* Z_Construct_UClass_UParticleModuleSubUVBase_NoRegister()
{
	return UParticleModuleSubUVBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSubUVBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "SubUV" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/SubUV/ParticleModuleSubUVBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSubUVBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleSubUVBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSubUVBase_Statics::ClassParams = {
	&UParticleModuleSubUVBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSubUVBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSubUVBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSubUVBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSubUVBase.OuterSingleton, Z_Construct_UClass_UParticleModuleSubUVBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSubUVBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSubUVBase>()
{
	return UParticleModuleSubUVBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUVBase);
UParticleModuleSubUVBase::~UParticleModuleSubUVBase() {}
// End Class UParticleModuleSubUVBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSubUVBase, UParticleModuleSubUVBase::StaticClass, TEXT("UParticleModuleSubUVBase"), &Z_Registration_Info_UClass_UParticleModuleSubUVBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSubUVBase), 1688122310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_925344951(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
