// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/GameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APawn;
enum class EInputDeviceConnectionState : uint8;
struct FInputDeviceId;
struct FPlatformUserId;
#ifdef ENGINE_GameInstance_generated_h
#error "GameInstance.generated.h already included, missing '#pragma once' in GameInstance.h"
#endif
#define ENGINE_GameInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_67_DELEGATE \
ENGINE_API void FOnPawnControllerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPawnControllerChanged, APawn* Pawn, AController* Controller);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_69_DELEGATE \
ENGINE_API void FOnUserInputDeviceConnectionChange_DelegateWrapper(const FMulticastScriptDelegate& OnUserInputDeviceConnectionChange, EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_70_DELEGATE \
ENGINE_API void FOnUserInputDevicePairingChange_DelegateWrapper(const FMulticastScriptDelegate& OnUserInputDevicePairingChange, FInputDeviceId InputDeviceId, FPlatformUserId NewUserPlatformId, FPlatformUserId OldUserPlatformId);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_161_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDebugRemovePlayer); \
	DECLARE_FUNCTION(execDebugCreatePlayer);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_161_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_161_INCLASS \
private: \
	static void StaticRegisterNativesUGameInstance(); \
	friend struct Z_Construct_UClass_UGameInstance_Statics; \
public: \
	DECLARE_CLASS(UGameInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_161_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameInstance(UGameInstance&&); \
	UGameInstance(const UGameInstance&); \
public: \
	ENGINE_API virtual ~UGameInstance();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_158_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_161_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_161_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_161_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_161_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_161_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
