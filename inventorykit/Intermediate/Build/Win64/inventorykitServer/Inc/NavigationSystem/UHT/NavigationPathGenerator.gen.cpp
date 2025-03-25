// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavigationPathGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationPathGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPathGenerator();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPathGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Interface UNavigationPathGenerator
void UNavigationPathGenerator::StaticRegisterNativesUNavigationPathGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationPathGenerator);
UClass* Z_Construct_UClass_UNavigationPathGenerator_NoRegister()
{
	return UNavigationPathGenerator::StaticClass();
}
struct Z_Construct_UClass_UNavigationPathGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/NavigationPathGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavigationPathGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavigationPathGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPathGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationPathGenerator_Statics::ClassParams = {
	&UNavigationPathGenerator::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPathGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationPathGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationPathGenerator()
{
	if (!Z_Registration_Info_UClass_UNavigationPathGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationPathGenerator.OuterSingleton, Z_Construct_UClass_UNavigationPathGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationPathGenerator.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationPathGenerator>()
{
	return UNavigationPathGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationPathGenerator);
UNavigationPathGenerator::~UNavigationPathGenerator() {}
// End Interface UNavigationPathGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationPathGenerator, UNavigationPathGenerator::StaticClass, TEXT("UNavigationPathGenerator"), &Z_Registration_Info_UClass_UNavigationPathGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationPathGenerator), 1837023470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_904633551(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
