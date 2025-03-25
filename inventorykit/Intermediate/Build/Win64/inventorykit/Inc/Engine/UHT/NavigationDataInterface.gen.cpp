// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavigationDataInterface();
ENGINE_API UClass* Z_Construct_UClass_UNavigationDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UNavigationDataInterface
void UNavigationDataInterface::StaticRegisterNativesUNavigationDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationDataInterface);
UClass* Z_Construct_UClass_UNavigationDataInterface_NoRegister()
{
	return UNavigationDataInterface::StaticClass();
}
struct Z_Construct_UClass_UNavigationDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavigationDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavigationDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationDataInterface_Statics::ClassParams = {
	&UNavigationDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationDataInterface()
{
	if (!Z_Registration_Info_UClass_UNavigationDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationDataInterface.OuterSingleton, Z_Construct_UClass_UNavigationDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationDataInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavigationDataInterface>()
{
	return UNavigationDataInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationDataInterface);
UNavigationDataInterface::~UNavigationDataInterface() {}
// End Interface UNavigationDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationDataInterface, UNavigationDataInterface::StaticClass, TEXT("UNavigationDataInterface"), &Z_Registration_Info_UClass_UNavigationDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationDataInterface), 3627406208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_435040519(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
