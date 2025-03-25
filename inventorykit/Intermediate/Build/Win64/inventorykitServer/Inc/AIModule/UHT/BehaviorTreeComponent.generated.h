// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BehaviorTreeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviorTree;
struct FGameplayTag;
#ifdef AIMODULE_BehaviorTreeComponent_generated_h
#error "BehaviorTreeComponent.generated.h already included, missing '#pragma once' in BehaviorTreeComponent.h"
#endif
#define AIMODULE_BehaviorTreeComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_106_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetDynamicSubtree); \
	DECLARE_FUNCTION(execAddCooldownTagDuration); \
	DECLARE_FUNCTION(execGetTagCooldownEndTime);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeComponent(); \
	friend struct Z_Construct_UClass_UBehaviorTreeComponent_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeComponent, UBrainComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBehaviorTreeComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeComponent) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviorTreeComponent(UBehaviorTreeComponent&&); \
	UBehaviorTreeComponent(const UBehaviorTreeComponent&); \
public: \
	AIMODULE_API virtual ~UBehaviorTreeComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_103_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_106_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_106_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBehaviorTreeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
