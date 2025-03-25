// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SkeletalMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UAnimInstance;
class UClothingSimulationInteractor;
class UObject;
class USkeletalMesh;
enum class ECustomBoneAttributeLookup : uint8;
enum class ETeleportType : uint8;
struct FConstraintInstanceAccessor;
struct FPoseSnapshot;
#ifdef ENGINE_SkeletalMeshComponent_generated_h
#error "SkeletalMeshComponent.generated.h already included, missing '#pragma once' in SkeletalMeshComponent.h"
#endif
#define ENGINE_SkeletalMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_59_DELEGATE \
ENGINE_API void FOnAnimInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnAnimInitialized);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_64_DELEGATE \
ENGINE_API void FOnBoneTransformsFinalized_DelegateWrapper(const FMulticastScriptDelegate& OnBoneTransformsFinalized);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshComponentEndPhysicsTickFunction>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshComponentClothTickFunction>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetCurrentJointAngles); \
	DECLARE_FUNCTION(execSetAngularLimits); \
	DECLARE_FUNCTION(execGetConstraintsFromBody); \
	DECLARE_FUNCTION(execGetConstraints); \
	DECLARE_FUNCTION(execGetConstraintByName); \
	DECLARE_FUNCTION(execBreakConstraint); \
	DECLARE_FUNCTION(execFindConstraintBoneName); \
	DECLARE_FUNCTION(execSetConstraintProfileForAll); \
	DECLARE_FUNCTION(execSetConstraintProfile); \
	DECLARE_FUNCTION(execSetAllMotorsAngularDriveParams); \
	DECLARE_FUNCTION(execSetAllMotorsAngularVelocityDrive); \
	DECLARE_FUNCTION(execSetAllMotorsAngularPositionDrive); \
	DECLARE_FUNCTION(execAccumulateAllBodiesBelowPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetAllBodiesPhysicsBlendWeight); \
	DECLARE_FUNCTION(execResetAllBodiesSimulatePhysics); \
	DECLARE_FUNCTION(execSetBodySimulatePhysics); \
	DECLARE_FUNCTION(execSetAllBodiesBelowSimulatePhysics); \
	DECLARE_FUNCTION(execGetBoneLinearVelocity); \
	DECLARE_FUNCTION(execSetAllBodiesBelowLinearVelocity); \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsDisabled); \
	DECLARE_FUNCTION(execSetEnablePhysicsBlending); \
	DECLARE_FUNCTION(execSetPhysicsBlendWeight); \
	DECLARE_FUNCTION(execSetAllBodiesSimulatePhysics); \
	DECLARE_FUNCTION(execTermBodiesBelow); \
	DECLARE_FUNCTION(execAddImpulseToAllBodiesBelow); \
	DECLARE_FUNCTION(execAddForceToAllBodiesBelow); \
	DECLARE_FUNCTION(execGetSkeletalCenterOfMass); \
	DECLARE_FUNCTION(execGetBoneMass); \
	DECLARE_FUNCTION(execK2_GetClosestPointOnPhysicsAsset); \
	DECLARE_FUNCTION(execSetEnableGravityOnAllBodiesBelow); \
	DECLARE_FUNCTION(execIsBodyGravityEnabled); \
	DECLARE_FUNCTION(execSetEnableBodyGravity); \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollisionBelow); \
	DECLARE_FUNCTION(execSetBodyNotifyRigidBodyCollision); \
	DECLARE_FUNCTION(execGetClothingSimulationInteractor); \
	DECLARE_FUNCTION(execSetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execGetTeleportDistanceThreshold); \
	DECLARE_FUNCTION(execSetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execGetTeleportRotationThreshold); \
	DECLARE_FUNCTION(execSetAllowedAnimCurvesEvaluation); \
	DECLARE_FUNCTION(execResetAllowedAnimCurveEvaluation); \
	DECLARE_FUNCTION(execAllowAnimCurveEvaluation); \
	DECLARE_FUNCTION(execGetAllowedAnimCurveEvaluate); \
	DECLARE_FUNCTION(execSetAllowAnimCurveEvaluation); \
	DECLARE_FUNCTION(execGetDisableAnimCurves); \
	DECLARE_FUNCTION(execSetDisableAnimCurves); \
	DECLARE_FUNCTION(execSetUpdateClothInEditor); \
	DECLARE_FUNCTION(execSetUpdateAnimationInEditor); \
	DECLARE_FUNCTION(execGetAllowRigidBodyAnimNode); \
	DECLARE_FUNCTION(execSetAllowRigidBodyAnimNode); \
	DECLARE_FUNCTION(execUnbindClothFromLeaderPoseComponent); \
	DECLARE_FUNCTION(execBindClothToLeaderPoseComponent); \
	DECLARE_FUNCTION(execResetClothTeleportMode); \
	DECLARE_FUNCTION(execIsClothingSimulationSuspended); \
	DECLARE_FUNCTION(execResumeClothingSimulation); \
	DECLARE_FUNCTION(execSuspendClothingSimulation); \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleportAndReset); \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleport); \
	DECLARE_FUNCTION(execSetClothMaxDistanceScale); \
	DECLARE_FUNCTION(execGetClothMaxDistanceScale); \
	DECLARE_FUNCTION(execGetAllowClothActors); \
	DECLARE_FUNCTION(execSetAllowClothActors); \
	DECLARE_FUNCTION(execSnapshotPose); \
	DECLARE_FUNCTION(execGetMorphTarget); \
	DECLARE_FUNCTION(execClearMorphTargets); \
	DECLARE_FUNCTION(execSetMorphTarget); \
	DECLARE_FUNCTION(execOverrideAnimationData); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execPlayAnimation); \
	DECLARE_FUNCTION(execGetAnimationMode); \
	DECLARE_FUNCTION(execSetAnimationMode); \
	DECLARE_FUNCTION(execResetAnimInstanceDynamics); \
	DECLARE_FUNCTION(execHasValidAnimationInstance); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByClass); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByGroup); \
	DECLARE_FUNCTION(execUnlinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimGraphByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstancesByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstanceByTag); \
	DECLARE_FUNCTION(execGetPostProcessInstance); \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execGetAnimClass); \
	DECLARE_FUNCTION(execSetAnimClass); \
	DECLARE_FUNCTION(execGetStringAttribute); \
	DECLARE_FUNCTION(execGetIntegerAttribute); \
	DECLARE_FUNCTION(execGetTransformAttribute); \
	DECLARE_FUNCTION(execGetFloatAttribute); \
	DECLARE_FUNCTION(execGetStringAttribute_Ref); \
	DECLARE_FUNCTION(execGetIntegerAttribute_Ref); \
	DECLARE_FUNCTION(execGetTransformAttribute_Ref); \
	DECLARE_FUNCTION(execGetFloatAttribute_Ref); \
	DECLARE_FUNCTION(execSetDisablePostProcessBlueprint); \
	DECLARE_FUNCTION(execGetDisablePostProcessBlueprint); \
	DECLARE_FUNCTION(execToggleDisablePostProcessBlueprint); \
	DECLARE_FUNCTION(execGetSkeletalMeshAsset); \
	DECLARE_FUNCTION(execSetSkeletalMeshAsset);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execGetDefaultAnimatingRig); \
	DECLARE_FUNCTION(execGetDefaultAnimatingRigOverride); \
	DECLARE_FUNCTION(execSetDefaultAnimatingRigOverride);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_ACCESSORS \
static void GetSkeletalMeshAsset_WrapperImpl(const void* Object, void* OutValue); \
static void SetSkeletalMeshAsset_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_USkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_USkeletalMeshComponent, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletalMeshComponent(USkeletalMeshComponent&&); \
	USkeletalMeshComponent(const USkeletalMeshComponent&); \
public: \
	ENGINE_API virtual ~USkeletalMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_305_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_308_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h


#define FOREACH_ENUM_ECUSTOMBONEATTRIBUTELOOKUP(op) \
	op(ECustomBoneAttributeLookup::BoneOnly) \
	op(ECustomBoneAttributeLookup::ImmediateParent) \
	op(ECustomBoneAttributeLookup::ParentHierarchy) 

enum class ECustomBoneAttributeLookup : uint8;
template<> struct TIsUEnumClass<ECustomBoneAttributeLookup> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ECustomBoneAttributeLookup>();

#define FOREACH_ENUM_EKINEMATICBONESUPDATETOPHYSICS(op) \
	op(EKinematicBonesUpdateToPhysics::SkipSimulatingBones) \
	op(EKinematicBonesUpdateToPhysics::SkipAllBones) 

namespace EKinematicBonesUpdateToPhysics { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EKinematicBonesUpdateToPhysics::Type>();

#define FOREACH_ENUM_EANIMATIONMODE(op) \
	op(EAnimationMode::AnimationBlueprint) \
	op(EAnimationMode::AnimationSingleNode) \
	op(EAnimationMode::AnimationCustomMode) 

namespace EAnimationMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EAnimationMode::Type>();

#define FOREACH_ENUM_EPHYSICSTRANSFORMUPDATEMODE(op) \
	op(EPhysicsTransformUpdateMode::SimulationUpatesComponentTransform) \
	op(EPhysicsTransformUpdateMode::ComponentTransformIsKinematic) 

namespace EPhysicsTransformUpdateMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EPhysicsTransformUpdateMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
