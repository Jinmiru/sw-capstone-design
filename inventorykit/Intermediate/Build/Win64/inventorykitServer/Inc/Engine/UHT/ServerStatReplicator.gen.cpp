// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerStatReplicator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_AServerStatReplicator();
ENGINE_API UClass* Z_Construct_UClass_AServerStatReplicator_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AServerStatReplicator
void AServerStatReplicator::StaticRegisterNativesAServerStatReplicator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AServerStatReplicator);
UClass* Z_Construct_UClass_AServerStatReplicator_NoRegister()
{
	return AServerStatReplicator::StaticClass();
}
struct Z_Construct_UClass_AServerStatReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class used to replicate server \"stat net\" data over. For server only values, the client data is\n * is overwritten when bUpdateStatNet == true. For data that both the client and server set, the server\n * data will only overwrite if bUpdateStatNet == true && bOverwriteClientStats == true. \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Engine/ServerStatReplicator.h" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Class used to replicate server \"stat net\" data over. For server only values, the client data is\nis overwritten when bUpdateStatNet == true. For data that both the client and server set, the server\ndata will only overwrite if bUpdateStatNet == true && bOverwriteClientStats == true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateStatNet_MetaData[] = {
		{ "Category", "ServerStats" },
		{ "Comment", "/** Whether to update stat net with data from the server or not */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "Whether to update stat net with data from the server or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverwriteClientStats_MetaData[] = {
		{ "Category", "ServerStats" },
		{ "Comment", "/** Whether to overwrite client data stat net with data from the server or not */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "Whether to overwrite client data stat net with data from the server or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRate_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutRate_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPacketOverhead_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRateClientMax_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRateClientMin_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRateClientAvg_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPacketsClientMax_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPacketsClientMin_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPacketsClientAvg_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutRateClientMax_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutRateClientMin_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutRateClientAvg_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutPacketsClientMax_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutPacketsClientMin_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutPacketsClientAvg_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetNumClients_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPackets_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutPackets_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBunches_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutBunches_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutLoss_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLoss_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceBytesSent_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceBytesRecv_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoicePacketsSent_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoicePacketsRecv_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentInVoice_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentOutVoice_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumActorChannels_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumConsideredActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizedActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRelevantActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRelevantDeletedActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedActorAttempts_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumNetActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumDormantActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInitiallyDormantActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumNetGUIDsAckd_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumNetGUIDsPending_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumNetGUIDsUnAckd_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjPathBytes_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetGUIDOutRate_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetGUIDInRate_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetSaturated_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUpdateStatNet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateStatNet;
	static void NewProp_bOverwriteClientStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteClientStats;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Channels;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InRate;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutRate;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxPacketOverhead;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InRateClientMax;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InRateClientMin;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InRateClientAvg;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InPacketsClientMax;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InPacketsClientMin;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InPacketsClientAvg;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutRateClientMax;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutRateClientMin;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutRateClientAvg;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutPacketsClientMax;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutPacketsClientMin;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutPacketsClientAvg;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NetNumClients;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InPackets;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutPackets;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InBunches;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutBunches;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutLoss;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InLoss;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VoiceBytesSent;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VoiceBytesRecv;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VoicePacketsSent;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VoicePacketsRecv;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PercentInVoice;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PercentOutVoice;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumActorChannels;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumConsideredActors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrioritizedActors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumRelevantActors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumRelevantDeletedActors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumReplicatedActorAttempts;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumReplicatedActors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumActors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumNetActors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumDormantActors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumInitiallyDormantActors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumNetGUIDsAckd;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumNetGUIDsPending;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumNetGUIDsUnAckd;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ObjPathBytes;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NetGUIDOutRate;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NetGUIDInRate;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NetSaturated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AServerStatReplicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_SetBit(void* Obj)
{
	((AServerStatReplicator*)Obj)->bUpdateStatNet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet = { "bUpdateStatNet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AServerStatReplicator), &Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateStatNet_MetaData), NewProp_bUpdateStatNet_MetaData) };
void Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_SetBit(void* Obj)
{
	((AServerStatReplicator*)Obj)->bOverwriteClientStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats = { "bOverwriteClientStats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AServerStatReplicator), &Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverwriteClientStats_MetaData), NewProp_bOverwriteClientStats_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, Channels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channels_MetaData), NewProp_Channels_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate = { "InRate", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRate_MetaData), NewProp_InRate_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate = { "OutRate", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutRate_MetaData), NewProp_OutRate_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead = { "MaxPacketOverhead", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, MaxPacketOverhead), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPacketOverhead_MetaData), NewProp_MaxPacketOverhead_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax = { "InRateClientMax", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InRateClientMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRateClientMax_MetaData), NewProp_InRateClientMax_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin = { "InRateClientMin", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InRateClientMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRateClientMin_MetaData), NewProp_InRateClientMin_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg = { "InRateClientAvg", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InRateClientAvg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRateClientAvg_MetaData), NewProp_InRateClientAvg_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax = { "InPacketsClientMax", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InPacketsClientMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPacketsClientMax_MetaData), NewProp_InPacketsClientMax_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin = { "InPacketsClientMin", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InPacketsClientMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPacketsClientMin_MetaData), NewProp_InPacketsClientMin_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg = { "InPacketsClientAvg", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InPacketsClientAvg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPacketsClientAvg_MetaData), NewProp_InPacketsClientAvg_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax = { "OutRateClientMax", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutRateClientMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutRateClientMax_MetaData), NewProp_OutRateClientMax_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin = { "OutRateClientMin", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutRateClientMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutRateClientMin_MetaData), NewProp_OutRateClientMin_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg = { "OutRateClientAvg", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutRateClientAvg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutRateClientAvg_MetaData), NewProp_OutRateClientAvg_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax = { "OutPacketsClientMax", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutPacketsClientMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutPacketsClientMax_MetaData), NewProp_OutPacketsClientMax_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin = { "OutPacketsClientMin", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutPacketsClientMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutPacketsClientMin_MetaData), NewProp_OutPacketsClientMin_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg = { "OutPacketsClientAvg", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutPacketsClientAvg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutPacketsClientAvg_MetaData), NewProp_OutPacketsClientAvg_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients = { "NetNumClients", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NetNumClients), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetNumClients_MetaData), NewProp_NetNumClients_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets = { "InPackets", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InPackets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPackets_MetaData), NewProp_InPackets_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets = { "OutPackets", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutPackets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutPackets_MetaData), NewProp_OutPackets_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches = { "InBunches", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InBunches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBunches_MetaData), NewProp_InBunches_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches = { "OutBunches", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutBunches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutBunches_MetaData), NewProp_OutBunches_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss = { "OutLoss", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, OutLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutLoss_MetaData), NewProp_OutLoss_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss = { "InLoss", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, InLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLoss_MetaData), NewProp_InLoss_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent = { "VoiceBytesSent", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, VoiceBytesSent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceBytesSent_MetaData), NewProp_VoiceBytesSent_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv = { "VoiceBytesRecv", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, VoiceBytesRecv), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceBytesRecv_MetaData), NewProp_VoiceBytesRecv_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent = { "VoicePacketsSent", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, VoicePacketsSent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoicePacketsSent_MetaData), NewProp_VoicePacketsSent_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv = { "VoicePacketsRecv", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, VoicePacketsRecv), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoicePacketsRecv_MetaData), NewProp_VoicePacketsRecv_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice = { "PercentInVoice", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, PercentInVoice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentInVoice_MetaData), NewProp_PercentInVoice_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice = { "PercentOutVoice", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, PercentOutVoice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentOutVoice_MetaData), NewProp_PercentOutVoice_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels = { "NumActorChannels", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumActorChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumActorChannels_MetaData), NewProp_NumActorChannels_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors = { "NumConsideredActors", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumConsideredActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumConsideredActors_MetaData), NewProp_NumConsideredActors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors = { "PrioritizedActors", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, PrioritizedActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrioritizedActors_MetaData), NewProp_PrioritizedActors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors = { "NumRelevantActors", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumRelevantActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRelevantActors_MetaData), NewProp_NumRelevantActors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors = { "NumRelevantDeletedActors", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumRelevantDeletedActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRelevantDeletedActors_MetaData), NewProp_NumRelevantDeletedActors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts = { "NumReplicatedActorAttempts", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumReplicatedActorAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumReplicatedActorAttempts_MetaData), NewProp_NumReplicatedActorAttempts_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors = { "NumReplicatedActors", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumReplicatedActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumReplicatedActors_MetaData), NewProp_NumReplicatedActors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors = { "NumActors", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumActors_MetaData), NewProp_NumActors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors = { "NumNetActors", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumNetActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumNetActors_MetaData), NewProp_NumNetActors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors = { "NumDormantActors", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumDormantActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumDormantActors_MetaData), NewProp_NumDormantActors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors = { "NumInitiallyDormantActors", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumInitiallyDormantActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInitiallyDormantActors_MetaData), NewProp_NumInitiallyDormantActors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd = { "NumNetGUIDsAckd", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumNetGUIDsAckd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumNetGUIDsAckd_MetaData), NewProp_NumNetGUIDsAckd_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending = { "NumNetGUIDsPending", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumNetGUIDsPending), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumNetGUIDsPending_MetaData), NewProp_NumNetGUIDsPending_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd = { "NumNetGUIDsUnAckd", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NumNetGUIDsUnAckd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumNetGUIDsUnAckd_MetaData), NewProp_NumNetGUIDsUnAckd_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes = { "ObjPathBytes", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, ObjPathBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjPathBytes_MetaData), NewProp_ObjPathBytes_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate = { "NetGUIDOutRate", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NetGUIDOutRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetGUIDOutRate_MetaData), NewProp_NetGUIDOutRate_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate = { "NetGUIDInRate", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NetGUIDInRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetGUIDInRate_MetaData), NewProp_NetGUIDInRate_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated = { "NetSaturated", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AServerStatReplicator, NetSaturated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetSaturated_MetaData), NewProp_NetSaturated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AServerStatReplicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AServerStatReplicator_Statics::ClassParams = {
	&AServerStatReplicator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::Class_MetaDataParams), Z_Construct_UClass_AServerStatReplicator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AServerStatReplicator()
{
	if (!Z_Registration_Info_UClass_AServerStatReplicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AServerStatReplicator.OuterSingleton, Z_Construct_UClass_AServerStatReplicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AServerStatReplicator.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AServerStatReplicator>()
{
	return AServerStatReplicator::StaticClass();
}
void AServerStatReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Channels(TEXT("Channels"));
	static const FName Name_InRate(TEXT("InRate"));
	static const FName Name_OutRate(TEXT("OutRate"));
	static const FName Name_MaxPacketOverhead(TEXT("MaxPacketOverhead"));
	static const FName Name_InRateClientMax(TEXT("InRateClientMax"));
	static const FName Name_InRateClientMin(TEXT("InRateClientMin"));
	static const FName Name_InRateClientAvg(TEXT("InRateClientAvg"));
	static const FName Name_InPacketsClientMax(TEXT("InPacketsClientMax"));
	static const FName Name_InPacketsClientMin(TEXT("InPacketsClientMin"));
	static const FName Name_InPacketsClientAvg(TEXT("InPacketsClientAvg"));
	static const FName Name_OutRateClientMax(TEXT("OutRateClientMax"));
	static const FName Name_OutRateClientMin(TEXT("OutRateClientMin"));
	static const FName Name_OutRateClientAvg(TEXT("OutRateClientAvg"));
	static const FName Name_OutPacketsClientMax(TEXT("OutPacketsClientMax"));
	static const FName Name_OutPacketsClientMin(TEXT("OutPacketsClientMin"));
	static const FName Name_OutPacketsClientAvg(TEXT("OutPacketsClientAvg"));
	static const FName Name_NetNumClients(TEXT("NetNumClients"));
	static const FName Name_InPackets(TEXT("InPackets"));
	static const FName Name_OutPackets(TEXT("OutPackets"));
	static const FName Name_InBunches(TEXT("InBunches"));
	static const FName Name_OutBunches(TEXT("OutBunches"));
	static const FName Name_OutLoss(TEXT("OutLoss"));
	static const FName Name_InLoss(TEXT("InLoss"));
	static const FName Name_VoiceBytesSent(TEXT("VoiceBytesSent"));
	static const FName Name_VoiceBytesRecv(TEXT("VoiceBytesRecv"));
	static const FName Name_VoicePacketsSent(TEXT("VoicePacketsSent"));
	static const FName Name_VoicePacketsRecv(TEXT("VoicePacketsRecv"));
	static const FName Name_PercentInVoice(TEXT("PercentInVoice"));
	static const FName Name_PercentOutVoice(TEXT("PercentOutVoice"));
	static const FName Name_NumActorChannels(TEXT("NumActorChannels"));
	static const FName Name_NumConsideredActors(TEXT("NumConsideredActors"));
	static const FName Name_PrioritizedActors(TEXT("PrioritizedActors"));
	static const FName Name_NumRelevantActors(TEXT("NumRelevantActors"));
	static const FName Name_NumRelevantDeletedActors(TEXT("NumRelevantDeletedActors"));
	static const FName Name_NumReplicatedActorAttempts(TEXT("NumReplicatedActorAttempts"));
	static const FName Name_NumReplicatedActors(TEXT("NumReplicatedActors"));
	static const FName Name_NumActors(TEXT("NumActors"));
	static const FName Name_NumNetActors(TEXT("NumNetActors"));
	static const FName Name_NumDormantActors(TEXT("NumDormantActors"));
	static const FName Name_NumInitiallyDormantActors(TEXT("NumInitiallyDormantActors"));
	static const FName Name_NumNetGUIDsAckd(TEXT("NumNetGUIDsAckd"));
	static const FName Name_NumNetGUIDsPending(TEXT("NumNetGUIDsPending"));
	static const FName Name_NumNetGUIDsUnAckd(TEXT("NumNetGUIDsUnAckd"));
	static const FName Name_ObjPathBytes(TEXT("ObjPathBytes"));
	static const FName Name_NetGUIDOutRate(TEXT("NetGUIDOutRate"));
	static const FName Name_NetGUIDInRate(TEXT("NetGUIDInRate"));
	static const FName Name_NetSaturated(TEXT("NetSaturated"));
	const bool bIsValid = true
		&& Name_Channels == ClassReps[(int32)ENetFields_Private::Channels].Property->GetFName()
		&& Name_InRate == ClassReps[(int32)ENetFields_Private::InRate].Property->GetFName()
		&& Name_OutRate == ClassReps[(int32)ENetFields_Private::OutRate].Property->GetFName()
		&& Name_MaxPacketOverhead == ClassReps[(int32)ENetFields_Private::MaxPacketOverhead].Property->GetFName()
		&& Name_InRateClientMax == ClassReps[(int32)ENetFields_Private::InRateClientMax].Property->GetFName()
		&& Name_InRateClientMin == ClassReps[(int32)ENetFields_Private::InRateClientMin].Property->GetFName()
		&& Name_InRateClientAvg == ClassReps[(int32)ENetFields_Private::InRateClientAvg].Property->GetFName()
		&& Name_InPacketsClientMax == ClassReps[(int32)ENetFields_Private::InPacketsClientMax].Property->GetFName()
		&& Name_InPacketsClientMin == ClassReps[(int32)ENetFields_Private::InPacketsClientMin].Property->GetFName()
		&& Name_InPacketsClientAvg == ClassReps[(int32)ENetFields_Private::InPacketsClientAvg].Property->GetFName()
		&& Name_OutRateClientMax == ClassReps[(int32)ENetFields_Private::OutRateClientMax].Property->GetFName()
		&& Name_OutRateClientMin == ClassReps[(int32)ENetFields_Private::OutRateClientMin].Property->GetFName()
		&& Name_OutRateClientAvg == ClassReps[(int32)ENetFields_Private::OutRateClientAvg].Property->GetFName()
		&& Name_OutPacketsClientMax == ClassReps[(int32)ENetFields_Private::OutPacketsClientMax].Property->GetFName()
		&& Name_OutPacketsClientMin == ClassReps[(int32)ENetFields_Private::OutPacketsClientMin].Property->GetFName()
		&& Name_OutPacketsClientAvg == ClassReps[(int32)ENetFields_Private::OutPacketsClientAvg].Property->GetFName()
		&& Name_NetNumClients == ClassReps[(int32)ENetFields_Private::NetNumClients].Property->GetFName()
		&& Name_InPackets == ClassReps[(int32)ENetFields_Private::InPackets].Property->GetFName()
		&& Name_OutPackets == ClassReps[(int32)ENetFields_Private::OutPackets].Property->GetFName()
		&& Name_InBunches == ClassReps[(int32)ENetFields_Private::InBunches].Property->GetFName()
		&& Name_OutBunches == ClassReps[(int32)ENetFields_Private::OutBunches].Property->GetFName()
		&& Name_OutLoss == ClassReps[(int32)ENetFields_Private::OutLoss].Property->GetFName()
		&& Name_InLoss == ClassReps[(int32)ENetFields_Private::InLoss].Property->GetFName()
		&& Name_VoiceBytesSent == ClassReps[(int32)ENetFields_Private::VoiceBytesSent].Property->GetFName()
		&& Name_VoiceBytesRecv == ClassReps[(int32)ENetFields_Private::VoiceBytesRecv].Property->GetFName()
		&& Name_VoicePacketsSent == ClassReps[(int32)ENetFields_Private::VoicePacketsSent].Property->GetFName()
		&& Name_VoicePacketsRecv == ClassReps[(int32)ENetFields_Private::VoicePacketsRecv].Property->GetFName()
		&& Name_PercentInVoice == ClassReps[(int32)ENetFields_Private::PercentInVoice].Property->GetFName()
		&& Name_PercentOutVoice == ClassReps[(int32)ENetFields_Private::PercentOutVoice].Property->GetFName()
		&& Name_NumActorChannels == ClassReps[(int32)ENetFields_Private::NumActorChannels].Property->GetFName()
		&& Name_NumConsideredActors == ClassReps[(int32)ENetFields_Private::NumConsideredActors].Property->GetFName()
		&& Name_PrioritizedActors == ClassReps[(int32)ENetFields_Private::PrioritizedActors].Property->GetFName()
		&& Name_NumRelevantActors == ClassReps[(int32)ENetFields_Private::NumRelevantActors].Property->GetFName()
		&& Name_NumRelevantDeletedActors == ClassReps[(int32)ENetFields_Private::NumRelevantDeletedActors].Property->GetFName()
		&& Name_NumReplicatedActorAttempts == ClassReps[(int32)ENetFields_Private::NumReplicatedActorAttempts].Property->GetFName()
		&& Name_NumReplicatedActors == ClassReps[(int32)ENetFields_Private::NumReplicatedActors].Property->GetFName()
		&& Name_NumActors == ClassReps[(int32)ENetFields_Private::NumActors].Property->GetFName()
		&& Name_NumNetActors == ClassReps[(int32)ENetFields_Private::NumNetActors].Property->GetFName()
		&& Name_NumDormantActors == ClassReps[(int32)ENetFields_Private::NumDormantActors].Property->GetFName()
		&& Name_NumInitiallyDormantActors == ClassReps[(int32)ENetFields_Private::NumInitiallyDormantActors].Property->GetFName()
		&& Name_NumNetGUIDsAckd == ClassReps[(int32)ENetFields_Private::NumNetGUIDsAckd].Property->GetFName()
		&& Name_NumNetGUIDsPending == ClassReps[(int32)ENetFields_Private::NumNetGUIDsPending].Property->GetFName()
		&& Name_NumNetGUIDsUnAckd == ClassReps[(int32)ENetFields_Private::NumNetGUIDsUnAckd].Property->GetFName()
		&& Name_ObjPathBytes == ClassReps[(int32)ENetFields_Private::ObjPathBytes].Property->GetFName()
		&& Name_NetGUIDOutRate == ClassReps[(int32)ENetFields_Private::NetGUIDOutRate].Property->GetFName()
		&& Name_NetGUIDInRate == ClassReps[(int32)ENetFields_Private::NetGUIDInRate].Property->GetFName()
		&& Name_NetSaturated == ClassReps[(int32)ENetFields_Private::NetSaturated].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AServerStatReplicator"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AServerStatReplicator);
AServerStatReplicator::~AServerStatReplicator() {}
// End Class AServerStatReplicator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AServerStatReplicator, AServerStatReplicator::StaticClass, TEXT("AServerStatReplicator"), &Z_Registration_Info_UClass_AServerStatReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AServerStatReplicator), 232755693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_4080088306(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
