// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ScreenShotComparisonTools/Public/ScreenShotComparisonSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenShotComparisonSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SCREENSHOTCOMPARISONTOOLS_API UClass* Z_Construct_UClass_UScreenShotComparisonSettings();
SCREENSHOTCOMPARISONTOOLS_API UClass* Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister();
SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotFallbackEntry();
UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
// End Cross Module References

// Begin ScriptStruct FScreenshotFallbackEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry;
class UScriptStruct* FScreenshotFallbackEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotFallbackEntry, (UObject*)Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ScreenshotFallbackEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.OuterSingleton;
}
template<> SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* StaticStruct<FScreenshotFallbackEntry>()
{
	return FScreenshotFallbackEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for screenshot fallbacks\n*/" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
		{ "ToolTip", "Holds settings for screenshot fallbacks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Child;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotFallbackEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenshotFallbackEntry, Parent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenshotFallbackEntry, Child), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
	nullptr,
	&NewStructOps,
	"ScreenshotFallbackEntry",
	Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers),
	sizeof(FScreenshotFallbackEntry),
	alignof(FScreenshotFallbackEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScreenshotFallbackEntry()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.InnerSingleton;
}
// End ScriptStruct FScreenshotFallbackEntry

// Begin Class UScreenShotComparisonSettings
void UScreenShotComparisonSettings::StaticRegisterNativesUScreenShotComparisonSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreenShotComparisonSettings);
UClass* Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister()
{
	return UScreenShotComparisonSettings::StaticClass();
}
struct Z_Construct_UClass_UScreenShotComparisonSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ScreenShotComparisonSettings.h" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData[] = {
		{ "Comment", "/**\n\x09* If true, any checked-in test results for confidential platforms will be put under <ProjectDir>/Platforms/<Platform>/Test instead of <ProjectDir>/Test\n\x09*/" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
		{ "ToolTip", "If true, any checked-in test results for confidential platforms will be put under <ProjectDir>/Platforms/<Platform>/Test instead of <ProjectDir>/Test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotFallbackPlatforms_MetaData[] = {
		{ "Comment", "/**\n\x09* An array of entries that describe other platforms we can use for fallbacks when comparing screenshots\n\x09*/" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
		{ "ToolTip", "An array of entries that describe other platforms we can use for fallbacks when comparing screenshots" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConfidentialPlatformPathsForSavedResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenshotFallbackPlatforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScreenshotFallbackPlatforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenShotComparisonSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit(void* Obj)
{
	((UScreenShotComparisonSettings*)Obj)->bUseConfidentialPlatformPathsForSavedResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults = { "bUseConfidentialPlatformPathsForSavedResults", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScreenShotComparisonSettings), &Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData), NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_Inner = { "ScreenshotFallbackPlatforms", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FScreenshotFallbackEntry, METADATA_PARAMS(0, nullptr) }; // 1172228516
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms = { "ScreenshotFallbackPlatforms", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenShotComparisonSettings, ScreenshotFallbackPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotFallbackPlatforms_MetaData), NewProp_ScreenshotFallbackPlatforms_MetaData) }; // 1172228516
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScreenShotComparisonSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::ClassParams = {
	&UScreenShotComparisonSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UScreenShotComparisonSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScreenShotComparisonSettings()
{
	if (!Z_Registration_Info_UClass_UScreenShotComparisonSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenShotComparisonSettings.OuterSingleton, Z_Construct_UClass_UScreenShotComparisonSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreenShotComparisonSettings.OuterSingleton;
}
template<> SCREENSHOTCOMPARISONTOOLS_API UClass* StaticClass<UScreenShotComparisonSettings>()
{
	return UScreenShotComparisonSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenShotComparisonSettings);
UScreenShotComparisonSettings::~UScreenShotComparisonSettings() {}
// End Class UScreenShotComparisonSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScreenshotFallbackEntry::StaticStruct, Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewStructOps, TEXT("ScreenshotFallbackEntry"), &Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotFallbackEntry), 1172228516U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScreenShotComparisonSettings, UScreenShotComparisonSettings::StaticClass, TEXT("UScreenShotComparisonSettings"), &Z_Registration_Info_UClass_UScreenShotComparisonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenShotComparisonSettings), 3799686615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_4159562986(TEXT("/Script/ScreenShotComparisonTools"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
