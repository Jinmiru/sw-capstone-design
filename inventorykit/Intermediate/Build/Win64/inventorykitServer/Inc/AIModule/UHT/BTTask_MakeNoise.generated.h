// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_MakeNoise.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTask_MakeNoise_generated_h
#error "BTTask_MakeNoise.generated.h already included, missing '#pragma once' in BTTask_MakeNoise.h"
#endif
#define AIMODULE_BTTask_MakeNoise_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_MakeNoise(); \
	friend struct Z_Construct_UClass_UBTTask_MakeNoise_Statics; \
public: \
	DECLARE_CLASS(UBTTask_MakeNoise, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTTask_MakeNoise)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_MakeNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_MakeNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_MakeNoise); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_MakeNoise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_MakeNoise(UBTTask_MakeNoise&&); \
	UBTTask_MakeNoise(const UBTTask_MakeNoise&); \
public: \
	AIMODULE_API virtual ~UBTTask_MakeNoise();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_17_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_MakeNoise>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
