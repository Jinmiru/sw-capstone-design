// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
#ifdef HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h
#error "MotionControllerComponent.generated.h already included, missing '#pragma once' in MotionControllerComponent.h"
#endif
#define HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetLinearAcceleration); \
	DECLARE_FUNCTION(execGetAngularVelocity); \
	DECLARE_FUNCTION(execGetLinearVelocity); \
	DECLARE_FUNCTION(execGetHandJointPosition); \
	DECLARE_FUNCTION(execGetParameterValue); \
	DECLARE_FUNCTION(execSetAssociatedPlayerIndex); \
	DECLARE_FUNCTION(execSetTrackingMotionSource); \
	DECLARE_FUNCTION(execGetTrackingSource); \
	DECLARE_FUNCTION(execSetTrackingSource); \
	DECLARE_FUNCTION(execIsTracked);


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMotionControllerComponent, HEADMOUNTEDDISPLAY_API)


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), HEADMOUNTEDDISPLAY_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HEADMOUNTEDDISPLAY_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HEADMOUNTEDDISPLAY_API, UMotionControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMotionControllerComponent(UMotionControllerComponent&&); \
	UMotionControllerComponent(const UMotionControllerComponent&); \
public: \
	HEADMOUNTEDDISPLAY_API virtual ~UMotionControllerComponent();


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_17_PROLOG
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_INCLASS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UMotionControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
