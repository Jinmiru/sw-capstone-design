// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense_Team.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISense_Team_generated_h
#error "AISense_Team.generated.h already included, missing '#pragma once' in AISense_Team.h"
#endif
#define AIMODULE_AISense_Team_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAITeamStimulusEvent>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Team(); \
	friend struct Z_Construct_UClass_UAISense_Team_Statics; \
public: \
	DECLARE_CLASS(UAISense_Team, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISense_Team)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAISense_Team(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Team) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISense_Team); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Team); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISense_Team(UAISense_Team&&); \
	UAISense_Team(const UAISense_Team&); \
public: \
	AIMODULE_API virtual ~UAISense_Team();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_49_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Team>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
