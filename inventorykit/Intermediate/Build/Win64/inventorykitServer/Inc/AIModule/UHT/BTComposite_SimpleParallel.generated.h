// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Composites/BTComposite_SimpleParallel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTComposite_SimpleParallel_generated_h
#error "BTComposite_SimpleParallel.generated.h already included, missing '#pragma once' in BTComposite_SimpleParallel.h"
#endif
#define AIMODULE_BTComposite_SimpleParallel_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUBTComposite_SimpleParallel(); \
	friend struct Z_Construct_UClass_UBTComposite_SimpleParallel_Statics; \
public: \
	DECLARE_CLASS(UBTComposite_SimpleParallel, UBTCompositeNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTComposite_SimpleParallel)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTComposite_SimpleParallel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTComposite_SimpleParallel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTComposite_SimpleParallel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTComposite_SimpleParallel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTComposite_SimpleParallel(UBTComposite_SimpleParallel&&); \
	UBTComposite_SimpleParallel(const UBTComposite_SimpleParallel&); \
public: \
	AIMODULE_API virtual ~UBTComposite_SimpleParallel();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_53_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTComposite_SimpleParallel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_SimpleParallel_h


#define FOREACH_ENUM_EBTPARALLELMODE(op) \
	op(EBTParallelMode::AbortBackground) \
	op(EBTParallelMode::WaitForBackground) 

namespace EBTParallelMode { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EBTParallelMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
