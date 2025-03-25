// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_PauseClothingSimulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PauseClothingSimulation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimNotify_PauseClothingSimulation
void UAnimNotify_PauseClothingSimulation::StaticRegisterNativesUAnimNotify_PauseClothingSimulation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PauseClothingSimulation);
UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_NoRegister()
{
	return UAnimNotify_PauseClothingSimulation::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Pause Clothing Simulation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_PauseClothingSimulation.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PauseClothingSimulation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PauseClothingSimulation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::ClassParams = {
	&UAnimNotify_PauseClothingSimulation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.OuterSingleton, Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimNotify_PauseClothingSimulation>()
{
	return UAnimNotify_PauseClothingSimulation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PauseClothingSimulation);
UAnimNotify_PauseClothingSimulation::~UAnimNotify_PauseClothingSimulation() {}
// End Class UAnimNotify_PauseClothingSimulation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PauseClothingSimulation, UAnimNotify_PauseClothingSimulation::StaticClass, TEXT("UAnimNotify_PauseClothingSimulation"), &Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PauseClothingSimulation), 1767071709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h_3459422243(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
