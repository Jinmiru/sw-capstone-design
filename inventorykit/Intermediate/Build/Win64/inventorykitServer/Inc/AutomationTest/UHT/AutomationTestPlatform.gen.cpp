// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AutomationTest/Public/AutomationTestPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationTestPlatform() {}

// Begin Cross Module References
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestPlatformSettings();
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestPlatformSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AutomationTest();
// End Cross Module References

// Begin Class UAutomationTestPlatformSettings
void UAutomationTestPlatformSettings::StaticRegisterNativesUAutomationTestPlatformSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationTestPlatformSettings);
UClass* Z_Construct_UClass_UAutomationTestPlatformSettings_NoRegister()
{
	return UAutomationTestPlatformSettings::StaticClass();
}
struct Z_Construct_UClass_UAutomationTestPlatformSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AutomationTestPlatform.h" },
		{ "ModuleRelativePath", "Public/AutomationTestPlatform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationTestPlatformSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutomationTestPlatformSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestPlatformSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationTestPlatformSettings_Statics::ClassParams = {
	&UAutomationTestPlatformSettings::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestPlatformSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationTestPlatformSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationTestPlatformSettings()
{
	if (!Z_Registration_Info_UClass_UAutomationTestPlatformSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationTestPlatformSettings.OuterSingleton, Z_Construct_UClass_UAutomationTestPlatformSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationTestPlatformSettings.OuterSingleton;
}
template<> AUTOMATIONTEST_API UClass* StaticClass<UAutomationTestPlatformSettings>()
{
	return UAutomationTestPlatformSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationTestPlatformSettings);
UAutomationTestPlatformSettings::~UAutomationTestPlatformSettings() {}
// End Class UAutomationTestPlatformSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationTestPlatformSettings, UAutomationTestPlatformSettings::StaticClass, TEXT("UAutomationTestPlatformSettings"), &Z_Registration_Info_UClass_UAutomationTestPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationTestPlatformSettings), 2743523094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_3835929449(TEXT("/Script/AutomationTest"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
