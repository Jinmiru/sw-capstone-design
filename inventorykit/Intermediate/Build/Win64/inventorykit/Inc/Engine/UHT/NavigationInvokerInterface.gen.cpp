// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationInvokerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationInvokerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavigationInvokerInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavigationInvokerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UNavigationInvokerInterface
void UNavigationInvokerInterface::StaticRegisterNativesUNavigationInvokerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationInvokerInterface);
UClass* Z_Construct_UClass_UNavigationInvokerInterface_NoRegister()
{
	return UNavigationInvokerInterface::StaticClass();
}
struct Z_Construct_UClass_UNavigationInvokerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationInvokerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavigationInvokerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavigationInvokerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationInvokerInterface_Statics::ClassParams = {
	&UNavigationInvokerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationInvokerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationInvokerInterface()
{
	if (!Z_Registration_Info_UClass_UNavigationInvokerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationInvokerInterface.OuterSingleton, Z_Construct_UClass_UNavigationInvokerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationInvokerInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavigationInvokerInterface>()
{
	return UNavigationInvokerInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationInvokerInterface);
UNavigationInvokerInterface::~UNavigationInvokerInterface() {}
// End Interface UNavigationInvokerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationInvokerInterface, UNavigationInvokerInterface::StaticClass, TEXT("UNavigationInvokerInterface"), &Z_Registration_Info_UClass_UNavigationInvokerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationInvokerInterface), 3425492599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_2143036955(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
