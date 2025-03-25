// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleEventBase
void UParticleModuleEventBase::StaticRegisterNativesUParticleModuleEventBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventBase);
UClass* Z_Construct_UClass_UParticleModuleEventBase_NoRegister()
{
	return UParticleModuleEventBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleEventBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Event" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleEventBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventBase_Statics::ClassParams = {
	&UParticleModuleEventBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleEventBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleEventBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleEventBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventBase.OuterSingleton, Z_Construct_UClass_UParticleModuleEventBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleEventBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleEventBase>()
{
	return UParticleModuleEventBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventBase);
UParticleModuleEventBase::~UParticleModuleEventBase() {}
// End Class UParticleModuleEventBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventBase, UParticleModuleEventBase::StaticClass, TEXT("UParticleModuleEventBase"), &Z_Registration_Info_UClass_UParticleModuleEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventBase), 1958324052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_2850725293(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
