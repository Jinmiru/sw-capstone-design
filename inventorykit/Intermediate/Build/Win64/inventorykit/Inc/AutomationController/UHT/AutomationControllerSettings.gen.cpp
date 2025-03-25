// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AutomationController/Public/AutomationControllerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationControllerSettings() {}

// Begin Cross Module References
AUTOMATIONCONTROLLER_API UClass* Z_Construct_UClass_UAutomationControllerSettings();
AUTOMATIONCONTROLLER_API UClass* Z_Construct_UClass_UAutomationControllerSettings_NoRegister();
AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestFilter();
AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestFilterBase();
AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestGroup();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AutomationController();
// End Cross Module References

// Begin ScriptStruct FAutomatedTestFilterBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedTestFilterBase;
class UScriptStruct* FAutomatedTestFilterBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestFilterBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedTestFilterBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestFilterBase, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestFilterBase"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestFilterBase.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestFilterBase>()
{
	return FAutomatedTestFilterBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* Describes a base filter for a test group.\n*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "* Describes a base filter for a test group." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[] = {
		{ "Comment", "/** String that the test must contain */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "String that the test must contain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchFromStart_MetaData[] = {
		{ "Comment", "/** If true start matching from the start of the string, else anywhere */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "If true start matching from the start of the string, else anywhere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchFromEnd_MetaData[] = {
		{ "Comment", "/** If true start matching from the end of the string, else anywhere */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "If true start matching from the end of the string, else anywhere" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Contains;
	static void NewProp_MatchFromStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MatchFromStart;
	static void NewProp_MatchFromEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MatchFromEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestFilterBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestFilterBase, Contains), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contains_MetaData), NewProp_Contains_MetaData) };
void Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromStart_SetBit(void* Obj)
{
	((FAutomatedTestFilterBase*)Obj)->MatchFromStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromStart = { "MatchFromStart", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomatedTestFilterBase), &Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchFromStart_MetaData), NewProp_MatchFromStart_MetaData) };
void Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromEnd_SetBit(void* Obj)
{
	((FAutomatedTestFilterBase*)Obj)->MatchFromEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromEnd = { "MatchFromEnd", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomatedTestFilterBase), &Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchFromEnd_MetaData), NewProp_MatchFromEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_Contains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
	nullptr,
	&NewStructOps,
	"AutomatedTestFilterBase",
	Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::PropPointers),
	sizeof(FAutomatedTestFilterBase),
	alignof(FAutomatedTestFilterBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestFilterBase()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestFilterBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedTestFilterBase.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestFilterBase.InnerSingleton;
}
// End ScriptStruct FAutomatedTestFilterBase

// Begin ScriptStruct FAutomatedTestFilter
static_assert(std::is_polymorphic<FAutomatedTestFilter>() == std::is_polymorphic<FAutomatedTestFilterBase>(), "USTRUCT FAutomatedTestFilter cannot be polymorphic unless super FAutomatedTestFilterBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedTestFilter;
class UScriptStruct* FAutomatedTestFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedTestFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestFilter, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestFilter"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestFilter.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestFilter>()
{
	return FAutomatedTestFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* Describes a filter for a test group with exclude option.\n*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "* Describes a filter for a test group with exclude option." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exclude_MetaData[] = {
		{ "Comment", "/** List of filters to exclude */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "List of filters to exclude" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Exclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Exclude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Exclude_Inner = { "Exclude", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomatedTestFilterBase, METADATA_PARAMS(0, nullptr) }; // 1000079960
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Exclude = { "Exclude", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestFilter, Exclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exclude_MetaData), NewProp_Exclude_MetaData) }; // 1000079960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Exclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Exclude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
	Z_Construct_UScriptStruct_FAutomatedTestFilterBase,
	&NewStructOps,
	"AutomatedTestFilter",
	Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers),
	sizeof(FAutomatedTestFilter),
	alignof(FAutomatedTestFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestFilter()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedTestFilter.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestFilter.InnerSingleton;
}
// End ScriptStruct FAutomatedTestFilter

// Begin ScriptStruct FAutomatedTestGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedTestGroup;
class UScriptStruct* FAutomatedTestGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedTestGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestGroup, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestGroup"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestGroup.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestGroup>()
{
	return FAutomatedTestGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n *\x09""Describes a group of tests. Each group has a name and a set of filters that determine group membership\n */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "*     Describes a group of tests. Each group has a name and a set of filters that determine group membership" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestGroup, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomatedTestFilter, METADATA_PARAMS(0, nullptr) }; // 412436940
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestGroup, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) }; // 412436940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
	nullptr,
	&NewStructOps,
	"AutomatedTestGroup",
	Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers),
	sizeof(FAutomatedTestGroup),
	alignof(FAutomatedTestGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestGroup()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedTestGroup.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestGroup.InnerSingleton;
}
// End ScriptStruct FAutomatedTestGroup

// Begin Class UAutomationControllerSettings
void UAutomationControllerSettings::StaticRegisterNativesUAutomationControllerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationControllerSettings);
UClass* Z_Construct_UClass_UAutomationControllerSettings_NoRegister()
{
	return UAutomationControllerSettings::StaticClass();
}
struct Z_Construct_UClass_UAutomationControllerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's user settings.\n */" },
		{ "IncludePath", "AutomationControllerSettings.h" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[] = {
		{ "Comment", "/** List of user-defined test groups */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "List of user-defined test groups" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressLogErrors_MetaData[] = {
		{ "Comment", "/** Whether to suppress log from test results (default=false) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to suppress log from test results (default=false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressLogWarnings_MetaData[] = {
		{ "Comment", "/** Whether to suppress log warnings from test results (default=false) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to suppress log warnings from test results (default=false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bElevateLogWarningsToErrors_MetaData[] = {
		{ "Comment", "/** Whether to treat log warnings as log errors (default=true) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to treat log warnings as log errors (default=true)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuppressedLogCategories_MetaData[] = {
		{ "Comment", "/** Log categories where warnings/errors will not affect the result of tests. A finer-grained way of preventing rogue systems from leading to test warnings/errors */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Log categories where warnings/errors will not affect the result of tests. A finer-grained way of preventing rogue systems from leading to test warnings/errors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepPIEOpen_MetaData[] = {
		{ "Comment", "/** Whether to keep the PIE Open in the editor at the end of a test pass (default=false) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to keep the PIE Open in the editor at the end of a test pass (default=false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoExpandSingleItemSubgroups_MetaData[] = {
		{ "Comment", "/** Whether to automatically expand Automation Tests tree subgroups that have single non-leaf item as a child (default=true) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to automatically expand Automation Tests tree subgroups that have single non-leaf item as a child (default=true)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTreatLogWarningsAsTestErrors_MetaData[] = {
		{ "Comment", "/** Whether to treat log warnings as test errors (default=true) */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use bElevateLogWarningsToErrors instead." },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to treat log warnings as test errors (default=true)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckTestIntervalSeconds_MetaData[] = {
		{ "Comment", "/** How long to wait between test updates (default=1sec)*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "How long to wait between test updates (default=1sec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInstanceLostTimerSeconds_MetaData[] = {
		{ "Comment", "/** The maximum response wait time for detecting a lost game instance (default=300sec)*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "The maximum response wait time for detecting a lost game instance (default=300sec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TelemetryDirectory_MetaData[] = {
		{ "Comment", "/** Path to where telemetry files are saved (default=<project>/Saved/Automation/Telemetry/)*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Path to where telemetry files are saved (default=<project>/Saved/Automation/Telemetry/)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetTelemetryStorageOnNewSession_MetaData[] = {
		{ "Comment", "/** Whether to reset data stored in telemetry file (default=false) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to reset data stored in telemetry file (default=false)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
	static void NewProp_bSuppressLogErrors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressLogErrors;
	static void NewProp_bSuppressLogWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressLogWarnings;
	static void NewProp_bElevateLogWarningsToErrors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bElevateLogWarningsToErrors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SuppressedLogCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SuppressedLogCategories;
	static void NewProp_bKeepPIEOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPIEOpen;
	static void NewProp_bAutoExpandSingleItemSubgroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoExpandSingleItemSubgroups;
	static void NewProp_bTreatLogWarningsAsTestErrors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatLogWarningsAsTestErrors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckTestIntervalSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameInstanceLostTimerSeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TelemetryDirectory;
	static void NewProp_bResetTelemetryStorageOnNewSession_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTelemetryStorageOnNewSession;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationControllerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomatedTestGroup, METADATA_PARAMS(0, nullptr) }; // 2606196396
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationControllerSettings, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Groups_MetaData), NewProp_Groups_MetaData) }; // 2606196396
void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors_SetBit(void* Obj)
{
	((UAutomationControllerSettings*)Obj)->bSuppressLogErrors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors = { "bSuppressLogErrors", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressLogErrors_MetaData), NewProp_bSuppressLogErrors_MetaData) };
void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings_SetBit(void* Obj)
{
	((UAutomationControllerSettings*)Obj)->bSuppressLogWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings = { "bSuppressLogWarnings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressLogWarnings_MetaData), NewProp_bSuppressLogWarnings_MetaData) };
void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors_SetBit(void* Obj)
{
	((UAutomationControllerSettings*)Obj)->bElevateLogWarningsToErrors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors = { "bElevateLogWarningsToErrors", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bElevateLogWarningsToErrors_MetaData), NewProp_bElevateLogWarningsToErrors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories_Inner = { "SuppressedLogCategories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories = { "SuppressedLogCategories", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationControllerSettings, SuppressedLogCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuppressedLogCategories_MetaData), NewProp_SuppressedLogCategories_MetaData) };
void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen_SetBit(void* Obj)
{
	((UAutomationControllerSettings*)Obj)->bKeepPIEOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen = { "bKeepPIEOpen", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepPIEOpen_MetaData), NewProp_bKeepPIEOpen_MetaData) };
void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bAutoExpandSingleItemSubgroups_SetBit(void* Obj)
{
	((UAutomationControllerSettings*)Obj)->bAutoExpandSingleItemSubgroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bAutoExpandSingleItemSubgroups = { "bAutoExpandSingleItemSubgroups", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bAutoExpandSingleItemSubgroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoExpandSingleItemSubgroups_MetaData), NewProp_bAutoExpandSingleItemSubgroups_MetaData) };
void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_SetBit(void* Obj)
{
	((UAutomationControllerSettings*)Obj)->bTreatLogWarningsAsTestErrors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors = { "bTreatLogWarningsAsTestErrors", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTreatLogWarningsAsTestErrors_MetaData), NewProp_bTreatLogWarningsAsTestErrors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds = { "CheckTestIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationControllerSettings, CheckTestIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckTestIntervalSeconds_MetaData), NewProp_CheckTestIntervalSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds = { "GameInstanceLostTimerSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationControllerSettings, GameInstanceLostTimerSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInstanceLostTimerSeconds_MetaData), NewProp_GameInstanceLostTimerSeconds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_TelemetryDirectory = { "TelemetryDirectory", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutomationControllerSettings, TelemetryDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TelemetryDirectory_MetaData), NewProp_TelemetryDirectory_MetaData) };
void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession_SetBit(void* Obj)
{
	((UAutomationControllerSettings*)Obj)->bResetTelemetryStorageOnNewSession = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession = { "bResetTelemetryStorageOnNewSession", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetTelemetryStorageOnNewSession_MetaData), NewProp_bResetTelemetryStorageOnNewSession_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bAutoExpandSingleItemSubgroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_TelemetryDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutomationControllerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationControllerSettings_Statics::ClassParams = {
	&UAutomationControllerSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationControllerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationControllerSettings()
{
	if (!Z_Registration_Info_UClass_UAutomationControllerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationControllerSettings.OuterSingleton, Z_Construct_UClass_UAutomationControllerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationControllerSettings.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UClass* StaticClass<UAutomationControllerSettings>()
{
	return UAutomationControllerSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationControllerSettings);
UAutomationControllerSettings::~UAutomationControllerSettings() {}
// End Class UAutomationControllerSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutomatedTestFilterBase::StaticStruct, Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewStructOps, TEXT("AutomatedTestFilterBase"), &Z_Registration_Info_UScriptStruct_AutomatedTestFilterBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedTestFilterBase), 1000079960U) },
		{ FAutomatedTestFilter::StaticStruct, Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewStructOps, TEXT("AutomatedTestFilter"), &Z_Registration_Info_UScriptStruct_AutomatedTestFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedTestFilter), 412436940U) },
		{ FAutomatedTestGroup::StaticStruct, Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewStructOps, TEXT("AutomatedTestGroup"), &Z_Registration_Info_UScriptStruct_AutomatedTestGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedTestGroup), 2606196396U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationControllerSettings, UAutomationControllerSettings::StaticClass, TEXT("UAutomationControllerSettings"), &Z_Registration_Info_UClass_UAutomationControllerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationControllerSettings), 627702212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_2144159446(TEXT("/Script/AutomationController"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
