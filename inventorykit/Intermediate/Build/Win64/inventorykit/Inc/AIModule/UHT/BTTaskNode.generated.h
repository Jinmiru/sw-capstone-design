// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTTaskNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTaskNode_generated_h
#error "BTTaskNode.generated.h already included, missing '#pragma once' in BTTaskNode.h"
#endif
#define AIMODULE_BTTaskNode_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBTTaskNode(); \
	friend struct Z_Construct_UClass_UBTTaskNode_Statics; \
public: \
	DECLARE_CLASS(UBTTaskNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTTaskNode)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTaskNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTaskNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTaskNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTaskNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTaskNode(UBTTaskNode&&); \
	UBTTaskNode(const UBTTaskNode&); \
public: \
	AIMODULE_API virtual ~UBTTaskNode();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_32_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTaskNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
