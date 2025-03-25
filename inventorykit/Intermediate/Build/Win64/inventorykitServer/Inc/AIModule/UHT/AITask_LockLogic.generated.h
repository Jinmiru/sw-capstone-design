// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/AITask_LockLogic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AITask_LockLogic_generated_h
#error "AITask_LockLogic.generated.h already included, missing '#pragma once' in AITask_LockLogic.h"
#endif
#define AIMODULE_AITask_LockLogic_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAITask_LockLogic(); \
	friend struct Z_Construct_UClass_UAITask_LockLogic_Statics; \
public: \
	DECLARE_CLASS(UAITask_LockLogic, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAITask_LockLogic)


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAITask_LockLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_LockLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAITask_LockLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_LockLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAITask_LockLogic(UAITask_LockLogic&&); \
	UAITask_LockLogic(const UAITask_LockLogic&); \
public: \
	AIMODULE_API virtual ~UAITask_LockLogic();


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_10_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_13_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAITask_LockLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
