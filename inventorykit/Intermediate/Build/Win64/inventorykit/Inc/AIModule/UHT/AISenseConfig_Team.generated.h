// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig_Team.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseConfig_Team_generated_h
#error "AISenseConfig_Team.generated.h already included, missing '#pragma once' in AISenseConfig_Team.h"
#endif
#define AIMODULE_AISenseConfig_Team_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig_Team(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Team_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig_Team, UAISenseConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISenseConfig_Team)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISenseConfig_Team(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig_Team) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig_Team); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig_Team); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISenseConfig_Team(UAISenseConfig_Team&&); \
	UAISenseConfig_Team(const UAISenseConfig_Team&); \
public: \
	AIMODULE_API virtual ~UAISenseConfig_Team();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h_16_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseConfig_Team>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Team_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
