// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryNode_generated_h
#error "EnvQueryNode.generated.h already included, missing '#pragma once' in EnvQueryNode.h"
#endif
#define AIMODULE_EnvQueryNode_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryNode(); \
	friend struct Z_Construct_UClass_UEnvQueryNode_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryNode)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQueryNode(UEnvQueryNode&&); \
	UEnvQueryNode(const UEnvQueryNode&); \
public: \
	AIMODULE_API virtual ~UEnvQueryNode();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_16_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
