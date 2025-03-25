// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Rotation/ParticleModuleRotationBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleRotationBase
void UParticleModuleRotationBase::StaticRegisterNativesUParticleModuleRotationBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRotationBase);
UClass* Z_Construct_UClass_UParticleModuleRotationBase_NoRegister()
{
	return UParticleModuleRotationBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleRotationBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Rotation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Rotation/ParticleModuleRotationBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotationBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotationBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleRotationBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotationBase_Statics::ClassParams = {
	&UParticleModuleRotationBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleRotationBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleRotationBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleRotationBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRotationBase.OuterSingleton, Z_Construct_UClass_UParticleModuleRotationBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleRotationBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleRotationBase>()
{
	return UParticleModuleRotationBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationBase);
UParticleModuleRotationBase::~UParticleModuleRotationBase() {}
// End Class UParticleModuleRotationBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRotationBase, UParticleModuleRotationBase::StaticClass, TEXT("UParticleModuleRotationBase"), &Z_Registration_Info_UClass_UParticleModuleRotationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRotationBase), 1963838175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_473743194(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
