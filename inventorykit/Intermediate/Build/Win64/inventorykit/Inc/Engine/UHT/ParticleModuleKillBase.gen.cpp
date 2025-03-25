// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Kill/ParticleModuleKillBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleKillBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleKillBase
void UParticleModuleKillBase::StaticRegisterNativesUParticleModuleKillBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleKillBase);
UClass* Z_Construct_UClass_UParticleModuleKillBase_NoRegister()
{
	return UParticleModuleKillBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleKillBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Kill" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Kill/ParticleModuleKillBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleKillBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleKillBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleKillBase_Statics::ClassParams = {
	&UParticleModuleKillBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleKillBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleKillBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleKillBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleKillBase.OuterSingleton, Z_Construct_UClass_UParticleModuleKillBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleKillBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleKillBase>()
{
	return UParticleModuleKillBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleKillBase);
UParticleModuleKillBase::~UParticleModuleKillBase() {}
// End Class UParticleModuleKillBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleKillBase, UParticleModuleKillBase::StaticClass, TEXT("UParticleModuleKillBase"), &Z_Registration_Info_UClass_UParticleModuleKillBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleKillBase), 551024959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_1319128389(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
