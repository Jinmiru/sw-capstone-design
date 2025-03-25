// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PlayerInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FKey;
#ifdef ENGINE_PlayerInput_generated_h
#error "PlayerInput.generated.h already included, missing '#pragma once' in PlayerInput.h"
#endif
#define ENGINE_PlayerInput_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyBind_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FKeyBind>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAxisProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAxisProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAxisConfigEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputActionKeyMapping>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAxisKeyMapping>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_273_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputActionSpeechMapping>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOuterAPlayerController); \
	DECLARE_FUNCTION(execClearSmoothing); \
	DECLARE_FUNCTION(execInvertAxis); \
	DECLARE_FUNCTION(execInvertAxisKey); \
	DECLARE_FUNCTION(execSetBind); \
	DECLARE_FUNCTION(execSetMouseSensitivity);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_410_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInput(); \
	friend struct Z_Construct_UClass_UPlayerInput_Statics; \
public: \
	DECLARE_CLASS(UPlayerInput, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlayerInput) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_410_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerInput(UPlayerInput&&); \
	UPlayerInput(const UPlayerInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlayerInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInput) \
	ENGINE_API virtual ~UPlayerInput();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_407_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_410_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_410_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_410_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlayerInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
