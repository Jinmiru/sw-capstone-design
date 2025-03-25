// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/RPCDoSDetection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPCDoSDetection() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRPCDoSState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRPCDoSStateConfig();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FRPCDoSState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RPCDoSState;
class UScriptStruct* FRPCDoSState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RPCDoSState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RPCDoSState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPCDoSState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RPCDoSState"));
	}
	return Z_Registration_Info_UScriptStruct_RPCDoSState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRPCDoSState>()
{
	return FRPCDoSState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRPCDoSState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores the RPC DoS detection state (either settings from the config file, or the active DDoS detection state)\n */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Stores the RPC DoS detection state (either settings from the config file, or the active DDoS detection state)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogEscalate_MetaData[] = {
		{ "Comment", "/** Whether or not to log when escalating to this state */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Whether or not to log when escalating to this state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendEscalateAnalytics_MetaData[] = {
		{ "Comment", "/** Whether or not to send analytics when escalating to this state */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Whether or not to send analytics when escalating to this state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKickPlayer_MetaData[] = {
		{ "Comment", "/** Whether or not to kick the player when they escalate to this state */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Whether or not to kick the player when they escalate to this state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrackRecentRPCs_MetaData[] = {
		{ "Comment", "/** Whether or not to keep a temporary record of recent RPC's, for potential logging/analytics */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Whether or not to keep a temporary record of recent RPC's, for potential logging/analytics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaRPCsPerFrame_MetaData[] = {
		{ "Comment", "/** The number of RPC's per frame before the next stage of DoS detection is triggered */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The number of RPC's per frame before the next stage of DoS detection is triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalateTimeQuotaMSPerFrame_MetaData[] = {
		{ "Comment", "/** The amount of time spent executing RPC's per frame, before the next stage of DoS detection is triggered */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The amount of time spent executing RPC's per frame, before the next stage of DoS detection is triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaRPCsPerPeriod_MetaData[] = {
		{ "Comment", "/** The number of RPC's per EscalateQuotaPeriod before the next stage of DoS detection is triggered */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The number of RPC's per EscalateQuotaPeriod before the next stage of DoS detection is triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalateTimeQuotaMSPerPeriod_MetaData[] = {
		{ "Comment", "/** The amount of time spent executing RPC's per EscalateQuotaPeriod, before the next stage of DoS detection is triggered */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The amount of time spent executing RPC's per EscalateQuotaPeriod, before the next stage of DoS detection is triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaTimePeriod_MetaData[] = {
		{ "Comment", "/** The time period to use for determining RPC count and time escalation quotas (Max: 16) */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The time period to use for determining RPC count and time escalation quotas (Max: 16)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalationCountTolerance_MetaData[] = {
		{ "Comment", "/** The number of times this stage must be escalated to, before it is 'confirmed' as having been escalated to (for analytics) */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The number of times this stage must be escalated to, before it is 'confirmed' as having been escalated to (for analytics)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalationTimeToleranceMS_MetaData[] = {
		{ "Comment", "/** The maximum time spent executing RPC's per frame, before this escalation stage is automatically 'confirmed' for analytics */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The maximum time spent executing RPC's per frame, before this escalation stage is automatically 'confirmed' for analytics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPCRepeatLimitPerPeriod_MetaData[] = {
		{ "Comment", "/** The limit for the number of times a single RPC can be repeated, over the time period specified by RPCRepeatTimeLimitPeriod */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The limit for the number of times a single RPC can be repeated, over the time period specified by RPCRepeatTimeLimitPeriod" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPCRepeatLimitMSPerPeriod_MetaData[] = {
		{ "Comment", "/** The limit for the number of milliseconds a single RPC can spend executing, over the time period specified by RPCRepeatTimeLimitPeriod */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The limit for the number of milliseconds a single RPC can spend executing, over the time period specified by RPCRepeatTimeLimitPeriod" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPCRepeatLimitTimePeriod_MetaData[] = {
		{ "Comment", "/** The time period to use for measuring excessive execution time for a single RPC (Max: 16) */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The time period to use for measuring excessive execution time for a single RPC (Max: 16)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooloffTime_MetaData[] = {
		{ "Comment", "/** The amount of time, in seconds, before the current DoS severity category cools off and de-escalates */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The amount of time, in seconds, before the current DoS severity category cools off and de-escalates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoEscalateTime_MetaData[] = {
		{ "Comment", "/** The amount of time, in seconds, spent in the current DoS severity category before it automatically escalates to the next category */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The amount of time, in seconds, spent in the current DoS severity category before it automatically escalates to the next category" },
	};
#endif // WITH_METADATA
	static void NewProp_bLogEscalate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogEscalate;
	static void NewProp_bSendEscalateAnalytics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendEscalateAnalytics;
	static void NewProp_bKickPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKickPlayer;
	static void NewProp_bTrackRecentRPCs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackRecentRPCs;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateQuotaRPCsPerFrame;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateTimeQuotaMSPerFrame;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateQuotaRPCsPerPeriod;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateTimeQuotaMSPerPeriod;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_EscalateQuotaTimePeriod;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_EscalationCountTolerance;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalationTimeToleranceMS;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_RPCRepeatLimitPerPeriod;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_RPCRepeatLimitMSPerPeriod;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_RPCRepeatLimitTimePeriod;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_CooloffTime;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_AutoEscalateTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPCDoSState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate_SetBit(void* Obj)
{
	((FRPCDoSState*)Obj)->bLogEscalate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate = { "bLogEscalate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRPCDoSState), &Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogEscalate_MetaData), NewProp_bLogEscalate_MetaData) };
void Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics_SetBit(void* Obj)
{
	((FRPCDoSState*)Obj)->bSendEscalateAnalytics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics = { "bSendEscalateAnalytics", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRPCDoSState), &Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendEscalateAnalytics_MetaData), NewProp_bSendEscalateAnalytics_MetaData) };
void Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer_SetBit(void* Obj)
{
	((FRPCDoSState*)Obj)->bKickPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer = { "bKickPlayer", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRPCDoSState), &Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKickPlayer_MetaData), NewProp_bKickPlayer_MetaData) };
void Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs_SetBit(void* Obj)
{
	((FRPCDoSState*)Obj)->bTrackRecentRPCs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs = { "bTrackRecentRPCs", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRPCDoSState), &Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrackRecentRPCs_MetaData), NewProp_bTrackRecentRPCs_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerFrame = { "EscalateQuotaRPCsPerFrame", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, EscalateQuotaRPCsPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalateQuotaRPCsPerFrame_MetaData), NewProp_EscalateQuotaRPCsPerFrame_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerFrame = { "EscalateTimeQuotaMSPerFrame", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, EscalateTimeQuotaMSPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalateTimeQuotaMSPerFrame_MetaData), NewProp_EscalateTimeQuotaMSPerFrame_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerPeriod = { "EscalateQuotaRPCsPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, EscalateQuotaRPCsPerPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalateQuotaRPCsPerPeriod_MetaData), NewProp_EscalateQuotaRPCsPerPeriod_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerPeriod = { "EscalateTimeQuotaMSPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, EscalateTimeQuotaMSPerPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalateTimeQuotaMSPerPeriod_MetaData), NewProp_EscalateTimeQuotaMSPerPeriod_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaTimePeriod = { "EscalateQuotaTimePeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, EscalateQuotaTimePeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalateQuotaTimePeriod_MetaData), NewProp_EscalateQuotaTimePeriod_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationCountTolerance = { "EscalationCountTolerance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, EscalationCountTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalationCountTolerance_MetaData), NewProp_EscalationCountTolerance_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationTimeToleranceMS = { "EscalationTimeToleranceMS", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, EscalationTimeToleranceMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalationTimeToleranceMS_MetaData), NewProp_EscalationTimeToleranceMS_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitPerPeriod = { "RPCRepeatLimitPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, RPCRepeatLimitPerPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPCRepeatLimitPerPeriod_MetaData), NewProp_RPCRepeatLimitPerPeriod_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitMSPerPeriod = { "RPCRepeatLimitMSPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, RPCRepeatLimitMSPerPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPCRepeatLimitMSPerPeriod_MetaData), NewProp_RPCRepeatLimitMSPerPeriod_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitTimePeriod = { "RPCRepeatLimitTimePeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, RPCRepeatLimitTimePeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPCRepeatLimitTimePeriod_MetaData), NewProp_RPCRepeatLimitTimePeriod_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_CooloffTime = { "CooloffTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, CooloffTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooloffTime_MetaData), NewProp_CooloffTime_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_AutoEscalateTime = { "AutoEscalateTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCDoSState, AutoEscalateTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoEscalateTime_MetaData), NewProp_AutoEscalateTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPCDoSState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaTimePeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationCountTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationTimeToleranceMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitPerPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitMSPerPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitTimePeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_CooloffTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_AutoEscalateTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RPCDoSState",
	Z_Construct_UScriptStruct_FRPCDoSState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::PropPointers),
	sizeof(FRPCDoSState),
	alignof(FRPCDoSState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPCDoSState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPCDoSState()
{
	if (!Z_Registration_Info_UScriptStruct_RPCDoSState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RPCDoSState.InnerSingleton, Z_Construct_UScriptStruct_FRPCDoSState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RPCDoSState.InnerSingleton;
}
// End ScriptStruct FRPCDoSState

// Begin ScriptStruct FRPCDoSStateConfig
static_assert(std::is_polymorphic<FRPCDoSStateConfig>() == std::is_polymorphic<FRPCDoSState>(), "USTRUCT FRPCDoSStateConfig cannot be polymorphic unless super FRPCDoSState is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RPCDoSStateConfig;
class UScriptStruct* FRPCDoSStateConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPCDoSStateConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RPCDoSStateConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRPCDoSStateConfig>()
{
	return FRPCDoSStateConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration for RPC DoS Detection states\n */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Configuration for RPC DoS Detection states" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPCDoSStateConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FRPCDoSState,
	&NewStructOps,
	"RPCDoSStateConfig",
	nullptr,
	0,
	sizeof(FRPCDoSStateConfig),
	alignof(FRPCDoSStateConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPCDoSStateConfig()
{
	if (!Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.InnerSingleton, Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.InnerSingleton;
}
// End ScriptStruct FRPCDoSStateConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPCDoSState::StaticStruct, Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewStructOps, TEXT("RPCDoSState"), &Z_Registration_Info_UScriptStruct_RPCDoSState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPCDoSState), 3334629235U) },
		{ FRPCDoSStateConfig::StaticStruct, Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::NewStructOps, TEXT("RPCDoSStateConfig"), &Z_Registration_Info_UScriptStruct_RPCDoSStateConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPCDoSStateConfig), 247035612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h_1531863562(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
