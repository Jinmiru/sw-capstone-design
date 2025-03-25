// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Parameter/ParticleModuleParameterBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleParameterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleParameterBase
void UParticleModuleParameterBase::StaticRegisterNativesUParticleModuleParameterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleParameterBase);
UClass* Z_Construct_UClass_UParticleModuleParameterBase_NoRegister()
{
	return UParticleModuleParameterBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleParameterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Parameter" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Parameter/ParticleModuleParameterBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleParameterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleParameterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleParameterBase_Statics::ClassParams = {
	&UParticleModuleParameterBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleParameterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleParameterBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleParameterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleParameterBase.OuterSingleton, Z_Construct_UClass_UParticleModuleParameterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleParameterBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleParameterBase>()
{
	return UParticleModuleParameterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleParameterBase);
UParticleModuleParameterBase::~UParticleModuleParameterBase() {}
// End Class UParticleModuleParameterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleParameterBase, UParticleModuleParameterBase::StaticClass, TEXT("UParticleModuleParameterBase"), &Z_Registration_Info_UClass_UParticleModuleParameterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleParameterBase), 309398283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_1864490142(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
