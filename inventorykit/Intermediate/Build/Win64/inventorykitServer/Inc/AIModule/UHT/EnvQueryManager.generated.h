// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnvQuery;
class UEnvQueryInstanceBlueprintWrapper;
class UObject;
#ifdef AIMODULE_EnvQueryManager_generated_h
#error "EnvQueryManager.generated.h already included, missing '#pragma once' in EnvQueryManager.h"
#endif
#define AIMODULE_EnvQueryManager_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FEnvQueryManagerConfig>();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnvQueryRequest_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FEnvQueryRequest>();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FEnvQueryInstanceCache>();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_208_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRunEQSQuery);


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_208_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryManager(); \
	friend struct Z_Construct_UClass_UEnvQueryManager_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryManager, UAISubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_208_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvQueryManager(UEnvQueryManager&&); \
	UEnvQueryManager(const UEnvQueryManager&); \
public: \
	AIMODULE_API virtual ~UEnvQueryManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_205_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_208_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_208_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_208_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_208_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
