// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/CoreSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UGarbageCollectionSettings();
ENGINE_API UClass* Z_Construct_UClass_UGarbageCollectionSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStreamingSettings();
ENGINE_API UClass* Z_Construct_UClass_UStreamingSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UStreamingSettings
void UStreamingSettings::StaticRegisterNativesUStreamingSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamingSettings);
UClass* Z_Construct_UClass_UStreamingSettings_NoRegister()
{
	return UStreamingSettings::StaticClass();
}
struct Z_Construct_UClass_UStreamingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Streaming settings.\n */" },
		{ "DisplayName", "Streaming" },
		{ "IncludePath", "Engine/CoreSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Streaming settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingThreadEnabled_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.AsyncLoadingThreadEnabled" },
		{ "DisplayName", "Async Loading Thread Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Enables separate thread for package streaming. Requires restart to take effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarnIfTimeLimitExceeded_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.WarnIfTimeLimitExceeded" },
		{ "DisplayName", "Warn If Time Limit Has Been Exceeded" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Enables log warning if time limit for time-sliced package streaming has been exceeded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimitExceededMultiplier_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.TimeLimitExceededMultiplier" },
		{ "DisplayName", "Time Limit Exceeded Warning Multiplier" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Multiplier for time limit exceeded warning time threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimitExceededMinTime_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.TimeLimitExceededMinTime" },
		{ "DisplayName", "Minimum Time Limit For Time Limit Exceeded Warning" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Minimum time the time limit exceeded warning will be triggered by." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinBulkDataSizeForAsyncLoading_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.MinBulkDataSizeForAsyncLoading" },
		{ "DisplayName", "Minimum Bulk Data Size For Async Loading" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Minimum time the time limit exceeded warning will be triggered by." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseBackgroundLevelStreaming_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.UseBackgroundLevelStreaming" },
		{ "DisplayName", "Use Background Level Streaming" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow background level streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingUseFullTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.AsyncLoadingUseFullTimeLimit" },
		{ "DisplayName", "Async Loading Use Full Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to use the entire time limit even if blocked on I/O." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.AsyncLoadingTimeLimit" },
		{ "DisplayName", "Async Loading Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum amount of time to spend doing asynchronous loading (ms per frame)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAsyncLoadingExtraTime_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.PriorityAsyncLoadingExtraTime" },
		{ "DisplayName", "Priority Async Loading Extra Time" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Additional time to spend asynchronous loading during a high priority load." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingActorsUpdateTimeLimit" },
		{ "DisplayName", "Actor Initialization Update Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum allowed time to spend for actor registration steps during level streaming (ms per frame)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.PriorityLevelStreamingActorsUpdateExtraTime" },
		{ "DisplayName", "Priority Actor Initialization Update Extra Time" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Additional time to spend on actor registration steps during a high priority load." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingComponentsRegistrationGranularity" },
		{ "DisplayName", "Components Registration Granularity" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Batching granularity used to register actor components during level streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingAddPrimitiveGranularity_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingAddPrimitiveGranularity" },
		{ "DisplayName", "Added Primitive Granularity" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Batching granularity used to add primitives to scene in parallel when registering actor components during level streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.UnregisterComponentsTimeLimit" },
		{ "DisplayName", "Component Unregister Update Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum allowed time to spend while unregistering components during level streaming (ms per frame)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingComponentsUnregistrationGranularity" },
		{ "DisplayName", "Components Unregistration Granularity" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Batching granularity used to unregister actor components during level streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlushStreamingOnExit_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "s.FlushStreamingOnExit" },
		{ "DisplayName", "Flush Streaming when exiting the application" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If enabled, streaming will be flushed when exiting application, otherwise it will be cancelled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventDrivenLoaderEnabled_MetaData[] = {
		{ "Category", "Deprecated Settings" },
		{ "ConsoleVariable", "s.EventDrivenLoaderEnabled" },
		{ "DisplayName", "Use Event Driven Loader (disabling not recommended)" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Enables the event driven loader in cooked builds (default). Disabling EDL will result in using deprecated loading path." },
	};
#endif // WITH_METADATA
	static void NewProp_AsyncLoadingThreadEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AsyncLoadingThreadEnabled;
	static void NewProp_WarnIfTimeLimitExceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WarnIfTimeLimitExceeded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimitExceededMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimitExceededMinTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinBulkDataSizeForAsyncLoading;
	static void NewProp_UseBackgroundLevelStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBackgroundLevelStreaming;
	static void NewProp_AsyncLoadingUseFullTimeLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AsyncLoadingUseFullTimeLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AsyncLoadingTimeLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAsyncLoadingExtraTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelStreamingActorsUpdateTimeLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityLevelStreamingActorsUpdateExtraTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelStreamingComponentsRegistrationGranularity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelStreamingAddPrimitiveGranularity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelStreamingUnregisterComponentsTimeLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelStreamingComponentsUnregistrationGranularity;
	static void NewProp_FlushStreamingOnExit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlushStreamingOnExit;
	static void NewProp_EventDrivenLoaderEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EventDrivenLoaderEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_SetBit(void* Obj)
{
	((UStreamingSettings*)Obj)->AsyncLoadingThreadEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled = { "AsyncLoadingThreadEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncLoadingThreadEnabled_MetaData), NewProp_AsyncLoadingThreadEnabled_MetaData) };
void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_SetBit(void* Obj)
{
	((UStreamingSettings*)Obj)->WarnIfTimeLimitExceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded = { "WarnIfTimeLimitExceeded", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarnIfTimeLimitExceeded_MetaData), NewProp_WarnIfTimeLimitExceeded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier = { "TimeLimitExceededMultiplier", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLimitExceededMultiplier_MetaData), NewProp_TimeLimitExceededMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime = { "TimeLimitExceededMinTime", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMinTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLimitExceededMinTime_MetaData), NewProp_TimeLimitExceededMinTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading = { "MinBulkDataSizeForAsyncLoading", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, MinBulkDataSizeForAsyncLoading), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinBulkDataSizeForAsyncLoading_MetaData), NewProp_MinBulkDataSizeForAsyncLoading_MetaData) };
void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_SetBit(void* Obj)
{
	((UStreamingSettings*)Obj)->UseBackgroundLevelStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming = { "UseBackgroundLevelStreaming", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseBackgroundLevelStreaming_MetaData), NewProp_UseBackgroundLevelStreaming_MetaData) };
void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_SetBit(void* Obj)
{
	((UStreamingSettings*)Obj)->AsyncLoadingUseFullTimeLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit = { "AsyncLoadingUseFullTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncLoadingUseFullTimeLimit_MetaData), NewProp_AsyncLoadingUseFullTimeLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit = { "AsyncLoadingTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, AsyncLoadingTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncLoadingTimeLimit_MetaData), NewProp_AsyncLoadingTimeLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime = { "PriorityAsyncLoadingExtraTime", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, PriorityAsyncLoadingExtraTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityAsyncLoadingExtraTime_MetaData), NewProp_PriorityAsyncLoadingExtraTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit = { "LevelStreamingActorsUpdateTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, LevelStreamingActorsUpdateTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData), NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime = { "PriorityLevelStreamingActorsUpdateExtraTime", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, PriorityLevelStreamingActorsUpdateExtraTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData), NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity = { "LevelStreamingComponentsRegistrationGranularity", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsRegistrationGranularity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData), NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingAddPrimitiveGranularity = { "LevelStreamingAddPrimitiveGranularity", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, LevelStreamingAddPrimitiveGranularity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreamingAddPrimitiveGranularity_MetaData), NewProp_LevelStreamingAddPrimitiveGranularity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit = { "LevelStreamingUnregisterComponentsTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, LevelStreamingUnregisterComponentsTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData), NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity = { "LevelStreamingComponentsUnregistrationGranularity", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsUnregistrationGranularity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData), NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData) };
void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit_SetBit(void* Obj)
{
	((UStreamingSettings*)Obj)->FlushStreamingOnExit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit = { "FlushStreamingOnExit", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlushStreamingOnExit_MetaData), NewProp_FlushStreamingOnExit_MetaData) };
void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_SetBit(void* Obj)
{
	((UStreamingSettings*)Obj)->EventDrivenLoaderEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled = { "EventDrivenLoaderEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventDrivenLoaderEnabled_MetaData), NewProp_EventDrivenLoaderEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingAddPrimitiveGranularity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStreamingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamingSettings_Statics::ClassParams = {
	&UStreamingSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStreamingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStreamingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStreamingSettings()
{
	if (!Z_Registration_Info_UClass_UStreamingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamingSettings.OuterSingleton, Z_Construct_UClass_UStreamingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreamingSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UStreamingSettings>()
{
	return UStreamingSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamingSettings);
UStreamingSettings::~UStreamingSettings() {}
// End Class UStreamingSettings

// Begin Class UGarbageCollectionSettings
void UGarbageCollectionSettings::StaticRegisterNativesUGarbageCollectionSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGarbageCollectionSettings);
UClass* Z_Construct_UClass_UGarbageCollectionSettings_NoRegister()
{
	return UGarbageCollectionSettings::StaticClass();
}
struct Z_Construct_UClass_UGarbageCollectionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for garbage collection.\n*/" },
		{ "DisplayName", "Garbage Collection" },
		{ "IncludePath", "Engine/CoreSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Implements the settings for garbage collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenPurgingPendingKillObjects_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "gc.TimeBetweenPurgingPendingKillObjects" },
		{ "DisplayName", "Time Between Purging Pending Kill Objects" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Time in seconds (game time) we should wait between purging object references to objects that are pending kill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlushStreamingOnGC_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "gc.FlushStreamingOnGC" },
		{ "DisplayName", "Flush Streaming On GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If enabled, streaming will be flushed each time garbage collection is triggered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowParallelGC_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.AllowParallelGC" },
		{ "DisplayName", "Allow Parallel GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If enabled, garbage collection will use multiple threads." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncrementalBeginDestroyEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.IncrementalBeginDestroyEnabled" },
		{ "DisplayName", "Incremental BeginDestroy Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will destroy objects incrementally using time limit each frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultithreadedDestructionEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MultithreadedDestructionEnabled" },
		{ "DisplayName", "Multithreaded Destruction Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will free objects' memory on a worker thread." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateGCClusters_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.CreateGCClusters" },
		{ "DisplayName", "Create Garbage Collector UObject Clusters" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will attempt to create clusters of objects for better garbage collection performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetClusteringEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.AssetClustreringEnabled" },
		{ "DisplayName", "Asset Clustering Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow asset files to create actor clusters for GC." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClusteringEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.ActorClusteringEnabled" },
		{ "DisplayName", "Actor Clustering Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow levels to create actor clusters for GC." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDisregardForGCOnDedicatedServers_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.UseDisregardForGCOnDedicatedServers" },
		{ "DisplayName", "Use DisregardForGC On Dedicated Servers" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If false, DisregardForGC will be disabled for dedicated servers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerifyUObjectsAreNotFGCObjects_MetaData[] = {
		{ "Category", "Debug" },
		{ "ConsoleVariable", "gc.VerifyUObjectsAreNotFGCObjects" },
		{ "DisplayName", "Verify UObjects Are Not FGCObjects" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will throw a warning when it detects a UObject-derived class which also derives from FGCObject or any of its members is derived from FGCObject." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GarbageEliminationEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.GarbageEliminationEnabled" },
		{ "DisplayName", "Garbage Elimination Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, objects marked as Garbage will be automatically nulled and destroyed by Garbage Collector." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.DumpObjectCountsToLogWhenMaxObjectLimitExceeded" },
		{ "DisplayName", "Log UObject counts when UObject limit has been exceeded" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will dump UObject counts when maximum number of UObjects limit has been exceeded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinGCClusterSize_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MinGCClusterSize" },
		{ "DisplayName", "Minimum GC Cluster size" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Minimum GC cluster size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRetriesBeforeForcingGC_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "gc.NumRetriesBeforeForcingGC" },
		{ "DisplayName", "Number Of Retries Before Forcing GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum number of times GC can be skipped if worker threads are currently modifying UObject state. 0 = never force GC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsNotConsideredByGC_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MaxObjectsNotConsideredByGC" },
		{ "DisplayName", "Maximum Object Count Not Considered By GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum Object Count Not Considered By GC. Works only in cooked builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeOfPermanentObjectPool_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.SizeOfPermanentObjectPool" },
		{ "DisplayName", "Size Of Permanent Object Pool" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Size Of Permanent Object Pool (bytes). Works only in cooked builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsInGame_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MaxObjectsInGame" },
		{ "DisplayName", "Maximum number of UObjects that can exist in cooked game" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum number of UObjects that can exist in cooked game. Keep this as small as possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsInEditor_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MaxObjectsInEditor" },
		{ "DisplayName", "Maximum number of UObjects that can exist in the editor" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum number of UObjects that can exist in the editor game. Make sure this can hold enough objects for the editor and commadlets within reasonable limit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenPurgingPendingKillObjects;
	static void NewProp_FlushStreamingOnGC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlushStreamingOnGC;
	static void NewProp_AllowParallelGC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowParallelGC;
	static void NewProp_IncrementalBeginDestroyEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncrementalBeginDestroyEnabled;
	static void NewProp_MultithreadedDestructionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MultithreadedDestructionEnabled;
	static void NewProp_CreateGCClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateGCClusters;
	static void NewProp_AssetClusteringEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AssetClusteringEnabled;
	static void NewProp_ActorClusteringEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActorClusteringEnabled;
	static void NewProp_UseDisregardForGCOnDedicatedServers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDisregardForGCOnDedicatedServers;
	static void NewProp_VerifyUObjectsAreNotFGCObjects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VerifyUObjectsAreNotFGCObjects;
	static void NewProp_GarbageEliminationEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GarbageEliminationEnabled;
	static void NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinGCClusterSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRetriesBeforeForcingGC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectsNotConsideredByGC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeOfPermanentObjectPool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectsInGame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectsInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGarbageCollectionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects = { "TimeBetweenPurgingPendingKillObjects", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGarbageCollectionSettings, TimeBetweenPurgingPendingKillObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeBetweenPurgingPendingKillObjects_MetaData), NewProp_TimeBetweenPurgingPendingKillObjects_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->FlushStreamingOnGC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC = { "FlushStreamingOnGC", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlushStreamingOnGC_MetaData), NewProp_FlushStreamingOnGC_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->AllowParallelGC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC = { "AllowParallelGC", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowParallelGC_MetaData), NewProp_AllowParallelGC_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->IncrementalBeginDestroyEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled = { "IncrementalBeginDestroyEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncrementalBeginDestroyEnabled_MetaData), NewProp_IncrementalBeginDestroyEnabled_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->MultithreadedDestructionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled = { "MultithreadedDestructionEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultithreadedDestructionEnabled_MetaData), NewProp_MultithreadedDestructionEnabled_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->CreateGCClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters = { "CreateGCClusters", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateGCClusters_MetaData), NewProp_CreateGCClusters_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->AssetClusteringEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled = { "AssetClusteringEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetClusteringEnabled_MetaData), NewProp_AssetClusteringEnabled_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->ActorClusteringEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled = { "ActorClusteringEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClusteringEnabled_MetaData), NewProp_ActorClusteringEnabled_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->UseDisregardForGCOnDedicatedServers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers = { "UseDisregardForGCOnDedicatedServers", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDisregardForGCOnDedicatedServers_MetaData), NewProp_UseDisregardForGCOnDedicatedServers_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->VerifyUObjectsAreNotFGCObjects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects = { "VerifyUObjectsAreNotFGCObjects", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerifyUObjectsAreNotFGCObjects_MetaData), NewProp_VerifyUObjectsAreNotFGCObjects_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_GarbageEliminationEnabled_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->GarbageEliminationEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_GarbageEliminationEnabled = { "GarbageEliminationEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_GarbageEliminationEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GarbageEliminationEnabled_MetaData), NewProp_GarbageEliminationEnabled_MetaData) };
void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded_SetBit(void* Obj)
{
	((UGarbageCollectionSettings*)Obj)->DumpObjectCountsToLogWhenMaxObjectLimitExceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded = { "DumpObjectCountsToLogWhenMaxObjectLimitExceeded", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded_MetaData), NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize = { "MinGCClusterSize", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGarbageCollectionSettings, MinGCClusterSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinGCClusterSize_MetaData), NewProp_MinGCClusterSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC = { "NumRetriesBeforeForcingGC", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGarbageCollectionSettings, NumRetriesBeforeForcingGC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRetriesBeforeForcingGC_MetaData), NewProp_NumRetriesBeforeForcingGC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC = { "MaxObjectsNotConsideredByGC", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsNotConsideredByGC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxObjectsNotConsideredByGC_MetaData), NewProp_MaxObjectsNotConsideredByGC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool = { "SizeOfPermanentObjectPool", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGarbageCollectionSettings, SizeOfPermanentObjectPool), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeOfPermanentObjectPool_MetaData), NewProp_SizeOfPermanentObjectPool_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame = { "MaxObjectsInGame", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInGame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxObjectsInGame_MetaData), NewProp_MaxObjectsInGame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor = { "MaxObjectsInEditor", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInEditor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxObjectsInEditor_MetaData), NewProp_MaxObjectsInEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_GarbageEliminationEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_DumpObjectCountsToLogWhenMaxObjectLimitExceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGarbageCollectionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::ClassParams = {
	&UGarbageCollectionSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGarbageCollectionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGarbageCollectionSettings()
{
	if (!Z_Registration_Info_UClass_UGarbageCollectionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGarbageCollectionSettings.OuterSingleton, Z_Construct_UClass_UGarbageCollectionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGarbageCollectionSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UGarbageCollectionSettings>()
{
	return UGarbageCollectionSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGarbageCollectionSettings);
UGarbageCollectionSettings::~UGarbageCollectionSettings() {}
// End Class UGarbageCollectionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreamingSettings, UStreamingSettings::StaticClass, TEXT("UStreamingSettings"), &Z_Registration_Info_UClass_UStreamingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamingSettings), 2599147176U) },
		{ Z_Construct_UClass_UGarbageCollectionSettings, UGarbageCollectionSettings::StaticClass, TEXT("UGarbageCollectionSettings"), &Z_Registration_Info_UClass_UGarbageCollectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGarbageCollectionSettings), 3342062921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_3466916222(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
