// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputAxisDelegateBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputAxisDelegateBinding_generated_h
#error "InputAxisDelegateBinding.generated.h already included, missing '#pragma once' in InputAxisDelegateBinding.h"
#endif
#define ENGINE_InputAxisDelegateBinding_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintInputAxisDelegateBinding>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUInputAxisDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputAxisDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputAxisDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInputAxisDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputAxisDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputAxisDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputAxisDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputAxisDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputAxisDelegateBinding(UInputAxisDelegateBinding&&); \
	UInputAxisDelegateBinding(const UInputAxisDelegateBinding&); \
public: \
	ENGINE_API virtual ~UInputAxisDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputAxisDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
