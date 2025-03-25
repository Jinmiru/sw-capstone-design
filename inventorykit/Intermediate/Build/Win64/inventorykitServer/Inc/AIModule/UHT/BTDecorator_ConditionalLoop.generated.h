// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_ConditionalLoop_generated_h
#error "BTDecorator_ConditionalLoop.generated.h already included, missing '#pragma once' in BTDecorator_ConditionalLoop.h"
#endif
#define AIMODULE_BTDecorator_ConditionalLoop_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_ConditionalLoop(); \
	friend struct Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_ConditionalLoop, UBTDecorator_Blackboard, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTDecorator_ConditionalLoop)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_ConditionalLoop(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_ConditionalLoop) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_ConditionalLoop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_ConditionalLoop); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTDecorator_ConditionalLoop(UBTDecorator_ConditionalLoop&&); \
	UBTDecorator_ConditionalLoop(const UBTDecorator_ConditionalLoop&); \
public: \
	AIMODULE_API virtual ~UBTDecorator_ConditionalLoop();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_22_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_25_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator_ConditionalLoop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
