// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_DoesPathExist.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_DoesPathExist_generated_h
#error "BTDecorator_DoesPathExist.generated.h already included, missing '#pragma once' in BTDecorator_DoesPathExist.h"
#endif
#define AIMODULE_BTDecorator_DoesPathExist_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_DoesPathExist(); \
	friend struct Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_DoesPathExist, UBTDecorator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTDecorator_DoesPathExist)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_DoesPathExist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_DoesPathExist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_DoesPathExist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_DoesPathExist); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTDecorator_DoesPathExist(UBTDecorator_DoesPathExist&&); \
	UBTDecorator_DoesPathExist(const UBTDecorator_DoesPathExist&); \
public: \
	AIMODULE_API virtual ~UBTDecorator_DoesPathExist();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_32_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_35_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator_DoesPathExist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h


#define FOREACH_ENUM_EPATHEXISTANCEQUERYTYPE(op) \
	op(EPathExistanceQueryType::NavmeshRaycast2D) \
	op(EPathExistanceQueryType::HierarchicalQuery) \
	op(EPathExistanceQueryType::RegularPathFinding) 

namespace EPathExistanceQueryType { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPathExistanceQueryType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
