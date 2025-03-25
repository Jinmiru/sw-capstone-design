// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryOption.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryOption_generated_h
#error "EnvQueryOption.generated.h already included, missing '#pragma once' in EnvQueryOption.h"
#endif
#define AIMODULE_EnvQueryOption_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryOption(); \
	friend struct Z_Construct_UClass_UEnvQueryOption_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryOption, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryOption)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryOption(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryOption) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryOption); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQueryOption(UEnvQueryOption&&); \
	UEnvQueryOption(const UEnvQueryOption&); \
public: \
	AIMODULE_API virtual ~UEnvQueryOption();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryOption>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
