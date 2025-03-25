// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENHANCEDINPUT_InputAction_generated_h
#error "InputAction.generated.h already included, missing '#pragma once' in InputAction.h"
#endif
#define ENHANCEDINPUT_InputAction_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputAction(); \
	friend struct Z_Construct_UClass_UInputAction_Statics; \
public: \
	DECLARE_CLASS(UInputAction, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputAction)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputAction(UInputAction&&); \
	UInputAction(const UInputAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputAction) \
	NO_API virtual ~UInputAction();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_52_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputAction>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionInstance_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FInputActionInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h


#define FOREACH_ENUM_EINPUTACTIONACCUMULATIONBEHAVIOR(op) \
	op(EInputActionAccumulationBehavior::TakeHighestAbsoluteValue) \
	op(EInputActionAccumulationBehavior::Cumulative) 

enum class EInputActionAccumulationBehavior : uint8;
template<> struct TIsUEnumClass<EInputActionAccumulationBehavior> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputActionAccumulationBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
