// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTService_BlackboardBase_generated_h
#error "BTService_BlackboardBase.generated.h already included, missing '#pragma once' in BTService_BlackboardBase.h"
#endif
#define AIMODULE_BTService_BlackboardBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBTService_BlackboardBase(); \
	friend struct Z_Construct_UClass_UBTService_BlackboardBase_Statics; \
public: \
	DECLARE_CLASS(UBTService_BlackboardBase, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTService_BlackboardBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTService_BlackboardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_BlackboardBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTService_BlackboardBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_BlackboardBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTService_BlackboardBase(UBTService_BlackboardBase&&); \
	UBTService_BlackboardBase(const UBTService_BlackboardBase&); \
public: \
	AIMODULE_API virtual ~UBTService_BlackboardBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTService_BlackboardBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlackboardBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
