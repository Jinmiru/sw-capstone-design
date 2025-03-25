// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavLinkTrivial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkTrivial() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkTrivial();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkTrivial_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavLinkTrivial
void UNavLinkTrivial::StaticRegisterNativesUNavLinkTrivial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkTrivial);
UClass* Z_Construct_UClass_UNavLinkTrivial_NoRegister()
{
	return UNavLinkTrivial::StaticClass();
}
struct Z_Construct_UClass_UNavLinkTrivial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NavLinkTrivial.h" },
		{ "ModuleRelativePath", "Public/NavLinkTrivial.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkTrivial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavLinkTrivial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavLinkDefinition,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkTrivial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkTrivial_Statics::ClassParams = {
	&UNavLinkTrivial::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkTrivial_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavLinkTrivial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavLinkTrivial()
{
	if (!Z_Registration_Info_UClass_UNavLinkTrivial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkTrivial.OuterSingleton, Z_Construct_UClass_UNavLinkTrivial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavLinkTrivial.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkTrivial>()
{
	return UNavLinkTrivial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkTrivial);
UNavLinkTrivial::~UNavLinkTrivial() {}
// End Class UNavLinkTrivial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkTrivial, UNavLinkTrivial::StaticClass, TEXT("UNavLinkTrivial"), &Z_Registration_Info_UClass_UNavLinkTrivial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkTrivial), 3424548871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_3727171682(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
