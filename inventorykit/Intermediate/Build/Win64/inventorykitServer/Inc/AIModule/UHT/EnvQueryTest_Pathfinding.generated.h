// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryTest_Pathfinding_generated_h
#error "EnvQueryTest_Pathfinding.generated.h already included, missing '#pragma once' in EnvQueryTest_Pathfinding.h"
#endif
#define AIMODULE_EnvQueryTest_Pathfinding_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Pathfinding(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Pathfinding_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Pathfinding, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Pathfinding)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryTest_Pathfinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Pathfinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryTest_Pathfinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Pathfinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQueryTest_Pathfinding(UEnvQueryTest_Pathfinding&&); \
	UEnvQueryTest_Pathfinding(const UEnvQueryTest_Pathfinding&); \
public: \
	AIMODULE_API virtual ~UEnvQueryTest_Pathfinding();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_32_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_35_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryTest_Pathfinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Pathfinding_h


#define FOREACH_ENUM_EENVTESTPATHFINDING(op) \
	op(EEnvTestPathfinding::PathExist) \
	op(EEnvTestPathfinding::PathCost) \
	op(EEnvTestPathfinding::PathLength) 

namespace EEnvTestPathfinding { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestPathfinding::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
