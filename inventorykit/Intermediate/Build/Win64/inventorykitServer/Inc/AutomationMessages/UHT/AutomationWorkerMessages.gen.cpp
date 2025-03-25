// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AutomationMessages/Public/AutomationWorkerMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationWorkerMessages() {}

// Begin Cross Module References
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerMessageBase();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStopTests();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse();
AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline();
AUTOMATIONTEST_API UEnum* Z_Construct_UEnum_AutomationTest_EAutomationState();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationExecutionEntry();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_AutomationMessages();
// End Cross Module References

// Begin ScriptStruct FAutomationWorkerMessageBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerMessageBase;
class UScriptStruct* FAutomationWorkerMessageBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerMessageBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerMessageBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerMessageBase, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerMessageBase"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerMessageBase.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerMessageBase>()
{
	return FAutomationWorkerMessageBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerMessageBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerMessageBase, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::NewProp_InstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	nullptr,
	&NewStructOps,
	"AutomationWorkerMessageBase",
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::PropPointers),
	sizeof(FAutomationWorkerMessageBase),
	alignof(FAutomationWorkerMessageBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerMessageBase()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerMessageBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerMessageBase.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerMessageBase.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerMessageBase

// Begin ScriptStruct FAutomationWorkerFindWorkers
static_assert(std::is_polymorphic<FAutomationWorkerFindWorkers>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerFindWorkers cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers;
class UScriptStruct* FAutomationWorkerFindWorkers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkers"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerFindWorkers>()
{
	return FAutomationWorkerFindWorkers::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is published to find automation workers.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is published to find automation workers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Changelist_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the change list number to find workers for. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the change list number to find workers for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The name of the game. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The name of the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The name of the process. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The name of the process." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the session identifier to find workers for. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the session identifier to find workers for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Changelist;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProcessName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist = { "Changelist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkers, Changelist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Changelist_MetaData), NewProp_Changelist_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkers, GameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameName_MetaData), NewProp_GameName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName = { "ProcessName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkers, ProcessName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessName_MetaData), NewProp_ProcessName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkers, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerFindWorkers",
	Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers),
	sizeof(FAutomationWorkerFindWorkers),
	alignof(FAutomationWorkerFindWorkers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerFindWorkers

// Begin ScriptStruct FAutomationWorkerFindWorkersResponse
static_assert(std::is_polymorphic<FAutomationWorkerFindWorkersResponse>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerFindWorkersResponse cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse;
class UScriptStruct* FAutomationWorkerFindWorkersResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkersResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerFindWorkersResponse>()
{
	return FAutomationWorkerFindWorkersResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent in response to FAutomationWorkerFindWorkers.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in response to FAutomationWorkerFindWorkers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the device that the worker is running on. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the device that the worker is running on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the worker's application instance. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the worker's application instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the platform that the worker is running on. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the platform that the worker is running on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OSVersionName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the operating system version. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the operating system version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the device model. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the device model." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the GPU. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the GPU." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPUModelName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the CPU model. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the CPU model." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAMInGB_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the amount of RAM this device has in gigabytes. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the amount of RAM this device has in gigabytes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderModeName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the current render mode. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the current render mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the worker's application session identifier. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the worker's application session identifier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RHIName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the current RHI. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the current RHI." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OSVersionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GPUName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CPUModelName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RAMInGB;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RenderModeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RHIName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkersResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, InstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceName_MetaData), NewProp_InstanceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName = { "OSVersionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, OSVersionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OSVersionName_MetaData), NewProp_OSVersionName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, ModelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelName_MetaData), NewProp_ModelName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName = { "GPUName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, GPUName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUName_MetaData), NewProp_GPUName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName = { "CPUModelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, CPUModelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPUModelName_MetaData), NewProp_CPUModelName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB = { "RAMInGB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RAMInGB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAMInGB_MetaData), NewProp_RAMInGB_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName = { "RenderModeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RenderModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderModeName_MetaData), NewProp_RenderModeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RHIName = { "RHIName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RHIName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RHIName_MetaData), NewProp_RHIName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RHIName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerFindWorkersResponse",
	Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers),
	sizeof(FAutomationWorkerFindWorkersResponse),
	alignof(FAutomationWorkerFindWorkersResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerFindWorkersResponse

// Begin ScriptStruct FAutomationWorkerWorkerOffline
static_assert(std::is_polymorphic<FAutomationWorkerWorkerOffline>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerWorkerOffline cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline;
class UScriptStruct* FAutomationWorkerWorkerOffline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerWorkerOffline"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerWorkerOffline>()
{
	return FAutomationWorkerWorkerOffline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that notifies automation controllers that a worker went off-line.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that notifies automation controllers that a worker went off-line." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerWorkerOffline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerWorkerOffline",
	nullptr,
	0,
	sizeof(FAutomationWorkerWorkerOffline),
	alignof(FAutomationWorkerWorkerOffline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerWorkerOffline

// Begin ScriptStruct FAutomationWorkerPing
static_assert(std::is_polymorphic<FAutomationWorkerPing>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerPing cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerPing;
class UScriptStruct* FAutomationWorkerPing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerPing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPing, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPing"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPing.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerPing>()
{
	return FAutomationWorkerPing::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerPing",
	nullptr,
	0,
	sizeof(FAutomationWorkerPing),
	alignof(FAutomationWorkerPing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerPing.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPing.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerPing

// Begin ScriptStruct FAutomationWorkerStartTestSession
static_assert(std::is_polymorphic<FAutomationWorkerStartTestSession>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerStartTestSession cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerStartTestSession;
class UScriptStruct* FAutomationWorkerStartTestSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerStartTestSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerStartTestSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerStartTestSession"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerStartTestSession.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerStartTestSession>()
{
	return FAutomationWorkerStartTestSession::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerStartTestSession>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerStartTestSession",
	nullptr,
	0,
	sizeof(FAutomationWorkerStartTestSession),
	alignof(FAutomationWorkerStartTestSession),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerStartTestSession.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerStartTestSession.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerStartTestSession.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerStartTestSession

// Begin ScriptStruct FAutomationWorkerStopTestSession
static_assert(std::is_polymorphic<FAutomationWorkerStopTestSession>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerStopTestSession cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerStopTestSession;
class UScriptStruct* FAutomationWorkerStopTestSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerStopTestSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerStopTestSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerStopTestSession"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerStopTestSession.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerStopTestSession>()
{
	return FAutomationWorkerStopTestSession::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerStopTestSession>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerStopTestSession",
	nullptr,
	0,
	sizeof(FAutomationWorkerStopTestSession),
	alignof(FAutomationWorkerStopTestSession),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerStopTestSession.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerStopTestSession.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerStopTestSession.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerStopTestSession

// Begin ScriptStruct FAutomationWorkerStopTests
static_assert(std::is_polymorphic<FAutomationWorkerStopTests>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerStopTests cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests;
class UScriptStruct* FAutomationWorkerStopTests::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerStopTests, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerStopTests"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerStopTests>()
{
	return FAutomationWorkerStopTests::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*/" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerStopTests>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerStopTests",
	nullptr,
	0,
	sizeof(FAutomationWorkerStopTests),
	alignof(FAutomationWorkerStopTests),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStopTests()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerStopTests

// Begin ScriptStruct FAutomationWorkerPong
static_assert(std::is_polymorphic<FAutomationWorkerPong>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerPong cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerPong;
class UScriptStruct* FAutomationWorkerPong::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPong.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerPong.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPong, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPong"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPong.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerPong>()
{
	return FAutomationWorkerPong::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPong>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerPong",
	nullptr,
	0,
	sizeof(FAutomationWorkerPong),
	alignof(FAutomationWorkerPong),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPong.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerPong.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPong.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerPong

// Begin ScriptStruct FAutomationWorkerRequestTests
static_assert(std::is_polymorphic<FAutomationWorkerRequestTests>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerRequestTests cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests;
class UScriptStruct* FAutomationWorkerRequestTests::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTests"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRequestTests>()
{
	return FAutomationWorkerRequestTests::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for requesting available automation tests from a worker.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message for requesting available automation tests from a worker." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperDirectoryIncluded_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether the developer directory should be included. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the developer directory should be included." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedTestFlags_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating which tests we'd like to request. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds a flag indicating which tests we'd like to request." },
	};
#endif // WITH_METADATA
	static void NewProp_DeveloperDirectoryIncluded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DeveloperDirectoryIncluded;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RequestedTestFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTests>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_SetBit(void* Obj)
{
	((FAutomationWorkerRequestTests*)Obj)->DeveloperDirectoryIncluded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded = { "DeveloperDirectoryIncluded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationWorkerRequestTests), &Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeveloperDirectoryIncluded_MetaData), NewProp_DeveloperDirectoryIncluded_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags = { "RequestedTestFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRequestTests, RequestedTestFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedTestFlags_MetaData), NewProp_RequestedTestFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerRequestTests",
	Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers),
	sizeof(FAutomationWorkerRequestTests),
	alignof(FAutomationWorkerRequestTests),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerRequestTests

// Begin ScriptStruct FAutomationWorkerSingleTestReply
static_assert(std::is_polymorphic<FAutomationWorkerSingleTestReply>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerSingleTestReply cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply;
class UScriptStruct* FAutomationWorkerSingleTestReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerSingleTestReply"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerSingleTestReply>()
{
	return FAutomationWorkerSingleTestReply::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A single test reply, used by FAutomationWorkerRequestTestsReplyComplete\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "A single test reply, used by FAutomationWorkerRequestTestsReplyComplete" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestParameter_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFile_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileLine_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenCommand_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestFlags_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumParticipantsRequired_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FullTestPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestParameter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFile;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceFileLine;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenCommand;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TestFlags;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumParticipantsRequired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerSingleTestReply>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath = { "FullTestPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, FullTestPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullTestPath_MetaData), NewProp_FullTestPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestName_MetaData), NewProp_TestName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter = { "TestParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestParameter_MetaData), NewProp_TestParameter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile = { "SourceFile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, SourceFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFile_MetaData), NewProp_SourceFile_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine = { "SourceFileLine", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, SourceFileLine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFileLine_MetaData), NewProp_SourceFileLine_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand = { "OpenCommand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, OpenCommand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenCommand_MetaData), NewProp_OpenCommand_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags = { "TestFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestFlags_MetaData), NewProp_TestFlags_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired = { "NumParticipantsRequired", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, NumParticipantsRequired), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumParticipantsRequired_MetaData), NewProp_NumParticipantsRequired_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerSingleTestReply",
	Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers),
	sizeof(FAutomationWorkerSingleTestReply),
	alignof(FAutomationWorkerSingleTestReply),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerSingleTestReply

// Begin ScriptStruct FAutomationWorkerRequestTestsReplyComplete
static_assert(std::is_polymorphic<FAutomationWorkerRequestTestsReplyComplete>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerRequestTestsReplyComplete cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete;
class UScriptStruct* FAutomationWorkerRequestTestsReplyComplete::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTestsReplyComplete"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRequestTestsReplyComplete>()
{
	return FAutomationWorkerRequestTestsReplyComplete::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns list of all tests\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Returns list of all tests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReplyComplete>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply, METADATA_PARAMS(0, nullptr) }; // 261541790
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRequestTestsReplyComplete, Tests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tests_MetaData), NewProp_Tests_MetaData) }; // 261541790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerRequestTestsReplyComplete",
	Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers),
	sizeof(FAutomationWorkerRequestTestsReplyComplete),
	alignof(FAutomationWorkerRequestTestsReplyComplete),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerRequestTestsReplyComplete

// Begin ScriptStruct FAutomationWorkerRunTests
static_assert(std::is_polymorphic<FAutomationWorkerRunTests>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerRunTests cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests;
class UScriptStruct* FAutomationWorkerRunTests::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTests, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTests"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRunTests>()
{
	return FAutomationWorkerRunTests::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message to request the running of automation tests on a worker.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message to request the running of automation tests on a worker." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoleIndex_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the test to run. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the test to run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeautifiedTestName_MetaData[] = {
		{ "Comment", "/** Holds the name of the test to run. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the test to run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[] = {
		{ "Comment", "/** Holds the full test path of the test to run. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the full test path of the test to run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendAnalytics_MetaData[] = {
		{ "Comment", "/** If true, send results to analytics when complete */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "If true, send results to analytics when complete" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoleIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BeautifiedTestName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FullTestPath;
	static void NewProp_bSendAnalytics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendAnalytics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRunTests>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount = { "ExecutionCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTests, ExecutionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionCount_MetaData), NewProp_ExecutionCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex = { "RoleIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTests, RoleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoleIndex_MetaData), NewProp_RoleIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTests, TestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestName_MetaData), NewProp_TestName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName = { "BeautifiedTestName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTests, BeautifiedTestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeautifiedTestName_MetaData), NewProp_BeautifiedTestName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_FullTestPath = { "FullTestPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTests, FullTestPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullTestPath_MetaData), NewProp_FullTestPath_MetaData) };
void Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_SetBit(void* Obj)
{
	((FAutomationWorkerRunTests*)Obj)->bSendAnalytics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics = { "bSendAnalytics", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationWorkerRunTests), &Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendAnalytics_MetaData), NewProp_bSendAnalytics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_FullTestPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerRunTests",
	Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers),
	sizeof(FAutomationWorkerRunTests),
	alignof(FAutomationWorkerRunTests),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerRunTests

// Begin ScriptStruct FAutomationWorkerRunTestsReply
static_assert(std::is_polymorphic<FAutomationWorkerRunTestsReply>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerRunTestsReply cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply;
class UScriptStruct* FAutomationWorkerRunTestsReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTestsReply"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRunTestsReply>()
{
	return FAutomationWorkerRunTestsReply::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent in response to FAutomationWorkerRunTests.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in response to FAutomationWorkerRunTests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningTotal_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTotal_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WarningTotal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorTotal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRunTestsReply>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, TestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestName_MetaData), NewProp_TestName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomationExecutionEntry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal = { "WarningTotal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, WarningTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningTotal_MetaData), NewProp_WarningTotal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal = { "ErrorTotal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, ErrorTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTotal_MetaData), NewProp_ErrorTotal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount = { "ExecutionCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, ExecutionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionCount_MetaData), NewProp_ExecutionCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, State), Z_Construct_UEnum_AutomationTest_EAutomationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2997878676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerRunTestsReply",
	Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers),
	sizeof(FAutomationWorkerRunTestsReply),
	alignof(FAutomationWorkerRunTestsReply),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerRunTestsReply

// Begin ScriptStruct FAutomationWorkerRequestNextNetworkCommand
static_assert(std::is_polymorphic<FAutomationWorkerRequestNextNetworkCommand>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerRequestNextNetworkCommand cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand;
class UScriptStruct* FAutomationWorkerRequestNextNetworkCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestNextNetworkCommand"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRequestNextNetworkCommand>()
{
	return FAutomationWorkerRequestNextNetworkCommand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestNextNetworkCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount = { "ExecutionCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerRequestNextNetworkCommand, ExecutionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionCount_MetaData), NewProp_ExecutionCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerRequestNextNetworkCommand",
	Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers),
	sizeof(FAutomationWorkerRequestNextNetworkCommand),
	alignof(FAutomationWorkerRequestNextNetworkCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerRequestNextNetworkCommand

// Begin ScriptStruct FAutomationWorkerNextNetworkCommandReply
static_assert(std::is_polymorphic<FAutomationWorkerNextNetworkCommandReply>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerNextNetworkCommandReply cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply;
class UScriptStruct* FAutomationWorkerNextNetworkCommandReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerNextNetworkCommandReply"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerNextNetworkCommandReply>()
{
	return FAutomationWorkerNextNetworkCommandReply::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerNextNetworkCommandReply>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerNextNetworkCommandReply",
	nullptr,
	0,
	sizeof(FAutomationWorkerNextNetworkCommandReply),
	alignof(FAutomationWorkerNextNetworkCommandReply),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerNextNetworkCommandReply

// Begin ScriptStruct FAutomationScreenshotMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata;
class UScriptStruct* FAutomationScreenshotMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationScreenshotMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationScreenshotMetadata>()
{
	return FAutomationScreenshotMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenShotName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariantName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Commit_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rhi_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "// RHI Details\n" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "RHI Details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeatureLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStereo_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vendor_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "// Hardware Details\n" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Hardware Details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdapterName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdapterInternalDriverVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdapterUserDriverVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueDeviceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "// Quality Levels\n" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Quality Levels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIlluminationQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectsQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasComparisonRules_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "// Comparison Requests\n" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Comparison Requests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceRed_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceGreen_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceBlue_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceAlpha_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceMinBrightness_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceMaxBrightness_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAntiAliasing_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreColors_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenShotName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariantName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Notes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Commit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Rhi;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FeatureLevel;
	static void NewProp_bIsStereo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStereo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Vendor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdapterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdapterInternalDriverVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdapterUserDriverVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueDeviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResolutionQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewDistanceQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AntiAliasingQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShadowQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalIlluminationQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReflectionQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PostProcessQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EffectsQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FoliageQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShadingQuality;
	static void NewProp_bHasComparisonRules_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasComparisonRules;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceRed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceGreen;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceBlue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceAlpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceMinBrightness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceMaxBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError;
	static void NewProp_bIgnoreAntiAliasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAntiAliasing;
	static void NewProp_bIgnoreColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationScreenshotMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ScreenShotName = { "ScreenShotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ScreenShotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenShotName_MetaData), NewProp_ScreenShotName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, VariantName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariantName_MetaData), NewProp_VariantName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, Context), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, TestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestName_MetaData), NewProp_TestName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, Notes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Notes_MetaData), NewProp_Notes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit = { "Commit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, Commit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Commit_MetaData), NewProp_Commit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi = { "Rhi", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, Rhi), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rhi_MetaData), NewProp_Rhi_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel = { "FeatureLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, FeatureLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeatureLevel_MetaData), NewProp_FeatureLevel_MetaData) };
void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_SetBit(void* Obj)
{
	((FAutomationScreenshotMetadata*)Obj)->bIsStereo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo = { "bIsStereo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStereo_MetaData), NewProp_bIsStereo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor = { "Vendor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, Vendor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vendor_MetaData), NewProp_Vendor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName = { "AdapterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdapterName_MetaData), NewProp_AdapterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion = { "AdapterInternalDriverVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterInternalDriverVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdapterInternalDriverVersion_MetaData), NewProp_AdapterInternalDriverVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion = { "AdapterUserDriverVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterUserDriverVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdapterUserDriverVersion_MetaData), NewProp_AdapterUserDriverVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId = { "UniqueDeviceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, UniqueDeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueDeviceId_MetaData), NewProp_UniqueDeviceId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality = { "ResolutionQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ResolutionQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionQuality_MetaData), NewProp_ResolutionQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality = { "ViewDistanceQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ViewDistanceQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDistanceQuality_MetaData), NewProp_ViewDistanceQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality = { "AntiAliasingQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, AntiAliasingQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiAliasingQuality_MetaData), NewProp_AntiAliasingQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality = { "ShadowQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ShadowQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowQuality_MetaData), NewProp_ShadowQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_GlobalIlluminationQuality = { "GlobalIlluminationQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, GlobalIlluminationQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalIlluminationQuality_MetaData), NewProp_GlobalIlluminationQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ReflectionQuality = { "ReflectionQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ReflectionQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionQuality_MetaData), NewProp_ReflectionQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality = { "PostProcessQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, PostProcessQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessQuality_MetaData), NewProp_PostProcessQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality = { "TextureQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, TextureQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureQuality_MetaData), NewProp_TextureQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality = { "EffectsQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, EffectsQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectsQuality_MetaData), NewProp_EffectsQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality = { "FoliageQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, FoliageQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageQuality_MetaData), NewProp_FoliageQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadingQuality = { "ShadingQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ShadingQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingQuality_MetaData), NewProp_ShadingQuality_MetaData) };
void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_SetBit(void* Obj)
{
	((FAutomationScreenshotMetadata*)Obj)->bHasComparisonRules = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules = { "bHasComparisonRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasComparisonRules_MetaData), NewProp_bHasComparisonRules_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed = { "ToleranceRed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceRed), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceRed_MetaData), NewProp_ToleranceRed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen = { "ToleranceGreen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceGreen), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceGreen_MetaData), NewProp_ToleranceGreen_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue = { "ToleranceBlue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceBlue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceBlue_MetaData), NewProp_ToleranceBlue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha = { "ToleranceAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceAlpha), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceAlpha_MetaData), NewProp_ToleranceAlpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness = { "ToleranceMinBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceMinBrightness), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceMinBrightness_MetaData), NewProp_ToleranceMinBrightness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness = { "ToleranceMaxBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceMaxBrightness), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToleranceMaxBrightness_MetaData), NewProp_ToleranceMaxBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError = { "MaximumLocalError", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, MaximumLocalError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumLocalError_MetaData), NewProp_MaximumLocalError_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError = { "MaximumGlobalError", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationScreenshotMetadata, MaximumGlobalError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumGlobalError_MetaData), NewProp_MaximumGlobalError_MetaData) };
void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_SetBit(void* Obj)
{
	((FAutomationScreenshotMetadata*)Obj)->bIgnoreAntiAliasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing = { "bIgnoreAntiAliasing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreAntiAliasing_MetaData), NewProp_bIgnoreAntiAliasing_MetaData) };
void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_SetBit(void* Obj)
{
	((FAutomationScreenshotMetadata*)Obj)->bIgnoreColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors = { "bIgnoreColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreColors_MetaData), NewProp_bIgnoreColors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ScreenShotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_VariantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_GlobalIlluminationQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ReflectionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadingQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	nullptr,
	&NewStructOps,
	"AutomationScreenshotMetadata",
	Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers),
	sizeof(FAutomationScreenshotMetadata),
	alignof(FAutomationScreenshotMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.InnerSingleton, Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.InnerSingleton;
}
// End ScriptStruct FAutomationScreenshotMetadata

// Begin ScriptStruct FAutomationWorkerScreenImage
static_assert(std::is_polymorphic<FAutomationWorkerScreenImage>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerScreenImage cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage;
class UScriptStruct* FAutomationWorkerScreenImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerScreenImage"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerScreenImage>()
{
	return FAutomationWorkerScreenImage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent in containing a screen shot run during performance test.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in containing a screen shot run during performance test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenImage_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The screen shot data. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The screen shot data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameTrace_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The frame trace data. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The frame trace data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenShotName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The screen shot name. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The screen shot name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenImage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScreenImage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FrameTrace_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameTrace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenShotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerScreenImage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_Inner = { "ScreenImage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage = { "ScreenImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerScreenImage, ScreenImage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenImage_MetaData), NewProp_ScreenImage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace_Inner = { "FrameTrace", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace = { "FrameTrace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerScreenImage, FrameTrace), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameTrace_MetaData), NewProp_FrameTrace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName = { "ScreenShotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerScreenImage, ScreenShotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenShotName_MetaData), NewProp_ScreenShotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerScreenImage, Metadata), Z_Construct_UScriptStruct_FAutomationScreenshotMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) }; // 221839213
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerScreenImage",
	Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers),
	sizeof(FAutomationWorkerScreenImage),
	alignof(FAutomationWorkerScreenImage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerScreenImage

// Begin ScriptStruct FAutomationWorkerImageComparisonResults
static_assert(std::is_polymorphic<FAutomationWorkerImageComparisonResults>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerImageComparisonResults cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults;
class UScriptStruct* FAutomationWorkerImageComparisonResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerImageComparisonResults"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerImageComparisonResults>()
{
	return FAutomationWorkerImageComparisonResults::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent in containing a screen shot run during performance test.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in containing a screen shot run during performance test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The unique id for the comparison. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The unique id for the comparison." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotPath_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The path of the screenshot. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The path of the screenshot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNew_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Was this a new image we've never seen before and have no ground truth for? */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Was this a new image we've never seen before and have no ground truth for?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimilar_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Were the images similar?  If they're not you should log an error. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Were the images similar?  If they're not you should log an error." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLocalDifference_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDifference_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingFilePath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportComparisonFilePath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportApprovedFilePath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportIncomingFilePath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenshotPath;
	static void NewProp_bNew_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNew;
	static void NewProp_bSimilar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimilar;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxLocalDifference;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GlobalDifference;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IncomingFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportComparisonFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportApprovedFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportIncomingFilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerImageComparisonResults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueId_MetaData), NewProp_UniqueId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ScreenshotPath = { "ScreenshotPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, ScreenshotPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotPath_MetaData), NewProp_ScreenshotPath_MetaData) };
void Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_SetBit(void* Obj)
{
	((FAutomationWorkerImageComparisonResults*)Obj)->bNew = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew = { "bNew", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationWorkerImageComparisonResults), &Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNew_MetaData), NewProp_bNew_MetaData) };
void Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_SetBit(void* Obj)
{
	((FAutomationWorkerImageComparisonResults*)Obj)->bSimilar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar = { "bSimilar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationWorkerImageComparisonResults), &Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimilar_MetaData), NewProp_bSimilar_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference = { "MaxLocalDifference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, MaxLocalDifference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLocalDifference_MetaData), NewProp_MaxLocalDifference_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference = { "GlobalDifference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, GlobalDifference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDifference_MetaData), NewProp_GlobalDifference_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_IncomingFilePath = { "IncomingFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, IncomingFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingFilePath_MetaData), NewProp_IncomingFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ReportComparisonFilePath = { "ReportComparisonFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, ReportComparisonFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportComparisonFilePath_MetaData), NewProp_ReportComparisonFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ReportApprovedFilePath = { "ReportApprovedFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, ReportApprovedFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportApprovedFilePath_MetaData), NewProp_ReportApprovedFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ReportIncomingFilePath = { "ReportIncomingFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, ReportIncomingFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportIncomingFilePath_MetaData), NewProp_ReportIncomingFilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ScreenshotPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_IncomingFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ReportComparisonFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ReportApprovedFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ReportIncomingFilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerImageComparisonResults",
	Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers),
	sizeof(FAutomationWorkerImageComparisonResults),
	alignof(FAutomationWorkerImageComparisonResults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerImageComparisonResults

// Begin ScriptStruct FAutomationWorkerTestDataRequest
static_assert(std::is_polymorphic<FAutomationWorkerTestDataRequest>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerTestDataRequest cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest;
class UScriptStruct* FAutomationWorkerTestDataRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTestDataRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerTestDataRequest>()
{
	return FAutomationWorkerTestDataRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that handles both storing and requesting ground truth data.\n * for the first time this test is run, it might need to store things, or get things.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that handles both storing and requesting ground truth data.\nfor the first time this test is run, it might need to store things, or get things." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The category of the data, this is purely to bucket and separate the ground truth data we store into different directories. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The category of the data, this is purely to bucket and separate the ground truth data we store into different directories." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataPlatform_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataPlatform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataTestName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform = { "DataPlatform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataPlatform_MetaData), NewProp_DataPlatform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName = { "DataTestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataTestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTestName_MetaData), NewProp_DataTestName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataName_MetaData), NewProp_DataName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, JsonData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonData_MetaData), NewProp_JsonData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerTestDataRequest",
	Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers),
	sizeof(FAutomationWorkerTestDataRequest),
	alignof(FAutomationWorkerTestDataRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerTestDataRequest

// Begin ScriptStruct FAutomationWorkerTestDataResponse
static_assert(std::is_polymorphic<FAutomationWorkerTestDataResponse>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerTestDataResponse cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse;
class UScriptStruct* FAutomationWorkerTestDataResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTestDataResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerTestDataResponse>()
{
	return FAutomationWorkerTestDataResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that responds to TestDataRequests.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that responds to TestDataRequests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNew_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonData;
	static void NewProp_bIsNew_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNew;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTestDataResponse, JsonData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonData_MetaData), NewProp_JsonData_MetaData) };
void Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_SetBit(void* Obj)
{
	((FAutomationWorkerTestDataResponse*)Obj)->bIsNew = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew = { "bIsNew", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationWorkerTestDataResponse), &Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNew_MetaData), NewProp_bIsNew_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerTestDataResponse",
	Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers),
	sizeof(FAutomationWorkerTestDataResponse),
	alignof(FAutomationWorkerTestDataResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerTestDataResponse

// Begin ScriptStruct FAutomationWorkerPerformanceDataRequest
static_assert(std::is_polymorphic<FAutomationWorkerPerformanceDataRequest>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerPerformanceDataRequest cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest;
class UScriptStruct* FAutomationWorkerPerformanceDataRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPerformanceDataRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerPerformanceDataRequest>()
{
	return FAutomationWorkerPerformanceDataRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message to request the performance data for this hardware.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message to request the performance data for this hardware." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardware_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataPoints_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hardware;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DataPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware = { "Hardware", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, Hardware), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardware_MetaData), NewProp_Hardware_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, TestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestName_MetaData), NewProp_TestName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_Inner = { "DataPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints = { "DataPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, DataPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataPoints_MetaData), NewProp_DataPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerPerformanceDataRequest",
	Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers),
	sizeof(FAutomationWorkerPerformanceDataRequest),
	alignof(FAutomationWorkerPerformanceDataRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerPerformanceDataRequest

// Begin ScriptStruct FAutomationWorkerPerformanceDataResponse
static_assert(std::is_polymorphic<FAutomationWorkerPerformanceDataResponse>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerPerformanceDataResponse cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse;
class UScriptStruct* FAutomationWorkerPerformanceDataResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPerformanceDataResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerPerformanceDataResponse>()
{
	return FAutomationWorkerPerformanceDataResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that responds to PerformanceDataRequest.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that responds to PerformanceDataRequest." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FAutomationWorkerPerformanceDataResponse*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomationWorkerPerformanceDataResponse), &Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerPerformanceDataResponse, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerPerformanceDataResponse",
	Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers),
	sizeof(FAutomationWorkerPerformanceDataResponse),
	alignof(FAutomationWorkerPerformanceDataResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerPerformanceDataResponse

// Begin ScriptStruct FAutomationWorkerTelemetryItem
static_assert(std::is_polymorphic<FAutomationWorkerTelemetryItem>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerTelemetryItem cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem;
class UScriptStruct* FAutomationWorkerTelemetryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTelemetryItem"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerTelemetryItem>()
{
	return FAutomationWorkerTelemetryItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that contains telemetry data point.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that contains telemetry data point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataPoint_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Measurement_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataPoint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Measurement;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTelemetryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_DataPoint = { "DataPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTelemetryItem, DataPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataPoint_MetaData), NewProp_DataPoint_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Measurement = { "Measurement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTelemetryItem, Measurement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Measurement_MetaData), NewProp_Measurement_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTelemetryItem, Context), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_DataPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Measurement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerTelemetryItem",
	Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::PropPointers),
	sizeof(FAutomationWorkerTelemetryItem),
	alignof(FAutomationWorkerTelemetryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerTelemetryItem

// Begin ScriptStruct FAutomationWorkerTelemetryData
static_assert(std::is_polymorphic<FAutomationWorkerTelemetryData>() == std::is_polymorphic<FAutomationWorkerMessageBase>(), "USTRUCT FAutomationWorkerTelemetryData cannot be polymorphic unless super FAutomationWorkerMessageBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData;
class UScriptStruct* FAutomationWorkerTelemetryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTelemetryData"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerTelemetryData>()
{
	return FAutomationWorkerTelemetryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that contains telemetry data.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that contains telemetry data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Storage_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Storage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTelemetryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Storage = { "Storage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTelemetryData, Storage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Storage_MetaData), NewProp_Storage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTelemetryData, Configuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Configuration_MetaData), NewProp_Configuration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTelemetryData, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTelemetryData, TestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestName_MetaData), NewProp_TestName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem, METADATA_PARAMS(0, nullptr) }; // 3472616194
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationWorkerTelemetryData, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 3472616194
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Storage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Configuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Platform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_TestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
	Z_Construct_UScriptStruct_FAutomationWorkerMessageBase,
	&NewStructOps,
	"AutomationWorkerTelemetryData",
	Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::PropPointers),
	sizeof(FAutomationWorkerTelemetryData),
	alignof(FAutomationWorkerTelemetryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.InnerSingleton;
}
// End ScriptStruct FAutomationWorkerTelemetryData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutomationWorkerMessageBase::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerMessageBase_Statics::NewStructOps, TEXT("AutomationWorkerMessageBase"), &Z_Registration_Info_UScriptStruct_AutomationWorkerMessageBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerMessageBase), 770593313U) },
		{ FAutomationWorkerFindWorkers::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewStructOps, TEXT("AutomationWorkerFindWorkers"), &Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerFindWorkers), 3011339744U) },
		{ FAutomationWorkerFindWorkersResponse::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewStructOps, TEXT("AutomationWorkerFindWorkersResponse"), &Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerFindWorkersResponse), 285645239U) },
		{ FAutomationWorkerWorkerOffline::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::NewStructOps, TEXT("AutomationWorkerWorkerOffline"), &Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerWorkerOffline), 2368218613U) },
		{ FAutomationWorkerPing::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::NewStructOps, TEXT("AutomationWorkerPing"), &Z_Registration_Info_UScriptStruct_AutomationWorkerPing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerPing), 2423466786U) },
		{ FAutomationWorkerStartTestSession::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerStartTestSession_Statics::NewStructOps, TEXT("AutomationWorkerStartTestSession"), &Z_Registration_Info_UScriptStruct_AutomationWorkerStartTestSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerStartTestSession), 3007900948U) },
		{ FAutomationWorkerStopTestSession::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession_Statics::NewStructOps, TEXT("AutomationWorkerStopTestSession"), &Z_Registration_Info_UScriptStruct_AutomationWorkerStopTestSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerStopTestSession), 2881213430U) },
		{ FAutomationWorkerStopTests::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::NewStructOps, TEXT("AutomationWorkerStopTests"), &Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerStopTests), 2154668265U) },
		{ FAutomationWorkerPong::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::NewStructOps, TEXT("AutomationWorkerPong"), &Z_Registration_Info_UScriptStruct_AutomationWorkerPong, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerPong), 2280521910U) },
		{ FAutomationWorkerRequestTests::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewStructOps, TEXT("AutomationWorkerRequestTests"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRequestTests), 2106339429U) },
		{ FAutomationWorkerSingleTestReply::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewStructOps, TEXT("AutomationWorkerSingleTestReply"), &Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerSingleTestReply), 261541790U) },
		{ FAutomationWorkerRequestTestsReplyComplete::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewStructOps, TEXT("AutomationWorkerRequestTestsReplyComplete"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRequestTestsReplyComplete), 3035715558U) },
		{ FAutomationWorkerRunTests::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewStructOps, TEXT("AutomationWorkerRunTests"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRunTests), 2856750688U) },
		{ FAutomationWorkerRunTestsReply::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewStructOps, TEXT("AutomationWorkerRunTestsReply"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRunTestsReply), 887740384U) },
		{ FAutomationWorkerRequestNextNetworkCommand::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewStructOps, TEXT("AutomationWorkerRequestNextNetworkCommand"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRequestNextNetworkCommand), 1655077911U) },
		{ FAutomationWorkerNextNetworkCommandReply::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::NewStructOps, TEXT("AutomationWorkerNextNetworkCommandReply"), &Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerNextNetworkCommandReply), 844218697U) },
		{ FAutomationScreenshotMetadata::StaticStruct, Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewStructOps, TEXT("AutomationScreenshotMetadata"), &Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationScreenshotMetadata), 221839213U) },
		{ FAutomationWorkerScreenImage::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewStructOps, TEXT("AutomationWorkerScreenImage"), &Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerScreenImage), 3381998945U) },
		{ FAutomationWorkerImageComparisonResults::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewStructOps, TEXT("AutomationWorkerImageComparisonResults"), &Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerImageComparisonResults), 3837974052U) },
		{ FAutomationWorkerTestDataRequest::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewStructOps, TEXT("AutomationWorkerTestDataRequest"), &Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerTestDataRequest), 2326400036U) },
		{ FAutomationWorkerTestDataResponse::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewStructOps, TEXT("AutomationWorkerTestDataResponse"), &Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerTestDataResponse), 1117350649U) },
		{ FAutomationWorkerPerformanceDataRequest::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewStructOps, TEXT("AutomationWorkerPerformanceDataRequest"), &Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerPerformanceDataRequest), 1331638859U) },
		{ FAutomationWorkerPerformanceDataResponse::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewStructOps, TEXT("AutomationWorkerPerformanceDataResponse"), &Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerPerformanceDataResponse), 3560655454U) },
		{ FAutomationWorkerTelemetryItem::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewStructOps, TEXT("AutomationWorkerTelemetryItem"), &Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerTelemetryItem), 3472616194U) },
		{ FAutomationWorkerTelemetryData::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewStructOps, TEXT("AutomationWorkerTelemetryData"), &Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerTelemetryData), 2045325619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h_3294268294(TEXT("/Script/AutomationMessages"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
