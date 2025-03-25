// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRateBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationRateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleRotationRateBase
void UParticleModuleRotationRateBase::StaticRegisterNativesUParticleModuleRotationRateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRotationRateBase);
UClass* Z_Construct_UClass_UParticleModuleRotationRateBase_NoRegister()
{
	return UParticleModuleRotationRateBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleRotationRateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Rotation Rate" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleRotationRateBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRateBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotationRateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::ClassParams = {
	&UParticleModuleRotationRateBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleRotationRateBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleRotationRateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRotationRateBase.OuterSingleton, Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleRotationRateBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleRotationRateBase>()
{
	return UParticleModuleRotationRateBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationRateBase);
UParticleModuleRotationRateBase::~UParticleModuleRotationRateBase() {}
// End Class UParticleModuleRotationRateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRotationRateBase, UParticleModuleRotationRateBase::StaticClass, TEXT("UParticleModuleRotationRateBase"), &Z_Registration_Info_UClass_UParticleModuleRotationRateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRotationRateBase), 3872882132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_1504855319(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
