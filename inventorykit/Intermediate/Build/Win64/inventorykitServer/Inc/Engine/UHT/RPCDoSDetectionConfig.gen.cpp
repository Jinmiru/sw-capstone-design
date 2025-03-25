// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Net/RPCDoSDetectionConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPCDoSDetectionConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_URPCDoSDetectionConfig();
ENGINE_API UClass* Z_Construct_UClass_URPCDoSDetectionConfig_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRPCAnalyticsThreshold();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FRPCAnalyticsThreshold
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold;
class UScriptStruct* FRPCAnalyticsThreshold::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RPCAnalyticsThreshold"));
	}
	return Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRPCAnalyticsThreshold>()
{
	return FRPCAnalyticsThreshold::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Specifies time or count thresholds for when an RPC should be included in analytics\n */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Specifies time or count thresholds for when an RPC should be included in analytics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPC_MetaData[] = {
		{ "Comment", "/** The RPC name */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The RPC name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountPerSec_MetaData[] = {
		{ "Comment", "/** The number of calls to an RPC's per second, before including in analytics */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The number of calls to an RPC's per second, before including in analytics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimePerSec_MetaData[] = {
		{ "Comment", "/** Time spent executing an RPC per second, before including in analytics (can specify more than 1 second, for long running RPC's) */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Time spent executing an RPC per second, before including in analytics (can specify more than 1 second, for long running RPC's)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RPC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountPerSec;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimePerSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPCAnalyticsThreshold>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_RPC = { "RPC", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCAnalyticsThreshold, RPC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPC_MetaData), NewProp_RPC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_CountPerSec = { "CountPerSec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCAnalyticsThreshold, CountPerSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountPerSec_MetaData), NewProp_CountPerSec_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_TimePerSec = { "TimePerSec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCAnalyticsThreshold, TimePerSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimePerSec_MetaData), NewProp_TimePerSec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_RPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_CountPerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_TimePerSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RPCAnalyticsThreshold",
	Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::PropPointers),
	sizeof(FRPCAnalyticsThreshold),
	alignof(FRPCAnalyticsThreshold),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPCAnalyticsThreshold()
{
	if (!Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.InnerSingleton, Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.InnerSingleton;
}
// End ScriptStruct FRPCAnalyticsThreshold

// Begin Class URPCDoSDetectionConfig
void URPCDoSDetectionConfig::StaticRegisterNativesURPCDoSDetectionConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPCDoSDetectionConfig);
UClass* Z_Construct_UClass_URPCDoSDetectionConfig_NoRegister()
{
	return URPCDoSDetectionConfig::StaticClass();
}
struct Z_Construct_UClass_URPCDoSDetectionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration for FRPCDoSDetection - using PerObjectConfig, to hack a single hardcoded section name\n */" },
		{ "IncludePath", "Net/RPCDoSDetectionConfig.h" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Configuration for FRPCDoSDetection - using PerObjectConfig, to hack a single hardcoded section name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRPCDoSDetection_MetaData[] = {
		{ "Comment", "/** Whether or not RPC DoS detection is presently enabled */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Whether or not RPC DoS detection is presently enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRPCDoSAnalytics_MetaData[] = {
		{ "Comment", "/** Whether or not analytics for RPC DoS detection is enabled */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Whether or not analytics for RPC DoS detection is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitchTimeQuotaMS_MetaData[] = {
		{ "Comment", "/** The amount of time since the previous frame, for detecting hitches, to prevent false positives from built-up packets */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The amount of time since the previous frame, for detecting hitches, to prevent false positives from built-up packets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitchSuspendDetectionTimeMS_MetaData[] = {
		{ "Comment", "/** The amount of time to suspend RPC DoS Detection, once a hitch is encountered, prevent false positives from built-up packets */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The amount of time to suspend RPC DoS Detection, once a hitch is encountered, prevent false positives from built-up packets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionSeverity_MetaData[] = {
		{ "Comment", "/** Names of the different RPC DoS detection states, for escalating severity, depending on the amount of RPC spam */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Names of the different RPC DoS detection states, for escalating severity, depending on the amount of RPC spam" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialConnectToleranceMS_MetaData[] = {
		{ "Comment", "/** The amount of time since the client connected, before time-based checks should become active (to reduce false positives) */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The amount of time since the client connected, before time-based checks should become active (to reduce false positives)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPCBlockWhitelist_MetaData[] = {
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPCBlockAllowlist_MetaData[] = {
		{ "Comment", "/** List of RPC's which should never be blocked */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "List of RPC's which should never be blocked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPCAnalyticsThresholds_MetaData[] = {
		{ "Comment", "/** Custom thresholds for when specific RPC's should be included in analytics */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Custom thresholds for when specific RPC's should be included in analytics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPCAnalyticsOverrideChance_MetaData[] = {
		{ "Comment", "/** Specifies a random chance, between 0.0 and 1.0, for when RPCAnalyticsThresholds should be overridden (adds to separate analytics) */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Specifies a random chance, between 0.0 and 1.0, for when RPCAnalyticsThresholds should be overridden (adds to separate analytics)" },
	};
#endif // WITH_METADATA
	static void NewProp_bRPCDoSDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRPCDoSDetection;
	static void NewProp_bRPCDoSAnalytics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRPCDoSAnalytics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitchTimeQuotaMS;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitchSuspendDetectionTimeMS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DetectionSeverity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DetectionSeverity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialConnectToleranceMS;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RPCBlockWhitelist_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RPCBlockWhitelist;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RPCBlockAllowlist_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RPCBlockAllowlist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RPCAnalyticsThresholds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RPCAnalyticsThresholds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RPCAnalyticsOverrideChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPCDoSDetectionConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection_SetBit(void* Obj)
{
	((URPCDoSDetectionConfig*)Obj)->bRPCDoSDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection = { "bRPCDoSDetection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URPCDoSDetectionConfig), &Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRPCDoSDetection_MetaData), NewProp_bRPCDoSDetection_MetaData) };
void Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics_SetBit(void* Obj)
{
	((URPCDoSDetectionConfig*)Obj)->bRPCDoSAnalytics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics = { "bRPCDoSAnalytics", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URPCDoSDetectionConfig), &Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRPCDoSAnalytics_MetaData), NewProp_bRPCDoSAnalytics_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchTimeQuotaMS = { "HitchTimeQuotaMS", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPCDoSDetectionConfig, HitchTimeQuotaMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitchTimeQuotaMS_MetaData), NewProp_HitchTimeQuotaMS_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchSuspendDetectionTimeMS = { "HitchSuspendDetectionTimeMS", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPCDoSDetectionConfig, HitchSuspendDetectionTimeMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitchSuspendDetectionTimeMS_MetaData), NewProp_HitchSuspendDetectionTimeMS_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity_Inner = { "DetectionSeverity", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity = { "DetectionSeverity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPCDoSDetectionConfig, DetectionSeverity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionSeverity_MetaData), NewProp_DetectionSeverity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_InitialConnectToleranceMS = { "InitialConnectToleranceMS", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPCDoSDetectionConfig, InitialConnectToleranceMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialConnectToleranceMS_MetaData), NewProp_InitialConnectToleranceMS_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist_Inner = { "RPCBlockWhitelist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist = { "RPCBlockWhitelist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPCDoSDetectionConfig, RPCBlockWhitelist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPCBlockWhitelist_MetaData), NewProp_RPCBlockWhitelist_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist_Inner = { "RPCBlockAllowlist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist = { "RPCBlockAllowlist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPCDoSDetectionConfig, RPCBlockAllowlist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPCBlockAllowlist_MetaData), NewProp_RPCBlockAllowlist_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds_Inner = { "RPCAnalyticsThresholds", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRPCAnalyticsThreshold, METADATA_PARAMS(0, nullptr) }; // 1667287092
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds = { "RPCAnalyticsThresholds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPCDoSDetectionConfig, RPCAnalyticsThresholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPCAnalyticsThresholds_MetaData), NewProp_RPCAnalyticsThresholds_MetaData) }; // 1667287092
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsOverrideChance = { "RPCAnalyticsOverrideChance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPCDoSDetectionConfig, RPCAnalyticsOverrideChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPCAnalyticsOverrideChance_MetaData), NewProp_RPCAnalyticsOverrideChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPCDoSDetectionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchTimeQuotaMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchSuspendDetectionTimeMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_InitialConnectToleranceMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsOverrideChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPCDoSDetectionConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::ClassParams = {
	&URPCDoSDetectionConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPCDoSDetectionConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::PropPointers),
	0,
	0x000004A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_URPCDoSDetectionConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPCDoSDetectionConfig()
{
	if (!Z_Registration_Info_UClass_URPCDoSDetectionConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPCDoSDetectionConfig.OuterSingleton, Z_Construct_UClass_URPCDoSDetectionConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPCDoSDetectionConfig.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URPCDoSDetectionConfig>()
{
	return URPCDoSDetectionConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPCDoSDetectionConfig);
URPCDoSDetectionConfig::~URPCDoSDetectionConfig() {}
// End Class URPCDoSDetectionConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPCAnalyticsThreshold::StaticStruct, Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewStructOps, TEXT("RPCAnalyticsThreshold"), &Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPCAnalyticsThreshold), 1667287092U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPCDoSDetectionConfig, URPCDoSDetectionConfig::StaticClass, TEXT("URPCDoSDetectionConfig"), &Z_Registration_Info_UClass_URPCDoSDetectionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPCDoSDetectionConfig), 2357473271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_4247614985(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
