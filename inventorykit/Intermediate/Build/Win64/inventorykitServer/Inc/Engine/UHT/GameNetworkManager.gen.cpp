// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameNetworkManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager();
ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStandbyType();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EStandbyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStandbyType;
static UEnum* EStandbyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStandbyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStandbyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStandbyType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStandbyType"));
	}
	return Z_Registration_Info_UEnum_EStandbyType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EStandbyType>()
{
	return EStandbyType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EStandbyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Describes which standby detection event occured so the game can take appropriate action. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "STDBY_BadPing.Name", "STDBY_BadPing" },
		{ "STDBY_MAX.Name", "STDBY_MAX" },
		{ "STDBY_Rx.Name", "STDBY_Rx" },
		{ "STDBY_Tx.Name", "STDBY_Tx" },
		{ "ToolTip", "Describes which standby detection event occured so the game can take appropriate action." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "STDBY_Rx", (int64)STDBY_Rx },
		{ "STDBY_Tx", (int64)STDBY_Tx },
		{ "STDBY_BadPing", (int64)STDBY_BadPing },
		{ "STDBY_MAX", (int64)STDBY_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStandbyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EStandbyType",
	"EStandbyType",
	Z_Construct_UEnum_Engine_EStandbyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStandbyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStandbyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EStandbyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EStandbyType()
{
	if (!Z_Registration_Info_UEnum_EStandbyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStandbyType.InnerSingleton, Z_Construct_UEnum_Engine_EStandbyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStandbyType.InnerSingleton;
}
// End Enum EStandbyType

// Begin Class AGameNetworkManager
void AGameNetworkManager::StaticRegisterNativesAGameNetworkManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameNetworkManager);
UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister()
{
	return AGameNetworkManager::StaticClass();
}
struct Z_Construct_UClass_AGameNetworkManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles game-specific networking management (cheat detection, bandwidth management, etc.).\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/GameNetworkManager.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Handles game-specific networking management (cheat detection, bandwidth management, etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BadPacketLossThreshold_MetaData[] = {
		{ "Comment", "/* If packet loss goes over this value, we have bad packet loss. Value is between 0 and 1.*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "If packet loss goes over this value, we have bad packet loss. Value is between 0 and 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeverePacketLossThreshold_MetaData[] = {
		{ "Comment", "/* If the packet loss goes over this threshold, we have severe packet loss. Value is between 0 and 1*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "If the packet loss goes over this threshold, we have severe packet loss. Value is between 0 and 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BadPingThreshold_MetaData[] = {
		{ "Comment", "/** If average ping is higher than this threshold in ms, determine the server is either delaying packets or has bad upstream. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "If average ping is higher than this threshold in ms, determine the server is either delaying packets or has bad upstream." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeverePingThreshold_MetaData[] = {
		{ "Comment", "/** Similar to BadPingThreshold, but used to track exceptionally bad pings. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Similar to BadPingThreshold, but used to track exceptionally bad pings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustedNetSpeed_MetaData[] = {
		{ "Comment", "/** Current adjusted bandwidth per player, based on total and dynamic bandwidth */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Current adjusted bandwidth per player, based on total and dynamic bandwidth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastNetSpeedUpdateTime_MetaData[] = {
		{ "Comment", "/** Last time AdjustedNetSpeed was updated for server (by client entering or leaving) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Last time AdjustedNetSpeed was updated for server (by client entering or leaving)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalNetBandwidth_MetaData[] = {
		{ "Comment", "/** Total available bandwidth (in bytes/sec) for listen server, split dynamically across net connections */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Total available bandwidth (in bytes/sec) for listen server, split dynamically across net connections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDynamicBandwidth_MetaData[] = {
		{ "Comment", "/** Minimum bandwidth set per connection after splitting TotalNetBandwidth */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Minimum bandwidth set per connection after splitting TotalNetBandwidth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDynamicBandwidth_MetaData[] = {
		{ "Comment", "/** Maximum bandwidth set per connection after splitting TotalNetBandwidth */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Maximum bandwidth set per connection after splitting TotalNetBandwidth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStandbyCheckingEnabled_MetaData[] = {
		{ "Comment", "/** Used to determine if checking for standby cheats should occur */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Used to determine if checking for standby cheats should occur" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStandbyCheatTriggered_MetaData[] = {
		{ "Comment", "/** Used to determine whether we've already caught a cheat or not */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Used to determine whether we've already caught a cheat or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandbyRxCheatTime_MetaData[] = {
		{ "Comment", "/** The amount of time without packets before triggering the cheat code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandbyTxCheatTime_MetaData[] = {
		{ "Comment", "/** The amount of time without packets before triggering the cheat code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForRxStandby_MetaData[] = {
		{ "Comment", "/** The percentage of clients missing RX data before triggering the standby code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The percentage of clients missing RX data before triggering the standby code" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForTxStandby_MetaData[] = {
		{ "Comment", "/** The percentage of clients missing TX data before triggering the standby code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The percentage of clients missing TX data before triggering the standby code" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentForBadPing_MetaData[] = {
		{ "Comment", "/** The percentage of clients with bad ping before triggering the standby code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The percentage of clients with bad ping before triggering the standby code" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressStandbyWaitTime_MetaData[] = {
		{ "Comment", "/** The amount of time to wait before checking a connection for standby issues */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The amount of time to wait before checking a connection for standby issues" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRepSize_MetaData[] = {
		{ "Comment", "/** Average size of replicated move packet (ServerMove() packet size) from player */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Average size of replicated move packet (ServerMove() packet size) from player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAXPOSITIONERRORSQUARED_MetaData[] = {
		{ "Comment", "/** MAXPOSITIONERRORSQUARED is the square of the max position error that is accepted (not corrected) in net play */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MAXPOSITIONERRORSQUARED is the square of the max position error that is accepted (not corrected) in net play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData[] = {
		{ "Comment", "/** MAXNEARZEROVELOCITYSQUARED is the square of the max velocity that is considered zero (not corrected) in net play */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MAXNEARZEROVELOCITYSQUARED is the square of the max velocity that is considered zero (not corrected) in net play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CLIENTADJUSTUPDATECOST_MetaData[] = {
		{ "Comment", "/** CLIENTADJUSTUPDATECOST is the bandwidth cost in bytes of sending a client adjustment update. 180 is greater than the actual cost, but represents a tweaked value reserving enough bandwidth for\n\x09other updates sent to the client.  Increase this value to reduce client adjustment update frequency, or if the amount of data sent in the clientadjustment() call increases */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "CLIENTADJUSTUPDATECOST is the bandwidth cost in bytes of sending a client adjustment update. 180 is greater than the actual cost, but represents a tweaked value reserving enough bandwidth for\n      other updates sent to the client.  Increase this value to reduce client adjustment update frequency, or if the amount of data sent in the clientadjustment() call increases" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAXCLIENTUPDATEINTERVAL_MetaData[] = {
		{ "Comment", "/** MAXCLIENTUPDATEINTERVAL is the maximum time between movement updates from the client before the server forces an update. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MAXCLIENTUPDATEINTERVAL is the maximum time between movement updates from the client before the server forces an update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClientForcedUpdateDuration_MetaData[] = {
		{ "Comment", "/** MaxClientForcedUpdateDuration is the maximum time duration over which the server will force updates, after MAXCLIENTUPDATEINTERVAL is initially exceeded. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MaxClientForcedUpdateDuration is the maximum time duration over which the server will force updates, after MAXCLIENTUPDATEINTERVAL is initially exceeded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerForcedUpdateHitchThreshold_MetaData[] = {
		{ "Comment", "/** Ignore forced client movement updates when server hitches for longer than this duration. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Ignore forced client movement updates when server hitches for longer than this duration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerForcedUpdateHitchCooldown_MetaData[] = {
		{ "Comment", "/** Ignore forced client movement updates when server hitch was detected within this amount of time in the past. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Ignore forced client movement updates when server hitch was detected within this amount of time in the past." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveDeltaTime_MetaData[] = {
		{ "Comment", "/** MaxMoveDeltaTime is the default maximum time delta of CharacterMovement ServerMoves. Should be less than or equal to MAXCLIENTUPDATEINTERVAL, otherwise server will interfere by forcing position updates. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MaxMoveDeltaTime is the default maximum time delta of CharacterMovement ServerMoves. Should be less than or equal to MAXCLIENTUPDATEINTERVAL, otherwise server will interfere by forcing position updates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClientSmoothingDeltaTime_MetaData[] = {
		{ "Comment", "/** MaxClientSmoothingDeltaTime is the maximum delta time between server updates that clients are allowed to smooth between for position interpolation. This was previously (2 * MaxMoveDeltaTime). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MaxClientSmoothingDeltaTime is the maximum delta time between server updates that clients are allowed to smooth between for position interpolation. This was previously (2 * MaxMoveDeltaTime)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveDeltaTime_MetaData[] = {
		{ "Comment", "/**\n\x09 * ClientNetSendMoveDeltaTime is the default minimum time delta of CharacterMovement client moves to the server. When updates occur more frequently, they may be combined to save bandwidth.\n\x09 * This value is not used when player count is over ClientNetSendMoveThrottleOverPlayerCount or player net speed is <= ClientNetSendMoveThrottleAtNetSpeed (see ClientNetSendMoveDeltaTimeThrottled).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "ClientNetSendMoveDeltaTime is the default minimum time delta of CharacterMovement client moves to the server. When updates occur more frequently, they may be combined to save bandwidth.\nThis value is not used when player count is over ClientNetSendMoveThrottleOverPlayerCount or player net speed is <= ClientNetSendMoveThrottleAtNetSpeed (see ClientNetSendMoveDeltaTimeThrottled)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData[] = {
		{ "Comment", "/** ClientNetSendMoveDeltaTimeThrottled is used in place of ClientNetSendMoveDeltaTime when player count is high or net speed is low. See ClientNetSendMoveDeltaTime for more info. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "ClientNetSendMoveDeltaTimeThrottled is used in place of ClientNetSendMoveDeltaTime when player count is high or net speed is low. See ClientNetSendMoveDeltaTime for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveDeltaTimeStationary_MetaData[] = {
		{ "Comment", "/** ClientNetSendMoveDeltaTimeStationary is used when players are determined to not be moving or changing their view. See ClientNetSendMoveDeltaTime for more info. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "ClientNetSendMoveDeltaTimeStationary is used when players are determined to not be moving or changing their view. See ClientNetSendMoveDeltaTime for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData[] = {
		{ "Comment", "/** When player net speed (CurrentNetSpeed, based on ConfiguredInternetSpeed or ConfiguredLanSpeed) is less than or equal to this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "When player net speed (CurrentNetSpeed, based on ConfiguredInternetSpeed or ConfiguredLanSpeed) is less than or equal to this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData[] = {
		{ "Comment", "/** When player count is greater than this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "When player count is greater than this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientErrorUpdateRateLimit_MetaData[] = {
		{ "Comment", "/** Minimum delay between the server sending error corrections to a client, in seconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Minimum delay between the server sending error corrections to a client, in seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientNetCamUpdateDeltaTime_MetaData[] = {
		{ "Comment", "/** Minimum delay between calls to ServerUpdateCamera, in seconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Minimum delay between calls to ServerUpdateCamera, in seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientNetCamUpdatePositionLimit_MetaData[] = {
		{ "Comment", "/** Camera position change limit, when exceeded allows an immediate ServerUpdateCamera call. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Camera position change limit, when exceeded allows an immediate ServerUpdateCamera call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientAuthorativePosition_MetaData[] = {
		{ "Comment", "/** If client update is within MAXPOSITIONERRORSQUARED of what the server expects then the client is authoritative on it's final position */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "If client update is within MAXPOSITIONERRORSQUARED of what the server expects then the client is authoritative on it's final position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovementTimeDiscrepancyDetection_MetaData[] = {
		{ "Comment", "/** Whether movement time discrepancy (speed hack) detection is enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Whether movement time discrepancy (speed hack) detection is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovementTimeDiscrepancyResolution_MetaData[] = {
		{ "Comment", "/** Whether movement time discrepancy resolution is enabled (when detected, make client movement \"pay back\" excessive time discrepancies) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Whether movement time discrepancy resolution is enabled (when detected, make client movement \"pay back\" excessive time discrepancies)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData[] = {
		{ "Comment", "/** Maximum time client can be ahead before triggering movement time discrepancy detection/resolution (if enabled). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Maximum time client can be ahead before triggering movement time discrepancy detection/resolution (if enabled)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData[] = {
		{ "Comment", "/** Maximum time client can be behind. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Maximum time client can be behind." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyResolutionRate_MetaData[] = {
		{ "Comment", "/** \n\x09 * During time discrepancy resolution, we \"pay back\" the time discrepancy at this rate for future moves until total error is zero.\n\x09 * 1.0 = 100% resolution rate, meaning the next X ServerMoves from the client are fully paying back the time, \n\x09 * 0.5 = 50% resolution rate, meaning future ServerMoves will spend 50% of tick continuing to move the character and 50% paying back.\n\x09 * Lowering from 100% could be used to produce less severe/noticeable corrections, although typically we would want to correct\n\x09 * the client as quickly as possible.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "During time discrepancy resolution, we \"pay back\" the time discrepancy at this rate for future moves until total error is zero.\n1.0 = 100% resolution rate, meaning the next X ServerMoves from the client are fully paying back the time,\n0.5 = 50% resolution rate, meaning future ServerMoves will spend 50% of tick continuing to move the character and 50% paying back.\nLowering from 100% could be used to produce less severe/noticeable corrections, although typically we would want to correct\nthe client as quickly as possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData[] = {
		{ "Comment", "/** \n\x09 * Accepted drift in clocks between client and server as a percent per second allowed. \n\x09 *\n\x09 * 0.0 is \"no forgiveness\" and all logic would run on raw values, no tampering on the server side.\n\x09 * 0.02 would be a 2% per second difference \"forgiven\" - if the time discrepancy in a given second was less than 2%,\n\x09 * the error handling/detection code effectively ignores it.\n\x09 * \n\x09 * Increasing this value above 0% lessens the chance of false positives on time discrepancy (burst packet loss, performance\n\x09 * hitches), but also means anyone tampering with their client time below that percent will not be detected and no resolution\n\x09 * action will be taken, and anyone above that threshold will still gain the advantage of this % of time boost (if running at \n\x09 * 10% speed-up and this value is 0.05 or 5% allowance, they would only be resolved down to a 5% speed boost).\n\x09 *\n\x09 * Time discrepancy detection code DOES keep track of LifetimeRawTimeDiscrepancy, which is unaffected by this drift allowance,\n\x09 * so cheating below DriftAllowance percent could be tracked and acted on outside of an individual game. For example, if DriftAllowance\n\x09 * was 0.05 (meaning we're not going to actively prevent any cheating below 5% boosts to ensure less false positives for normal players),\n\x09 * we could still post-process analytics of the game showing that Player X regularly runs at 4% speed boost and take action.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Accepted drift in clocks between client and server as a percent per second allowed.\n\n0.0 is \"no forgiveness\" and all logic would run on raw values, no tampering on the server side.\n0.02 would be a 2% per second difference \"forgiven\" - if the time discrepancy in a given second was less than 2%,\nthe error handling/detection code effectively ignores it.\n\nIncreasing this value above 0% lessens the chance of false positives on time discrepancy (burst packet loss, performance\nhitches), but also means anyone tampering with their client time below that percent will not be detected and no resolution\naction will be taken, and anyone above that threshold will still gain the advantage of this % of time boost (if running at\n10% speed-up and this value is 0.05 or 5% allowance, they would only be resolved down to a 5% speed boost).\n\nTime discrepancy detection code DOES keep track of LifetimeRawTimeDiscrepancy, which is unaffected by this drift allowance,\nso cheating below DriftAllowance percent could be tracked and acted on outside of an individual game. For example, if DriftAllowance\nwas 0.05 (meaning we're not going to actively prevent any cheating below 5% boosts to ensure less false positives for normal players),\nwe could still post-process analytics of the game showing that Player X regularly runs at 4% speed boost and take action." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData[] = {
		{ "Comment", "/** \n\x09 * Whether client moves should be force corrected during time discrepancy resolution, useful for projects that have lenient \n\x09 * move error tolerance/ClientAuthorativePosition enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Whether client moves should be force corrected during time discrepancy resolution, useful for projects that have lenient\nmove error tolerance/ClientAuthorativePosition enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceBasedRelevancy_MetaData[] = {
		{ "Comment", "/** If true, actor network relevancy is constrained by whether they are within their NetCullDistanceSquared from the client's view point. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "If true, actor network relevancy is constrained by whether they are within their NetCullDistanceSquared from the client's view point." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BadPacketLossThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeverePacketLossThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BadPingThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SeverePingThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AdjustedNetSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastNetSpeedUpdateTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNetBandwidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDynamicBandwidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDynamicBandwidth;
	static void NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStandbyCheckingEnabled;
	static void NewProp_bHasStandbyCheatTriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStandbyCheatTriggered;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandbyRxCheatTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandbyTxCheatTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForRxStandby;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForTxStandby;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentForBadPing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressStandbyWaitTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveRepSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MAXPOSITIONERRORSQUARED;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MAXNEARZEROVELOCITYSQUARED;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CLIENTADJUSTUPDATECOST;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MAXCLIENTUPDATEINTERVAL;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClientForcedUpdateDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerForcedUpdateHitchThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerForcedUpdateHitchCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClientSmoothingDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientNetSendMoveDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientNetSendMoveDeltaTimeThrottled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientNetSendMoveDeltaTimeStationary;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClientNetSendMoveThrottleAtNetSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClientNetSendMoveThrottleOverPlayerCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientErrorUpdateRateLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientNetCamUpdateDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientNetCamUpdatePositionLimit;
	static void NewProp_ClientAuthorativePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClientAuthorativePosition;
	static void NewProp_bMovementTimeDiscrepancyDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovementTimeDiscrepancyDetection;
	static void NewProp_bMovementTimeDiscrepancyResolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovementTimeDiscrepancyResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyMaxTimeMargin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyMinTimeMargin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyResolutionRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyDriftAllowance;
	static void NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution;
	static void NewProp_bUseDistanceBasedRelevancy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceBasedRelevancy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameNetworkManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPacketLossThreshold = { "BadPacketLossThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, BadPacketLossThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BadPacketLossThreshold_MetaData), NewProp_BadPacketLossThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePacketLossThreshold = { "SeverePacketLossThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, SeverePacketLossThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeverePacketLossThreshold_MetaData), NewProp_SeverePacketLossThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPingThreshold = { "BadPingThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, BadPingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BadPingThreshold_MetaData), NewProp_BadPingThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePingThreshold = { "SeverePingThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, SeverePingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeverePingThreshold_MetaData), NewProp_SeverePingThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_AdjustedNetSpeed = { "AdjustedNetSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, AdjustedNetSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustedNetSpeed_MetaData), NewProp_AdjustedNetSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_LastNetSpeedUpdateTime = { "LastNetSpeedUpdateTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, LastNetSpeedUpdateTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastNetSpeedUpdateTime_MetaData), NewProp_LastNetSpeedUpdateTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_TotalNetBandwidth = { "TotalNetBandwidth", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, TotalNetBandwidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalNetBandwidth_MetaData), NewProp_TotalNetBandwidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MinDynamicBandwidth = { "MinDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MinDynamicBandwidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDynamicBandwidth_MetaData), NewProp_MinDynamicBandwidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxDynamicBandwidth = { "MaxDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MaxDynamicBandwidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDynamicBandwidth_MetaData), NewProp_MaxDynamicBandwidth_MetaData) };
void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj)
{
	((AGameNetworkManager*)Obj)->bIsStandbyCheckingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled = { "bIsStandbyCheckingEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStandbyCheckingEnabled_MetaData), NewProp_bIsStandbyCheckingEnabled_MetaData) };
void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered_SetBit(void* Obj)
{
	((AGameNetworkManager*)Obj)->bHasStandbyCheatTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered = { "bHasStandbyCheatTriggered", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStandbyCheatTriggered_MetaData), NewProp_bHasStandbyCheatTriggered_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyRxCheatTime = { "StandbyRxCheatTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, StandbyRxCheatTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandbyRxCheatTime_MetaData), NewProp_StandbyRxCheatTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyTxCheatTime = { "StandbyTxCheatTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, StandbyTxCheatTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandbyTxCheatTime_MetaData), NewProp_StandbyTxCheatTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForRxStandby = { "PercentMissingForRxStandby", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, PercentMissingForRxStandby), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentMissingForRxStandby_MetaData), NewProp_PercentMissingForRxStandby_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForTxStandby = { "PercentMissingForTxStandby", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, PercentMissingForTxStandby), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentMissingForTxStandby_MetaData), NewProp_PercentMissingForTxStandby_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentForBadPing = { "PercentForBadPing", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, PercentForBadPing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentForBadPing_MetaData), NewProp_PercentForBadPing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_JoinInProgressStandbyWaitTime = { "JoinInProgressStandbyWaitTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, JoinInProgressStandbyWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinInProgressStandbyWaitTime_MetaData), NewProp_JoinInProgressStandbyWaitTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MoveRepSize = { "MoveRepSize", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MoveRepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRepSize_MetaData), NewProp_MoveRepSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXPOSITIONERRORSQUARED = { "MAXPOSITIONERRORSQUARED", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MAXPOSITIONERRORSQUARED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAXPOSITIONERRORSQUARED_MetaData), NewProp_MAXPOSITIONERRORSQUARED_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXNEARZEROVELOCITYSQUARED = { "MAXNEARZEROVELOCITYSQUARED", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MAXNEARZEROVELOCITYSQUARED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData), NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_CLIENTADJUSTUPDATECOST = { "CLIENTADJUSTUPDATECOST", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, CLIENTADJUSTUPDATECOST), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CLIENTADJUSTUPDATECOST_MetaData), NewProp_CLIENTADJUSTUPDATECOST_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXCLIENTUPDATEINTERVAL = { "MAXCLIENTUPDATEINTERVAL", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MAXCLIENTUPDATEINTERVAL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAXCLIENTUPDATEINTERVAL_MetaData), NewProp_MAXCLIENTUPDATEINTERVAL_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientForcedUpdateDuration = { "MaxClientForcedUpdateDuration", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MaxClientForcedUpdateDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClientForcedUpdateDuration_MetaData), NewProp_MaxClientForcedUpdateDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchThreshold = { "ServerForcedUpdateHitchThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ServerForcedUpdateHitchThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerForcedUpdateHitchThreshold_MetaData), NewProp_ServerForcedUpdateHitchThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchCooldown = { "ServerForcedUpdateHitchCooldown", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ServerForcedUpdateHitchCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerForcedUpdateHitchCooldown_MetaData), NewProp_ServerForcedUpdateHitchCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxMoveDeltaTime = { "MaxMoveDeltaTime", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MaxMoveDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMoveDeltaTime_MetaData), NewProp_MaxMoveDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientSmoothingDeltaTime = { "MaxClientSmoothingDeltaTime", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MaxClientSmoothingDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClientSmoothingDeltaTime_MetaData), NewProp_MaxClientSmoothingDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTime = { "ClientNetSendMoveDeltaTime", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientNetSendMoveDeltaTime_MetaData), NewProp_ClientNetSendMoveDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeThrottled = { "ClientNetSendMoveDeltaTimeThrottled", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveDeltaTimeThrottled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData), NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeStationary = { "ClientNetSendMoveDeltaTimeStationary", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveDeltaTimeStationary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientNetSendMoveDeltaTimeStationary_MetaData), NewProp_ClientNetSendMoveDeltaTimeStationary_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleAtNetSpeed = { "ClientNetSendMoveThrottleAtNetSpeed", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveThrottleAtNetSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData), NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleOverPlayerCount = { "ClientNetSendMoveThrottleOverPlayerCount", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveThrottleOverPlayerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData), NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientErrorUpdateRateLimit = { "ClientErrorUpdateRateLimit", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ClientErrorUpdateRateLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientErrorUpdateRateLimit_MetaData), NewProp_ClientErrorUpdateRateLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdateDeltaTime = { "ClientNetCamUpdateDeltaTime", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetCamUpdateDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientNetCamUpdateDeltaTime_MetaData), NewProp_ClientNetCamUpdateDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdatePositionLimit = { "ClientNetCamUpdatePositionLimit", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetCamUpdatePositionLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientNetCamUpdatePositionLimit_MetaData), NewProp_ClientNetCamUpdatePositionLimit_MetaData) };
void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition_SetBit(void* Obj)
{
	((AGameNetworkManager*)Obj)->ClientAuthorativePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition = { "ClientAuthorativePosition", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientAuthorativePosition_MetaData), NewProp_ClientAuthorativePosition_MetaData) };
void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection_SetBit(void* Obj)
{
	((AGameNetworkManager*)Obj)->bMovementTimeDiscrepancyDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection = { "bMovementTimeDiscrepancyDetection", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovementTimeDiscrepancyDetection_MetaData), NewProp_bMovementTimeDiscrepancyDetection_MetaData) };
void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution_SetBit(void* Obj)
{
	((AGameNetworkManager*)Obj)->bMovementTimeDiscrepancyResolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution = { "bMovementTimeDiscrepancyResolution", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovementTimeDiscrepancyResolution_MetaData), NewProp_bMovementTimeDiscrepancyResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMaxTimeMargin = { "MovementTimeDiscrepancyMaxTimeMargin", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyMaxTimeMargin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData), NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMinTimeMargin = { "MovementTimeDiscrepancyMinTimeMargin", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyMinTimeMargin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData), NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyResolutionRate = { "MovementTimeDiscrepancyResolutionRate", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyResolutionRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementTimeDiscrepancyResolutionRate_MetaData), NewProp_MovementTimeDiscrepancyResolutionRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyDriftAllowance = { "MovementTimeDiscrepancyDriftAllowance", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyDriftAllowance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData), NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData) };
void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit(void* Obj)
{
	((AGameNetworkManager*)Obj)->bMovementTimeDiscrepancyForceCorrectionsDuringResolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution = { "bMovementTimeDiscrepancyForceCorrectionsDuringResolution", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData), NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData) };
void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy_SetBit(void* Obj)
{
	((AGameNetworkManager*)Obj)->bUseDistanceBasedRelevancy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy = { "bUseDistanceBasedRelevancy", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDistanceBasedRelevancy_MetaData), NewProp_bUseDistanceBasedRelevancy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameNetworkManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPacketLossThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePacketLossThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_AdjustedNetSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_LastNetSpeedUpdateTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_TotalNetBandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MinDynamicBandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxDynamicBandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyRxCheatTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyTxCheatTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForRxStandby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForTxStandby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentForBadPing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_JoinInProgressStandbyWaitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MoveRepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXPOSITIONERRORSQUARED,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXNEARZEROVELOCITYSQUARED,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_CLIENTADJUSTUPDATECOST,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXCLIENTUPDATEINTERVAL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientForcedUpdateDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxMoveDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientSmoothingDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeThrottled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeStationary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleAtNetSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleOverPlayerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientErrorUpdateRateLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdateDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdatePositionLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMaxTimeMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMinTimeMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyResolutionRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyDriftAllowance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameNetworkManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameNetworkManager_Statics::ClassParams = {
	&AGameNetworkManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameNetworkManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameNetworkManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameNetworkManager()
{
	if (!Z_Registration_Info_UClass_AGameNetworkManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameNetworkManager.OuterSingleton, Z_Construct_UClass_AGameNetworkManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameNetworkManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AGameNetworkManager>()
{
	return AGameNetworkManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameNetworkManager);
AGameNetworkManager::~AGameNetworkManager() {}
// End Class AGameNetworkManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStandbyType_StaticEnum, TEXT("EStandbyType"), &Z_Registration_Info_UEnum_EStandbyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 219352122U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameNetworkManager, AGameNetworkManager::StaticClass, TEXT("AGameNetworkManager"), &Z_Registration_Info_UClass_AGameNetworkManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameNetworkManager), 1185108469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_952872123(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
