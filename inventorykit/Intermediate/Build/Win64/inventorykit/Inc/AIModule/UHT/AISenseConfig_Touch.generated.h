// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig_Touch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseConfig_Touch_generated_h
#error "AISenseConfig_Touch.generated.h already included, missing '#pragma once' in AISenseConfig_Touch.h"
#endif
#define AIMODULE_AISenseConfig_Touch_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Touch(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Touch_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig_Touch, UAISenseConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISenseConfig_Touch)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseConfig_Touch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Touch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig_Touch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Touch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISenseConfig_Touch(UAISenseConfig_Touch&&); \
	UAISenseConfig_Touch(const UAISenseConfig_Touch&); \
public: \
	AIMODULE_API virtual ~UAISenseConfig_Touch();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_15_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseConfig_Touch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
