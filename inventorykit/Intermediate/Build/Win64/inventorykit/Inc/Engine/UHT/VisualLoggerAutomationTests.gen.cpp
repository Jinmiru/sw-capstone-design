// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VisualLogger/VisualLoggerAutomationTests.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerAutomationTests() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerAutomationTests();
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerAutomationTests_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVisualLoggerAutomationTests
void UVisualLoggerAutomationTests::StaticRegisterNativesUVisualLoggerAutomationTests()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualLoggerAutomationTests);
UClass* Z_Construct_UClass_UVisualLoggerAutomationTests_NoRegister()
{
	return UVisualLoggerAutomationTests::StaticClass();
}
struct Z_Construct_UClass_UVisualLoggerAutomationTests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "UObject" },
		{ "IncludePath", "VisualLogger/VisualLoggerAutomationTests.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerAutomationTests.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerAutomationTests>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::ClassParams = {
	&UVisualLoggerAutomationTests::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::Class_MetaDataParams), Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVisualLoggerAutomationTests()
{
	if (!Z_Registration_Info_UClass_UVisualLoggerAutomationTests.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualLoggerAutomationTests.OuterSingleton, Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVisualLoggerAutomationTests.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVisualLoggerAutomationTests>()
{
	return UVisualLoggerAutomationTests::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerAutomationTests);
UVisualLoggerAutomationTests::~UVisualLoggerAutomationTests() {}
// End Class UVisualLoggerAutomationTests

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerAutomationTests_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVisualLoggerAutomationTests, UVisualLoggerAutomationTests::StaticClass, TEXT("UVisualLoggerAutomationTests"), &Z_Registration_Info_UClass_UVisualLoggerAutomationTests, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualLoggerAutomationTests), 2140225684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerAutomationTests_h_2370980119(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerAutomationTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerAutomationTests_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
