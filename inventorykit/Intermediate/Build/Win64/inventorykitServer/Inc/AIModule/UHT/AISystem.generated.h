// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AISystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISystem_generated_h
#error "AISystem.generated.h already included, missing '#pragma once' in AISystem.h"
#endif
#define AIMODULE_AISystem_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAILoggingVerbose); \
	DECLARE_FUNCTION(execAIIgnorePlayers);


#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISystem(); \
	friend struct Z_Construct_UClass_UAISystem_Statics; \
public: \
	DECLARE_CLASS(UAISystem, UAISystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISystem)


#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISystem(UAISystem&&); \
	UAISystem(const UAISystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISystem) \
	AIMODULE_API virtual ~UAISystem();


#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_25_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
