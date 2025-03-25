// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CancellableAsyncAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CancellableAsyncAction_generated_h
#error "CancellableAsyncAction.generated.h already included, missing '#pragma once' in CancellableAsyncAction.h"
#endif
#define ENGINE_CancellableAsyncAction_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execCancel);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCancellableAsyncAction(); \
	friend struct Z_Construct_UClass_UCancellableAsyncAction_Statics; \
public: \
	DECLARE_CLASS(UCancellableAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCancellableAsyncAction)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCancellableAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCancellableAsyncAction(UCancellableAsyncAction&&); \
	UCancellableAsyncAction(const UCancellableAsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCancellableAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCancellableAsyncAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCancellableAsyncAction) \
	ENGINE_API virtual ~UCancellableAsyncAction();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCancellableAsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
