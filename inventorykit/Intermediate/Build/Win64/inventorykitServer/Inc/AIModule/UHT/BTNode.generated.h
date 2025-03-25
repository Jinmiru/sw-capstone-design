// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTNode_generated_h
#error "BTNode.generated.h already included, missing '#pragma once' in BTNode.h"
#endif
#define AIMODULE_BTNode_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUBTNode(); \
	friend struct Z_Construct_UClass_UBTNode_Statics; \
public: \
	DECLARE_CLASS(UBTNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTNode) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UBTNode*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTNode(UBTNode&&); \
	UBTNode(const UBTNode&); \
public: \
	AIMODULE_API virtual ~UBTNode();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_37_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_40_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
