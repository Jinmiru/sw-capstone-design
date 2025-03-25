// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVectorParticleParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorParticleParameter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParameterBase();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParticleParameter();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDistributionVectorParticleParameter
void UDistributionVectorParticleParameter::StaticRegisterNativesUDistributionVectorParticleParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionVectorParticleParameter);
UClass* Z_Construct_UClass_UDistributionVectorParticleParameter_NoRegister()
{
	return UDistributionVectorParticleParameter::StaticClass();
}
struct Z_Construct_UClass_UDistributionVectorParticleParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorParticleParameter.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorParticleParameter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorParticleParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistributionVectorParameterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::ClassParams = {
	&UDistributionVectorParticleParameter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionVectorParticleParameter()
{
	if (!Z_Registration_Info_UClass_UDistributionVectorParticleParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionVectorParticleParameter.OuterSingleton, Z_Construct_UClass_UDistributionVectorParticleParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionVectorParticleParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionVectorParticleParameter>()
{
	return UDistributionVectorParticleParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorParticleParameter);
UDistributionVectorParticleParameter::~UDistributionVectorParticleParameter() {}
// End Class UDistributionVectorParticleParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionVectorParticleParameter, UDistributionVectorParticleParameter::StaticClass, TEXT("UDistributionVectorParticleParameter"), &Z_Registration_Info_UClass_UDistributionVectorParticleParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionVectorParticleParameter), 2923459881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_3075050784(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParticleParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
