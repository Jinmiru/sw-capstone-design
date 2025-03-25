// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationWorldOffset.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationWorldOffset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleLocationWorldOffset
void UParticleModuleLocationWorldOffset::StaticRegisterNativesUParticleModuleLocationWorldOffset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationWorldOffset);
UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset_NoRegister()
{
	return UParticleModuleLocationWorldOffset::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "World Offset" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationWorldOffset.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationWorldOffset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationWorldOffset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleLocation,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::ClassParams = {
	&UParticleModuleLocationWorldOffset::StaticClass,
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
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset()
{
	if (!Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationWorldOffset>()
{
	return UParticleModuleLocationWorldOffset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationWorldOffset);
UParticleModuleLocationWorldOffset::~UParticleModuleLocationWorldOffset() {}
// End Class UParticleModuleLocationWorldOffset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationWorldOffset, UParticleModuleLocationWorldOffset::StaticClass, TEXT("UParticleModuleLocationWorldOffset"), &Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationWorldOffset), 507135842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_2915467670(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationWorldOffset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
