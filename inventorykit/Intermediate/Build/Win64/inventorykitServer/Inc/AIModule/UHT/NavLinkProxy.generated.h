// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/NavLinkProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef AIMODULE_NavLinkProxy_generated_h
#error "NavLinkProxy.generated.h already included, missing '#pragma once' in NavLinkProxy.h"
#endif
#define AIMODULE_NavLinkProxy_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_21_DELEGATE \
AIMODULE_API void FSmartLinkReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& SmartLinkReachedSignature, AActor* MovingActor, FVector const& DestinationPoint);


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHasMovingAgents); \
	DECLARE_FUNCTION(execSetSmartLinkEnabled); \
	DECLARE_FUNCTION(execIsSmartLinkEnabled); \
	DECLARE_FUNCTION(execResumePathFollowing);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execCopyEndPointsFromSimpleLinkToSmartLink);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_INCLASS \
private: \
	static void StaticRegisterNativesANavLinkProxy(); \
	friend struct Z_Construct_UClass_ANavLinkProxy_Statics; \
public: \
	DECLARE_CLASS(ANavLinkProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(ANavLinkProxy) \
	virtual UObject* _getUObject() const override { return const_cast<ANavLinkProxy*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API ANavLinkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavLinkProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, ANavLinkProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavLinkProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANavLinkProxy(ANavLinkProxy&&); \
	ANavLinkProxy(const ANavLinkProxy&); \
public: \
	AIMODULE_API virtual ~ANavLinkProxy();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_33_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class ANavLinkProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
