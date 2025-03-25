// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FConstraintInstanceAccessor;
#ifdef ENGINE_PhysicsConstraintComponent_generated_h
#error "PhysicsConstraintComponent.generated.h already included, missing '#pragma once' in PhysicsConstraintComponent.h"
#endif
#define ENGINE_PhysicsConstraintComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetConstraint); \
	DECLARE_FUNCTION(execIsBroken); \
	DECLARE_FUNCTION(execGetConstraintForce); \
	DECLARE_FUNCTION(execSetProjectionParams); \
	DECLARE_FUNCTION(execIsProjectionEnabled); \
	DECLARE_FUNCTION(execSetProjectionEnabled); \
	DECLARE_FUNCTION(execSetDisableCollision); \
	DECLARE_FUNCTION(execSetConstraintReferenceOrientation); \
	DECLARE_FUNCTION(execSetConstraintReferencePosition); \
	DECLARE_FUNCTION(execSetConstraintReferenceFrame); \
	DECLARE_FUNCTION(execGetCurrentSwing2); \
	DECLARE_FUNCTION(execGetCurrentSwing1); \
	DECLARE_FUNCTION(execGetCurrentTwist); \
	DECLARE_FUNCTION(execSetContactTransferScale); \
	DECLARE_FUNCTION(execSetAngularPlasticity); \
	DECLARE_FUNCTION(execSetAngularBreakable); \
	DECLARE_FUNCTION(execSetLinearPlasticity); \
	DECLARE_FUNCTION(execSetLinearBreakable); \
	DECLARE_FUNCTION(execSetAngularTwistLimit); \
	DECLARE_FUNCTION(execSetAngularSwing2Limit); \
	DECLARE_FUNCTION(execSetAngularSwing1Limit); \
	DECLARE_FUNCTION(execSetLinearZLimit); \
	DECLARE_FUNCTION(execSetLinearYLimit); \
	DECLARE_FUNCTION(execSetLinearXLimit); \
	DECLARE_FUNCTION(execSetAngularDriveParams); \
	DECLARE_FUNCTION(execSetAngularVelocityTarget); \
	DECLARE_FUNCTION(execSetAngularOrientationTarget); \
	DECLARE_FUNCTION(execSetLinearDriveParams); \
	DECLARE_FUNCTION(execSetLinearVelocityTarget); \
	DECLARE_FUNCTION(execSetLinearPositionTarget); \
	DECLARE_FUNCTION(execSetAngularDriveMode); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveSLERP); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetAngularVelocityDrive); \
	DECLARE_FUNCTION(execSetOrientationDriveSLERP); \
	DECLARE_FUNCTION(execSetOrientationDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetAngularOrientationDrive); \
	DECLARE_FUNCTION(execSetLinearVelocityDrive); \
	DECLARE_FUNCTION(execSetLinearPositionDrive); \
	DECLARE_FUNCTION(execBreakConstraint); \
	DECLARE_FUNCTION(execGetConstrainedComponents); \
	DECLARE_FUNCTION(execSetConstrainedComponents);


#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsConstraintComponent, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsConstraintComponent(); \
	friend struct Z_Construct_UClass_UPhysicsConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsConstraintComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsConstraintComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsConstraintComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsConstraintComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsConstraintComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsConstraintComponent(UPhysicsConstraintComponent&&); \
	UPhysicsConstraintComponent(const UPhysicsConstraintComponent&); \
public: \
	ENGINE_API virtual ~UPhysicsConstraintComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsConstraintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
