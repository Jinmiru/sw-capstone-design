// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Camera/ParticleModuleCameraBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCameraBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleCameraBase
void UParticleModuleCameraBase::StaticRegisterNativesUParticleModuleCameraBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleCameraBase);
UClass* Z_Construct_UClass_UParticleModuleCameraBase_NoRegister()
{
	return UParticleModuleCameraBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleCameraBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Camera" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Camera/ParticleModuleCameraBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCameraBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleCameraBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCameraBase_Statics::ClassParams = {
	&UParticleModuleCameraBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleCameraBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleCameraBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleCameraBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleCameraBase.OuterSingleton, Z_Construct_UClass_UParticleModuleCameraBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleCameraBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleCameraBase>()
{
	return UParticleModuleCameraBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCameraBase);
UParticleModuleCameraBase::~UParticleModuleCameraBase() {}
// End Class UParticleModuleCameraBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleCameraBase, UParticleModuleCameraBase::StaticClass, TEXT("UParticleModuleCameraBase"), &Z_Registration_Info_UClass_UParticleModuleCameraBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleCameraBase), 1995877053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_354093689(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
