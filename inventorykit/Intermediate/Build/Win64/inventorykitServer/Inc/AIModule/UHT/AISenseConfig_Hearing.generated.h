// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig_Hearing.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseConfig_Hearing_generated_h
#error "AISenseConfig_Hearing.generated.h already included, missing '#pragma once' in AISenseConfig_Hearing.h"
#endif
#define AIMODULE_AISenseConfig_Hearing_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Hearing(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Hearing_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig_Hearing, UAISenseConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISenseConfig_Hearing)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseConfig_Hearing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Hearing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig_Hearing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Hearing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISenseConfig_Hearing(UAISenseConfig_Hearing&&); \
	UAISenseConfig_Hearing(const UAISenseConfig_Hearing&); \
public: \
	AIMODULE_API virtual ~UAISenseConfig_Hearing();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_20_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseConfig_Hearing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
