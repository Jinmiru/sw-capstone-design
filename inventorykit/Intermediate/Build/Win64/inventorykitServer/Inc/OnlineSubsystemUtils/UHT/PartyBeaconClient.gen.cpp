// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/PartyBeaconClient.h"
#include "OnlineSubsystemUtils/Public/PartyBeaconState.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyBeaconClient() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconClient();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconClient_NoRegister();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPartyReservation();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Enum EClientRequestType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClientRequestType;
static UEnum* EClientRequestType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EClientRequestType"));
	}
	return Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EClientRequestType>()
{
	return EClientRequestType_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Abandon.Comment", "/** Abandon the reservation beacon (game specific handling)*/" },
		{ "Abandon.Name", "EClientRequestType::Abandon" },
		{ "Abandon.ToolTip", "Abandon the reservation beacon (game specific handling)" },
		{ "AddOrUpdateReservation.Comment", "/** Add new reservation or Update existing one*/" },
		{ "AddOrUpdateReservation.Name", "EClientRequestType::AddOrUpdateReservation" },
		{ "AddOrUpdateReservation.ToolTip", "Add new reservation or Update existing one" },
		{ "Comment", "/**\n * Types of reservation requests that can be made by this beacon\n */" },
		{ "EmptyServerReservation.Comment", "/** Reservation to configure an empty server  */" },
		{ "EmptyServerReservation.Name", "EClientRequestType::EmptyServerReservation" },
		{ "EmptyServerReservation.ToolTip", "Reservation to configure an empty server" },
		{ "ExistingSessionReservation.Comment", "/** Make a reservation with an existing session */" },
		{ "ExistingSessionReservation.Name", "EClientRequestType::ExistingSessionReservation" },
		{ "ExistingSessionReservation.ToolTip", "Make a reservation with an existing session" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "NonePending.Comment", "/** None pending */" },
		{ "NonePending.Name", "EClientRequestType::NonePending" },
		{ "NonePending.ToolTip", "None pending" },
		{ "Reconnect.Comment", "/** Simple reconnect (checks for existing reservation) */" },
		{ "Reconnect.Name", "EClientRequestType::Reconnect" },
		{ "Reconnect.ToolTip", "Simple reconnect (checks for existing reservation)" },
		{ "ReservationRemoveMembers.Comment", "/** Remove members from an existing reservation */" },
		{ "ReservationRemoveMembers.Name", "EClientRequestType::ReservationRemoveMembers" },
		{ "ReservationRemoveMembers.ToolTip", "Remove members from an existing reservation" },
		{ "ReservationUpdate.Comment", "/** Make an update to an existing reservation */" },
		{ "ReservationUpdate.Name", "EClientRequestType::ReservationUpdate" },
		{ "ReservationUpdate.ToolTip", "Make an update to an existing reservation" },
		{ "ToolTip", "Types of reservation requests that can be made by this beacon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClientRequestType::NonePending", (int64)EClientRequestType::NonePending },
		{ "EClientRequestType::ExistingSessionReservation", (int64)EClientRequestType::ExistingSessionReservation },
		{ "EClientRequestType::ReservationUpdate", (int64)EClientRequestType::ReservationUpdate },
		{ "EClientRequestType::EmptyServerReservation", (int64)EClientRequestType::EmptyServerReservation },
		{ "EClientRequestType::Reconnect", (int64)EClientRequestType::Reconnect },
		{ "EClientRequestType::Abandon", (int64)EClientRequestType::Abandon },
		{ "EClientRequestType::ReservationRemoveMembers", (int64)EClientRequestType::ReservationRemoveMembers },
		{ "EClientRequestType::AddOrUpdateReservation", (int64)EClientRequestType::AddOrUpdateReservation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	"EClientRequestType",
	"EClientRequestType",
	Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType()
{
	if (!Z_Registration_Info_UEnum_EClientRequestType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClientRequestType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClientRequestType.InnerSingleton;
}
// End Enum EClientRequestType

// Begin Class APartyBeaconClient Function ClientCancelReservationResponse
struct PartyBeaconClient_eventClientCancelReservationResponse_Parms
{
	TEnumAsByte<EPartyReservationResult::Type> ReservationResponse;
};
static FName NAME_APartyBeaconClient_ClientCancelReservationResponse = FName(TEXT("ClientCancelReservationResponse"));
void APartyBeaconClient::ClientCancelReservationResponse(EPartyReservationResult::Type ReservationResponse)
{
	PartyBeaconClient_eventClientCancelReservationResponse_Parms Parms;
	Parms.ReservationResponse=ReservationResponse;
	ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientCancelReservationResponse),&Parms);
}
struct Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Response from the host session after making a cancellation request\n\x09 *\n\x09 * @param ReservationResponse response from server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a cancellation request\n\n@param ReservationResponse response from server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventClientCancelReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult, METADATA_PARAMS(0, nullptr) }; // 1208862938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientCancelReservationResponse", nullptr, nullptr, Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers), sizeof(PartyBeaconClient_eventClientCancelReservationResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(PartyBeaconClient_eventClientCancelReservationResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APartyBeaconClient::execClientCancelReservationResponse)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ReservationResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientCancelReservationResponse_Implementation(EPartyReservationResult::Type(Z_Param_ReservationResponse));
	P_NATIVE_END;
}
// End Class APartyBeaconClient Function ClientCancelReservationResponse

// Begin Class APartyBeaconClient Function ClientReservationResponse
struct PartyBeaconClient_eventClientReservationResponse_Parms
{
	TEnumAsByte<EPartyReservationResult::Type> ReservationResponse;
};
static FName NAME_APartyBeaconClient_ClientReservationResponse = FName(TEXT("ClientReservationResponse"));
void APartyBeaconClient::ClientReservationResponse(EPartyReservationResult::Type ReservationResponse)
{
	PartyBeaconClient_eventClientReservationResponse_Parms Parms;
	Parms.ReservationResponse=ReservationResponse;
	ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientReservationResponse),&Parms);
}
struct Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Response from the host session after making a reservation request\n\x09 *\n\x09 * @param ReservationResponse response from server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a reservation request\n\n@param ReservationResponse response from server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventClientReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult, METADATA_PARAMS(0, nullptr) }; // 1208862938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientReservationResponse", nullptr, nullptr, Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers), sizeof(PartyBeaconClient_eventClientReservationResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(PartyBeaconClient_eventClientReservationResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APartyBeaconClient::execClientReservationResponse)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ReservationResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientReservationResponse_Implementation(EPartyReservationResult::Type(Z_Param_ReservationResponse));
	P_NATIVE_END;
}
// End Class APartyBeaconClient Function ClientReservationResponse

// Begin Class APartyBeaconClient Function ClientSendReservationFull
static FName NAME_APartyBeaconClient_ClientSendReservationFull = FName(TEXT("ClientSendReservationFull"));
void APartyBeaconClient::ClientSendReservationFull()
{
	ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientSendReservationFull),NULL);
}
struct Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Response from the host session that the reservation is full */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation is full" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientSendReservationFull", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APartyBeaconClient::execClientSendReservationFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSendReservationFull_Implementation();
	P_NATIVE_END;
}
// End Class APartyBeaconClient Function ClientSendReservationFull

// Begin Class APartyBeaconClient Function ClientSendReservationUpdates
struct PartyBeaconClient_eventClientSendReservationUpdates_Parms
{
	int32 NumRemainingReservations;
};
static FName NAME_APartyBeaconClient_ClientSendReservationUpdates = FName(TEXT("ClientSendReservationUpdates"));
void APartyBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
{
	PartyBeaconClient_eventClientSendReservationUpdates_Parms Parms;
	Parms.NumRemainingReservations=NumRemainingReservations;
	ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientSendReservationUpdates),&Parms);
}
struct Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Response from the host session that the reservation count has changed\n\x09 *\n\x09 * @param NumRemainingReservations number of slots remaining until a full session\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation count has changed\n\n@param NumRemainingReservations number of slots remaining until a full session" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRemainingReservations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations = { "NumRemainingReservations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventClientSendReservationUpdates_Parms, NumRemainingReservations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientSendReservationUpdates", nullptr, nullptr, Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers), sizeof(PartyBeaconClient_eventClientSendReservationUpdates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams), Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams) };
static_assert(sizeof(PartyBeaconClient_eventClientSendReservationUpdates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APartyBeaconClient::execClientSendReservationUpdates)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumRemainingReservations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSendReservationUpdates_Implementation(Z_Param_NumRemainingReservations);
	P_NATIVE_END;
}
// End Class APartyBeaconClient Function ClientSendReservationUpdates

// Begin Class APartyBeaconClient Function ServerAddOrUpdateReservationRequest
struct PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms
{
	FString SessionId;
	FPartyReservation Reservation;
};
static FName NAME_APartyBeaconClient_ServerAddOrUpdateReservationRequest = FName(TEXT("ServerAddOrUpdateReservationRequest"));
void APartyBeaconClient::ServerAddOrUpdateReservationRequest(const FString& SessionId, FPartyReservation const& Reservation)
{
	PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms Parms;
	Parms.SessionId=SessionId;
	Parms.Reservation=Reservation;
	ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerAddOrUpdateReservationRequest),&Parms);
}
struct Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server about the reservation add or update request being made\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param ReservationUpdate pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server about the reservation add or update request being made\n\n@param SessionId expected session id on the other end (must match)\n@param ReservationUpdate pending reservation request to make with server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reservation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reservation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_Reservation = { "Reservation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms, Reservation), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reservation_MetaData), NewProp_Reservation_MetaData) }; // 3585595158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_Reservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerAddOrUpdateReservationRequest", nullptr, nullptr, Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::PropPointers), sizeof(PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APartyBeaconClient::execServerAddOrUpdateReservationRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_STRUCT(FPartyReservation,Z_Param_Reservation);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerAddOrUpdateReservationRequest_Validate(Z_Param_SessionId,Z_Param_Reservation))
	{
		RPC_ValidateFailed(TEXT("ServerAddOrUpdateReservationRequest_Validate"));
		return;
	}
	P_THIS->ServerAddOrUpdateReservationRequest_Implementation(Z_Param_SessionId,Z_Param_Reservation);
	P_NATIVE_END;
}
// End Class APartyBeaconClient Function ServerAddOrUpdateReservationRequest

// Begin Class APartyBeaconClient Function ServerCancelReservationRequest
struct PartyBeaconClient_eventServerCancelReservationRequest_Parms
{
	FUniqueNetIdRepl PartyLeader;
};
static FName NAME_APartyBeaconClient_ServerCancelReservationRequest = FName(TEXT("ServerCancelReservationRequest"));
void APartyBeaconClient::ServerCancelReservationRequest(FUniqueNetIdRepl const& PartyLeader)
{
	PartyBeaconClient_eventServerCancelReservationRequest_Parms Parms;
	Parms.PartyLeader=PartyLeader;
	ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerCancelReservationRequest),&Parms);
}
struct Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server to cancel a pending or existing reservation\n\x09 *\n\x09 * @param PartyLeader id of the party leader for the reservation to cancel\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server to cancel a pending or existing reservation\n\n@param PartyLeader id of the party leader for the reservation to cancel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyLeader_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartyLeader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader = { "PartyLeader", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerCancelReservationRequest_Parms, PartyLeader), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyLeader_MetaData), NewProp_PartyLeader_MetaData) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerCancelReservationRequest", nullptr, nullptr, Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers), sizeof(PartyBeaconClient_eventServerCancelReservationRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(PartyBeaconClient_eventServerCancelReservationRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APartyBeaconClient::execServerCancelReservationRequest)
{
	P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PartyLeader);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerCancelReservationRequest_Validate(Z_Param_PartyLeader))
	{
		RPC_ValidateFailed(TEXT("ServerCancelReservationRequest_Validate"));
		return;
	}
	P_THIS->ServerCancelReservationRequest_Implementation(Z_Param_PartyLeader);
	P_NATIVE_END;
}
// End Class APartyBeaconClient Function ServerCancelReservationRequest

// Begin Class APartyBeaconClient Function ServerRemoveMemberFromReservationRequest
struct PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms
{
	FString SessionId;
	FPartyReservation ReservationUpdate;
};
static FName NAME_APartyBeaconClient_ServerRemoveMemberFromReservationRequest = FName(TEXT("ServerRemoveMemberFromReservationRequest"));
void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(const FString& SessionId, FPartyReservation const& ReservationUpdate)
{
	PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms Parms;
	Parms.SessionId=SessionId;
	Parms.ReservationUpdate=ReservationUpdate;
	ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerRemoveMemberFromReservationRequest),&Parms);
}
struct Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server that we are removing members from our reservation\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param ReservationUpdate pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server that we are removing members from our reservation\n\n@param SessionId expected session id on the other end (must match)\n@param ReservationUpdate pending reservation request to make with server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservationUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReservationUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_ReservationUpdate = { "ReservationUpdate", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms, ReservationUpdate), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservationUpdate_MetaData), NewProp_ReservationUpdate_MetaData) }; // 3585595158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_ReservationUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerRemoveMemberFromReservationRequest", nullptr, nullptr, Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::PropPointers), sizeof(PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APartyBeaconClient::execServerRemoveMemberFromReservationRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_STRUCT(FPartyReservation,Z_Param_ReservationUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerRemoveMemberFromReservationRequest_Validate(Z_Param_SessionId,Z_Param_ReservationUpdate))
	{
		RPC_ValidateFailed(TEXT("ServerRemoveMemberFromReservationRequest_Validate"));
		return;
	}
	P_THIS->ServerRemoveMemberFromReservationRequest_Implementation(Z_Param_SessionId,Z_Param_ReservationUpdate);
	P_NATIVE_END;
}
// End Class APartyBeaconClient Function ServerRemoveMemberFromReservationRequest

// Begin Class APartyBeaconClient Function ServerReservationRequest
struct PartyBeaconClient_eventServerReservationRequest_Parms
{
	FString SessionId;
	FPartyReservation Reservation;
};
static FName NAME_APartyBeaconClient_ServerReservationRequest = FName(TEXT("ServerReservationRequest"));
void APartyBeaconClient::ServerReservationRequest(const FString& SessionId, FPartyReservation const& Reservation)
{
	PartyBeaconClient_eventServerReservationRequest_Parms Parms;
	Parms.SessionId=SessionId;
	Parms.Reservation=Reservation;
	ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerReservationRequest),&Parms);
}
struct Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server about the reservation request being made\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param Reservation pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server about the reservation request being made\n\n@param SessionId expected session id on the other end (must match)\n@param Reservation pending reservation request to make with server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reservation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reservation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerReservationRequest_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation = { "Reservation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerReservationRequest_Parms, Reservation), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reservation_MetaData), NewProp_Reservation_MetaData) }; // 3585595158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerReservationRequest", nullptr, nullptr, Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers), sizeof(PartyBeaconClient_eventServerReservationRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(PartyBeaconClient_eventServerReservationRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APartyBeaconClient::execServerReservationRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_STRUCT(FPartyReservation,Z_Param_Reservation);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerReservationRequest_Validate(Z_Param_SessionId,Z_Param_Reservation))
	{
		RPC_ValidateFailed(TEXT("ServerReservationRequest_Validate"));
		return;
	}
	P_THIS->ServerReservationRequest_Implementation(Z_Param_SessionId,Z_Param_Reservation);
	P_NATIVE_END;
}
// End Class APartyBeaconClient Function ServerReservationRequest

// Begin Class APartyBeaconClient Function ServerUpdateReservationRequest
struct PartyBeaconClient_eventServerUpdateReservationRequest_Parms
{
	FString SessionId;
	FPartyReservation ReservationUpdate;
};
static FName NAME_APartyBeaconClient_ServerUpdateReservationRequest = FName(TEXT("ServerUpdateReservationRequest"));
void APartyBeaconClient::ServerUpdateReservationRequest(const FString& SessionId, FPartyReservation const& ReservationUpdate)
{
	PartyBeaconClient_eventServerUpdateReservationRequest_Parms Parms;
	Parms.SessionId=SessionId;
	Parms.ReservationUpdate=ReservationUpdate;
	ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerUpdateReservationRequest),&Parms);
}
struct Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server about the reservation update request being made\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param ReservationUpdate pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server about the reservation update request being made\n\n@param SessionId expected session id on the other end (must match)\n@param ReservationUpdate pending reservation request to make with server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservationUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReservationUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerUpdateReservationRequest_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate = { "ReservationUpdate", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerUpdateReservationRequest_Parms, ReservationUpdate), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservationUpdate_MetaData), NewProp_ReservationUpdate_MetaData) }; // 3585595158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerUpdateReservationRequest", nullptr, nullptr, Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers), sizeof(PartyBeaconClient_eventServerUpdateReservationRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(PartyBeaconClient_eventServerUpdateReservationRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APartyBeaconClient::execServerUpdateReservationRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_STRUCT(FPartyReservation,Z_Param_ReservationUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerUpdateReservationRequest_Validate(Z_Param_SessionId,Z_Param_ReservationUpdate))
	{
		RPC_ValidateFailed(TEXT("ServerUpdateReservationRequest_Validate"));
		return;
	}
	P_THIS->ServerUpdateReservationRequest_Implementation(Z_Param_SessionId,Z_Param_ReservationUpdate);
	P_NATIVE_END;
}
// End Class APartyBeaconClient Function ServerUpdateReservationRequest

// Begin Class APartyBeaconClient
void APartyBeaconClient::StaticRegisterNativesAPartyBeaconClient()
{
	UClass* Class = APartyBeaconClient::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientCancelReservationResponse", &APartyBeaconClient::execClientCancelReservationResponse },
		{ "ClientReservationResponse", &APartyBeaconClient::execClientReservationResponse },
		{ "ClientSendReservationFull", &APartyBeaconClient::execClientSendReservationFull },
		{ "ClientSendReservationUpdates", &APartyBeaconClient::execClientSendReservationUpdates },
		{ "ServerAddOrUpdateReservationRequest", &APartyBeaconClient::execServerAddOrUpdateReservationRequest },
		{ "ServerCancelReservationRequest", &APartyBeaconClient::execServerCancelReservationRequest },
		{ "ServerRemoveMemberFromReservationRequest", &APartyBeaconClient::execServerRemoveMemberFromReservationRequest },
		{ "ServerReservationRequest", &APartyBeaconClient::execServerReservationRequest },
		{ "ServerUpdateReservationRequest", &APartyBeaconClient::execServerUpdateReservationRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APartyBeaconClient);
UClass* Z_Construct_UClass_APartyBeaconClient_NoRegister()
{
	return APartyBeaconClient::StaticClass();
}
struct Z_Construct_UClass_APartyBeaconClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon client used for making reservations with an existing game session\n */" },
		{ "IncludePath", "PartyBeaconClient.h" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "A beacon client used for making reservations with an existing game session" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestSessionId_MetaData[] = {
		{ "Comment", "/** Session Id of the destination host */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Session Id of the destination host" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingReservation_MetaData[] = {
		{ "Comment", "/** Pending reservation that will be sent upon connection with the intended host */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Pending reservation that will be sent upon connection with the intended host" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestType_MetaData[] = {
		{ "Comment", "/** Type of request currently being handled by this client beacon */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Type of request currently being handled by this client beacon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingReservationSent_MetaData[] = {
		{ "Comment", "/** Has the reservation request been delivered */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Has the reservation request been delivered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCancelReservation_MetaData[] = {
		{ "Comment", "/** Has the reservation request been canceled */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Has the reservation request been canceled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestSessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingReservation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequestType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestType;
	static void NewProp_bPendingReservationSent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingReservationSent;
	static void NewProp_bCancelReservation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelReservation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse, "ClientCancelReservationResponse" }, // 3920792047
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse, "ClientReservationResponse" }, // 2153732942
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull, "ClientSendReservationFull" }, // 2027347934
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates, "ClientSendReservationUpdates" }, // 1568899227
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest, "ServerAddOrUpdateReservationRequest" }, // 1864450182
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest, "ServerCancelReservationRequest" }, // 2668060347
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest, "ServerRemoveMemberFromReservationRequest" }, // 1118251409
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest, "ServerReservationRequest" }, // 2469018483
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest, "ServerUpdateReservationRequest" }, // 3562109585
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartyBeaconClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId = { "DestSessionId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartyBeaconClient, DestSessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestSessionId_MetaData), NewProp_DestSessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation = { "PendingReservation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartyBeaconClient, PendingReservation), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingReservation_MetaData), NewProp_PendingReservation_MetaData) }; // 3585595158
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType = { "RequestType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartyBeaconClient, RequestType), Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestType_MetaData), NewProp_RequestType_MetaData) }; // 4009297976
void Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit(void* Obj)
{
	((APartyBeaconClient*)Obj)->bPendingReservationSent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent = { "bPendingReservationSent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APartyBeaconClient), &Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingReservationSent_MetaData), NewProp_bPendingReservationSent_MetaData) };
void Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_SetBit(void* Obj)
{
	((APartyBeaconClient*)Obj)->bCancelReservation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation = { "bCancelReservation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APartyBeaconClient), &Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCancelReservation_MetaData), NewProp_bCancelReservation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APartyBeaconClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APartyBeaconClient_Statics::ClassParams = {
	&APartyBeaconClient::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::Class_MetaDataParams), Z_Construct_UClass_APartyBeaconClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APartyBeaconClient()
{
	if (!Z_Registration_Info_UClass_APartyBeaconClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APartyBeaconClient.OuterSingleton, Z_Construct_UClass_APartyBeaconClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APartyBeaconClient.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<APartyBeaconClient>()
{
	return APartyBeaconClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APartyBeaconClient);
APartyBeaconClient::~APartyBeaconClient() {}
// End Class APartyBeaconClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClientRequestType_StaticEnum, TEXT("EClientRequestType"), &Z_Registration_Info_UEnum_EClientRequestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4009297976U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APartyBeaconClient, APartyBeaconClient::StaticClass, TEXT("APartyBeaconClient"), &Z_Registration_Info_UClass_APartyBeaconClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APartyBeaconClient), 2654113154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_3174840481(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
