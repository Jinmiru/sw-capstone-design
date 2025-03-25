// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/AITask_RunEQS.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class UAITask_RunEQS;
class UEnvQuery;
#ifdef AIMODULE_AITask_RunEQS_generated_h
#error "AITask_RunEQS.generated.h already included, missing '#pragma once' in AITask_RunEQS.h"
#endif
#define AIMODULE_AITask_RunEQS_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunEQS);


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask_RunEQS(); \
	friend struct Z_Construct_UClass_UAITask_RunEQS_Statics; \
public: \
	DECLARE_CLASS(UAITask_RunEQS, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAITask_RunEQS)


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAITask_RunEQS(UAITask_RunEQS&&); \
	UAITask_RunEQS(const UAITask_RunEQS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAITask_RunEQS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_RunEQS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_RunEQS) \
	AIMODULE_API virtual ~UAITask_RunEQS();


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAITask_RunEQS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
