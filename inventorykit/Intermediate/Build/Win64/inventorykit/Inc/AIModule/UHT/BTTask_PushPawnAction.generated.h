// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_PushPawnAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTask_PushPawnAction_generated_h
#error "BTTask_PushPawnAction.generated.h already included, missing '#pragma once' in BTTask_PushPawnAction.h"
#endif
#define AIMODULE_BTTask_PushPawnAction_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_PushPawnAction(); \
	friend struct Z_Construct_UClass_UBTTask_PushPawnAction_Statics; \
public: \
	DECLARE_CLASS(UBTTask_PushPawnAction, UBTTask_PawnActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTTask_PushPawnAction)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_PushPawnAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_PushPawnAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_PushPawnAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_PushPawnAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_PushPawnAction(UBTTask_PushPawnAction&&); \
	UBTTask_PushPawnAction(const UBTTask_PushPawnAction&); \
public: \
	AIMODULE_API virtual ~UBTTask_PushPawnAction();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_16_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_19_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_PushPawnAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
