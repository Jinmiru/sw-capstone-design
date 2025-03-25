// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ComponentDelegateBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ComponentDelegateBinding_generated_h
#error "ComponentDelegateBinding.generated.h already included, missing '#pragma once' in ComponentDelegateBinding.h"
#endif
#define ENGINE_ComponentDelegateBinding_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintComponentDelegateBinding>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUComponentDelegateBinding(); \
	friend struct Z_Construct_UClass_UComponentDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UComponentDelegateBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UComponentDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UComponentDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UComponentDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UComponentDelegateBinding(UComponentDelegateBinding&&); \
	UComponentDelegateBinding(const UComponentDelegateBinding&); \
public: \
	ENGINE_API virtual ~UComponentDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UComponentDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
