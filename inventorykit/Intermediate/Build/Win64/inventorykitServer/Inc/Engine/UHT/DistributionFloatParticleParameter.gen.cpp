// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloatParticleParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatParticleParameter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParameterBase();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParticleParameter();
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionFloatParticleParameter
void UDistributionFloatParticleParameter::StaticRegisterNativesUDistributionFloatParticleParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloatParticleParameter);
UClass* Z_Construct_UClass_UDistributionFloatParticleParameter_NoRegister()
{
	return UDistributionFloatParticleParameter::StaticClass();
}
struct Z_Construct_UClass_UDistributionFloatParticleParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatParticleParameter.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParticleParameter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatParticleParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionFloatParameterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::ClassParams = {
	&UDistributionFloatParticleParameter::StaticClass,
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
	0x002830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionFloatParticleParameter()
{
	if (!Z_Registration_Info_UClass_UDistributionFloatParticleParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloatParticleParameter.OuterSingleton, Z_Construct_UClass_UDistributionFloatParticleParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionFloatParticleParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionFloatParticleParameter>()
{
	return UDistributionFloatParticleParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatParticleParameter);
UDistributionFloatParticleParameter::~UDistributionFloatParticleParameter() {}
// End Class UDistributionFloatParticleParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloatParticleParameter, UDistributionFloatParticleParameter::StaticClass, TEXT("UDistributionFloatParticleParameter"), &Z_Registration_Info_UClass_UDistributionFloatParticleParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloatParticleParameter), 2652609033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_1976919140(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatParticleParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
