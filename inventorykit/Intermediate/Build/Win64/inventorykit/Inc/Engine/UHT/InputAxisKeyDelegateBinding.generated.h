// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputAxisKeyDelegateBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputAxisKeyDelegateBinding_generated_h
#error "InputAxisKeyDelegateBinding.generated.h already included, missing '#pragma once' in InputAxisKeyDelegateBinding.h"
#endif
#define ENGINE_InputAxisKeyDelegateBinding_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintInputAxisKeyDelegateBinding>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUInputAxisKeyDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputAxisKeyDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInputAxisKeyDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputAxisKeyDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputAxisKeyDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputAxisKeyDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputAxisKeyDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputAxisKeyDelegateBinding(UInputAxisKeyDelegateBinding&&); \
	UInputAxisKeyDelegateBinding(const UInputAxisKeyDelegateBinding&); \
public: \
	ENGINE_API virtual ~UInputAxisKeyDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputAxisKeyDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
