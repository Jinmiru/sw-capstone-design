// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavLinkCustomInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkCustomInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Interface UNavLinkCustomInterface
void UNavLinkCustomInterface::StaticRegisterNativesUNavLinkCustomInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkCustomInterface);
UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister()
{
	return UNavLinkCustomInterface::StaticClass();
}
struct Z_Construct_UClass_UNavLinkCustomInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/NavLinkCustomInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavLinkCustomInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavLinkCustomInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkCustomInterface_Statics::ClassParams = {
	&UNavLinkCustomInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavLinkCustomInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavLinkCustomInterface()
{
	if (!Z_Registration_Info_UClass_UNavLinkCustomInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkCustomInterface.OuterSingleton, Z_Construct_UClass_UNavLinkCustomInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavLinkCustomInterface.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkCustomInterface>()
{
	return UNavLinkCustomInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkCustomInterface);
UNavLinkCustomInterface::~UNavLinkCustomInterface() {}
// End Interface UNavLinkCustomInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkCustomInterface, UNavLinkCustomInterface::StaticClass, TEXT("UNavLinkCustomInterface"), &Z_Registration_Info_UClass_UNavLinkCustomInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkCustomInterface), 1067698356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_3323067724(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
