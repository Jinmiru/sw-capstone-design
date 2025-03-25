// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense_Prediction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class APawn;
#ifdef AIMODULE_AISense_Prediction_generated_h
#error "AISense_Prediction.generated.h already included, missing '#pragma once' in AISense_Prediction.h"
#endif
#define AIMODULE_AISense_Prediction_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIPredictionEvent_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIPredictionEvent>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_40_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRequestPawnPredictionEvent); \
	DECLARE_FUNCTION(execRequestControllerPredictionEvent);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Prediction(); \
	friend struct Z_Construct_UClass_UAISense_Prediction_Statics; \
public: \
	DECLARE_CLASS(UAISense_Prediction, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISense_Prediction)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISense_Prediction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Prediction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISense_Prediction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Prediction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISense_Prediction(UAISense_Prediction&&); \
	UAISense_Prediction(const UAISense_Prediction&); \
public: \
	AIMODULE_API virtual ~UAISense_Prediction();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_37_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_40_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_40_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Prediction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
