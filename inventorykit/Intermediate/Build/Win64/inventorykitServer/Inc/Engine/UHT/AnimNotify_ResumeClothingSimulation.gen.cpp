// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_ResumeClothingSimulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ResumeClothingSimulation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimNotify_ResumeClothingSimulation
void UAnimNotify_ResumeClothingSimulation::StaticRegisterNativesUAnimNotify_ResumeClothingSimulation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_ResumeClothingSimulation);
UClass* Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_NoRegister()
{
	return UAnimNotify_ResumeClothingSimulation::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Resume Clothing Simulation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_ResumeClothingSimulation.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_ResumeClothingSimulation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ResumeClothingSimulation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_Statics::ClassParams = {
	&UAnimNotify_ResumeClothingSimulation::StaticClass,
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
	0x000920A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.OuterSingleton, Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimNotify_ResumeClothingSimulation>()
{
	return UAnimNotify_ResumeClothingSimulation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ResumeClothingSimulation);
UAnimNotify_ResumeClothingSimulation::~UAnimNotify_ResumeClothingSimulation() {}
// End Class UAnimNotify_ResumeClothingSimulation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResumeClothingSimulation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation, UAnimNotify_ResumeClothingSimulation::StaticClass, TEXT("UAnimNotify_ResumeClothingSimulation"), &Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ResumeClothingSimulation), 2262238678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResumeClothingSimulation_h_3691452092(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResumeClothingSimulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResumeClothingSimulation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
