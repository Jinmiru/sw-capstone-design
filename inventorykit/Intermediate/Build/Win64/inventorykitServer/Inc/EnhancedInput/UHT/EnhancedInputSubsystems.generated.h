// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputSubsystems.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ENHANCEDINPUT_EnhancedInputSubsystems_generated_h
#error "EnhancedInputSubsystems.generated.h already included, missing '#pragma once' in EnhancedInputSubsystems.h"
#endif
#define ENHANCEDINPUT_EnhancedInputSubsystems_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_48_DELEGATE \
static void FOnControlMappingsRebuilt_DelegateWrapper(const FMulticastScriptDelegate& OnControlMappingsRebuilt);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputLocalPlayerSubsystem(); \
	friend struct Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputLocalPlayerSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputLocalPlayerSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UEnhancedInputLocalPlayerSubsystem*>(this); }


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputLocalPlayerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnhancedInputLocalPlayerSubsystem(UEnhancedInputLocalPlayerSubsystem&&); \
	UEnhancedInputLocalPlayerSubsystem(const UEnhancedInputLocalPlayerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputLocalPlayerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputLocalPlayerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnhancedInputLocalPlayerSubsystem) \
	NO_API virtual ~UEnhancedInputLocalPlayerSubsystem();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_18_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedInputLocalPlayerSubsystem>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveActorInputComponent); \
	DECLARE_FUNCTION(execAddActorInputComponent);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputWorldSubsystem(); \
	friend struct Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputWorldSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UEnhancedInputWorldSubsystem*>(this); }


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputWorldSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnhancedInputWorldSubsystem(UEnhancedInputWorldSubsystem&&); \
	UEnhancedInputWorldSubsystem(const UEnhancedInputWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnhancedInputWorldSubsystem) \
	NO_API virtual ~UEnhancedInputWorldSubsystem();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_76_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedInputWorldSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
