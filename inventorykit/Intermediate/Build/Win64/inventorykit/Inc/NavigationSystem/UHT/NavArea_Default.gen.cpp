// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Default.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Default() {}

// Begin Cross Module References
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Default();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Default_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavArea_Default
void UNavArea_Default::StaticRegisterNativesUNavArea_Default()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavArea_Default);
UClass* Z_Construct_UClass_UNavArea_Default_NoRegister()
{
	return UNavArea_Default::StaticClass();
}
struct Z_Construct_UClass_UNavArea_Default_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Regular navigation area, applied to entire navigation data by default */" },
		{ "IncludePath", "NavAreas/NavArea_Default.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea_Default.h" },
		{ "ToolTip", "Regular navigation area, applied to entire navigation data by default" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Default>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavArea_Default_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavArea,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Default_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Default_Statics::ClassParams = {
	&UNavArea_Default::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x002800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Default_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavArea_Default_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavArea_Default()
{
	if (!Z_Registration_Info_UClass_UNavArea_Default.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavArea_Default.OuterSingleton, Z_Construct_UClass_UNavArea_Default_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavArea_Default.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea_Default>()
{
	return UNavArea_Default::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Default);
UNavArea_Default::~UNavArea_Default() {}
// End Class UNavArea_Default

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavArea_Default, UNavArea_Default::StaticClass, TEXT("UNavArea_Default"), &Z_Registration_Info_UClass_UNavArea_Default, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavArea_Default), 2308765081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_1610414866(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
