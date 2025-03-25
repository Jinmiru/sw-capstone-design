// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/PawnSensingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef AIMODULE_PawnSensingComponent_generated_h
#error "PawnSensingComponent.generated.h already included, missing '#pragma once' in PawnSensingComponent.h"
#endif
#define AIMODULE_PawnSensingComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_25_DELEGATE \
static AIMODULE_API void FSeePawnDelegate_DelegateWrapper(const FMulticastScriptDelegate& SeePawnDelegate, APawn* Pawn);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_26_DELEGATE \
static AIMODULE_API void FHearNoiseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HearNoiseDelegate, APawn* Instigator, FVector const& Location, float Volume);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPeripheralVisionCosine); \
	DECLARE_FUNCTION(execGetPeripheralVisionAngle); \
	DECLARE_FUNCTION(execSetPeripheralVisionAngle); \
	DECLARE_FUNCTION(execSetSensingUpdatesEnabled); \
	DECLARE_FUNCTION(execSetSensingInterval);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPawnSensingComponent(); \
	friend struct Z_Construct_UClass_UPawnSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UPawnSensingComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UPawnSensingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnSensingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UPawnSensingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnSensingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnSensingComponent(UPawnSensingComponent&&); \
	UPawnSensingComponent(const UPawnSensingComponent&); \
public: \
	AIMODULE_API virtual ~UPawnSensingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_20_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPawnSensingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
