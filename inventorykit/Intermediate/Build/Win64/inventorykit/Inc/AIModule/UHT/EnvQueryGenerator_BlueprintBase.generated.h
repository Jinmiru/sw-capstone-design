// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef AIMODULE_EnvQueryGenerator_BlueprintBase_generated_h
#error "EnvQueryGenerator_BlueprintBase.generated.h already included, missing '#pragma once' in EnvQueryGenerator_BlueprintBase.h"
#endif
#define AIMODULE_EnvQueryGenerator_BlueprintBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetQuerier); \
	DECLARE_FUNCTION(execAddGeneratedActor); \
	DECLARE_FUNCTION(execAddGeneratedVector);


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator_BlueprintBase(); \
	friend struct Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryGenerator_BlueprintBase, UEnvQueryGenerator, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryGenerator_BlueprintBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryGenerator_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryGenerator_BlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQueryGenerator_BlueprintBase(UEnvQueryGenerator_BlueprintBase&&); \
	UEnvQueryGenerator_BlueprintBase(const UEnvQueryGenerator_BlueprintBase&); \
public: \
	AIMODULE_API virtual ~UEnvQueryGenerator_BlueprintBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_16_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryGenerator_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
