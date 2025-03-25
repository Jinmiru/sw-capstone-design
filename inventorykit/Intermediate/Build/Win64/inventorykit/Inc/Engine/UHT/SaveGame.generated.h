// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/SaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ULocalPlayerSaveGame;
struct FPlatformUserId;
#ifdef ENGINE_SaveGame_generated_h
#error "SaveGame.generated.h already included, missing '#pragma once' in SaveGame.h"
#endif
#define ENGINE_SaveGame_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGame(); \
	friend struct Z_Construct_UClass_USaveGame_Statics; \
public: \
	DECLARE_CLASS(USaveGame, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USaveGame)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveGame(USaveGame&&); \
	USaveGame(const USaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGame); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGame) \
	ENGINE_API virtual ~USaveGame();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USaveGame>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_37_DELEGATE \
ENGINE_API void FOnLocalPlayerSaveGameLoaded_DelegateWrapper(const FScriptDelegate& OnLocalPlayerSaveGameLoaded, ULocalPlayerSaveGame* SaveGame);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execWasSaveRequested); \
	DECLARE_FUNCTION(execWasLastSaveSuccessful); \
	DECLARE_FUNCTION(execIsSaveInProgress); \
	DECLARE_FUNCTION(execWasLoaded); \
	DECLARE_FUNCTION(execGetLatestDataVersion); \
	DECLARE_FUNCTION(execGetInvalidDataVersion); \
	DECLARE_FUNCTION(execGetSavedDataVersion); \
	DECLARE_FUNCTION(execGetSaveSlotName); \
	DECLARE_FUNCTION(execGetPlatformUserIndex); \
	DECLARE_FUNCTION(execGetPlatformUserId); \
	DECLARE_FUNCTION(execGetLocalPlayerController); \
	DECLARE_FUNCTION(execAsyncSaveGameToSlotForLocalPlayer); \
	DECLARE_FUNCTION(execSaveGameToSlotForLocalPlayer); \
	DECLARE_FUNCTION(execAsyncLoadOrCreateSaveGameForLocalPlayer); \
	DECLARE_FUNCTION(execLoadOrCreateSaveGameForLocalPlayer);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_49_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalPlayerSaveGame(); \
	friend struct Z_Construct_UClass_ULocalPlayerSaveGame_Statics; \
public: \
	DECLARE_CLASS(ULocalPlayerSaveGame, USaveGame, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULocalPlayerSaveGame)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULocalPlayerSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocalPlayerSaveGame(ULocalPlayerSaveGame&&); \
	ULocalPlayerSaveGame(const ULocalPlayerSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULocalPlayerSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayerSaveGame); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayerSaveGame) \
	ENGINE_API virtual ~ULocalPlayerSaveGame();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_49_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULocalPlayerSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
