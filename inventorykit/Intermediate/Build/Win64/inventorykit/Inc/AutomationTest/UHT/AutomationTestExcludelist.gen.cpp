// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AutomationTest/Public/AutomationTestExcludelist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationTestExcludelist() {}

// Begin Cross Module References
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestExcludelist();
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestExcludelist_NoRegister();
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestExcludelistConfig();
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestExcludelistConfig_NoRegister();
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestExcludelistSettings();
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestExcludelistSettings_NoRegister();
AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestPlatformSettings();
AUTOMATIONTEST_API UEnum* Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options();
AUTOMATIONTEST_API UEnum* Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options();
AUTOMATIONTEST_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry();
AUTOMATIONTEST_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestExcludeOptions();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AutomationTest();
// End Cross Module References

// Begin Enum ETEST_RHI_Options
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETEST_RHI_Options;
static UEnum* ETEST_RHI_Options_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETEST_RHI_Options.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETEST_RHI_Options.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options, (UObject*)Z_Construct_UPackage__Script_AutomationTest(), TEXT("ETEST_RHI_Options"));
	}
	return Z_Registration_Info_UEnum_ETEST_RHI_Options.OuterSingleton;
}
template<> AUTOMATIONTEST_API UEnum* StaticEnum<ETEST_RHI_Options>()
{
	return ETEST_RHI_Options_StaticEnum();
}
struct Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DirectX11.Name", "ETEST_RHI_Options::DirectX11" },
		{ "DirectX12.Name", "ETEST_RHI_Options::DirectX12" },
		{ "Metal.Name", "ETEST_RHI_Options::Metal" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "Null.Name", "ETEST_RHI_Options::Null" },
		{ "Vulkan.Name", "ETEST_RHI_Options::Vulkan" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETEST_RHI_Options::DirectX11", (int64)ETEST_RHI_Options::DirectX11 },
		{ "ETEST_RHI_Options::DirectX12", (int64)ETEST_RHI_Options::DirectX12 },
		{ "ETEST_RHI_Options::Vulkan", (int64)ETEST_RHI_Options::Vulkan },
		{ "ETEST_RHI_Options::Metal", (int64)ETEST_RHI_Options::Metal },
		{ "ETEST_RHI_Options::Null", (int64)ETEST_RHI_Options::Null },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutomationTest,
	nullptr,
	"ETEST_RHI_Options",
	"ETEST_RHI_Options",
	Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options()
{
	if (!Z_Registration_Info_UEnum_ETEST_RHI_Options.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETEST_RHI_Options.InnerSingleton, Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETEST_RHI_Options.InnerSingleton;
}
// End Enum ETEST_RHI_Options

// Begin Enum ETEST_RHI_FeatureLevel_Options
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options;
static UEnum* ETEST_RHI_FeatureLevel_Options_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options, (UObject*)Z_Construct_UPackage__Script_AutomationTest(), TEXT("ETEST_RHI_FeatureLevel_Options"));
	}
	return Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton;
}
template<> AUTOMATIONTEST_API UEnum* StaticEnum<ETEST_RHI_FeatureLevel_Options>()
{
	return ETEST_RHI_FeatureLevel_Options_StaticEnum();
}
struct Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "SM5.Name", "ETEST_RHI_FeatureLevel_Options::SM5" },
		{ "SM6.Name", "ETEST_RHI_FeatureLevel_Options::SM6" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETEST_RHI_FeatureLevel_Options::SM5", (int64)ETEST_RHI_FeatureLevel_Options::SM5 },
		{ "ETEST_RHI_FeatureLevel_Options::SM6", (int64)ETEST_RHI_FeatureLevel_Options::SM6 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutomationTest,
	nullptr,
	"ETEST_RHI_FeatureLevel_Options",
	"ETEST_RHI_FeatureLevel_Options",
	Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options()
{
	if (!Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.InnerSingleton, Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.InnerSingleton;
}
// End Enum ETEST_RHI_FeatureLevel_Options

// Begin Class UAutomationTestExcludelistSettings
void UAutomationTestExcludelistSettings::StaticRegisterNativesUAutomationTestExcludelistSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationTestExcludelistSettings);
UClass* Z_Construct_UClass_UAutomationTestExcludelistSettings_NoRegister()
{
	return UAutomationTestExcludelistSettings::StaticClass();
}
struct Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AutomationTestExcludelist.h" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedRHIs_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SupportedRHIs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedRHIs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationTestExcludelistSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::NewProp_SupportedRHIs_Inner = { "SupportedRHIs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::NewProp_SupportedRHIs = { "SupportedRHIs", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestExcludelistSettings, SupportedRHIs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedRHIs_MetaData), NewProp_SupportedRHIs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::NewProp_SupportedRHIs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::NewProp_SupportedRHIs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAutomationTestPlatformSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::ClassParams = {
	&UAutomationTestExcludelistSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationTestExcludelistSettings()
{
	if (!Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.OuterSingleton, Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.OuterSingleton;
}
template<> AUTOMATIONTEST_API UClass* StaticClass<UAutomationTestExcludelistSettings>()
{
	return UAutomationTestExcludelistSettings::StaticClass();
}
UAutomationTestExcludelistSettings::UAutomationTestExcludelistSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationTestExcludelistSettings);
UAutomationTestExcludelistSettings::~UAutomationTestExcludelistSettings() {}
// End Class UAutomationTestExcludelistSettings

// Begin ScriptStruct FAutomationTestExcludeOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions;
class UScriptStruct* FAutomationTestExcludeOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions, (UObject*)Z_Construct_UPackage__Script_AutomationTest(), TEXT("AutomationTestExcludeOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.OuterSingleton;
}
template<> AUTOMATIONTEST_API UScriptStruct* StaticStruct<FAutomationTestExcludeOptions>()
{
	return FAutomationTestExcludeOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[] = {
		{ "Category", "ExcludeTestOptions" },
		{ "Comment", "/* Name of the target test */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Name of the target test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "Category", "ExcludeTestOptions" },
		{ "Comment", "/* Reason to why the test is excluded */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Reason to why the test is excluded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RHIs_MetaData[] = {
		{ "Category", "ExcludeTestOptions" },
		{ "Comment", "/* Options to target specific RHI. No option means it should be applied to all RHIs */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Options to target specific RHI. No option means it should be applied to all RHIs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[] = {
		{ "Category", "ExcludeTestOptions" },
		{ "Comment", "/* Options to target specific platform. No option means it should be applied to all platforms */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Options to target specific platform. No option means it should be applied to all platforms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Warn_MetaData[] = {
		{ "Category", "ExcludeTestOptions" },
		{ "Comment", "/* Should the Reason be reported as a warning in the log */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Should the Reason be reported as a warning in the log" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Test;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RHIs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RHIs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Platforms_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Platforms;
	static void NewProp_Warn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Warn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationTestExcludeOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationTestExcludeOptions, Test), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Test_MetaData), NewProp_Test_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationTestExcludeOptions, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_RHIs_ElementProp = { "RHIs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_RHIs = { "RHIs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationTestExcludeOptions, RHIs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RHIs_MetaData), NewProp_RHIs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Platforms_ElementProp = { "Platforms", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationTestExcludeOptions, Platforms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platforms_MetaData), NewProp_Platforms_MetaData) };
void Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn_SetBit(void* Obj)
{
	((FAutomationTestExcludeOptions*)Obj)->Warn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn = { "Warn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationTestExcludeOptions), &Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Warn_MetaData), NewProp_Warn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Test,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_RHIs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_RHIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Platforms_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Platforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationTest,
	nullptr,
	&NewStructOps,
	"AutomationTestExcludeOptions",
	Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::PropPointers),
	sizeof(FAutomationTestExcludeOptions),
	alignof(FAutomationTestExcludeOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestExcludeOptions()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.InnerSingleton, Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.InnerSingleton;
}
// End ScriptStruct FAutomationTestExcludeOptions

// Begin ScriptStruct FAutomationTestExcludelistEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry;
class UScriptStruct* FAutomationTestExcludelistEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry, (UObject*)Z_Construct_UPackage__Script_AutomationTest(), TEXT("AutomationTestExcludelistEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.OuterSingleton;
}
template<> AUTOMATIONTEST_API UScriptStruct* StaticStruct<FAutomationTestExcludelistEntry>()
{
	return FAutomationTestExcludelistEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "Comment", "/* Hold the name of the target functional test map */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Hold the name of the target functional test map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[] = {
		{ "Comment", "/* Hold the name of the target test - full test name is require here unless for functional tests */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Hold the name of the target test - full test name is require here unless for functional tests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "Comment", "/* Reason to why the test is excluded */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Reason to why the test is excluded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RHIs_MetaData[] = {
		{ "Comment", "/* Option to target specific RHI. Empty array means it should be applied to all RHI */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Option to target specific RHI. Empty array means it should be applied to all RHI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Warn_MetaData[] = {
		{ "Comment", "/* Should the Reason be reported as a warning in the log */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Should the Reason be reported as a warning in the log" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Test;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RHIs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RHIs;
	static void NewProp_Warn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Warn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationTestExcludelistEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationTestExcludelistEntry, Map), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationTestExcludelistEntry, Test), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Test_MetaData), NewProp_Test_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationTestExcludelistEntry, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs_ElementProp = { "RHIs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs = { "RHIs", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationTestExcludelistEntry, RHIs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RHIs_MetaData), NewProp_RHIs_MetaData) };
void Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn_SetBit(void* Obj)
{
	((FAutomationTestExcludelistEntry*)Obj)->Warn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn = { "Warn", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationTestExcludelistEntry), &Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Warn_MetaData), NewProp_Warn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Test,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationTest,
	nullptr,
	&NewStructOps,
	"AutomationTestExcludelistEntry",
	Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::PropPointers),
	sizeof(FAutomationTestExcludelistEntry),
	alignof(FAutomationTestExcludelistEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.InnerSingleton, Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.InnerSingleton;
}
// End ScriptStruct FAutomationTestExcludelistEntry

// Begin Class UAutomationTestExcludelistConfig
void UAutomationTestExcludelistConfig::StaticRegisterNativesUAutomationTestExcludelistConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationTestExcludelistConfig);
UClass* Z_Construct_UClass_UAutomationTestExcludelistConfig_NoRegister()
{
	return UAutomationTestExcludelistConfig::StaticClass();
}
struct Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AutomationTestExcludelist.h" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskTrackerURLHashtag_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskTrackerURLBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeTest_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskTrackerURLHashtag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskTrackerURLBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeTest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeTest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationTestExcludelistConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::NewProp_TaskTrackerURLHashtag = { "TaskTrackerURLHashtag", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestExcludelistConfig, TaskTrackerURLHashtag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskTrackerURLHashtag_MetaData), NewProp_TaskTrackerURLHashtag_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::NewProp_TaskTrackerURLBase = { "TaskTrackerURLBase", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestExcludelistConfig, TaskTrackerURLBase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskTrackerURLBase_MetaData), NewProp_TaskTrackerURLBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::NewProp_ExcludeTest_Inner = { "ExcludeTest", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry, METADATA_PARAMS(0, nullptr) }; // 907348246
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::NewProp_ExcludeTest = { "ExcludeTest", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestExcludelistConfig, ExcludeTest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeTest_MetaData), NewProp_ExcludeTest_MetaData) }; // 907348246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::NewProp_TaskTrackerURLHashtag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::NewProp_TaskTrackerURLBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::NewProp_ExcludeTest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::NewProp_ExcludeTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAutomationTestPlatformSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::ClassParams = {
	&UAutomationTestExcludelistConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationTestExcludelistConfig()
{
	if (!Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.OuterSingleton, Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.OuterSingleton;
}
template<> AUTOMATIONTEST_API UClass* StaticClass<UAutomationTestExcludelistConfig>()
{
	return UAutomationTestExcludelistConfig::StaticClass();
}
UAutomationTestExcludelistConfig::UAutomationTestExcludelistConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationTestExcludelistConfig);
UAutomationTestExcludelistConfig::~UAutomationTestExcludelistConfig() {}
// End Class UAutomationTestExcludelistConfig

// Begin Class UAutomationTestExcludelist
void UAutomationTestExcludelist::StaticRegisterNativesUAutomationTestExcludelist()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationTestExcludelist);
UClass* Z_Construct_UClass_UAutomationTestExcludelist_NoRegister()
{
	return UAutomationTestExcludelist::StaticClass();
}
struct Z_Construct_UClass_UAutomationTestExcludelist_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AutomationTestExcludelist.h" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformConfigs_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformConfigs_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformConfigs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationTestExcludelist>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_DefaultConfig = { "DefaultConfig", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestExcludelist, DefaultConfig), Z_Construct_UClass_UAutomationTestExcludelistConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultConfig_MetaData), NewProp_DefaultConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_PlatformConfigs_ValueProp = { "PlatformConfigs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAutomationTestExcludelistConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_PlatformConfigs_Key_KeyProp = { "PlatformConfigs_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_PlatformConfigs = { "PlatformConfigs", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationTestExcludelist, PlatformConfigs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformConfigs_MetaData), NewProp_PlatformConfigs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationTestExcludelist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_DefaultConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_PlatformConfigs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_PlatformConfigs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_PlatformConfigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelist_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutomationTestExcludelist_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelist_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationTestExcludelist_Statics::ClassParams = {
	&UAutomationTestExcludelist::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutomationTestExcludelist_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelist_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelist_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationTestExcludelist_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationTestExcludelist()
{
	if (!Z_Registration_Info_UClass_UAutomationTestExcludelist.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationTestExcludelist.OuterSingleton, Z_Construct_UClass_UAutomationTestExcludelist_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationTestExcludelist.OuterSingleton;
}
template<> AUTOMATIONTEST_API UClass* StaticClass<UAutomationTestExcludelist>()
{
	return UAutomationTestExcludelist::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationTestExcludelist);
UAutomationTestExcludelist::~UAutomationTestExcludelist() {}
// End Class UAutomationTestExcludelist

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETEST_RHI_Options_StaticEnum, TEXT("ETEST_RHI_Options"), &Z_Registration_Info_UEnum_ETEST_RHI_Options, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4192756970U) },
		{ ETEST_RHI_FeatureLevel_Options_StaticEnum, TEXT("ETEST_RHI_FeatureLevel_Options"), &Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3509030560U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutomationTestExcludeOptions::StaticStruct, Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewStructOps, TEXT("AutomationTestExcludeOptions"), &Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationTestExcludeOptions), 3292925183U) },
		{ FAutomationTestExcludelistEntry::StaticStruct, Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewStructOps, TEXT("AutomationTestExcludelistEntry"), &Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationTestExcludelistEntry), 907348246U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationTestExcludelistSettings, UAutomationTestExcludelistSettings::StaticClass, TEXT("UAutomationTestExcludelistSettings"), &Z_Registration_Info_UClass_UAutomationTestExcludelistSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationTestExcludelistSettings), 4033089028U) },
		{ Z_Construct_UClass_UAutomationTestExcludelistConfig, UAutomationTestExcludelistConfig::StaticClass, TEXT("UAutomationTestExcludelistConfig"), &Z_Registration_Info_UClass_UAutomationTestExcludelistConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationTestExcludelistConfig), 1685450340U) },
		{ Z_Construct_UClass_UAutomationTestExcludelist, UAutomationTestExcludelist::StaticClass, TEXT("UAutomationTestExcludelist"), &Z_Registration_Info_UClass_UAutomationTestExcludelist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationTestExcludelist), 4106936560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_2781115371(TEXT("/Script/AutomationTest"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
