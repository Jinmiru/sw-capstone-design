// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleVectorFieldBase
void UParticleModuleVectorFieldBase::StaticRegisterNativesUParticleModuleVectorFieldBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldBase);
UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase_NoRegister()
{
	return UParticleModuleVectorFieldBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Vector Field" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::ClassParams = {
	&UParticleModuleVectorFieldBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldBase>()
{
	return UParticleModuleVectorFieldBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldBase);
UParticleModuleVectorFieldBase::~UParticleModuleVectorFieldBase() {}
// End Class UParticleModuleVectorFieldBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldBase, UParticleModuleVectorFieldBase::StaticClass, TEXT("UParticleModuleVectorFieldBase"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldBase), 1841240074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_2991131524(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
