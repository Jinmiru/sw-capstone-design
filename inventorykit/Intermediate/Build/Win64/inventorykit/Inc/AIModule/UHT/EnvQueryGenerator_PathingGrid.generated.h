// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryGenerator_PathingGrid_generated_h
#error "EnvQueryGenerator_PathingGrid.generated.h already included, missing '#pragma once' in EnvQueryGenerator_PathingGrid.h"
#endif
#define AIMODULE_EnvQueryGenerator_PathingGrid_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator_PathingGrid(); \
	friend struct Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryGenerator_PathingGrid, UEnvQueryGenerator_SimpleGrid, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryGenerator_PathingGrid)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryGenerator_PathingGrid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator_PathingGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryGenerator_PathingGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator_PathingGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQueryGenerator_PathingGrid(UEnvQueryGenerator_PathingGrid&&); \
	UEnvQueryGenerator_PathingGrid(const UEnvQueryGenerator_PathingGrid&); \
public: \
	AIMODULE_API virtual ~UEnvQueryGenerator_PathingGrid();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_21_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_24_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryGenerator_PathingGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
