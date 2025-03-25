// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PawnMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UPrimitiveComponent;
enum class EPhysicsStateAction : uint8;
struct FAsyncPhysicsTimestamp;
#ifdef ENGINE_PawnMovementComponent_generated_h
#error "PawnMovementComponent.generated.h already included, missing '#pragma once' in PawnMovementComponent.h"
#endif
#define ENGINE_PawnMovementComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	ENGINE_API virtual void MulticastAsyncPhysicsStateAction_Implementation(const UPrimitiveComponent* ActionComponent, const FName BoneName, const FAsyncPhysicsTimestamp Timestamp, const EPhysicsStateAction ActionType, const FVector ActionDatas, const FVector ActionPosition); \
	ENGINE_API virtual void ServerAsyncPhysicsStateAction_Implementation(const UPrimitiveComponent* ActionComponent, const FName BoneName, const FAsyncPhysicsTimestamp Timestamp, const EPhysicsStateAction ActionType, const FVector ActionDatas, const FVector ActionPosition); \
	DECLARE_FUNCTION(execMulticastAsyncPhysicsStateAction); \
	DECLARE_FUNCTION(execServerAsyncPhysicsStateAction); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execIsMoveInputIgnored); \
	DECLARE_FUNCTION(execConsumeInputVector); \
	DECLARE_FUNCTION(execGetLastInputVector); \
	DECLARE_FUNCTION(execGetPendingInputVector); \
	DECLARE_FUNCTION(execAddInputVector);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPawnMovementComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnMovementComponent(); \
	friend struct Z_Construct_UClass_UPawnMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPawnMovementComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPawnMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnMovementComponent(UPawnMovementComponent&&); \
	UPawnMovementComponent(const UPawnMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPawnMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnMovementComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnMovementComponent) \
	ENGINE_API virtual ~UPawnMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_41_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPawnMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h


#define FOREACH_ENUM_EPHYSICSSTATEACTION(op) \
	op(EPhysicsStateAction::AddForce) \
	op(EPhysicsStateAction::AddTorque) \
	op(EPhysicsStateAction::AddForceAtPosition) \
	op(EPhysicsStateAction::AddLinearVelocity) \
	op(EPhysicsStateAction::AddAngularVelocity) \
	op(EPhysicsStateAction::AddVelocityAtPosition) \
	op(EPhysicsStateAction::AddLinearImpulse) \
	op(EPhysicsStateAction::AddAngularImpulse) \
	op(EPhysicsStateAction::AddImpulseAtPosition) \
	op(EPhysicsStateAction::AddAcceleration) \
	op(EPhysicsStateAction::NumActions) 

enum class EPhysicsStateAction : uint8;
template<> struct TIsUEnumClass<EPhysicsStateAction> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPhysicsStateAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
