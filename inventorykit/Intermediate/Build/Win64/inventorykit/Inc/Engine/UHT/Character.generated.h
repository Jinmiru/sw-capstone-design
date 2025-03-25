// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAnimMontage;
class UPrimitiveComponent;
struct FCharacterMoveResponsePackedBits;
struct FCharacterServerMovePackedBits;
struct FHitResult;
struct FRootMotionSourceGroup;
struct FVector_NetQuantize100;
struct FVector_NetQuantize10;
struct FVector_NetQuantizeNormal;
#ifdef ENGINE_Character_generated_h
#error "Character.generated.h already included, missing '#pragma once' in Character.h"
#endif
#define ENGINE_Character_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_33_DELEGATE \
ENGINE_API void FMovementModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MovementModeChangedSignature, ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_34_DELEGATE \
ENGINE_API void FCharacterMovementUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterMovementUpdatedSignature, float DeltaSeconds, FVector OldLocation, FVector OldVelocity);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_35_DELEGATE \
ENGINE_API void FCharacterReachedApexSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterReachedApexSignature);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_36_DELEGATE \
ENGINE_API void FLandedSignature_DelegateWrapper(const FMulticastScriptDelegate& LandedSignature, FHitResult const& Hit);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRepRootMotionMontage>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSimulatedRootMotionReplicatedMove>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBasedMovementInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBasedMovementInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_242_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale); \
	DECLARE_FUNCTION(execIsPlayingNetworkedRootMotionMontage); \
	DECLARE_FUNCTION(execHasAnyRootMotion); \
	DECLARE_FUNCTION(execIsPlayingRootMotion); \
	DECLARE_FUNCTION(execOnRep_RootMotion); \
	DECLARE_FUNCTION(execRootMotionDebugClientPrintOnScreen); \
	DECLARE_FUNCTION(execClientCheatGhost); \
	DECLARE_FUNCTION(execClientCheatFly); \
	DECLARE_FUNCTION(execClientCheatWalk); \
	DECLARE_FUNCTION(execCanCrouch); \
	DECLARE_FUNCTION(execUnCrouch); \
	DECLARE_FUNCTION(execCrouch); \
	DECLARE_FUNCTION(execOnWalkingOffLedge); \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execLaunchCharacter); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execStopAnimMontage); \
	DECLARE_FUNCTION(execPlayAnimMontage); \
	DECLARE_FUNCTION(execIsJumpProvidingForce); \
	DECLARE_FUNCTION(execCanJumpInternal); \
	DECLARE_FUNCTION(execCanJump); \
	DECLARE_FUNCTION(execStopJumping); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execOnRep_IsCrouched); \
	DECLARE_FUNCTION(execGetBaseRotationOffsetRotator); \
	DECLARE_FUNCTION(execGetBaseTranslationOffset); \
	DECLARE_FUNCTION(execOnRep_ReplayLastTransformUpdateTimeStamp); \
	DECLARE_FUNCTION(execOnRep_ReplicatedBasedMovement); \
	DECLARE_FUNCTION(execCacheInitialMeshOffset); \
	DECLARE_FUNCTION(execClientAdjustRootMotionSourcePosition); \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition); \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition); \
	DECLARE_FUNCTION(execClientAdjustPosition); \
	DECLARE_FUNCTION(execClientAckGoodMove); \
	DECLARE_FUNCTION(execServerMoveOld); \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion); \
	DECLARE_FUNCTION(execServerMoveDualNoBase); \
	DECLARE_FUNCTION(execServerMoveDual); \
	DECLARE_FUNCTION(execServerMoveNoBase); \
	DECLARE_FUNCTION(execServerMove); \
	DECLARE_FUNCTION(execClientMoveResponsePacked); \
	DECLARE_FUNCTION(execServerMovePacked);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_242_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_242_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter(); \
	friend struct Z_Construct_UClass_ACharacter_Statics; \
public: \
	DECLARE_CLASS(ACharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ACharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedBasedMovement=NETFIELD_REP_START, \
		AnimRootMotionTranslationScale, \
		ReplicatedServerLastTransformUpdateTimeStamp, \
		ReplayLastTransformUpdateTimeStamp, \
		ReplicatedMovementMode, \
		ReplicatedGravityDirection, \
		bIsCrouched, \
		bProxyIsJumpForceApplied, \
		JumpMaxHoldTime, \
		JumpMaxCount, \
		RepRootMotion, \
		NETFIELD_REP_END=RepRootMotion	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_242_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACharacter(ACharacter&&); \
	ACharacter(const ACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ACharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter) \
	ENGINE_API virtual ~ACharacter();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_239_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_242_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_242_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_242_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_242_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_242_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ACharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
