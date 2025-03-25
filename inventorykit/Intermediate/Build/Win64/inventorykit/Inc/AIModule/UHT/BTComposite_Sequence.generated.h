// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTComposite_Sequence_generated_h
#error "BTComposite_Sequence.generated.h already included, missing '#pragma once' in BTComposite_Sequence.h"
#endif
#define AIMODULE_BTComposite_Sequence_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBTComposite_Sequence(); \
	friend struct Z_Construct_UClass_UBTComposite_Sequence_Statics; \
public: \
	DECLARE_CLASS(UBTComposite_Sequence, UBTCompositeNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTComposite_Sequence)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTComposite_Sequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTComposite_Sequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTComposite_Sequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTComposite_Sequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTComposite_Sequence(UBTComposite_Sequence&&); \
	UBTComposite_Sequence(const UBTComposite_Sequence&); \
public: \
	AIMODULE_API virtual ~UBTComposite_Sequence();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTComposite_Sequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Sequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
