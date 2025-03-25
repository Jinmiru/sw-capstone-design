// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/CrowdFollowingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_CrowdFollowingComponent_generated_h
#error "CrowdFollowingComponent.generated.h already included, missing '#pragma once' in CrowdFollowingComponent.h"
#endif
#define AIMODULE_CrowdFollowingComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_40_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSuspendCrowdSteering);


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUCrowdFollowingComponent(); \
	friend struct Z_Construct_UClass_UCrowdFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(UCrowdFollowingComponent, UPathFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UCrowdFollowingComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCrowdFollowingComponent*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdFollowingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UCrowdFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdFollowingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCrowdFollowingComponent(UCrowdFollowingComponent&&); \
	UCrowdFollowingComponent(const UCrowdFollowingComponent&); \
public: \
	AIMODULE_API virtual ~UCrowdFollowingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_37_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_40_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_40_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UCrowdFollowingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
