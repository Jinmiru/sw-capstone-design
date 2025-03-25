// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTAuxiliaryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTAuxiliaryNode_generated_h
#error "BTAuxiliaryNode.generated.h already included, missing '#pragma once' in BTAuxiliaryNode.h"
#endif
#define AIMODULE_BTAuxiliaryNode_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUBTAuxiliaryNode(); \
	friend struct Z_Construct_UClass_UBTAuxiliaryNode_Statics; \
public: \
	DECLARE_CLASS(UBTAuxiliaryNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTAuxiliaryNode)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTAuxiliaryNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTAuxiliaryNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTAuxiliaryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTAuxiliaryNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTAuxiliaryNode(UBTAuxiliaryNode&&); \
	UBTAuxiliaryNode(const UBTAuxiliaryNode&); \
public: \
	AIMODULE_API virtual ~UBTAuxiliaryNode();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_29_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_32_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTAuxiliaryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
