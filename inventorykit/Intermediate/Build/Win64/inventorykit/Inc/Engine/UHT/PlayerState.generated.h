// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class APlayerController;
class APlayerState;
struct FUniqueNetIdRepl;
#ifdef ENGINE_PlayerState_generated_h
#error "PlayerState.generated.h already included, missing '#pragma once' in PlayerState.h"
#endif
#define ENGINE_PlayerState_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_34_DELEGATE \
ENGINE_API void FOnPlayerStatePawnSet_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStatePawnSet, APlayerState* Player, APawn* NewPawn, APawn* OldPawn);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_43_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBP_GetUniqueId); \
	DECLARE_FUNCTION(execIsABot); \
	DECLARE_FUNCTION(execIsOnlyASpectator); \
	DECLARE_FUNCTION(execIsSpectator); \
	DECLARE_FUNCTION(execGetPingInMilliseconds); \
	DECLARE_FUNCTION(execGetCompressedPing); \
	DECLARE_FUNCTION(execGetPlayerId); \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetPawn); \
	DECLARE_FUNCTION(execOnRep_UniqueId); \
	DECLARE_FUNCTION(execOnRep_PlayerId); \
	DECLARE_FUNCTION(execOnRep_bIsInactive); \
	DECLARE_FUNCTION(execOnRep_PlayerName); \
	DECLARE_FUNCTION(execOnRep_Score); \
	DECLARE_FUNCTION(execOnPawnPrivateDestroyed);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_43_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerState(); \
	friend struct Z_Construct_UClass_APlayerState_Statics; \
public: \
	DECLARE_CLASS(APlayerState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Score=NETFIELD_REP_START, \
		PlayerId, \
		CompressedPing, \
		bIsSpectator, \
		bOnlySpectator, \
		bIsABot, \
		bIsInactive, \
		bFromPreviousLevel, \
		StartTime, \
		UniqueId, \
		PlayerNamePrivate, \
		NETFIELD_REP_END=PlayerNamePrivate	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerState(APlayerState&&); \
	APlayerState(const APlayerState&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_43_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
