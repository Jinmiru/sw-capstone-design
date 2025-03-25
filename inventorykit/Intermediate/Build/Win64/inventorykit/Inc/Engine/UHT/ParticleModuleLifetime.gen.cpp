// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Lifetime/ParticleModuleLifetime.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLifetime() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetime();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetime_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleLifetime
void UParticleModuleLifetime::StaticRegisterNativesUParticleModuleLifetime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLifetime);
UClass* Z_Construct_UClass_UParticleModuleLifetime_NoRegister()
{
	return UParticleModuleLifetime::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleLifetime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Lifetime" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Lifetime/ParticleModuleLifetime.h" },
		{ "ModuleRelativePath", "Classes/Particles/Lifetime/ParticleModuleLifetime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "Category", "Lifetime" },
		{ "Comment", "/** The lifetime of the particle, in seconds. Retrieved using the EmitterTime at the spawn of the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Lifetime/ParticleModuleLifetime.h" },
		{ "ToolTip", "The lifetime of the particle, in seconds. Retrieved using the EmitterTime at the spawn of the particle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLifetime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLifetime_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleLifetime, Lifetime), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLifetime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLifetime_Statics::NewProp_Lifetime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLifetime_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleLifetime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleLifetimeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLifetime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLifetime_Statics::ClassParams = {
	&UParticleModuleLifetime::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleLifetime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLifetime_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLifetime_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleLifetime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleLifetime()
{
	if (!Z_Registration_Info_UClass_UParticleModuleLifetime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLifetime.OuterSingleton, Z_Construct_UClass_UParticleModuleLifetime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleLifetime.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleLifetime>()
{
	return UParticleModuleLifetime::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLifetime);
UParticleModuleLifetime::~UParticleModuleLifetime() {}
// End Class UParticleModuleLifetime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLifetime, UParticleModuleLifetime::StaticClass, TEXT("UParticleModuleLifetime"), &Z_Registration_Info_UClass_UParticleModuleLifetime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLifetime), 1330199853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetime_h_1026873339(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
