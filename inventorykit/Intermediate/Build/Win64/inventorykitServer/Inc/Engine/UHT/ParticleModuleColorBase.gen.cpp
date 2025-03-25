// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Color/ParticleModuleColorBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColorBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleColorBase
void UParticleModuleColorBase::StaticRegisterNativesUParticleModuleColorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleColorBase);
UClass* Z_Construct_UClass_UParticleModuleColorBase_NoRegister()
{
	return UParticleModuleColorBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleColorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Color" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColorBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleColorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColorBase_Statics::ClassParams = {
	&UParticleModuleColorBase::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleColorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleColorBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleColorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleColorBase.OuterSingleton, Z_Construct_UClass_UParticleModuleColorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleColorBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleColorBase>()
{
	return UParticleModuleColorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColorBase);
UParticleModuleColorBase::~UParticleModuleColorBase() {}
// End Class UParticleModuleColorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleColorBase, UParticleModuleColorBase::StaticClass, TEXT("UParticleModuleColorBase"), &Z_Registration_Info_UClass_UParticleModuleColorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleColorBase), 3261649989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_1510483315(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
