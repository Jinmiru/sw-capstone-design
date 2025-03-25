// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputTouchDelegateBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputTouchDelegateBinding_generated_h
#error "InputTouchDelegateBinding.generated.h already included, missing '#pragma once' in InputTouchDelegateBinding.h"
#endif
#define ENGINE_InputTouchDelegateBinding_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintInputTouchDelegateBinding>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUInputTouchDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputTouchDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputTouchDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInputTouchDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputTouchDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTouchDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputTouchDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTouchDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputTouchDelegateBinding(UInputTouchDelegateBinding&&); \
	UInputTouchDelegateBinding(const UInputTouchDelegateBinding&); \
public: \
	ENGINE_API virtual ~UInputTouchDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_33_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputTouchDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
