// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/PawnAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDEPRECATED_PawnAction;
class UObject;
#ifdef AIMODULE_PawnAction_generated_h
#error "PawnAction.generated.h already included, missing '#pragma once' in PawnAction.h"
#endif
#define AIMODULE_PawnAction_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execCreateActionInstance); \
	DECLARE_FUNCTION(execGetActionPriority);


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_PawnAction(); \
	friend struct Z_Construct_UClass_UDEPRECATED_PawnAction_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_PawnAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UDEPRECATED_PawnAction)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UDEPRECATED_PawnAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_PawnAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UDEPRECATED_PawnAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_PawnAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_PawnAction(UDEPRECATED_PawnAction&&); \
	UDEPRECATED_PawnAction(const UDEPRECATED_PawnAction&); \
public: \
	AIMODULE_API virtual ~UDEPRECATED_PawnAction();


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_46_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UDEPRECATED_PawnAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h


#define FOREACH_ENUM_EPAWNSUBACTIONTRIGGERINGPOLICY(op) \
	op(EPawnSubActionTriggeringPolicy::CopyBeforeTriggering) \
	op(EPawnSubActionTriggeringPolicy::ReuseInstances) 

namespace EPawnSubActionTriggeringPolicy { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPawnSubActionTriggeringPolicy::Type>();

#define FOREACH_ENUM_EPAWNACTIONFAILHANDLING(op) \
	op(EPawnActionFailHandling::RequireSuccess) \
	op(EPawnActionFailHandling::IgnoreFailure) 

namespace EPawnActionFailHandling { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPawnActionFailHandling::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
