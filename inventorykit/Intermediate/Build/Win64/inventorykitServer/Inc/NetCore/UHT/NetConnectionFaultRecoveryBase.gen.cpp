// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Net/Core/Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnectionFaultRecoveryBase() {}

// Begin Cross Module References
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEscalationState();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetFaultState();
UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References

// Begin ScriptStruct FNetFaultState
static_assert(std::is_polymorphic<FNetFaultState>() == std::is_polymorphic<FEscalationState>(), "USTRUCT FNetFaultState cannot be polymorphic unless super FEscalationState is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetFaultState;
class UScriptStruct* FNetFaultState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetFaultState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetFaultState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetFaultState, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("NetFaultState"));
	}
	return Z_Registration_Info_UScriptStruct_NetFaultState.OuterSingleton;
}
template<> NETCORE_API UScriptStruct* StaticStruct<FNetFaultState>()
{
	return FNetFaultState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetFaultState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Generic escalation state definition used to implement attempted recovery from faults/errors in the NetConnection level netcode.\n * Fault handlers may have their own separate escalation tracking.\n */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "Generic escalation state definition used to implement attempted recovery from faults/errors in the NetConnection level netcode.\nFault handlers may have their own separate escalation tracking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCloseConnection_MetaData[] = {
		{ "Comment", "/** Whether or not the current escalation state should immediately Close the connection */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "Whether or not the current escalation state should immediately Close the connection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaFaultsPerPeriod_MetaData[] = {
		{ "Comment", "/** The number of faults per period before the next stage of escalation is triggered */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "The number of faults per period before the next stage of escalation is triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaFaultPercentPerPeriod_MetaData[] = {
		{ "Comment", "/** Percentage of faults out of total number of recent packets, before the next stage of escalation is triggered */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "Percentage of faults out of total number of recent packets, before the next stage of escalation is triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescalateQuotaFaultsPerPeriod_MetaData[] = {
		{ "Comment", "/** The number of faults per period before de-escalating into this state (adds hysteresis/lag to state changes) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "The number of faults per period before de-escalating into this state (adds hysteresis/lag to state changes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescalateQuotaFaultPercentPerPeriod_MetaData[] = {
		{ "Comment", "/** Percentage of faults out of total number of recent packets, before de-escalating into this state (adds hysteresis/lag to state changes) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "Percentage of faults out of total number of recent packets, before de-escalating into this state (adds hysteresis/lag to state changes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaTimePeriod_MetaData[] = {
		{ "Comment", "/** The time period to use for determining escalation/de-escalation quotas (Max: 16) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "The time period to use for determining escalation/de-escalation quotas (Max: 16)" },
	};
#endif // WITH_METADATA
	static void NewProp_bCloseConnection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseConnection;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateQuotaFaultsPerPeriod;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_EscalateQuotaFaultPercentPerPeriod;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_DescalateQuotaFaultsPerPeriod;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_DescalateQuotaFaultPercentPerPeriod;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_EscalateQuotaTimePeriod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetFaultState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection_SetBit(void* Obj)
{
	((FNetFaultState*)Obj)->bCloseConnection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection = { "bCloseConnection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetFaultState), &Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCloseConnection_MetaData), NewProp_bCloseConnection_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultsPerPeriod = { "EscalateQuotaFaultsPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetFaultState, EscalateQuotaFaultsPerPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalateQuotaFaultsPerPeriod_MetaData), NewProp_EscalateQuotaFaultsPerPeriod_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultPercentPerPeriod = { "EscalateQuotaFaultPercentPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetFaultState, EscalateQuotaFaultPercentPerPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalateQuotaFaultPercentPerPeriod_MetaData), NewProp_EscalateQuotaFaultPercentPerPeriod_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultsPerPeriod = { "DescalateQuotaFaultsPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetFaultState, DescalateQuotaFaultsPerPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescalateQuotaFaultsPerPeriod_MetaData), NewProp_DescalateQuotaFaultsPerPeriod_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultPercentPerPeriod = { "DescalateQuotaFaultPercentPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetFaultState, DescalateQuotaFaultPercentPerPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescalateQuotaFaultPercentPerPeriod_MetaData), NewProp_DescalateQuotaFaultPercentPerPeriod_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaTimePeriod = { "EscalateQuotaTimePeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetFaultState, EscalateQuotaTimePeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalateQuotaTimePeriod_MetaData), NewProp_EscalateQuotaTimePeriod_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetFaultState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultsPerPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultPercentPerPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultsPerPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultPercentPerPeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaTimePeriod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetFaultState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
	Z_Construct_UScriptStruct_FEscalationState,
	&NewStructOps,
	"NetFaultState",
	Z_Construct_UScriptStruct_FNetFaultState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::PropPointers),
	sizeof(FNetFaultState),
	alignof(FNetFaultState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetFaultState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetFaultState()
{
	if (!Z_Registration_Info_UScriptStruct_NetFaultState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetFaultState.InnerSingleton, Z_Construct_UScriptStruct_FNetFaultState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetFaultState.InnerSingleton;
}
// End ScriptStruct FNetFaultState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetFaultState::StaticStruct, Z_Construct_UScriptStruct_FNetFaultState_Statics::NewStructOps, TEXT("NetFaultState"), &Z_Registration_Info_UScriptStruct_NetFaultState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetFaultState), 1922480246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h_104027708(TEXT("/Script/NetCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
