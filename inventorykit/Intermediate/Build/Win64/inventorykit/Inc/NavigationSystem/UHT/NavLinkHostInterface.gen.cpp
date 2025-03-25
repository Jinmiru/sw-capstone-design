// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavLinkHostInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkHostInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Interface UNavLinkHostInterface
void UNavLinkHostInterface::StaticRegisterNativesUNavLinkHostInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkHostInterface);
UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister()
{
	return UNavLinkHostInterface::StaticClass();
}
struct Z_Construct_UClass_UNavLinkHostInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/NavLinkHostInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavLinkHostInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavLinkHostInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkHostInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkHostInterface_Statics::ClassParams = {
	&UNavLinkHostInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkHostInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavLinkHostInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavLinkHostInterface()
{
	if (!Z_Registration_Info_UClass_UNavLinkHostInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkHostInterface.OuterSingleton, Z_Construct_UClass_UNavLinkHostInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavLinkHostInterface.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkHostInterface>()
{
	return UNavLinkHostInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkHostInterface);
UNavLinkHostInterface::~UNavLinkHostInterface() {}
// End Interface UNavLinkHostInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkHostInterface, UNavLinkHostInterface::StaticClass, TEXT("UNavLinkHostInterface"), &Z_Registration_Info_UClass_UNavLinkHostInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkHostInterface), 852273620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_3237212019(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
