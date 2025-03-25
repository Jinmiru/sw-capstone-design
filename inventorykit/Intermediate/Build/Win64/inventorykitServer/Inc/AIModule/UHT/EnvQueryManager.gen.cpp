// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryManager() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryInstanceCache();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryManagerConfig();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FEnvQueryManagerConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig;
class UScriptStruct* FEnvQueryManagerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryManagerConfig, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryManagerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryManagerConfig>()
{
	return FEnvQueryManagerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper to hold config variables */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Wrapper to hold config variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedTestingTime_MetaData[] = {
		{ "Comment", "/** how long are we allowed to test per update, in seconds. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how long are we allowed to test per update, in seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTestQueriesUsingBreadth_MetaData[] = {
		{ "Comment", "/** whether we update EQS queries based on:\n\x09running a test on one query and move to the next (breadth) - default behavior,\n\x09or test an entire query before moving to the next one (depth). */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "whether we update EQS queries based on:\n      running a test on one query and move to the next (breadth) - default behavior,\n      or test an entire query before moving to the next one (depth)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningThreshold_MetaData[] = {
		{ "Comment", "/** if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningInterval_MetaData[] = {
		{ "Comment", "/** how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session) */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS execution duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS execution duration (in seconds) before a warning is reported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandlingResultTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS Generator duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS Generator duration (in seconds) before a warning is reported." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedTestingTime;
	static void NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestQueriesUsingBreadth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryCountWarningThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_QueryCountWarningInterval;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExecutionTimeWarningSeconds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HandlingResultTimeWarningSeconds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GenerationTimeWarningSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryManagerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_MaxAllowedTestingTime = { "MaxAllowedTestingTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryManagerConfig, MaxAllowedTestingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedTestingTime_MetaData), NewProp_MaxAllowedTestingTime_MetaData) };
void Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj)
{
	((FEnvQueryManagerConfig*)Obj)->bTestQueriesUsingBreadth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth = { "bTestQueriesUsingBreadth", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEnvQueryManagerConfig), &Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTestQueriesUsingBreadth_MetaData), NewProp_bTestQueriesUsingBreadth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningThreshold = { "QueryCountWarningThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryManagerConfig, QueryCountWarningThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryCountWarningThreshold_MetaData), NewProp_QueryCountWarningThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningInterval = { "QueryCountWarningInterval", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryManagerConfig, QueryCountWarningInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryCountWarningInterval_MetaData), NewProp_QueryCountWarningInterval_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_ExecutionTimeWarningSeconds = { "ExecutionTimeWarningSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryManagerConfig, ExecutionTimeWarningSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionTimeWarningSeconds_MetaData), NewProp_ExecutionTimeWarningSeconds_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_HandlingResultTimeWarningSeconds = { "HandlingResultTimeWarningSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryManagerConfig, HandlingResultTimeWarningSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandlingResultTimeWarningSeconds_MetaData), NewProp_HandlingResultTimeWarningSeconds_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_GenerationTimeWarningSeconds = { "GenerationTimeWarningSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryManagerConfig, GenerationTimeWarningSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationTimeWarningSeconds_MetaData), NewProp_GenerationTimeWarningSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_MaxAllowedTestingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_ExecutionTimeWarningSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_HandlingResultTimeWarningSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_GenerationTimeWarningSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"EnvQueryManagerConfig",
	Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::PropPointers),
	sizeof(FEnvQueryManagerConfig),
	alignof(FEnvQueryManagerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryManagerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.InnerSingleton;
}
// End ScriptStruct FEnvQueryManagerConfig

// Begin ScriptStruct FEnvQueryRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvQueryRequest;
class UScriptStruct* FEnvQueryRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvQueryRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryRequest, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryRequest.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryRequest>()
{
	return FEnvQueryRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnvQueryRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** wrapper for easy query execution */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "wrapper for easy query execution" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[] = {
		{ "Comment", "/** query to run */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "query to run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Comment", "/** querier */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "querier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "Comment", "/** world */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "world" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryRequest, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryTemplate_MetaData), NewProp_QueryTemplate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryRequest, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryRequest, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"EnvQueryRequest",
	Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers),
	sizeof(FEnvQueryRequest),
	alignof(FEnvQueryRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryRequest()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvQueryRequest.InnerSingleton, Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryRequest.InnerSingleton;
}
// End ScriptStruct FEnvQueryRequest

// Begin ScriptStruct FEnvQueryInstanceCache
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache;
class UScriptStruct* FEnvQueryInstanceCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryInstanceCache, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryInstanceCache"));
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryInstanceCache>()
{
	return FEnvQueryInstanceCache::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** cache of instances with sorted tests */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "cache of instances with sorted tests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
		{ "Comment", "/** query template, duplicated in manager's world */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "query template, duplicated in manager's world" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Template;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryInstanceCache>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryInstanceCache, Template), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Template_MetaData), NewProp_Template_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"EnvQueryInstanceCache",
	Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers),
	sizeof(FEnvQueryInstanceCache),
	alignof(FEnvQueryInstanceCache),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryInstanceCache()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.InnerSingleton, Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.InnerSingleton;
}
// End ScriptStruct FEnvQueryInstanceCache

// Begin Class UEnvQueryManager Function RunEQSQuery
struct Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics
{
	struct EnvQueryManager_eventRunEQSQuery_Parms
	{
		UObject* WorldContextObject;
		UEnvQuery* QueryTemplate;
		UObject* Querier;
		TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
		TSubclassOf<UEnvQueryInstanceBlueprintWrapper> WrapperClass;
		UEnvQueryInstanceBlueprintWrapper* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WrapperClass" },
		{ "Category", "AI|EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Querier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RunMode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WrapperClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_Querier = { "Querier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, Querier), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_RunMode = { "RunMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(0, nullptr) }; // 3794952332
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WrapperClass = { "WrapperClass", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, WrapperClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, ReturnValue), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_QueryTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_Querier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_RunMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WrapperClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryManager, nullptr, "RunEQSQuery", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::EnvQueryManager_eventRunEQSQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::EnvQueryManager_eventRunEQSQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnvQueryManager::execRunEQSQuery)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UEnvQuery,Z_Param_QueryTemplate);
	P_GET_OBJECT(UObject,Z_Param_Querier);
	P_GET_PROPERTY(FByteProperty,Z_Param_RunMode);
	P_GET_OBJECT(UClass,Z_Param_WrapperClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnvQueryInstanceBlueprintWrapper**)Z_Param__Result=UEnvQueryManager::RunEQSQuery(Z_Param_WorldContextObject,Z_Param_QueryTemplate,Z_Param_Querier,EEnvQueryRunMode::Type(Z_Param_RunMode),Z_Param_WrapperClass);
	P_NATIVE_END;
}
// End Class UEnvQueryManager Function RunEQSQuery

// Begin Class UEnvQueryManager
void UEnvQueryManager::StaticRegisterNativesUEnvQueryManager()
{
	UClass* Class = UEnvQueryManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RunEQSQuery", &UEnvQueryManager::execRunEQSQuery },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryManager);
UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister()
{
	return UEnvQueryManager::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryManager.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceCache_MetaData[] = {
		{ "Comment", "/** cache of instances */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "cache of instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalContexts_MetaData[] = {
		{ "Comment", "/** local cache of context objects for managing BP based objects */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "local cache of context objects for managing BP based objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GCShieldedWrappers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedTestingTime_MetaData[] = {
		{ "Comment", "/** how long are we allowed to test per update, in seconds. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how long are we allowed to test per update, in seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTestQueriesUsingBreadth_MetaData[] = {
		{ "Comment", "/** whether we update EQS queries based on:\n\x09    running a test on one query and move to the next (breadth) - default behavior,\n\x09    or test an entire query before moving to the next one (depth). */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "whether we update EQS queries based on:\n          running a test on one query and move to the next (breadth) - default behavior,\n          or test an entire query before moving to the next one (depth)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningThreshold_MetaData[] = {
		{ "Comment", "/** if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningInterval_MetaData[] = {
		{ "Comment", "/** how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session) */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS execution duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS execution duration (in seconds) before a warning is reported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandlingResultTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS Generator duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS Generator duration (in seconds) before a warning is reported." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceCache_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GCShieldedWrappers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GCShieldedWrappers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedTestingTime;
	static void NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestQueriesUsingBreadth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryCountWarningThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_QueryCountWarningInterval;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExecutionTimeWarningSeconds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HandlingResultTimeWarningSeconds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GenerationTimeWarningSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery, "RunEQSQuery" }, // 953852160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_Inner = { "InstanceCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnvQueryInstanceCache, METADATA_PARAMS(0, nullptr) }; // 732373457
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache = { "InstanceCache", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryManager, InstanceCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceCache_MetaData), NewProp_InstanceCache_MetaData) }; // 732373457
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_Inner = { "LocalContexts", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts = { "LocalContexts", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryManager, LocalContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalContexts_MetaData), NewProp_LocalContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_Inner = { "GCShieldedWrappers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers = { "GCShieldedWrappers", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryManager, GCShieldedWrappers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GCShieldedWrappers_MetaData), NewProp_GCShieldedWrappers_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime = { "MaxAllowedTestingTime", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryManager, MaxAllowedTestingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedTestingTime_MetaData), NewProp_MaxAllowedTestingTime_MetaData) };
void Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj)
{
	((UEnvQueryManager*)Obj)->bTestQueriesUsingBreadth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth = { "bTestQueriesUsingBreadth", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryManager), &Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTestQueriesUsingBreadth_MetaData), NewProp_bTestQueriesUsingBreadth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold = { "QueryCountWarningThreshold", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryCountWarningThreshold_MetaData), NewProp_QueryCountWarningThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval = { "QueryCountWarningInterval", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryCountWarningInterval_MetaData), NewProp_QueryCountWarningInterval_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_ExecutionTimeWarningSeconds = { "ExecutionTimeWarningSeconds", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryManager, ExecutionTimeWarningSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionTimeWarningSeconds_MetaData), NewProp_ExecutionTimeWarningSeconds_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_HandlingResultTimeWarningSeconds = { "HandlingResultTimeWarningSeconds", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryManager, HandlingResultTimeWarningSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandlingResultTimeWarningSeconds_MetaData), NewProp_HandlingResultTimeWarningSeconds_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GenerationTimeWarningSeconds = { "GenerationTimeWarningSeconds", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryManager, GenerationTimeWarningSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationTimeWarningSeconds_MetaData), NewProp_GenerationTimeWarningSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_ExecutionTimeWarningSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_HandlingResultTimeWarningSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GenerationTimeWarningSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryManager_Statics::ClassParams = {
	&UEnvQueryManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers),
	0,
	0x000800AEu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryManager()
{
	if (!Z_Registration_Info_UClass_UEnvQueryManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryManager.OuterSingleton, Z_Construct_UClass_UEnvQueryManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryManager.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryManager>()
{
	return UEnvQueryManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryManager);
UEnvQueryManager::~UEnvQueryManager() {}
// End Class UEnvQueryManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEnvQueryManagerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewStructOps, TEXT("EnvQueryManagerConfig"), &Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvQueryManagerConfig), 1181684167U) },
		{ FEnvQueryRequest::StaticStruct, Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewStructOps, TEXT("EnvQueryRequest"), &Z_Registration_Info_UScriptStruct_EnvQueryRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvQueryRequest), 3073940405U) },
		{ FEnvQueryInstanceCache::StaticStruct, Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewStructOps, TEXT("EnvQueryInstanceCache"), &Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvQueryInstanceCache), 732373457U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryManager, UEnvQueryManager::StaticClass, TEXT("UEnvQueryManager"), &Z_Registration_Info_UClass_UEnvQueryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryManager), 3636469011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_1789901765(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
