// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AEmitterCameraLensEffectBase;
class AHUD;
class APawn;
class APlayerState;
class ASpectatorPawn;
class UAsyncPhysicsData;
class UCameraShakeBase;
class UCameraShakeSourceComponent;
class UForceFeedbackEffect;
class UHapticFeedbackEffect_Base;
class ULocalMessage;
class UMaterialInterface;
class UObject;
class UPlayerInput;
class USceneComponent;
class USoundBase;
class UTouchInterface;
class UUserWidget;
enum class ECameraShakePlaySpace : uint8;
enum class EControllerHand : uint8;
enum class EStreamingSourcePriority : uint8;
struct FAsyncPhysicsTimestamp;
struct FColor;
struct FForceFeedbackParameters;
struct FGuid;
struct FHitResult;
struct FKey;
struct FLatentActionInfo;
struct FNetLevelVisibilityTransactionId;
struct FPlatformUserId;
struct FStreamingSourceShape;
struct FUniqueNetIdRepl;
struct FUpdateLevelStreamingLevelStatus;
struct FUpdateLevelVisibilityLevelInfo;
struct FVector_NetQuantize;
struct FViewTargetTransitionParams;
#ifdef ENGINE_PlayerController_generated_h
#error "PlayerController.generated.h already included, missing '#pragma once' in PlayerController.h"
#endif
#define ENGINE_PlayerController_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FUpdateLevelStreamingLevelStatus>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_241_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAsyncPhysicsTimestamp>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	ENGINE_API virtual void ClientAckTimeDilation_Implementation(float TimeDilation, int32 ServerStep); \
	ENGINE_API virtual void ClientSetupNetworkPhysicsTimestamp_Implementation(FAsyncPhysicsTimestamp Timestamp); \
	ENGINE_API virtual void ServerSendLatestAsyncPhysicsTimestamp_Implementation(FAsyncPhysicsTimestamp Timestamp); \
	ENGINE_API virtual void ClientCorrectionAsyncPhysicsTimestamp_Implementation(FAsyncPhysicsTimestamp Timestamp); \
	ENGINE_API virtual void ClientRecvServerAckFrameDebug_Implementation(uint8 NumBuffered, float TargetNumBufferedCmds); \
	ENGINE_API virtual void ClientRecvServerAckFrame_Implementation(int32 LastProcessedInputFrame, int32 RecvServerFrameNumber, int8 TimeDilation); \
	ENGINE_API virtual void ServerRecvClientInputFrame_Implementation(int32 RecvClientInputFrame, TArray<uint8> const& Data); \
	ENGINE_API virtual void OnServerStartedVisualLogger_Implementation(bool bIsLogging); \
	ENGINE_API virtual bool ServerToggleAILogging_Validate(); \
	ENGINE_API virtual void ServerToggleAILogging_Implementation(); \
	ENGINE_API virtual void ClientTeamMessage_Implementation(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime); \
	ENGINE_API virtual bool ServerViewSelf_Validate(FViewTargetTransitionParams ); \
	ENGINE_API virtual void ServerViewSelf_Implementation(FViewTargetTransitionParams TransitionParams); \
	ENGINE_API virtual bool ServerViewPrevPlayer_Validate(); \
	ENGINE_API virtual void ServerViewPrevPlayer_Implementation(); \
	ENGINE_API virtual bool ServerViewNextPlayer_Validate(); \
	ENGINE_API virtual void ServerViewNextPlayer_Implementation(); \
	ENGINE_API virtual bool ServerVerifyViewTarget_Validate(); \
	ENGINE_API virtual void ServerVerifyViewTarget_Implementation(); \
	ENGINE_API  bool ServerUpdateMultipleLevelsVisibility_Validate(TArray<FUpdateLevelVisibilityLevelInfo> const& ); \
	ENGINE_API void ServerUpdateMultipleLevelsVisibility_Implementation(TArray<FUpdateLevelVisibilityLevelInfo> const& LevelVisibilities); \
	ENGINE_API  bool ServerUpdateLevelVisibility_Validate(FUpdateLevelVisibilityLevelInfo const& ); \
	ENGINE_API void ServerUpdateLevelVisibility_Implementation(FUpdateLevelVisibilityLevelInfo const& LevelVisibility); \
	ENGINE_API virtual bool ServerUpdateCamera_Validate(FVector_NetQuantize , int32 ); \
	ENGINE_API virtual void ServerUpdateCamera_Implementation(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw); \
	ENGINE_API virtual bool ServerShortTimeout_Validate(); \
	ENGINE_API virtual void ServerShortTimeout_Implementation(); \
	ENGINE_API virtual bool ServerCheckClientPossessionReliable_Validate(); \
	ENGINE_API virtual void ServerCheckClientPossessionReliable_Implementation(); \
	ENGINE_API virtual bool ServerCheckClientPossession_Validate(); \
	ENGINE_API virtual void ServerCheckClientPossession_Implementation(); \
	ENGINE_API virtual bool ServerSetSpectatorLocation_Validate(FVector , FRotator ); \
	ENGINE_API virtual void ServerSetSpectatorLocation_Implementation(FVector NewLoc, FRotator NewRot); \
	ENGINE_API virtual bool ServerRestartPlayer_Validate(); \
	ENGINE_API virtual void ServerRestartPlayer_Implementation(); \
	ENGINE_API virtual bool ServerPause_Validate(); \
	ENGINE_API virtual void ServerPause_Implementation(); \
	ENGINE_API  bool ServerNotifyLoadedWorld_Validate(FName ); \
	ENGINE_API void ServerNotifyLoadedWorld_Implementation(FName WorldPackageName); \
	ENGINE_API virtual bool ServerChangeName_Validate(const FString& ); \
	ENGINE_API virtual void ServerChangeName_Implementation(const FString& S); \
	ENGINE_API virtual bool ServerCamera_Validate(FName ); \
	ENGINE_API virtual void ServerCamera_Implementation(FName NewMode); \
	ENGINE_API virtual bool ServerAcknowledgePossession_Validate(APawn* ); \
	ENGINE_API virtual void ServerAcknowledgePossession_Implementation(APawn* P); \
	ENGINE_API virtual void ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage> Message, int32 Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject); \
	ENGINE_API virtual void ClientRetryClientRestart_Implementation(APawn* NewPawn); \
	ENGINE_API virtual void ClientEndOnlineSession_Implementation(); \
	ENGINE_API virtual void ClientStartOnlineSession_Implementation(); \
	ENGINE_API virtual void ClientWasKicked_Implementation(FText const& KickReason); \
	ENGINE_API virtual void ClientUpdateMultipleLevelsStreamingStatus_Implementation(TArray<FUpdateLevelStreamingLevelStatus> const& LevelStatuses); \
	ENGINE_API virtual void ClientUpdateLevelStreamingStatus_Implementation(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex, FNetLevelVisibilityTransactionId TransactionId, bool bNewShouldBlockOnUnload); \
	ENGINE_API virtual void ClientTravelInternal_Implementation(const FString& URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid); \
	ENGINE_API virtual void ClientStopForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag); \
	ENGINE_API virtual void ClientPlayForceFeedback_Internal_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params); \
	ENGINE_API virtual void ClientStopCameraShake_Implementation(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately); \
	ENGINE_API virtual void ClientClearCameraLensEffects_Implementation(); \
	ENGINE_API virtual void ClientSpawnCameraLensEffect_Implementation(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass); \
	ENGINE_API virtual void ClientSpawnGenericCameraLensEffect_Implementation(TSubclassOf<AActor> LensEffectEmitterClass); \
	ENGINE_API virtual void ClientSetViewTarget_Implementation(AActor* A, FViewTargetTransitionParams TransitionParams); \
	ENGINE_API virtual void ClientSetHUD_Implementation(TSubclassOf<AHUD> NewHUDClass); \
	ENGINE_API virtual void ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups); \
	ENGINE_API virtual void ClientSetCinematicMode_Implementation(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); \
	ENGINE_API virtual void ClientSetCameraMode_Implementation(FName NewCamMode); \
	ENGINE_API virtual void ClientSetCameraFade_Implementation(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished); \
	ENGINE_API virtual void ClientSetBlockOnAsyncLoading_Implementation(); \
	ENGINE_API virtual void ClientRestart_Implementation(APawn* NewPawn); \
	ENGINE_API virtual void ClientReset_Implementation(); \
	ENGINE_API virtual void ClientPrestreamTextures_Implementation(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups); \
	ENGINE_API virtual void ClientPrepareMapChange_Implementation(FName LevelName, bool bFirst, bool bLast); \
	ENGINE_API virtual void ClientPlaySoundAtLocation_Implementation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier); \
	ENGINE_API virtual void ClientPlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); \
	ENGINE_API virtual void ClientStartCameraShake_Implementation(TSubclassOf<UCameraShakeBase> Shake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); \
	ENGINE_API virtual void ClientMessage_Implementation(const FString& S, FName Type, float MsgLifeTime); \
	ENGINE_API virtual void ClientIgnoreMoveInput_Implementation(bool bIgnore); \
	ENGINE_API virtual void ClientIgnoreLookInput_Implementation(bool bIgnore); \
	ENGINE_API virtual void ClientGotoState_Implementation(FName NewState); \
	ENGINE_API virtual void ClientGameEnded_Implementation(AActor* EndGameFocus, bool bIsWinner); \
	ENGINE_API virtual void ClientForceGarbageCollection_Implementation(); \
	ENGINE_API void ClientFlushLevelStreaming_Implementation(); \
	ENGINE_API virtual void ClientCommitMapChange_Implementation(); \
	ENGINE_API virtual void ClientCapBandwidth_Implementation(int32 Cap); \
	ENGINE_API virtual void ClientCancelPendingMapChange_Implementation(); \
	ENGINE_API void ClientAddTextureStreamingLoc_Implementation(FVector InLoc, float Duration, bool bOverrideLocation); \
	ENGINE_API virtual void ClientUnmutePlayers_Implementation(TArray<FUniqueNetIdRepl> const& PlayerIds); \
	ENGINE_API virtual bool ServerUnblockPlayer_Validate(FUniqueNetIdRepl ); \
	ENGINE_API virtual void ServerUnblockPlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	ENGINE_API virtual bool ServerBlockPlayer_Validate(FUniqueNetIdRepl ); \
	ENGINE_API virtual void ServerBlockPlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	ENGINE_API virtual void ClientUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	ENGINE_API virtual void ClientMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	ENGINE_API virtual bool ServerUnmutePlayer_Validate(FUniqueNetIdRepl ); \
	ENGINE_API virtual void ServerUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	ENGINE_API virtual bool ServerMutePlayer_Validate(FUniqueNetIdRepl ); \
	ENGINE_API virtual void ServerMutePlayer_Implementation(FUniqueNetIdRepl PlayerId); \
	ENGINE_API virtual void ClientVoiceHandshakeComplete_Implementation(); \
	ENGINE_API virtual void ClientAckUpdateLevelVisibility_Implementation(FName PackageName, FNetLevelVisibilityTransactionId TransactionId, bool bClientAckCanMakeVisible); \
	ENGINE_API virtual void ClientEnableNetworkVoice_Implementation(bool bEnable); \
	ENGINE_API virtual void ClientRepObjRef_Implementation(UObject* Object); \
	ENGINE_API virtual void ClientReturnToMainMenuWithTextReason_Implementation(FText const& ReturnReason); \
	ENGINE_API virtual bool ServerExecRPC_Validate(const FString& ); \
	ENGINE_API virtual void ServerExecRPC_Implementation(const FString& Msg); \
	ENGINE_API virtual void ClientSetSpectatorWaiting_Implementation(bool bWaiting); \
	ENGINE_API virtual bool ServerSetSpectatorWaiting_Validate(bool ); \
	ENGINE_API virtual void ServerSetSpectatorWaiting_Implementation(bool bWaiting); \
	DECLARE_FUNCTION(execClientAckTimeDilation); \
	DECLARE_FUNCTION(execClientSetupNetworkPhysicsTimestamp); \
	DECLARE_FUNCTION(execServerSendLatestAsyncPhysicsTimestamp); \
	DECLARE_FUNCTION(execClientCorrectionAsyncPhysicsTimestamp); \
	DECLARE_FUNCTION(execClientRecvServerAckFrameDebug); \
	DECLARE_FUNCTION(execClientRecvServerAckFrame); \
	DECLARE_FUNCTION(execServerRecvClientInputFrame); \
	DECLARE_FUNCTION(execGetFocalLocation); \
	DECLARE_FUNCTION(execGetSpectatorPawn); \
	DECLARE_FUNCTION(execOnServerStartedVisualLogger); \
	DECLARE_FUNCTION(execSetCinematicMode); \
	DECLARE_FUNCTION(execCanRestartPlayer); \
	DECLARE_FUNCTION(execClearAudioListenerAttenuationOverride); \
	DECLARE_FUNCTION(execSetAudioListenerAttenuationOverride); \
	DECLARE_FUNCTION(execClearAudioListenerOverride); \
	DECLARE_FUNCTION(execSetAudioListenerOverride); \
	DECLARE_FUNCTION(execGetPlatformUserId); \
	DECLARE_FUNCTION(execGetOverridePlayerInputClass); \
	DECLARE_FUNCTION(execSetViewTargetWithBlend); \
	DECLARE_FUNCTION(execCamera); \
	DECLARE_FUNCTION(execSetVirtualJoystickVisibility); \
	DECLARE_FUNCTION(execActivateTouchInterface); \
	DECLARE_FUNCTION(execGetInputAnalogStickState); \
	DECLARE_FUNCTION(execGetInputMouseDelta); \
	DECLARE_FUNCTION(execGetInputKeyTimeDown); \
	DECLARE_FUNCTION(execGetMousePosition); \
	DECLARE_FUNCTION(execGetInputMotionState); \
	DECLARE_FUNCTION(execGetInputTouchState); \
	DECLARE_FUNCTION(execGetInputVectorKeyState); \
	DECLARE_FUNCTION(execGetInputAnalogKeyState); \
	DECLARE_FUNCTION(execWasInputKeyJustReleased); \
	DECLARE_FUNCTION(execWasInputKeyJustPressed); \
	DECLARE_FUNCTION(execIsInputKeyDown); \
	DECLARE_FUNCTION(execAddRollInput); \
	DECLARE_FUNCTION(execAddYawInput); \
	DECLARE_FUNCTION(execAddPitchInput); \
	DECLARE_FUNCTION(execServerToggleAILogging); \
	DECLARE_FUNCTION(execClientTeamMessage); \
	DECLARE_FUNCTION(execServerViewSelf); \
	DECLARE_FUNCTION(execServerViewPrevPlayer); \
	DECLARE_FUNCTION(execServerViewNextPlayer); \
	DECLARE_FUNCTION(execServerVerifyViewTarget); \
	DECLARE_FUNCTION(execServerUpdateMultipleLevelsVisibility); \
	DECLARE_FUNCTION(execServerUpdateLevelVisibility); \
	DECLARE_FUNCTION(execServerUpdateCamera); \
	DECLARE_FUNCTION(execServerShortTimeout); \
	DECLARE_FUNCTION(execServerCheckClientPossessionReliable); \
	DECLARE_FUNCTION(execServerCheckClientPossession); \
	DECLARE_FUNCTION(execServerSetSpectatorLocation); \
	DECLARE_FUNCTION(execServerRestartPlayer); \
	DECLARE_FUNCTION(execServerPause); \
	DECLARE_FUNCTION(execServerNotifyLoadedWorld); \
	DECLARE_FUNCTION(execServerChangeName); \
	DECLARE_FUNCTION(execServerCamera); \
	DECLARE_FUNCTION(execServerAcknowledgePossession); \
	DECLARE_FUNCTION(execClientReceiveLocalizedMessage); \
	DECLARE_FUNCTION(execClientRetryClientRestart); \
	DECLARE_FUNCTION(execClientEndOnlineSession); \
	DECLARE_FUNCTION(execClientStartOnlineSession); \
	DECLARE_FUNCTION(execClientWasKicked); \
	DECLARE_FUNCTION(execClientUpdateMultipleLevelsStreamingStatus); \
	DECLARE_FUNCTION(execClientUpdateLevelStreamingStatus); \
	DECLARE_FUNCTION(execClientTravelInternal); \
	DECLARE_FUNCTION(execClientTravel); \
	DECLARE_FUNCTION(execResetControllerLightColor); \
	DECLARE_FUNCTION(execSetControllerLightColor); \
	DECLARE_FUNCTION(execSetDisableHaptics); \
	DECLARE_FUNCTION(execSetHapticsByValue); \
	DECLARE_FUNCTION(execStopHapticEffect); \
	DECLARE_FUNCTION(execPlayHapticEffect); \
	DECLARE_FUNCTION(execTestServerLevelVisibilityChange); \
	DECLARE_FUNCTION(execPlayDynamicForceFeedback); \
	DECLARE_FUNCTION(execClientStopForceFeedback); \
	DECLARE_FUNCTION(execClientPlayForceFeedback_Internal); \
	DECLARE_FUNCTION(execK2_ClientPlayForceFeedback); \
	DECLARE_FUNCTION(execClientStopCameraShakesFromSource); \
	DECLARE_FUNCTION(execClientStopCameraShake); \
	DECLARE_FUNCTION(execClientClearCameraLensEffects); \
	DECLARE_FUNCTION(execClientSpawnCameraLensEffect); \
	DECLARE_FUNCTION(execClientSpawnGenericCameraLensEffect); \
	DECLARE_FUNCTION(execClientSetViewTarget); \
	DECLARE_FUNCTION(execSetMouseCursorWidget); \
	DECLARE_FUNCTION(execGetHUD); \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execClientSetHUD); \
	DECLARE_FUNCTION(execClientSetForceMipLevelsToBeResident); \
	DECLARE_FUNCTION(execClientSetCinematicMode); \
	DECLARE_FUNCTION(execClientSetCameraMode); \
	DECLARE_FUNCTION(execClientSetCameraFade); \
	DECLARE_FUNCTION(execClientSetBlockOnAsyncLoading); \
	DECLARE_FUNCTION(execClientRestart); \
	DECLARE_FUNCTION(execClientReset); \
	DECLARE_FUNCTION(execClientPrestreamTextures); \
	DECLARE_FUNCTION(execClientPrepareMapChange); \
	DECLARE_FUNCTION(execClientPlaySoundAtLocation); \
	DECLARE_FUNCTION(execClientPlaySound); \
	DECLARE_FUNCTION(execClientStartCameraShakeFromSource); \
	DECLARE_FUNCTION(execClientStartCameraShake); \
	DECLARE_FUNCTION(execClientMessage); \
	DECLARE_FUNCTION(execClientIgnoreMoveInput); \
	DECLARE_FUNCTION(execClientIgnoreLookInput); \
	DECLARE_FUNCTION(execClientGotoState); \
	DECLARE_FUNCTION(execClientGameEnded); \
	DECLARE_FUNCTION(execClientForceGarbageCollection); \
	DECLARE_FUNCTION(execClientFlushLevelStreaming); \
	DECLARE_FUNCTION(execClientCommitMapChange); \
	DECLARE_FUNCTION(execClientCapBandwidth); \
	DECLARE_FUNCTION(execClientCancelPendingMapChange); \
	DECLARE_FUNCTION(execClientAddTextureStreamingLoc); \
	DECLARE_FUNCTION(execSendToConsole); \
	DECLARE_FUNCTION(execConsoleKey); \
	DECLARE_FUNCTION(execClientUnmutePlayers); \
	DECLARE_FUNCTION(execServerUnblockPlayer); \
	DECLARE_FUNCTION(execServerBlockPlayer); \
	DECLARE_FUNCTION(execClientUnmutePlayer); \
	DECLARE_FUNCTION(execClientMutePlayer); \
	DECLARE_FUNCTION(execServerUnmutePlayer); \
	DECLARE_FUNCTION(execServerMutePlayer); \
	DECLARE_FUNCTION(execClientVoiceHandshakeComplete); \
	DECLARE_FUNCTION(execToggleSpeaking); \
	DECLARE_FUNCTION(execClientAckUpdateLevelVisibility); \
	DECLARE_FUNCTION(execClientEnableNetworkVoice); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execGetStreamingSourceShapes); \
	DECLARE_FUNCTION(execGetStreamingSourceLocationAndRotation); \
	DECLARE_FUNCTION(execGetStreamingSourcePriority); \
	DECLARE_FUNCTION(execStreamingSourceShouldBlockOnSlowStreaming); \
	DECLARE_FUNCTION(execStreamingSourceShouldActivate); \
	DECLARE_FUNCTION(execIsStreamingSourceEnabled); \
	DECLARE_FUNCTION(execSetMouseLocation); \
	DECLARE_FUNCTION(execProjectWorldLocationToScreen); \
	DECLARE_FUNCTION(execDeprojectScreenPositionToWorld); \
	DECLARE_FUNCTION(execDeprojectMousePositionToWorld); \
	DECLARE_FUNCTION(execGetHitResultUnderFingerForObjects); \
	DECLARE_FUNCTION(execGetHitResultUnderFingerByChannel); \
	DECLARE_FUNCTION(execGetHitResultUnderFinger); \
	DECLARE_FUNCTION(execGetHitResultUnderCursorForObjects); \
	DECLARE_FUNCTION(execGetHitResultUnderCursorByChannel); \
	DECLARE_FUNCTION(execGetHitResultUnderCursor); \
	DECLARE_FUNCTION(execSwitchLevel); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execClientRepObjRef); \
	DECLARE_FUNCTION(execClientReturnToMainMenuWithTextReason); \
	DECLARE_FUNCTION(execServerExec); \
	DECLARE_FUNCTION(execServerExecRPC); \
	DECLARE_FUNCTION(execLocalTravel); \
	DECLARE_FUNCTION(execRestartLevel); \
	DECLARE_FUNCTION(execFOV); \
	DECLARE_FUNCTION(execEnableCheats); \
	DECLARE_FUNCTION(execSetMotionControlsEnabled); \
	DECLARE_FUNCTION(execSetDeprecatedInputRollScale); \
	DECLARE_FUNCTION(execSetDeprecatedInputPitchScale); \
	DECLARE_FUNCTION(execSetDeprecatedInputYawScale); \
	DECLARE_FUNCTION(execGetDeprecatedInputRollScale); \
	DECLARE_FUNCTION(execGetDeprecatedInputPitchScale); \
	DECLARE_FUNCTION(execGetDeprecatedInputYawScale); \
	DECLARE_FUNCTION(execClientSetSpectatorWaiting); \
	DECLARE_FUNCTION(execServerSetSpectatorWaiting); \
	DECLARE_FUNCTION(execOnRep_AsyncPhysicsDataComponent); \
	DECLARE_FUNCTION(execGetAsyncPhysicsDataToConsume); \
	DECLARE_FUNCTION(execGetAsyncPhysicsDataToWrite);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerController(); \
	friend struct Z_Construct_UClass_APlayerController_Statics; \
public: \
	DECLARE_CLASS(APlayerController, AController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_APlayerController, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlayerController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TargetViewRotation=NETFIELD_REP_START, \
		AsyncPhysicsDataComponent_DEPRECARED, \
		SpawnLocation, \
		NETFIELD_REP_END=SpawnLocation	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerController(APlayerController&&); \
	APlayerController(const APlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController) \
	ENGINE_API virtual ~APlayerController();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_268_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_271_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h


#define FOREACH_ENUM_EDYNAMICFORCEFEEDBACKACTION(op) \
	op(EDynamicForceFeedbackAction::Start) \
	op(EDynamicForceFeedbackAction::Update) \
	op(EDynamicForceFeedbackAction::Stop) 

namespace EDynamicForceFeedbackAction { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EDynamicForceFeedbackAction::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
