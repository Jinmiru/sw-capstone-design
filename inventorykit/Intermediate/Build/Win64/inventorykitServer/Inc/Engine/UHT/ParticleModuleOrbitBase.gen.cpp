// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrbitBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleOrbitBase
void UParticleModuleOrbitBase::StaticRegisterNativesUParticleModuleOrbitBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleOrbitBase);
UClass* Z_Construct_UClass_UParticleModuleOrbitBase_NoRegister()
{
	return UParticleModuleOrbitBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleOrbitBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Orbit" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Orbit/ParticleModuleOrbitBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "Orbit" },
		{ "Comment", "/** \n\x09 *\x09If true, distribution values will be retrieved using the EmitterTime.\n\x09 *\x09If false (default), they will be retrieved using the Particle.RelativeTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbitBase.h" },
		{ "ToolTip", "If true, distribution values will be retrieved using the EmitterTime.\nIf false (default), they will be retrieved using the Particle.RelativeTime." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseEmitterTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleOrbitBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
{
	((UParticleModuleOrbitBase*)Obj)->bUseEmitterTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleOrbitBase), &Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEmitterTime_MetaData), NewProp_bUseEmitterTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleOrbitBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleOrbitBase_Statics::ClassParams = {
	&UParticleModuleOrbitBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers),
	0,
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleOrbitBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleOrbitBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleOrbitBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleOrbitBase.OuterSingleton, Z_Construct_UClass_UParticleModuleOrbitBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleOrbitBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleOrbitBase>()
{
	return UParticleModuleOrbitBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrbitBase);
UParticleModuleOrbitBase::~UParticleModuleOrbitBase() {}
// End Class UParticleModuleOrbitBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleOrbitBase, UParticleModuleOrbitBase::StaticClass, TEXT("UParticleModuleOrbitBase"), &Z_Registration_Info_UClass_UParticleModuleOrbitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleOrbitBase), 1483378858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_229731758(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
