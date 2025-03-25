// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_RunBehavior.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTask_RunBehavior_generated_h
#error "BTTask_RunBehavior.generated.h already included, missing '#pragma once' in BTTask_RunBehavior.h"
#endif
#define AIMODULE_BTTask_RunBehavior_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_RunBehavior(); \
	friend struct Z_Construct_UClass_UBTTask_RunBehavior_Statics; \
public: \
	DECLARE_CLASS(UBTTask_RunBehavior, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTTask_RunBehavior)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_RunBehavior(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_RunBehavior) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_RunBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_RunBehavior); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_RunBehavior(UBTTask_RunBehavior&&); \
	UBTTask_RunBehavior(const UBTTask_RunBehavior&); \
public: \
	AIMODULE_API virtual ~UBTTask_RunBehavior();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_22_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_25_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_RunBehavior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
