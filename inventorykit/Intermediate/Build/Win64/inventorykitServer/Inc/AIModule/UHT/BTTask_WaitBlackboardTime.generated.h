// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTask_WaitBlackboardTime_generated_h
#error "BTTask_WaitBlackboardTime.generated.h already included, missing '#pragma once' in BTTask_WaitBlackboardTime.h"
#endif
#define AIMODULE_BTTask_WaitBlackboardTime_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_WaitBlackboardTime(); \
	friend struct Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics; \
public: \
	DECLARE_CLASS(UBTTask_WaitBlackboardTime, UBTTask_Wait, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTTask_WaitBlackboardTime)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_WaitBlackboardTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_WaitBlackboardTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_WaitBlackboardTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_WaitBlackboardTime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_WaitBlackboardTime(UBTTask_WaitBlackboardTime&&); \
	UBTTask_WaitBlackboardTime(const UBTTask_WaitBlackboardTime&); \
public: \
	AIMODULE_API virtual ~UBTTask_WaitBlackboardTime();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_15_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_18_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_WaitBlackboardTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
