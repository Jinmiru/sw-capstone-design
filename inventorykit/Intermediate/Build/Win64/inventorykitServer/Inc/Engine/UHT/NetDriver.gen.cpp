// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDriver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsCSV();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsCSV_Replication();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsCSV_Replication_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChannelDefinition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPacketSimulationSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FPacketSimulationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PacketSimulationSettings;
class UScriptStruct* FPacketSimulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PacketSimulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PacketSimulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPacketSimulationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PacketSimulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PacketSimulationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPacketSimulationSettings>()
{
	return FPacketSimulationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds the packet simulation settings in one place */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Holds the packet simulation settings in one place" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktLoss_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause calls to FlushNet to drop packets.\n\x09 * Value is treated as % of packets dropped (i.e. 0 = None, 100 = All).\n\x09 * No general pattern / ordering is guaranteed.\n\x09 * Clamped between 0 and 100.\n\x09 *\n\x09 * Works with all other settings.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to drop packets.\nValue is treated as % of packets dropped (i.e. 0 = None, 100 = All).\nNo general pattern / ordering is guaranteed.\nClamped between 0 and 100.\n\nWorks with all other settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktLossMaxSize_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09* Sets the maximum size of packets in bytes that will be dropped\n\x09* according to the PktLoss setting. Default is INT_MAX.\n\x09*\n\x09* Works with all other settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Sets the maximum size of packets in bytes that will be dropped\naccording to the PktLoss setting. Default is INT_MAX.\n\nWorks with all other settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktLossMinSize_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09* Sets the minimum size of packets in bytes that will be dropped\n\x09* according to the PktLoss setting. Default is 0.\n\x09*\n\x09* Works with all other settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Sets the minimum size of packets in bytes that will be dropped\naccording to the PktLoss setting. Default is 0.\n\nWorks with all other settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktOrder_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause calls to FlushNet to change ordering of packets at random.\n\x09 * Value is treated as a bool (i.e. 0 = False, anything else = True).\n\x09 * This works by randomly selecting packets to be delayed until a subsequent call to FlushNet.\n\x09 *\n\x09 * Takes precedence over PktDup and PktLag.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to change ordering of packets at random.\nValue is treated as a bool (i.e. 0 = False, anything else = True).\nThis works by randomly selecting packets to be delayed until a subsequent call to FlushNet.\n\nTakes precedence over PktDup and PktLag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktDup_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause calls to FlushNet to duplicate packets.\n\x09 * Value is treated as % of packets duplicated (i.e. 0 = None, 100 = All).\n\x09 * No general pattern / ordering is guaranteed.\n\x09 * Clamped between 0 and 100.\n\x09 *\n\x09 * Cannot be used with PktOrder or PktLag.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to duplicate packets.\nValue is treated as % of packets duplicated (i.e. 0 = None, 100 = All).\nNo general pattern / ordering is guaranteed.\nClamped between 0 and 100.\n\nCannot be used with PktOrder or PktLag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktLag_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause calls to FlushNet to delay packets.\n\x09 * Value is treated as millisecond lag.\n\x09 *\n\x09 * Cannot be used with PktOrder.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to delay packets.\nValue is treated as millisecond lag.\n\nCannot be used with PktOrder." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktLagVariance_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause PktLag to use variable lag instead of constant.\n\x09 * Value is treated as millisecond lag range (e.g. -GivenVariance <= 0 <= GivenVariance).\n\x09 *\n\x09 * Can only be used when PktLag is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause PktLag to use variable lag instead of constant.\nValue is treated as millisecond lag range (e.g. -GivenVariance <= 0 <= GivenVariance).\n\nCan only be used when PktLag is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktLagMin_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * If set lag values will randomly fluctuate between Min and Max.\n\x09 * Ignored if PktLag value is set\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "If set lag values will randomly fluctuate between Min and Max.\nIgnored if PktLag value is set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktLagMax_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktIncomingLagMin_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * Set a value to add a minimum delay in milliseconds to incoming\n\x09 * packets before they are processed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Set a value to add a minimum delay in milliseconds to incoming\npackets before they are processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktIncomingLagMax_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * The maximum delay in milliseconds to add to incoming\n\x09 * packets before they are processed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The maximum delay in milliseconds to add to incoming\npackets before they are processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktIncomingLoss_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * The ratio of incoming packets that will be dropped\n\x09 * to simulate packet loss\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The ratio of incoming packets that will be dropped\nto simulate packet loss" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PktJitter_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * Causes sent packets to have a variable latency that fluctuates from [PktLagMin] to [PktLagMin+PktJitter]\n\x09 * Note that this will cause packet loss on the receiving end.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Causes sent packets to have a variable latency that fluctuates from [PktLagMin] to [PktLagMin+PktJitter]\nNote that this will cause packet loss on the receiving end." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktLoss;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktLossMaxSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktLossMinSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktDup;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktLag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktLagVariance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktLagMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktLagMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktIncomingLagMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktIncomingLagMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktIncomingLoss;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PktJitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPacketSimulationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss = { "PktLoss", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktLoss_MetaData), NewProp_PktLoss_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize = { "PktLossMaxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLossMaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktLossMaxSize_MetaData), NewProp_PktLossMaxSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize = { "PktLossMinSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLossMinSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktLossMinSize_MetaData), NewProp_PktLossMinSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder = { "PktOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktOrder_MetaData), NewProp_PktOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup = { "PktDup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktDup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktDup_MetaData), NewProp_PktDup_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag = { "PktLag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktLag_MetaData), NewProp_PktLag_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance = { "PktLagVariance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLagVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktLagVariance_MetaData), NewProp_PktLagVariance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMin = { "PktLagMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLagMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktLagMin_MetaData), NewProp_PktLagMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMax = { "PktLagMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktLagMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktLagMax_MetaData), NewProp_PktLagMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMin = { "PktIncomingLagMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktIncomingLagMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktIncomingLagMin_MetaData), NewProp_PktIncomingLagMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMax = { "PktIncomingLagMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktIncomingLagMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktIncomingLagMax_MetaData), NewProp_PktIncomingLagMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLoss = { "PktIncomingLoss", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktIncomingLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktIncomingLoss_MetaData), NewProp_PktIncomingLoss_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktJitter = { "PktJitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacketSimulationSettings, PktJitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PktJitter_MetaData), NewProp_PktJitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktJitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PacketSimulationSettings",
	Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers),
	sizeof(FPacketSimulationSettings),
	alignof(FPacketSimulationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPacketSimulationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_PacketSimulationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PacketSimulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PacketSimulationSettings.InnerSingleton;
}
// End ScriptStruct FPacketSimulationSettings

// Begin ScriptStruct FNetDriverReplicationSystemConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetDriverReplicationSystemConfig;
class UScriptStruct* FNetDriverReplicationSystemConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetDriverReplicationSystemConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetDriverReplicationSystemConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetDriverReplicationSystemConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NetDriverReplicationSystemConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetDriverReplicationSystemConfig>()
{
	return FNetDriverReplicationSystemConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to configure the replication system default values */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to configure the replication system default values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReplicatedObjectClientCount_MetaData[] = {
		{ "Comment", "/** Override the max object count when running as a client. If 0 use the default system value. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Override the max object count when running as a client. If 0 use the default system value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReplicatedObjectServerCount_MetaData[] = {
		{ "Comment", "/** Override the max object count when running as a server. If 0 use the default system value. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Override the max object count when running as a server. If 0 use the default system value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreAllocatedReplicatedObjectClientCount_MetaData[] = {
		{ "Comment", "/** Override the number of pre-allocated objects when running as a client. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Override the number of pre-allocated objects when running as a client." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreAllocatedReplicatedObjectServerCount_MetaData[] = {
		{ "Comment", "/** Override the number of pre-allocated objects when running as a server. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Override the number of pre-allocated objects when running as a server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReplicatedWriterObjectClientCount_MetaData[] = {
		{ "Comment", "/** Override the number of pre-allocated objects in FReplicationWriter on the client. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Override the number of pre-allocated objects in FReplicationWriter on the client." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaCompressedObjectCount_MetaData[] = {
		{ "Comment", "/** Override the max compressed object count. If 0 use the default system value. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Override the max compressed object count. If 0 use the default system value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNetObjectGroupCount_MetaData[] = {
		{ "Comment", "/** Override the max group count. If 0 use the default system value. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Override the max group count. If 0 use the default system value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxReplicatedObjectClientCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxReplicatedObjectServerCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PreAllocatedReplicatedObjectClientCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PreAllocatedReplicatedObjectServerCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxReplicatedWriterObjectClientCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxDeltaCompressedObjectCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNetObjectGroupCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetDriverReplicationSystemConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxReplicatedObjectClientCount = { "MaxReplicatedObjectClientCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverReplicationSystemConfig, MaxReplicatedObjectClientCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReplicatedObjectClientCount_MetaData), NewProp_MaxReplicatedObjectClientCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxReplicatedObjectServerCount = { "MaxReplicatedObjectServerCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverReplicationSystemConfig, MaxReplicatedObjectServerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReplicatedObjectServerCount_MetaData), NewProp_MaxReplicatedObjectServerCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_PreAllocatedReplicatedObjectClientCount = { "PreAllocatedReplicatedObjectClientCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverReplicationSystemConfig, PreAllocatedReplicatedObjectClientCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreAllocatedReplicatedObjectClientCount_MetaData), NewProp_PreAllocatedReplicatedObjectClientCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_PreAllocatedReplicatedObjectServerCount = { "PreAllocatedReplicatedObjectServerCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverReplicationSystemConfig, PreAllocatedReplicatedObjectServerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreAllocatedReplicatedObjectServerCount_MetaData), NewProp_PreAllocatedReplicatedObjectServerCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxReplicatedWriterObjectClientCount = { "MaxReplicatedWriterObjectClientCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverReplicationSystemConfig, MaxReplicatedWriterObjectClientCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReplicatedWriterObjectClientCount_MetaData), NewProp_MaxReplicatedWriterObjectClientCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxDeltaCompressedObjectCount = { "MaxDeltaCompressedObjectCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverReplicationSystemConfig, MaxDeltaCompressedObjectCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeltaCompressedObjectCount_MetaData), NewProp_MaxDeltaCompressedObjectCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxNetObjectGroupCount = { "MaxNetObjectGroupCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetDriverReplicationSystemConfig, MaxNetObjectGroupCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNetObjectGroupCount_MetaData), NewProp_MaxNetObjectGroupCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxReplicatedObjectClientCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxReplicatedObjectServerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_PreAllocatedReplicatedObjectClientCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_PreAllocatedReplicatedObjectServerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxReplicatedWriterObjectClientCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxDeltaCompressedObjectCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewProp_MaxNetObjectGroupCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetDriverReplicationSystemConfig",
	Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::PropPointers),
	sizeof(FNetDriverReplicationSystemConfig),
	alignof(FNetDriverReplicationSystemConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig()
{
	if (!Z_Registration_Info_UScriptStruct_NetDriverReplicationSystemConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetDriverReplicationSystemConfig.InnerSingleton, Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetDriverReplicationSystemConfig.InnerSingleton;
}
// End ScriptStruct FNetDriverReplicationSystemConfig

// Begin ScriptStruct FChannelDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChannelDefinition;
class UScriptStruct* FChannelDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChannelDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ChannelDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ChannelDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChannelDefinition>()
{
	return FChannelDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChannelDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to specify properties of a channel type */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify properties of a channel type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Comment", "// Channel type identifier\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel type identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelClass_MetaData[] = {
		{ "Comment", "// UClass name used to create the UChannel\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "UClass name used to create the UChannel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticChannelIndex_MetaData[] = {
		{ "Comment", "// UClass used to create the UChannel\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "UClass used to create the UChannel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTickOnCreate_MetaData[] = {
		{ "Comment", "// Channel always uses this index, INDEX_NONE if dynamically chosen\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel always uses this index, INDEX_NONE if dynamically chosen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bServerOpen_MetaData[] = {
		{ "Comment", "// Whether to immediately begin ticking the channel after creation\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Whether to immediately begin ticking the channel after creation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClientOpen_MetaData[] = {
		{ "Comment", "// Channel opened by the server\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel opened by the server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialServer_MetaData[] = {
		{ "Comment", "// Channel opened by the client\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel opened by the client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialClient_MetaData[] = {
		{ "Comment", "// Channel created on server when connection is established\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel created on server when connection is established" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChannelClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticChannelIndex;
	static void NewProp_bTickOnCreate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickOnCreate;
	static void NewProp_bServerOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerOpen;
	static void NewProp_bClientOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOpen;
	static void NewProp_bInitialServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialServer;
	static void NewProp_bInitialClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelDefinition, ChannelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelName_MetaData), NewProp_ChannelName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelDefinition, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass = { "ChannelClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelDefinition, ChannelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelClass_MetaData), NewProp_ChannelClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex = { "StaticChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelDefinition, StaticChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticChannelIndex_MetaData), NewProp_StaticChannelIndex_MetaData) };
void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_SetBit(void* Obj)
{
	((FChannelDefinition*)Obj)->bTickOnCreate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate = { "bTickOnCreate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTickOnCreate_MetaData), NewProp_bTickOnCreate_MetaData) };
void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_SetBit(void* Obj)
{
	((FChannelDefinition*)Obj)->bServerOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen = { "bServerOpen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bServerOpen_MetaData), NewProp_bServerOpen_MetaData) };
void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_SetBit(void* Obj)
{
	((FChannelDefinition*)Obj)->bClientOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen = { "bClientOpen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClientOpen_MetaData), NewProp_bClientOpen_MetaData) };
void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_SetBit(void* Obj)
{
	((FChannelDefinition*)Obj)->bInitialServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer = { "bInitialServer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialServer_MetaData), NewProp_bInitialServer_MetaData) };
void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_SetBit(void* Obj)
{
	((FChannelDefinition*)Obj)->bInitialClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient = { "bInitialClient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialClient_MetaData), NewProp_bInitialClient_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ChannelDefinition",
	Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers),
	sizeof(FChannelDefinition),
	alignof(FChannelDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChannelDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChannelDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChannelDefinition.InnerSingleton, Z_Construct_UScriptStruct_FChannelDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChannelDefinition.InnerSingleton;
}
// End ScriptStruct FChannelDefinition

// Begin Class UNetworkMetricsCSV_Replication
void UNetworkMetricsCSV_Replication::StaticRegisterNativesUNetworkMetricsCSV_Replication()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkMetricsCSV_Replication);
UClass* Z_Construct_UClass_UNetworkMetricsCSV_Replication_NoRegister()
{
	return UNetworkMetricsCSV_Replication::StaticClass();
}
struct Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A metrics listener that writes a metric to the 'Replication' CSV category. */" },
		{ "IncludePath", "Engine/NetDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "A metrics listener that writes a metric to the 'Replication' CSV category." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkMetricsCSV_Replication>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetworkMetricsCSV,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics::ClassParams = {
	&UNetworkMetricsCSV_Replication::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkMetricsCSV_Replication()
{
	if (!Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.OuterSingleton, Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkMetricsCSV_Replication>()
{
	return UNetworkMetricsCSV_Replication::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkMetricsCSV_Replication);
// End Class UNetworkMetricsCSV_Replication

// Begin Class UNetDriver
void UNetDriver::StaticRegisterNativesUNetDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetDriver);
UClass* Z_Construct_UClass_UNetDriver_NoRegister()
{
	return UNetDriver::StaticClass();
}
struct Z_Construct_UClass_UNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/NetDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetConnectionClassName_MetaData[] = {
		{ "Comment", "/** Used to specify the class to use for connections */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify the class to use for connections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationDriverClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationBridgeClassName_MetaData[] = {
		{ "Comment", "/** Used to specify the class to use for ReplicationBridge */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify the class to use for ReplicationBridge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationSystemConfig_MetaData[] = {
		{ "Comment", "/** Can be used to configure settings for the ReplicationSystem */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Can be used to configure settings for the ReplicationSystem" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDownloadSize_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampListenServerTickRate_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetServerMaxTickRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNetTickRate_MetaData[] = {
		{ "Comment", "/** Limit tick rate of replication to allow very high frame rates to still replicate data. A value less or equal to zero means use the engine tick rate. A value greater than zero will clamp the net tick rate to this value.  */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Limit tick rate of replication to allow very high frame rates to still replicate data. A value less or equal to zero means use the engine tick rate. A value greater than zero will clamp the net tick rate to this value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInternetClientRate_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClientRate_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerTravelPause_MetaData[] = {
		{ "Comment", "/** Amount of time a server will wait before traveling to next map, gives clients time to receive final RPCs on existing level @see NextSwitchCountdown */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Amount of time a server will wait before traveling to next map, gives clients time to receive final RPCs on existing level @see NextSwitchCountdown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPrioritySeconds_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelevantTimeout_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveTime_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialConnectTimeout_MetaData[] = {
		{ "Comment", "/** Amount of time to wait for a new net connection to be established before destroying the connection */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Amount of time to wait for a new net connection to be established before destroying the connection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionTimeout_MetaData[] = {
		{ "Comment", "/** \n\x09 * Amount of time to wait before considering an established connection timed out.  \n\x09 * Typically shorter than the time to wait on a new connection because this connection\n\x09 * should already have been setup and any interruption should be trapped quicker.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Amount of time to wait before considering an established connection timed out.\nTypically shorter than the time to wait on a new connection because this connection\nshould already have been setup and any interruption should be trapped quicker." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData[] = {
		{ "Comment", "/**\n\x09* A multiplier that is applied to the above values when we are running with unoptimized builds (debug)\n\x09* or data (uncooked). This allows us to retain normal timeout behavior while debugging without resorting\n\x09* to the nuclear 'notimeouts' option or bumping the values above. If ==0 multiplier = 1\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "A multiplier that is applied to the above values when we are running with unoptimized builds (debug)\nor data (uncooked). This allows us to retain normal timeout behavior while debugging without resorting\nto the nuclear 'notimeouts' option or bumping the values above. If ==0 multiplier = 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerConnection_MetaData[] = {
		{ "Comment", "/** Connection to the server (this net driver is a client) */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Connection to the server (this net driver is a client)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientConnections_MetaData[] = {
		{ "Comment", "/** Array of connections to clients (this net driver is a host) - unsorted, and ordering changes depending on actor replication */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Array of connections to clients (this net driver is a host) - unsorted, and ordering changes depending on actor replication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyDisconnectedTrackingTime_MetaData[] = {
		{ "Comment", "/** The amount of time, in seconds, that recently disconnected clients should be tracked */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The amount of time, in seconds, that recently disconnected clients should be tracked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "Comment", "/** World this net driver is associated with */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "World this net driver is associated with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPackage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetConnectionClass_MetaData[] = {
		{ "Comment", "/** The loaded UClass of the net connection type to use */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The loaded UClass of the net connection type to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationDriverClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationBridgeClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverName_MetaData[] = {
		{ "Comment", "/** Used to specify the net driver to filter actors with (NAME_None || NAME_GameNetDriver is the default net driver) */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify the net driver to filter actors with (NAME_None || NAME_GameNetDriver is the default net driver)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDefinitions_MetaData[] = {
		{ "Comment", "/** Used to specify available channel types and their associated UClass */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify available channel types and their associated UClass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDefinitionMap_MetaData[] = {
		{ "Comment", "/** Used for faster lookup of channel definitions by name. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used for faster lookup of channel definitions by name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorChannelPool_MetaData[] = {
		{ "Comment", "/** List of channels that were previously used and can be used again */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "List of channels that were previously used and can be used again" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkMetricsDatabase_MetaData[] = {
		{ "Comment", "/** A metrics database that holds statistics calcluated by the networking system. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "A metrics database that holds statistics calcluated by the networking system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkMetricsListeners_MetaData[] = {
		{ "Comment", "/** A cache of UNetworkMetricsBaseListener sub-class instances provided by the *.ini file (one instance per sub-class). */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "A cache of UNetworkMetricsBaseListener sub-class instances provided by the *.ini file (one instance per sub-class)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoTimeouts_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, ignore timeouts completely.  Should be used only in development\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "If true, ignore timeouts completely.  Should be used only in development" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeverApplyNetworkEmulationSettings_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true this NetDriver will not apply the network emulation settings that simulate\n\x09 * latency and packet loss in non-shippable builds\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "If true this NetDriver will not apply the network emulation settings that simulate\nlatency and packet loss in non-shippable builds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationDriver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NetConnectionClassName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplicationDriverClassName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplicationBridgeClassName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicationSystemConfig;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDownloadSize;
	static void NewProp_bClampListenServerTickRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampListenServerTickRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NetServerMaxTickRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNetTickRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInternetClientRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClientRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerTravelPause;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnPrioritySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RelevantTimeout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KeepAliveTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialConnectTimeout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectionTimeout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutMultiplierForUnoptimizedBuilds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerConnection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientConnections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientConnections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecentlyDisconnectedTrackingTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldPackage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NetConnectionClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReplicationDriverClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReplicationBridgeClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NetDriverName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelDefinitionMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelDefinitionMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ChannelDefinitionMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorChannelPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorChannelPool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetworkMetricsDatabase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetworkMetricsListeners_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NetworkMetricsListeners_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NetworkMetricsListeners;
	static void NewProp_bNoTimeouts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoTimeouts;
	static void NewProp_bNeverApplyNetworkEmulationSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverApplyNetworkEmulationSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicationDriver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName = { "NetConnectionClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, NetConnectionClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetConnectionClassName_MetaData), NewProp_NetConnectionClassName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName = { "ReplicationDriverClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ReplicationDriverClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationDriverClassName_MetaData), NewProp_ReplicationDriverClassName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClassName = { "ReplicationBridgeClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ReplicationBridgeClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationBridgeClassName_MetaData), NewProp_ReplicationBridgeClassName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationSystemConfig = { "ReplicationSystemConfig", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ReplicationSystemConfig), Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationSystemConfig_MetaData), NewProp_ReplicationSystemConfig_MetaData) }; // 2436888875
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize = { "MaxDownloadSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, MaxDownloadSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDownloadSize_MetaData), NewProp_MaxDownloadSize_MetaData) };
void Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_SetBit(void* Obj)
{
	((UNetDriver*)Obj)->bClampListenServerTickRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate = { "bClampListenServerTickRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNetDriver), &Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampListenServerTickRate_MetaData), NewProp_bClampListenServerTickRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate = { "NetServerMaxTickRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, NetServerMaxTickRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetServerMaxTickRate_MetaData), NewProp_NetServerMaxTickRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxNetTickRate = { "MaxNetTickRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, MaxNetTickRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNetTickRate_MetaData), NewProp_MaxNetTickRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate = { "MaxInternetClientRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, MaxInternetClientRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInternetClientRate_MetaData), NewProp_MaxInternetClientRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate = { "MaxClientRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, MaxClientRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClientRate_MetaData), NewProp_MaxClientRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause = { "ServerTravelPause", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ServerTravelPause), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerTravelPause_MetaData), NewProp_ServerTravelPause_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds = { "SpawnPrioritySeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, SpawnPrioritySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPrioritySeconds_MetaData), NewProp_SpawnPrioritySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout = { "RelevantTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, RelevantTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelevantTimeout_MetaData), NewProp_RelevantTimeout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime = { "KeepAliveTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, KeepAliveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepAliveTime_MetaData), NewProp_KeepAliveTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout = { "InitialConnectTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, InitialConnectTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialConnectTimeout_MetaData), NewProp_InitialConnectTimeout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout = { "ConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ConnectionTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionTimeout_MetaData), NewProp_ConnectionTimeout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds = { "TimeoutMultiplierForUnoptimizedBuilds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, TimeoutMultiplierForUnoptimizedBuilds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData), NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection = { "ServerConnection", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ServerConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerConnection_MetaData), NewProp_ServerConnection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_Inner = { "ClientConnections", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections = { "ClientConnections", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ClientConnections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientConnections_MetaData), NewProp_ClientConnections_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime = { "RecentlyDisconnectedTrackingTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, RecentlyDisconnectedTrackingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecentlyDisconnectedTrackingTime_MetaData), NewProp_RecentlyDisconnectedTrackingTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage = { "WorldPackage", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, WorldPackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPackage_MetaData), NewProp_WorldPackage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass = { "NetConnectionClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, NetConnectionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetConnectionClass_MetaData), NewProp_NetConnectionClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass = { "ReplicationDriverClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ReplicationDriverClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationDriverClass_MetaData), NewProp_ReplicationDriverClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClass = { "ReplicationBridgeClass", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ReplicationBridgeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationBridgeClass_MetaData), NewProp_ReplicationBridgeClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName = { "NetDriverName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, NetDriverName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriverName_MetaData), NewProp_NetDriverName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_Inner = { "ChannelDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChannelDefinition, METADATA_PARAMS(0, nullptr) }; // 1573490753
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions = { "ChannelDefinitions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ChannelDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelDefinitions_MetaData), NewProp_ChannelDefinitions_MetaData) }; // 1573490753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_ValueProp = { "ChannelDefinitionMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FChannelDefinition, METADATA_PARAMS(0, nullptr) }; // 1573490753
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_Key_KeyProp = { "ChannelDefinitionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap = { "ChannelDefinitionMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ChannelDefinitionMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelDefinitionMap_MetaData), NewProp_ChannelDefinitionMap_MetaData) }; // 1573490753
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_Inner = { "ActorChannelPool", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool = { "ActorChannelPool", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ActorChannelPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorChannelPool_MetaData), NewProp_ActorChannelPool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetworkMetricsDatabase = { "NetworkMetricsDatabase", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, NetworkMetricsDatabase), Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkMetricsDatabase_MetaData), NewProp_NetworkMetricsDatabase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetworkMetricsListeners_ValueProp = { "NetworkMetricsListeners", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetworkMetricsListeners_Key_KeyProp = { "NetworkMetricsListeners_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetworkMetricsListeners = { "NetworkMetricsListeners", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, NetworkMetricsListeners), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkMetricsListeners_MetaData), NewProp_NetworkMetricsListeners_MetaData) };
void Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_SetBit(void* Obj)
{
	((UNetDriver*)Obj)->bNoTimeouts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts = { "bNoTimeouts", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNetDriver), &Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoTimeouts_MetaData), NewProp_bNoTimeouts_MetaData) };
void Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings_SetBit(void* Obj)
{
	((UNetDriver*)Obj)->bNeverApplyNetworkEmulationSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings = { "bNeverApplyNetworkEmulationSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNetDriver), &Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeverApplyNetworkEmulationSettings_MetaData), NewProp_bNeverApplyNetworkEmulationSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver = { "ReplicationDriver", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetDriver, ReplicationDriver), Z_Construct_UClass_UReplicationDriver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationDriver_MetaData), NewProp_ReplicationDriver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationSystemConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxNetTickRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetworkMetricsDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetworkMetricsListeners_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetworkMetricsListeners_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetworkMetricsListeners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetDriver_Statics::ClassParams = {
	&UNetDriver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetDriver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::PropPointers),
	0,
	0x000800ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetDriver()
{
	if (!Z_Registration_Info_UClass_UNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetDriver.OuterSingleton, Z_Construct_UClass_UNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetDriver.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetDriver>()
{
	return UNetDriver::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNetDriver)
// End Class UNetDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPacketSimulationSettings::StaticStruct, Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewStructOps, TEXT("PacketSimulationSettings"), &Z_Registration_Info_UScriptStruct_PacketSimulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPacketSimulationSettings), 2698761201U) },
		{ FNetDriverReplicationSystemConfig::StaticStruct, Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewStructOps, TEXT("NetDriverReplicationSystemConfig"), &Z_Registration_Info_UScriptStruct_NetDriverReplicationSystemConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetDriverReplicationSystemConfig), 2436888875U) },
		{ FChannelDefinition::StaticStruct, Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewStructOps, TEXT("ChannelDefinition"), &Z_Registration_Info_UScriptStruct_ChannelDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChannelDefinition), 1573490753U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkMetricsCSV_Replication, UNetworkMetricsCSV_Replication::StaticClass, TEXT("UNetworkMetricsCSV_Replication"), &Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkMetricsCSV_Replication), 3176761548U) },
		{ Z_Construct_UClass_UNetDriver, UNetDriver::StaticClass, TEXT("UNetDriver"), &Z_Registration_Info_UClass_UNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetDriver), 752641456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_222186472(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
