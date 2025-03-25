// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BehaviorTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BehaviorTree_generated_h
#error "BehaviorTree.generated.h already included, missing '#pragma once' in BehaviorTree.h"
#endif
#define AIMODULE_BehaviorTree_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTree(); \
	friend struct Z_Construct_UClass_UBehaviorTree_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTree, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBehaviorTree) \
	virtual UObject* _getUObject() const override { return const_cast<UBehaviorTree*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBehaviorTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBehaviorTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviorTree(UBehaviorTree&&); \
	UBehaviorTree(const UBehaviorTree&); \
public: \
	AIMODULE_API virtual ~UBehaviorTree();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBehaviorTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
