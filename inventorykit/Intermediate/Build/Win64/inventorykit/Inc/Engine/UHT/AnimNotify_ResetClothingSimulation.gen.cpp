// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_ResetClothingSimulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ResetClothingSimulation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimNotify_ResetClothingSimulation
void UAnimNotify_ResetClothingSimulation::StaticRegisterNativesUAnimNotify_ResetClothingSimulation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_ResetClothingSimulation);
UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_NoRegister()
{
	return UAnimNotify_ResetClothingSimulation::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Reset Clothing Simulation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_ResetClothingSimulation.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_ResetClothingSimulation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ResetClothingSimulation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::ClassParams = {
	&UAnimNotify_ResetClothingSimulation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.OuterSingleton, Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimNotify_ResetClothingSimulation>()
{
	return UAnimNotify_ResetClothingSimulation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ResetClothingSimulation);
UAnimNotify_ResetClothingSimulation::~UAnimNotify_ResetClothingSimulation() {}
// End Class UAnimNotify_ResetClothingSimulation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetClothingSimulation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ResetClothingSimulation, UAnimNotify_ResetClothingSimulation::StaticClass, TEXT("UAnimNotify_ResetClothingSimulation"), &Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ResetClothingSimulation), 1246450397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetClothingSimulation_h_1246238036(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetClothingSimulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetClothingSimulation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
