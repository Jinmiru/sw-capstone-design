// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputActionDelegateBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputActionDelegateBinding_generated_h
#error "InputActionDelegateBinding.generated.h already included, missing '#pragma once' in InputActionDelegateBinding.h"
#endif
#define ENGINE_InputActionDelegateBinding_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintInputActionDelegateBinding>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUInputActionDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputActionDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputActionDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInputActionDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputActionDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputActionDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputActionDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputActionDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputActionDelegateBinding(UInputActionDelegateBinding&&); \
	UInputActionDelegateBinding(const UInputActionDelegateBinding&); \
public: \
	ENGINE_API virtual ~UInputActionDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputActionDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
