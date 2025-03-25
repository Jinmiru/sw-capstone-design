// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/SpectatorBeaconClient.h"
#include "OnlineSubsystemUtils/Public/SpectatorBeaconState.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorBeaconClient() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconClient();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconClient_NoRegister();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType();
ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FSpectatorReservation();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Enum ESpectatorClientRequestType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpectatorClientRequestType;
static UEnum* ESpectatorClientRequestType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpectatorClientRequestType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpectatorClientRequestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("ESpectatorClientRequestType"));
	}
	return Z_Registration_Info_UEnum_ESpectatorClientRequestType.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<ESpectatorClientRequestType>()
{
	return ESpectatorClientRequestType_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Abandon.Comment", "/** Abandon the reservation beacon (game specific handling)*/" },
		{ "Abandon.Name", "ESpectatorClientRequestType::Abandon" },
		{ "Abandon.ToolTip", "Abandon the reservation beacon (game specific handling)" },
		{ "Comment", "/**\n* Types of reservation requests that can be made by this beacon\n*/" },
		{ "EmptyServerReservation.Comment", "/** Reservation to configure an empty server  */" },
		{ "EmptyServerReservation.Name", "ESpectatorClientRequestType::EmptyServerReservation" },
		{ "EmptyServerReservation.ToolTip", "Reservation to configure an empty server" },
		{ "ExistingSessionReservation.Comment", "/** Make a reservation with an existing session */" },
		{ "ExistingSessionReservation.Name", "ESpectatorClientRequestType::ExistingSessionReservation" },
		{ "ExistingSessionReservation.ToolTip", "Make a reservation with an existing session" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "NonePending.Comment", "/** None pending */" },
		{ "NonePending.Name", "ESpectatorClientRequestType::NonePending" },
		{ "NonePending.ToolTip", "None pending" },
		{ "Reconnect.Comment", "/** Simple reconnect (checks for existing reservation) */" },
		{ "Reconnect.Name", "ESpectatorClientRequestType::Reconnect" },
		{ "Reconnect.ToolTip", "Simple reconnect (checks for existing reservation)" },
		{ "ReservationUpdate.Comment", "/** Make an update to an existing reservation */" },
		{ "ReservationUpdate.Name", "ESpectatorClientRequestType::ReservationUpdate" },
		{ "ReservationUpdate.ToolTip", "Make an update to an existing reservation" },
		{ "ToolTip", "Types of reservation requests that can be made by this beacon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpectatorClientRequestType::NonePending", (int64)ESpectatorClientRequestType::NonePending },
		{ "ESpectatorClientRequestType::ExistingSessionReservation", (int64)ESpectatorClientRequestType::ExistingSessionReservation },
		{ "ESpectatorClientRequestType::ReservationUpdate", (int64)ESpectatorClientRequestType::ReservationUpdate },
		{ "ESpectatorClientRequestType::EmptyServerReservation", (int64)ESpectatorClientRequestType::EmptyServerReservation },
		{ "ESpectatorClientRequestType::Reconnect", (int64)ESpectatorClientRequestType::Reconnect },
		{ "ESpectatorClientRequestType::Abandon", (int64)ESpectatorClientRequestType::Abandon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	"ESpectatorClientRequestType",
	"ESpectatorClientRequestType",
	Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType()
{
	if (!Z_Registration_Info_UEnum_ESpectatorClientRequestType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpectatorClientRequestType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpectatorClientRequestType.InnerSingleton;
}
// End Enum ESpectatorClientRequestType

// Begin Class ASpectatorBeaconClient Function ClientCancelReservationResponse
struct SpectatorBeaconClient_eventClientCancelReservationResponse_Parms
{
	TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse;
};
static FName NAME_ASpectatorBeaconClient_ClientCancelReservationResponse = FName(TEXT("ClientCancelReservationResponse"));
void ASpectatorBeaconClient::ClientCancelReservationResponse(ESpectatorReservationResult::Type ReservationResponse)
{
	SpectatorBeaconClient_eventClientCancelReservationResponse_Parms Parms;
	Parms.ReservationResponse=ReservationResponse;
	ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ClientCancelReservationResponse),&Parms);
}
struct Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Response from the host session after making a cancellation request\n\x09*\n\x09* @param ReservationResponse response from server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a cancellation request\n\n@param ReservationResponse response from server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventClientCancelReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult, METADATA_PARAMS(0, nullptr) }; // 1689420232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ClientCancelReservationResponse", nullptr, nullptr, Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::PropPointers), sizeof(SpectatorBeaconClient_eventClientCancelReservationResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(SpectatorBeaconClient_eventClientCancelReservationResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpectatorBeaconClient::execClientCancelReservationResponse)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ReservationResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientCancelReservationResponse_Implementation(ESpectatorReservationResult::Type(Z_Param_ReservationResponse));
	P_NATIVE_END;
}
// End Class ASpectatorBeaconClient Function ClientCancelReservationResponse

// Begin Class ASpectatorBeaconClient Function ClientReservationResponse
struct SpectatorBeaconClient_eventClientReservationResponse_Parms
{
	TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse;
};
static FName NAME_ASpectatorBeaconClient_ClientReservationResponse = FName(TEXT("ClientReservationResponse"));
void ASpectatorBeaconClient::ClientReservationResponse(ESpectatorReservationResult::Type ReservationResponse)
{
	SpectatorBeaconClient_eventClientReservationResponse_Parms Parms;
	Parms.ReservationResponse=ReservationResponse;
	ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ClientReservationResponse),&Parms);
}
struct Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Response from the host session after making a reservation request\n\x09*\n\x09* @param ReservationResponse response from server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a reservation request\n\n@param ReservationResponse response from server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventClientReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult, METADATA_PARAMS(0, nullptr) }; // 1689420232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ClientReservationResponse", nullptr, nullptr, Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::PropPointers), sizeof(SpectatorBeaconClient_eventClientReservationResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(SpectatorBeaconClient_eventClientReservationResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpectatorBeaconClient::execClientReservationResponse)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ReservationResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientReservationResponse_Implementation(ESpectatorReservationResult::Type(Z_Param_ReservationResponse));
	P_NATIVE_END;
}
// End Class ASpectatorBeaconClient Function ClientReservationResponse

// Begin Class ASpectatorBeaconClient Function ClientSendReservationFull
static FName NAME_ASpectatorBeaconClient_ClientSendReservationFull = FName(TEXT("ClientSendReservationFull"));
void ASpectatorBeaconClient::ClientSendReservationFull()
{
	ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ClientSendReservationFull),NULL);
}
struct Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Response from the host session that the reservation is full */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation is full" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ClientSendReservationFull", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpectatorBeaconClient::execClientSendReservationFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSendReservationFull_Implementation();
	P_NATIVE_END;
}
// End Class ASpectatorBeaconClient Function ClientSendReservationFull

// Begin Class ASpectatorBeaconClient Function ClientSendReservationUpdates
struct SpectatorBeaconClient_eventClientSendReservationUpdates_Parms
{
	int32 NumRemainingReservations;
};
static FName NAME_ASpectatorBeaconClient_ClientSendReservationUpdates = FName(TEXT("ClientSendReservationUpdates"));
void ASpectatorBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
{
	SpectatorBeaconClient_eventClientSendReservationUpdates_Parms Parms;
	Parms.NumRemainingReservations=NumRemainingReservations;
	ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ClientSendReservationUpdates),&Parms);
}
struct Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Response from the host session that the reservation count has changed\n\x09*\n\x09* @param NumRemainingReservations number of slots remaining until a full session\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation count has changed\n\n@param NumRemainingReservations number of slots remaining until a full session" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRemainingReservations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations = { "NumRemainingReservations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventClientSendReservationUpdates_Parms, NumRemainingReservations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ClientSendReservationUpdates", nullptr, nullptr, Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::PropPointers), sizeof(SpectatorBeaconClient_eventClientSendReservationUpdates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams) };
static_assert(sizeof(SpectatorBeaconClient_eventClientSendReservationUpdates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpectatorBeaconClient::execClientSendReservationUpdates)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumRemainingReservations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSendReservationUpdates_Implementation(Z_Param_NumRemainingReservations);
	P_NATIVE_END;
}
// End Class ASpectatorBeaconClient Function ClientSendReservationUpdates

// Begin Class ASpectatorBeaconClient Function ServerCancelReservationRequest
struct SpectatorBeaconClient_eventServerCancelReservationRequest_Parms
{
	FUniqueNetIdRepl Spectator;
};
static FName NAME_ASpectatorBeaconClient_ServerCancelReservationRequest = FName(TEXT("ServerCancelReservationRequest"));
void ASpectatorBeaconClient::ServerCancelReservationRequest(FUniqueNetIdRepl const& Spectator)
{
	SpectatorBeaconClient_eventServerCancelReservationRequest_Parms Parms;
	Parms.Spectator=Spectator;
	ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ServerCancelReservationRequest),&Parms);
}
struct Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Tell the server to cancel a pending or existing reservation\n\x09*\n\x09* @param Spectator id of the spectator for the reservation to cancel\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Tell the server to cancel a pending or existing reservation\n\n@param Spectator id of the spectator for the reservation to cancel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spectator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spectator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::NewProp_Spectator = { "Spectator", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventServerCancelReservationRequest_Parms, Spectator), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spectator_MetaData), NewProp_Spectator_MetaData) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::NewProp_Spectator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ServerCancelReservationRequest", nullptr, nullptr, Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::PropPointers), sizeof(SpectatorBeaconClient_eventServerCancelReservationRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(SpectatorBeaconClient_eventServerCancelReservationRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpectatorBeaconClient::execServerCancelReservationRequest)
{
	P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_Spectator);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerCancelReservationRequest_Validate(Z_Param_Spectator))
	{
		RPC_ValidateFailed(TEXT("ServerCancelReservationRequest_Validate"));
		return;
	}
	P_THIS->ServerCancelReservationRequest_Implementation(Z_Param_Spectator);
	P_NATIVE_END;
}
// End Class ASpectatorBeaconClient Function ServerCancelReservationRequest

// Begin Class ASpectatorBeaconClient Function ServerReservationRequest
struct SpectatorBeaconClient_eventServerReservationRequest_Parms
{
	FString SessionId;
	FSpectatorReservation Reservation;
};
static FName NAME_ASpectatorBeaconClient_ServerReservationRequest = FName(TEXT("ServerReservationRequest"));
void ASpectatorBeaconClient::ServerReservationRequest(const FString& SessionId, FSpectatorReservation const& Reservation)
{
	SpectatorBeaconClient_eventServerReservationRequest_Parms Parms;
	Parms.SessionId=SessionId;
	Parms.Reservation=Reservation;
	ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ServerReservationRequest),&Parms);
}
struct Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Tell the server about the reservation request being made\n\x09*\n\x09* @param SessionId expected session id on the other end (must match)\n\x09* @param Reservation pending reservation request to make with server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventServerReservationRequest_Parms, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation = { "Reservation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventServerReservationRequest_Parms, Reservation), Z_Construct_UScriptStruct_FSpectatorReservation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reservation_MetaData), NewProp_Reservation_MetaData) }; // 2418711625
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ServerReservationRequest", nullptr, nullptr, Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::PropPointers), sizeof(SpectatorBeaconClient_eventServerReservationRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(SpectatorBeaconClient_eventServerReservationRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpectatorBeaconClient::execServerReservationRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_STRUCT(FSpectatorReservation,Z_Param_Reservation);
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
// End Class ASpectatorBeaconClient Function ServerReservationRequest

// Begin Class ASpectatorBeaconClient
void ASpectatorBeaconClient::StaticRegisterNativesASpectatorBeaconClient()
{
	UClass* Class = ASpectatorBeaconClient::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientCancelReservationResponse", &ASpectatorBeaconClient::execClientCancelReservationResponse },
		{ "ClientReservationResponse", &ASpectatorBeaconClient::execClientReservationResponse },
		{ "ClientSendReservationFull", &ASpectatorBeaconClient::execClientSendReservationFull },
		{ "ClientSendReservationUpdates", &ASpectatorBeaconClient::execClientSendReservationUpdates },
		{ "ServerCancelReservationRequest", &ASpectatorBeaconClient::execServerCancelReservationRequest },
		{ "ServerReservationRequest", &ASpectatorBeaconClient::execServerReservationRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpectatorBeaconClient);
UClass* Z_Construct_UClass_ASpectatorBeaconClient_NoRegister()
{
	return ASpectatorBeaconClient::StaticClass();
}
struct Z_Construct_UClass_ASpectatorBeaconClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A beacon client used for making reservations with an existing game session\n*/" },
		{ "IncludePath", "SpectatorBeaconClient.h" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "A beacon client used for making reservations with an existing game session" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestSessionId_MetaData[] = {
		{ "Comment", "/** Session Id of the destination host */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Session Id of the destination host" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingReservation_MetaData[] = {
		{ "Comment", "/** Pending reservation that will be sent upon connection with the intended host */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Pending reservation that will be sent upon connection with the intended host" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestType_MetaData[] = {
		{ "Comment", "/** Type of request currently being handled by this client beacon */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Type of request currently being handled by this client beacon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingReservationSent_MetaData[] = {
		{ "Comment", "/** Has the reservation request been delivered */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Has the reservation request been delivered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCancelReservation_MetaData[] = {
		{ "Comment", "/** Has the reservation request been canceled */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
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
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse, "ClientCancelReservationResponse" }, // 3024019239
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse, "ClientReservationResponse" }, // 38573210
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull, "ClientSendReservationFull" }, // 470687331
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates, "ClientSendReservationUpdates" }, // 2342226174
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest, "ServerCancelReservationRequest" }, // 3979009288
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest, "ServerReservationRequest" }, // 2769162187
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpectatorBeaconClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_DestSessionId = { "DestSessionId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpectatorBeaconClient, DestSessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestSessionId_MetaData), NewProp_DestSessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_PendingReservation = { "PendingReservation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpectatorBeaconClient, PendingReservation), Z_Construct_UScriptStruct_FSpectatorReservation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingReservation_MetaData), NewProp_PendingReservation_MetaData) }; // 2418711625
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType = { "RequestType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpectatorBeaconClient, RequestType), Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestType_MetaData), NewProp_RequestType_MetaData) }; // 483719771
void Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit(void* Obj)
{
	((ASpectatorBeaconClient*)Obj)->bPendingReservationSent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent = { "bPendingReservationSent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpectatorBeaconClient), &Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingReservationSent_MetaData), NewProp_bPendingReservationSent_MetaData) };
void Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation_SetBit(void* Obj)
{
	((ASpectatorBeaconClient*)Obj)->bCancelReservation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation = { "bCancelReservation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpectatorBeaconClient), &Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCancelReservation_MetaData), NewProp_bCancelReservation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpectatorBeaconClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_DestSessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_PendingReservation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpectatorBeaconClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::ClassParams = {
	&ASpectatorBeaconClient::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpectatorBeaconClient_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpectatorBeaconClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpectatorBeaconClient()
{
	if (!Z_Registration_Info_UClass_ASpectatorBeaconClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpectatorBeaconClient.OuterSingleton, Z_Construct_UClass_ASpectatorBeaconClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpectatorBeaconClient.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ASpectatorBeaconClient>()
{
	return ASpectatorBeaconClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpectatorBeaconClient);
ASpectatorBeaconClient::~ASpectatorBeaconClient() {}
// End Class ASpectatorBeaconClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpectatorClientRequestType_StaticEnum, TEXT("ESpectatorClientRequestType"), &Z_Registration_Info_UEnum_ESpectatorClientRequestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 483719771U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpectatorBeaconClient, ASpectatorBeaconClient::StaticClass, TEXT("ASpectatorBeaconClient"), &Z_Registration_Info_UClass_ASpectatorBeaconClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpectatorBeaconClient), 492289610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_608275236(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
