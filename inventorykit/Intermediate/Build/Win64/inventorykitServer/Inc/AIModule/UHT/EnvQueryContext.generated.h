// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryContext_generated_h
#error "EnvQueryContext.generated.h already included, missing '#pragma once' in EnvQueryContext.h"
#endif
#define AIMODULE_EnvQueryContext_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryContext(); \
	friend struct Z_Construct_UClass_UEnvQueryContext_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryContext, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryContext)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQueryContext(UEnvQueryContext&&); \
	UEnvQueryContext(const UEnvQueryContext&); \
public: \
	AIMODULE_API virtual ~UEnvQueryContext();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
