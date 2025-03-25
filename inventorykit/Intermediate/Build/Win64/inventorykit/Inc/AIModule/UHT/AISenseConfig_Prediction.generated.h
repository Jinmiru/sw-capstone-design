// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig_Prediction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseConfig_Prediction_generated_h
#error "AISenseConfig_Prediction.generated.h already included, missing '#pragma once' in AISenseConfig_Prediction.h"
#endif
#define AIMODULE_AISenseConfig_Prediction_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Prediction(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Prediction_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig_Prediction, UAISenseConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISenseConfig_Prediction)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseConfig_Prediction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Prediction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig_Prediction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Prediction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISenseConfig_Prediction(UAISenseConfig_Prediction&&); \
	UAISenseConfig_Prediction(const UAISenseConfig_Prediction&); \
public: \
	AIMODULE_API virtual ~UAISenseConfig_Prediction();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseConfig_Prediction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Prediction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
