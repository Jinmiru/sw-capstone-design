// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavNodeInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavNodeInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavNodeInterface();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavNodeInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Interface UNavNodeInterface
void UNavNodeInterface::StaticRegisterNativesUNavNodeInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavNodeInterface);
UClass* Z_Construct_UClass_UNavNodeInterface_NoRegister()
{
	return UNavNodeInterface::StaticClass();
}
struct Z_Construct_UClass_UNavNodeInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/NavNodeInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavNodeInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavNodeInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavNodeInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavNodeInterface_Statics::ClassParams = {
	&UNavNodeInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavNodeInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavNodeInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavNodeInterface()
{
	if (!Z_Registration_Info_UClass_UNavNodeInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavNodeInterface.OuterSingleton, Z_Construct_UClass_UNavNodeInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavNodeInterface.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavNodeInterface>()
{
	return UNavNodeInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavNodeInterface);
UNavNodeInterface::~UNavNodeInterface() {}
// End Interface UNavNodeInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavNodeInterface, UNavNodeInterface::StaticClass, TEXT("UNavNodeInterface"), &Z_Registration_Info_UClass_UNavNodeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavNodeInterface), 2259574582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_2580133658(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
