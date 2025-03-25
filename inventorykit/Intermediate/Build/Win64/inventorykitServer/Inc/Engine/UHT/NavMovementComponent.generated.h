// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NavMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavMovementComponent_generated_h
#error "NavMovementComponent.generated.h already included, missing '#pragma once' in NavMovementComponent.h"
#endif
#define ENGINE_NavMovementComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsFlying); \
	DECLARE_FUNCTION(execIsSwimming); \
	DECLARE_FUNCTION(execIsMovingOnGround); \
	DECLARE_FUNCTION(execIsFalling); \
	DECLARE_FUNCTION(execIsCrouching); \
	DECLARE_FUNCTION(execStopMovementKeepPathing); \
	DECLARE_FUNCTION(execStopActiveMovement);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUNavMovementComponent(); \
	friend struct Z_Construct_UClass_UNavMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNavMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavMovementComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavMovementComponent(UNavMovementComponent&&); \
	UNavMovementComponent(const UNavMovementComponent&); \
public: \
	ENGINE_API virtual ~UNavMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
