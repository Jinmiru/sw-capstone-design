// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/Experimental/ChaosEventRelay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChaosBreakEvent;
struct FChaosCrumblingEvent;
struct FChaosRemovalEvent;
struct FCollisionChaosEvent;
#ifdef ENGINE_ChaosEventRelay_generated_h
#error "ChaosEventRelay.generated.h already included, missing '#pragma once' in ChaosEventRelay.h"
#endif
#define ENGINE_ChaosEventRelay_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_14_DELEGATE \
ENGINE_API void FCollisionEventSignature_DelegateWrapper(const FMulticastScriptDelegate& CollisionEventSignature, TArray<FCollisionChaosEvent> const& CollisionEvents);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_15_DELEGATE \
ENGINE_API void FBreakEventSignature_DelegateWrapper(const FMulticastScriptDelegate& BreakEventSignature, TArray<FChaosBreakEvent> const& BreakEvents);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_16_DELEGATE \
ENGINE_API void FRemovalEventSignature_DelegateWrapper(const FMulticastScriptDelegate& RemovalEventSignature, TArray<FChaosRemovalEvent> const& RemovalEvents);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_17_DELEGATE \
ENGINE_API void FCrumblingEventSignature_DelegateWrapper(const FMulticastScriptDelegate& CrumblingEventSignature, TArray<FChaosCrumblingEvent> const& CrumblingEvents);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosEventRelay(); \
	friend struct Z_Construct_UClass_UChaosEventRelay_Statics; \
public: \
	DECLARE_CLASS(UChaosEventRelay, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UChaosEventRelay)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosEventRelay(UChaosEventRelay&&); \
	UChaosEventRelay(const UChaosEventRelay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UChaosEventRelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosEventRelay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosEventRelay) \
	ENGINE_API virtual ~UChaosEventRelay();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UChaosEventRelay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
