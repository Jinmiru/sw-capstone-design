// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAIPerceptionComponent;
class UBehaviorTree;
class UBlackboardComponent;
class UBlackboardData;
class UDEPRECATED_PawnActionsComponent;
class UGameplayTaskResource;
class UNavigationQueryFilter;
class UPathFollowingComponent;
struct FAIRequestID;
struct FGameplayResourceSet;
#ifdef AIMODULE_AIController_generated_h
#error "AIController.generated.h already included, missing '#pragma once' in AIController.h"
#endif
#define AIMODULE_AIController_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_50_DELEGATE \
AIMODULE_API void FAIMoveCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& AIMoveCompletedSignature, FAIRequestID RequestID, EPathFollowingResult::Type Result);


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeprecatedActionsComponent); \
	DECLARE_FUNCTION(execSetPathFollowingComponent); \
	DECLARE_FUNCTION(execGetAIPerceptionComponent); \
	DECLARE_FUNCTION(execGetPathFollowingComponent); \
	DECLARE_FUNCTION(execOnGameplayTaskResourcesClaimed); \
	DECLARE_FUNCTION(execK2_ClearFocus); \
	DECLARE_FUNCTION(execGetFocusActor); \
	DECLARE_FUNCTION(execK2_SetFocus); \
	DECLARE_FUNCTION(execK2_SetFocalPoint); \
	DECLARE_FUNCTION(execGetFocalPointOnActor); \
	DECLARE_FUNCTION(execGetFocalPoint); \
	DECLARE_FUNCTION(execUnclaimTaskResource); \
	DECLARE_FUNCTION(execClaimTaskResource); \
	DECLARE_FUNCTION(execUseBlackboard); \
	DECLARE_FUNCTION(execRunBehaviorTree); \
	DECLARE_FUNCTION(execSetMoveBlockDetection); \
	DECLARE_FUNCTION(execGetImmediateMoveDestination); \
	DECLARE_FUNCTION(execHasPartialPath); \
	DECLARE_FUNCTION(execGetMoveStatus); \
	DECLARE_FUNCTION(execMoveToLocation); \
	DECLARE_FUNCTION(execMoveToActor);


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_97_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIController(); \
	friend struct Z_Construct_UClass_AAIController_Statics; \
public: \
	DECLARE_CLASS(AAIController, AController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(AAIController) \
	virtual UObject* _getUObject() const override { return const_cast<AAIController*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_97_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAIController(AAIController&&); \
	AAIController(const AAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, AAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIController) \
	AIMODULE_API virtual ~AAIController();


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_94_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_97_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class AAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
