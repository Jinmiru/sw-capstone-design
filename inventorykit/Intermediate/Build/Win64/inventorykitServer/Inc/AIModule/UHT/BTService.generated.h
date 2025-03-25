// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTService.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTService_generated_h
#error "BTService.generated.h already included, missing '#pragma once' in BTService.h"
#endif
#define AIMODULE_BTService_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUBTService(); \
	friend struct Z_Construct_UClass_UBTService_Statics; \
public: \
	DECLARE_CLASS(UBTService, UBTAuxiliaryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTService)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTService(UBTService&&); \
	UBTService(const UBTService&); \
public: \
	AIMODULE_API virtual ~UBTService();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_33_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_36_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTService>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
