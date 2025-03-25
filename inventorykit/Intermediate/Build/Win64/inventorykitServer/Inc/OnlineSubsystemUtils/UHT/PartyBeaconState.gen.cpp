// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/PartyBeaconState.h"
#include "OnlineSubsystemUtils/Public/OnlineBeaconReservation.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyBeaconState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UPartyBeaconState();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UPartyBeaconState_NoRegister();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPartyReservation();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerReservation();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Enum EPartyReservationResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyReservationResult;
static UEnum* EPartyReservationResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPartyReservationResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPartyReservationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EPartyReservationResult"));
	}
	return Z_Registration_Info_UEnum_EPartyReservationResult.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EPartyReservationResult::Type>()
{
	return EPartyReservationResult_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BadSessionId.Comment", "// The reservation was rejected because this was the wrong session\n" },
		{ "BadSessionId.Name", "EPartyReservationResult::BadSessionId" },
		{ "BadSessionId.ToolTip", "The reservation was rejected because this was the wrong session" },
		{ "Comment", "/** The result code that will be returned during party reservation */" },
		{ "GeneralError.Comment", "/** An unknown error happened. */" },
		{ "GeneralError.Name", "EPartyReservationResult::GeneralError" },
		{ "GeneralError.ToolTip", "An unknown error happened." },
		{ "IncorrectPlayerCount.Comment", "/** Wrong number of players to join the session. */" },
		{ "IncorrectPlayerCount.Name", "EPartyReservationResult::IncorrectPlayerCount" },
		{ "IncorrectPlayerCount.ToolTip", "Wrong number of players to join the session." },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "NoResult.Comment", "/** Empty state. */" },
		{ "NoResult.Name", "EPartyReservationResult::NoResult" },
		{ "NoResult.ToolTip", "Empty state." },
		{ "PartyLimitReached.Comment", "/** All available reservations are booked. */" },
		{ "PartyLimitReached.Name", "EPartyReservationResult::PartyLimitReached" },
		{ "PartyLimitReached.ToolTip", "All available reservations are booked." },
		{ "RequestPending.Comment", "/** Pending request due to async operation, server will contact client shortly. */" },
		{ "RequestPending.Name", "EPartyReservationResult::RequestPending" },
		{ "RequestPending.ToolTip", "Pending request due to async operation, server will contact client shortly." },
		{ "RequestTimedOut.Comment", "/** No response from the host. */" },
		{ "RequestTimedOut.Name", "EPartyReservationResult::RequestTimedOut" },
		{ "RequestTimedOut.ToolTip", "No response from the host." },
		{ "ReservationAccepted.Comment", "/** Space was available and it's time to join. */" },
		{ "ReservationAccepted.Name", "EPartyReservationResult::ReservationAccepted" },
		{ "ReservationAccepted.ToolTip", "Space was available and it's time to join." },
		{ "ReservationDenied.Comment", "/** The beacon is paused and not accepting new connections. */" },
		{ "ReservationDenied.Name", "EPartyReservationResult::ReservationDenied" },
		{ "ReservationDenied.ToolTip", "The beacon is paused and not accepting new connections." },
		{ "ReservationDenied_Banned.Comment", "/** This player is banned. */" },
		{ "ReservationDenied_Banned.Name", "EPartyReservationResult::ReservationDenied_Banned" },
		{ "ReservationDenied_Banned.ToolTip", "This player is banned." },
		{ "ReservationDenied_ContainsExistingPlayers.Comment", "/** The reservation contains players already in this game */" },
		{ "ReservationDenied_ContainsExistingPlayers.Name", "EPartyReservationResult::ReservationDenied_ContainsExistingPlayers" },
		{ "ReservationDenied_ContainsExistingPlayers.ToolTip", "The reservation contains players already in this game" },
		{ "ReservationDenied_CrossPlayRestriction.Comment", "/** Some kind of cross play restriction prevents this party from joining */" },
		{ "ReservationDenied_CrossPlayRestriction.Name", "EPartyReservationResult::ReservationDenied_CrossPlayRestriction" },
		{ "ReservationDenied_CrossPlayRestriction.ToolTip", "Some kind of cross play restriction prevents this party from joining" },
		{ "ReservationDuplicate.Comment", "/** Already have a reservation entry for the requesting party leader. */" },
		{ "ReservationDuplicate.Name", "EPartyReservationResult::ReservationDuplicate" },
		{ "ReservationDuplicate.ToolTip", "Already have a reservation entry for the requesting party leader." },
		{ "ReservationInvalid.Comment", "// The reservation was rejected because it was badly formed\n" },
		{ "ReservationInvalid.Name", "EPartyReservationResult::ReservationInvalid" },
		{ "ReservationInvalid.ToolTip", "The reservation was rejected because it was badly formed" },
		{ "ReservationNotFound.Comment", "/** Couldn't find the party leader specified for a reservation update request. */" },
		{ "ReservationNotFound.Name", "EPartyReservationResult::ReservationNotFound" },
		{ "ReservationNotFound.ToolTip", "Couldn't find the party leader specified for a reservation update request." },
		{ "ReservationRequestCanceled.Comment", "/** The reservation request was canceled before being sent. */" },
		{ "ReservationRequestCanceled.Name", "EPartyReservationResult::ReservationRequestCanceled" },
		{ "ReservationRequestCanceled.ToolTip", "The reservation request was canceled before being sent." },
		{ "ToolTip", "The result code that will be returned during party reservation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPartyReservationResult::NoResult", (int64)EPartyReservationResult::NoResult },
		{ "EPartyReservationResult::RequestPending", (int64)EPartyReservationResult::RequestPending },
		{ "EPartyReservationResult::GeneralError", (int64)EPartyReservationResult::GeneralError },
		{ "EPartyReservationResult::PartyLimitReached", (int64)EPartyReservationResult::PartyLimitReached },
		{ "EPartyReservationResult::IncorrectPlayerCount", (int64)EPartyReservationResult::IncorrectPlayerCount },
		{ "EPartyReservationResult::RequestTimedOut", (int64)EPartyReservationResult::RequestTimedOut },
		{ "EPartyReservationResult::ReservationDuplicate", (int64)EPartyReservationResult::ReservationDuplicate },
		{ "EPartyReservationResult::ReservationNotFound", (int64)EPartyReservationResult::ReservationNotFound },
		{ "EPartyReservationResult::ReservationAccepted", (int64)EPartyReservationResult::ReservationAccepted },
		{ "EPartyReservationResult::ReservationDenied", (int64)EPartyReservationResult::ReservationDenied },
		{ "EPartyReservationResult::ReservationDenied_CrossPlayRestriction", (int64)EPartyReservationResult::ReservationDenied_CrossPlayRestriction },
		{ "EPartyReservationResult::ReservationDenied_Banned", (int64)EPartyReservationResult::ReservationDenied_Banned },
		{ "EPartyReservationResult::ReservationRequestCanceled", (int64)EPartyReservationResult::ReservationRequestCanceled },
		{ "EPartyReservationResult::ReservationInvalid", (int64)EPartyReservationResult::ReservationInvalid },
		{ "EPartyReservationResult::BadSessionId", (int64)EPartyReservationResult::BadSessionId },
		{ "EPartyReservationResult::ReservationDenied_ContainsExistingPlayers", (int64)EPartyReservationResult::ReservationDenied_ContainsExistingPlayers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	"EPartyReservationResult",
	"EPartyReservationResult::Type",
	Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult()
{
	if (!Z_Registration_Info_UEnum_EPartyReservationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyReservationResult.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPartyReservationResult.InnerSingleton;
}
// End Enum EPartyReservationResult

// Begin ScriptStruct FPartyReservation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyReservation;
class UScriptStruct* FPartyReservation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyReservation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyReservation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyReservation, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("PartyReservation"));
	}
	return Z_Registration_Info_UScriptStruct_PartyReservation.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FPartyReservation>()
{
	return FPartyReservation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPartyReservation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A whole party reservation */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "A whole party reservation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamNum_MetaData[] = {
		{ "Comment", "/** Team assigned to this party */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Team assigned to this party" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyLeader_MetaData[] = {
		{ "Comment", "/** Player initiating the request */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Player initiating the request" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyMembers_MetaData[] = {
		{ "Comment", "/** All party members (including party leader) in the reservation */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "All party members (including party leader) in the reservation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovedPartyMembers_MetaData[] = {
		{ "Comment", "/** Keeping a record of all logged out players from this reservation. */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Keeping a record of all logged out players from this reservation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamNum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartyLeader;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartyMembers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartyMembers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedPartyMembers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedPartyMembers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyReservation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_TeamNum = { "TeamNum", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyReservation, TeamNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamNum_MetaData), NewProp_TeamNum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyLeader = { "PartyLeader", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyReservation, PartyLeader), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyLeader_MetaData), NewProp_PartyLeader_MetaData) }; // 3410776867
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers_Inner = { "PartyMembers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerReservation, METADATA_PARAMS(0, nullptr) }; // 2681621699
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers = { "PartyMembers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyReservation, PartyMembers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyMembers_MetaData), NewProp_PartyMembers_MetaData) }; // 2681621699
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers_Inner = { "RemovedPartyMembers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerReservation, METADATA_PARAMS(0, nullptr) }; // 2681621699
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers = { "RemovedPartyMembers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyReservation, RemovedPartyMembers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovedPartyMembers_MetaData), NewProp_RemovedPartyMembers_MetaData) }; // 2681621699
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyReservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_TeamNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyLeader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyReservation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyReservation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	&NewStructOps,
	"PartyReservation",
	Z_Construct_UScriptStruct_FPartyReservation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyReservation_Statics::PropPointers),
	sizeof(FPartyReservation),
	alignof(FPartyReservation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyReservation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartyReservation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartyReservation()
{
	if (!Z_Registration_Info_UScriptStruct_PartyReservation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyReservation.InnerSingleton, Z_Construct_UScriptStruct_FPartyReservation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PartyReservation.InnerSingleton;
}
// End ScriptStruct FPartyReservation

// Begin ScriptStruct FPartyBeaconCrossplayPlatformMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyBeaconCrossplayPlatformMapping;
class UScriptStruct* FPartyBeaconCrossplayPlatformMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyBeaconCrossplayPlatformMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyBeaconCrossplayPlatformMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("PartyBeaconCrossplayPlatformMapping"));
	}
	return Z_Registration_Info_UScriptStruct_PartyBeaconCrossplayPlatformMapping.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FPartyBeaconCrossplayPlatformMapping>()
{
	return FPartyBeaconCrossplayPlatformMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Platform mapping for crossplay checks */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Platform mapping for crossplay checks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[] = {
		{ "Comment", "/** Platform name (eg WIN) */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Platform name (eg WIN)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformType_MetaData[] = {
		{ "Comment", "/** Platform type the name is mapped to (eg PlatformName=Win, PlatformType=OTHER) */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Platform type the name is mapped to (eg PlatformName=Win, PlatformType=OTHER)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyBeaconCrossplayPlatformMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyBeaconCrossplayPlatformMapping, PlatformName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformName_MetaData), NewProp_PlatformName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyBeaconCrossplayPlatformMapping, PlatformType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformType_MetaData), NewProp_PlatformType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::NewProp_PlatformName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::NewProp_PlatformType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	&NewStructOps,
	"PartyBeaconCrossplayPlatformMapping",
	Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::PropPointers),
	sizeof(FPartyBeaconCrossplayPlatformMapping),
	alignof(FPartyBeaconCrossplayPlatformMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping()
{
	if (!Z_Registration_Info_UScriptStruct_PartyBeaconCrossplayPlatformMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyBeaconCrossplayPlatformMapping.InnerSingleton, Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PartyBeaconCrossplayPlatformMapping.InnerSingleton;
}
// End ScriptStruct FPartyBeaconCrossplayPlatformMapping

// Begin Class UPartyBeaconState
void UPartyBeaconState::StaticRegisterNativesUPartyBeaconState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyBeaconState);
UClass* Z_Construct_UClass_UPartyBeaconState_NoRegister()
{
	return UPartyBeaconState::StaticClass();
}
struct Z_Construct_UClass_UPartyBeaconState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon host used for taking reservations for an existing game session\n */" },
		{ "IncludePath", "PartyBeaconState.h" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "Comment", "/** Session tied to the beacon */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Session tied to the beacon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumConsumedReservations_MetaData[] = {
		{ "Comment", "/** Number of currently consumed reservations */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Number of currently consumed reservations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReservations_MetaData[] = {
		{ "Comment", "/** Maximum allowed reservations */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Maximum allowed reservations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTeams_MetaData[] = {
		{ "Comment", "/** Number of teams in the game */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Number of teams in the game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPlayersPerTeam_MetaData[] = {
		{ "Comment", "/** Number of players on each team for balancing */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Number of players on each team for balancing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamAssignmentMethod_MetaData[] = {
		{ "Comment", "/** Team assignment method */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Team assignment method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservedHostTeamNum_MetaData[] = {
		{ "Comment", "/** Team that the host has been assigned to */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Team that the host has been assigned to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceTeamNum_MetaData[] = {
		{ "Comment", "/** Team that everyone is forced to in single team games */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Team that everyone is forced to in single team games" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictCrossConsole_MetaData[] = {
		{ "Comment", "/** Are multiple consoles types allowed to play together */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Are multiple consoles types allowed to play together" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformCrossplayRestrictions_MetaData[] = {
		{ "Comment", "/** Platform crossplay restrictions.  Expected in the format \"Plat1=Plat2,Plat3\" to indicate Plat1 is considered crossplay with Plat2 and Plat3 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Platform crossplay restrictions.  Expected in the format \"Plat1=Plat2,Plat3\" to indicate Plat1 is considered crossplay with Plat2 and Plat3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformTypeMapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRemovalRequests_MetaData[] = {
		{ "Comment", "/** Process requests from clients to remove players from beacon */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Process requests from clients to remove players from beacon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespectCompetitiveIntegrity_MetaData[] = {
		{ "Comment", "/** Competitive integrity represents how \"fair\" we need to keep the game. So no friends on other teams, no cross team chat, etc. */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Competitive integrity represents how \"fair\" we need to keep the game. So no friends on other teams, no cross team chat, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reservations_MetaData[] = {
		{ "Comment", "/** Current reservations in the system */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Current reservations in the system" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumConsumedReservations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReservations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTeams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlayersPerTeam;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TeamAssignmentMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReservedHostTeamNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForceTeamNum;
	static void NewProp_bRestrictCrossConsole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictCrossConsole;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformCrossplayRestrictions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformCrossplayRestrictions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformTypeMapping_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformTypeMapping;
	static void NewProp_bEnableRemovalRequests_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRemovalRequests;
	static void NewProp_bRespectCompetitiveIntegrity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectCompetitiveIntegrity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reservations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Reservations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyBeaconState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumConsumedReservations = { "NumConsumedReservations", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, NumConsumedReservations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumConsumedReservations_MetaData), NewProp_NumConsumedReservations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_MaxReservations = { "MaxReservations", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, MaxReservations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReservations_MetaData), NewProp_MaxReservations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumTeams = { "NumTeams", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, NumTeams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTeams_MetaData), NewProp_NumTeams_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumPlayersPerTeam = { "NumPlayersPerTeam", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, NumPlayersPerTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPlayersPerTeam_MetaData), NewProp_NumPlayersPerTeam_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_TeamAssignmentMethod = { "TeamAssignmentMethod", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, TeamAssignmentMethod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamAssignmentMethod_MetaData), NewProp_TeamAssignmentMethod_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ReservedHostTeamNum = { "ReservedHostTeamNum", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, ReservedHostTeamNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservedHostTeamNum_MetaData), NewProp_ReservedHostTeamNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ForceTeamNum = { "ForceTeamNum", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, ForceTeamNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceTeamNum_MetaData), NewProp_ForceTeamNum_MetaData) };
void Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit(void* Obj)
{
	((UPartyBeaconState*)Obj)->bRestrictCrossConsole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole = { "bRestrictCrossConsole", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPartyBeaconState), &Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictCrossConsole_MetaData), NewProp_bRestrictCrossConsole_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_PlatformCrossplayRestrictions_Inner = { "PlatformCrossplayRestrictions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_PlatformCrossplayRestrictions = { "PlatformCrossplayRestrictions", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, PlatformCrossplayRestrictions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformCrossplayRestrictions_MetaData), NewProp_PlatformCrossplayRestrictions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_PlatformTypeMapping_Inner = { "PlatformTypeMapping", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping, METADATA_PARAMS(0, nullptr) }; // 3561370327
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_PlatformTypeMapping = { "PlatformTypeMapping", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, PlatformTypeMapping), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformTypeMapping_MetaData), NewProp_PlatformTypeMapping_MetaData) }; // 3561370327
void Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests_SetBit(void* Obj)
{
	((UPartyBeaconState*)Obj)->bEnableRemovalRequests = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests = { "bEnableRemovalRequests", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPartyBeaconState), &Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRemovalRequests_MetaData), NewProp_bEnableRemovalRequests_MetaData) };
void Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRespectCompetitiveIntegrity_SetBit(void* Obj)
{
	((UPartyBeaconState*)Obj)->bRespectCompetitiveIntegrity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRespectCompetitiveIntegrity = { "bRespectCompetitiveIntegrity", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPartyBeaconState), &Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRespectCompetitiveIntegrity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespectCompetitiveIntegrity_MetaData), NewProp_bRespectCompetitiveIntegrity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations_Inner = { "Reservations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(0, nullptr) }; // 3585595158
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations = { "Reservations", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyBeaconState, Reservations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reservations_MetaData), NewProp_Reservations_MetaData) }; // 3585595158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartyBeaconState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumConsumedReservations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_MaxReservations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumTeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumPlayersPerTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_TeamAssignmentMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ReservedHostTeamNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ForceTeamNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_PlatformCrossplayRestrictions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_PlatformCrossplayRestrictions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_PlatformTypeMapping_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_PlatformTypeMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRespectCompetitiveIntegrity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPartyBeaconState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyBeaconState_Statics::ClassParams = {
	&UPartyBeaconState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPartyBeaconState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::PropPointers),
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::Class_MetaDataParams), Z_Construct_UClass_UPartyBeaconState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPartyBeaconState()
{
	if (!Z_Registration_Info_UClass_UPartyBeaconState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyBeaconState.OuterSingleton, Z_Construct_UClass_UPartyBeaconState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPartyBeaconState.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UPartyBeaconState>()
{
	return UPartyBeaconState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyBeaconState);
UPartyBeaconState::~UPartyBeaconState() {}
// End Class UPartyBeaconState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPartyReservationResult_StaticEnum, TEXT("EPartyReservationResult"), &Z_Registration_Info_UEnum_EPartyReservationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1208862938U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPartyReservation::StaticStruct, Z_Construct_UScriptStruct_FPartyReservation_Statics::NewStructOps, TEXT("PartyReservation"), &Z_Registration_Info_UScriptStruct_PartyReservation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyReservation), 3585595158U) },
		{ FPartyBeaconCrossplayPlatformMapping::StaticStruct, Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::NewStructOps, TEXT("PartyBeaconCrossplayPlatformMapping"), &Z_Registration_Info_UScriptStruct_PartyBeaconCrossplayPlatformMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyBeaconCrossplayPlatformMapping), 3561370327U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPartyBeaconState, UPartyBeaconState::StaticClass, TEXT("UPartyBeaconState"), &Z_Registration_Info_UClass_UPartyBeaconState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyBeaconState), 2160063817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_1252766114(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
