// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Public/AutomationViewSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationViewSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationViewSettings();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationViewSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Class UAutomationViewSettings
void UAutomationViewSettings::StaticRegisterNativesUAutomationViewSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationViewSettings);
UClass* Z_Construct_UClass_UAutomationViewSettings_NoRegister()
{
	return UAutomationViewSettings::StaticClass();
}
struct Z_Construct_UClass_UAutomationViewSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AutomationViewSettings.h" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlur_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalAA_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflections_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceAO_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldAO_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadows_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeAdaptation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bloom_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AntiAliasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AntiAliasing;
	static void NewProp_MotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MotionBlur;
	static void NewProp_TemporalAA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TemporalAA;
	static void NewProp_ScreenSpaceReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ScreenSpaceReflections;
	static void NewProp_ScreenSpaceAO_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ScreenSpaceAO;
	static void NewProp_DistanceFieldAO_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DistanceFieldAO;
	static void NewProp_ContactShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ContactShadows;
	static void NewProp_EyeAdaptation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EyeAdaptation;
	static void NewProp_Bloom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bloom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationViewSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing_SetBit(void* Obj)
{
	((UAutomationViewSettings*)Obj)->AntiAliasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing = { "AntiAliasing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiAliasing_MetaData), NewProp_AntiAliasing_MetaData) };
void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur_SetBit(void* Obj)
{
	((UAutomationViewSettings*)Obj)->MotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur = { "MotionBlur", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionBlur_MetaData), NewProp_MotionBlur_MetaData) };
void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA_SetBit(void* Obj)
{
	((UAutomationViewSettings*)Obj)->TemporalAA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA = { "TemporalAA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalAA_MetaData), NewProp_TemporalAA_MetaData) };
void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections_SetBit(void* Obj)
{
	((UAutomationViewSettings*)Obj)->ScreenSpaceReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections = { "ScreenSpaceReflections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSpaceReflections_MetaData), NewProp_ScreenSpaceReflections_MetaData) };
void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO_SetBit(void* Obj)
{
	((UAutomationViewSettings*)Obj)->ScreenSpaceAO = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO = { "ScreenSpaceAO", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSpaceAO_MetaData), NewProp_ScreenSpaceAO_MetaData) };
void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO_SetBit(void* Obj)
{
	((UAutomationViewSettings*)Obj)->DistanceFieldAO = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO = { "DistanceFieldAO", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldAO_MetaData), NewProp_DistanceFieldAO_MetaData) };
void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows_SetBit(void* Obj)
{
	((UAutomationViewSettings*)Obj)->ContactShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows = { "ContactShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactShadows_MetaData), NewProp_ContactShadows_MetaData) };
void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation_SetBit(void* Obj)
{
	((UAutomationViewSettings*)Obj)->EyeAdaptation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation = { "EyeAdaptation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeAdaptation_MetaData), NewProp_EyeAdaptation_MetaData) };
void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom_SetBit(void* Obj)
{
	((UAutomationViewSettings*)Obj)->Bloom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom = { "Bloom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bloom_MetaData), NewProp_Bloom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationViewSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutomationViewSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationViewSettings_Statics::ClassParams = {
	&UAutomationViewSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutomationViewSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationViewSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationViewSettings()
{
	if (!Z_Registration_Info_UClass_UAutomationViewSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationViewSettings.OuterSingleton, Z_Construct_UClass_UAutomationViewSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationViewSettings.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<UAutomationViewSettings>()
{
	return UAutomationViewSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationViewSettings);
UAutomationViewSettings::~UAutomationViewSettings() {}
// End Class UAutomationViewSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationViewSettings, UAutomationViewSettings::StaticClass, TEXT("UAutomationViewSettings"), &Z_Registration_Info_UClass_UAutomationViewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationViewSettings), 1042021156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h_3909101327(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
