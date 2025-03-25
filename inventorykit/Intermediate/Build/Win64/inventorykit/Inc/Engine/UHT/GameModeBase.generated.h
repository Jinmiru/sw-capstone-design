// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APawn;
class APlayerController;
class APlayerState;
class UObject;
#ifdef ENGINE_GameModeBase_generated_h
#error "GameModeBase.generated.h already included, missing '#pragma once' in GameModeBase.h"
#endif
#define ENGINE_GameModeBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_49_RPC_WRAPPERS \
	ENGINE_API virtual void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer); \
	ENGINE_API virtual void InitStartSpot_Implementation(AActor* StartSpot, AController* NewPlayer); \
	ENGINE_API virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, FTransform const& SpawnTransform); \
	ENGINE_API virtual APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot); \
	ENGINE_API virtual bool PlayerCanRestart_Implementation(APlayerController* Player); \
	ENGINE_API virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName); \
	ENGINE_API virtual AActor* ChoosePlayerStart_Implementation(AController* Player); \
	ENGINE_API virtual bool CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget); \
	ENGINE_API virtual bool MustSpectate_Implementation(APlayerController* NewPlayerController) const; \
	ENGINE_API virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer); \
	ENGINE_API virtual bool ShouldReset_Implementation(AActor* ActorToReset); \
	ENGINE_API virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController); \
	DECLARE_FUNCTION(execInitializeHUDForPlayer); \
	DECLARE_FUNCTION(execInitStartSpot); \
	DECLARE_FUNCTION(execSpawnDefaultPawnAtTransform); \
	DECLARE_FUNCTION(execSpawnDefaultPawnFor); \
	DECLARE_FUNCTION(execRestartPlayerAtTransform); \
	DECLARE_FUNCTION(execRestartPlayerAtPlayerStart); \
	DECLARE_FUNCTION(execRestartPlayer); \
	DECLARE_FUNCTION(execPlayerCanRestart); \
	DECLARE_FUNCTION(execK2_FindPlayerStart); \
	DECLARE_FUNCTION(execFindPlayerStart); \
	DECLARE_FUNCTION(execChoosePlayerStart); \
	DECLARE_FUNCTION(execChangeName); \
	DECLARE_FUNCTION(execCanSpectate); \
	DECLARE_FUNCTION(execMustSpectate); \
	DECLARE_FUNCTION(execHandleStartingNewPlayer); \
	DECLARE_FUNCTION(execReturnToMainMenuHost); \
	DECLARE_FUNCTION(execResetLevel); \
	DECLARE_FUNCTION(execShouldReset); \
	DECLARE_FUNCTION(execHasMatchEnded); \
	DECLARE_FUNCTION(execHasMatchStarted); \
	DECLARE_FUNCTION(execStartPlay); \
	DECLARE_FUNCTION(execGetNumSpectators); \
	DECLARE_FUNCTION(execGetNumPlayers); \
	DECLARE_FUNCTION(execGetDefaultPawnClassForController);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_49_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAGameModeBase(); \
	friend struct Z_Construct_UClass_AGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGameModeBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AGameModeBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameModeBase(AGameModeBase&&); \
	AGameModeBase(const AGameModeBase&); \
public: \
	ENGINE_API virtual ~AGameModeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_49_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_49_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_49_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
