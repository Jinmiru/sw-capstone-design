// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AIPerceptionSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAISense;
class UAISenseEvent;
class UObject;
struct FAIStimulus;
#ifdef AIMODULE_AIPerceptionSystem_generated_h
#error "AIPerceptionSystem.generated.h already included, missing '#pragma once' in AIPerceptionSystem.h"
#endif
#define AIMODULE_AIPerceptionSystem_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPerceptionStimuliSourceEndPlay); \
	DECLARE_FUNCTION(execGetSenseClassForStimulus); \
	DECLARE_FUNCTION(execRegisterPerceptionStimuliSource); \
	DECLARE_FUNCTION(execReportPerceptionEvent); \
	DECLARE_FUNCTION(execReportEvent);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPerceptionSystem(); \
	friend struct Z_Construct_UClass_UAIPerceptionSystem_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionSystem, UAISubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIPerceptionSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIPerceptionSystem(UAIPerceptionSystem&&); \
	UAIPerceptionSystem(const UAIPerceptionSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIPerceptionSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionSystem) \
	AIMODULE_API virtual ~UAIPerceptionSystem();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_29_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIPerceptionSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
