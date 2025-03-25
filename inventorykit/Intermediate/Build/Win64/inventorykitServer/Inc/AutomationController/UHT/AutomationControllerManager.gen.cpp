// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AutomationController/Private/AutomationControllerManager.h"
#include "Developer/AutomationController/Private/AutomationDeviceClusterManager.h"
#include "Developer/AutomationController/Public/IAutomationReport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationControllerManager() {}

// Begin Cross Module References
AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults();
AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult();
AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact();
AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationDeviceInfo();
AUTOMATIONTEST_API UEnum* Z_Construct_UEnum_AutomationTest_EAutomationState();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationExecutionEntry();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
UPackage* Z_Construct_UPackage__Script_AutomationController();
// End Cross Module References

// Begin ScriptStruct FAutomatedTestResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedTestResult;
class UScriptStruct* FAutomatedTestResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedTestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestResult, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestResult"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestResult.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestResult>()
{
	return FAutomatedTestResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomatedTestResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Warnings_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Artifacts_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestDisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FullTestPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceInstance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Warnings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Errors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Artifacts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Artifacts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName = { "TestDisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, TestDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestDisplayName_MetaData), NewProp_TestDisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath = { "FullTestPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, FullTestPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullTestPath_MetaData), NewProp_FullTestPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, State), Z_Construct_UEnum_AutomationTest_EAutomationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2997878676
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance_Inner = { "DeviceInstance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance = { "DeviceInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, DeviceInstance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceInstance_MetaData), NewProp_DeviceInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DateTime_MetaData), NewProp_DateTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomationExecutionEntry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings = { "Warnings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, Warnings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Warnings_MetaData), NewProp_Warnings_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, Errors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Errors_MetaData), NewProp_Errors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_Inner = { "Artifacts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomationArtifact, METADATA_PARAMS(0, nullptr) }; // 853363158
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts = { "Artifacts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestResult, Artifacts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Artifacts_MetaData), NewProp_Artifacts_MetaData) }; // 853363158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DateTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
	nullptr,
	&NewStructOps,
	"AutomatedTestResult",
	Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers),
	sizeof(FAutomatedTestResult),
	alignof(FAutomatedTestResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedTestResult.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestResult.InnerSingleton;
}
// End ScriptStruct FAutomatedTestResult

// Begin ScriptStruct FAutomatedTestPassResults
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedTestPassResults;
class UScriptStruct* FAutomatedTestPassResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestPassResults, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestPassResults"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestPassResults>()
{
	return FAutomatedTestPassResults::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Devices_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportCreatedOn_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Succeeded_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SucceededWithWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotRun_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InProcess_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalDuration_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonExported_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonExportDirectory_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Devices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Devices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReportCreatedOn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Succeeded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SucceededWithWarnings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Failed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NotRun;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InProcess;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
	static void NewProp_ComparisonExported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ComparisonExported;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ComparisonExportDirectory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestPassResults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices_Inner = { "Devices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomationDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 2742559182
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices = { "Devices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, Devices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Devices_MetaData), NewProp_Devices_MetaData) }; // 2742559182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn = { "ReportCreatedOn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, ReportCreatedOn), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportCreatedOn_MetaData), NewProp_ReportCreatedOn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, Succeeded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Succeeded_MetaData), NewProp_Succeeded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings = { "SucceededWithWarnings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, SucceededWithWarnings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SucceededWithWarnings_MetaData), NewProp_SucceededWithWarnings_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, Failed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failed_MetaData), NewProp_Failed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun = { "NotRun", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, NotRun), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotRun_MetaData), NewProp_NotRun_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_InProcess = { "InProcess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, InProcess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InProcess_MetaData), NewProp_InProcess_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, TotalDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalDuration_MetaData), NewProp_TotalDuration_MetaData) };
void Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_SetBit(void* Obj)
{
	((FAutomatedTestPassResults*)Obj)->ComparisonExported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported = { "ComparisonExported", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomatedTestPassResults), &Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonExported_MetaData), NewProp_ComparisonExported_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory = { "ComparisonExportDirectory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, ComparisonExportDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonExportDirectory_MetaData), NewProp_ComparisonExportDirectory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomatedTestResult, METADATA_PARAMS(0, nullptr) }; // 1516218528
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedTestPassResults, Tests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tests_MetaData), NewProp_Tests_MetaData) }; // 1516218528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_InProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
	nullptr,
	&NewStructOps,
	"AutomatedTestPassResults",
	Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers),
	sizeof(FAutomatedTestPassResults),
	alignof(FAutomatedTestPassResults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.InnerSingleton;
}
// End ScriptStruct FAutomatedTestPassResults

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutomatedTestResult::StaticStruct, Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewStructOps, TEXT("AutomatedTestResult"), &Z_Registration_Info_UScriptStruct_AutomatedTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedTestResult), 1516218528U) },
		{ FAutomatedTestPassResults::StaticStruct, Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewStructOps, TEXT("AutomatedTestPassResults"), &Z_Registration_Info_UScriptStruct_AutomatedTestPassResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedTestPassResults), 3580010717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_2534627021(TEXT("/Script/AutomationController"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
