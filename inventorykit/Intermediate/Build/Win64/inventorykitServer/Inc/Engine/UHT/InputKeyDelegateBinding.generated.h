// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputKeyDelegateBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputKeyDelegateBinding_generated_h
#error "InputKeyDelegateBinding.generated.h already included, missing '#pragma once' in InputKeyDelegateBinding.h"
#endif
#define ENGINE_InputKeyDelegateBinding_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintInputKeyDelegateBinding>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUInputKeyDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputKeyDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputKeyDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInputKeyDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputKeyDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputKeyDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputKeyDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputKeyDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputKeyDelegateBinding(UInputKeyDelegateBinding&&); \
	UInputKeyDelegateBinding(const UInputKeyDelegateBinding&); \
public: \
	ENGINE_API virtual ~UInputKeyDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputKeyDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
