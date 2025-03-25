// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTDecorator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_generated_h
#error "BTDecorator.generated.h already included, missing '#pragma once' in BTDecorator.h"
#endif
#define AIMODULE_BTDecorator_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator(); \
	friend struct Z_Construct_UClass_UBTDecorator_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator, UBTAuxiliaryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTDecorator)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTDecorator(UBTDecorator&&); \
	UBTDecorator(const UBTDecorator&); \
public: \
	AIMODULE_API virtual ~UBTDecorator();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_36_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
