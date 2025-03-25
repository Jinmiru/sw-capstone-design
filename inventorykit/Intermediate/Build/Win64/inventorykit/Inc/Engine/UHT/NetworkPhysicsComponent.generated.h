// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/NetworkPhysicsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNetworkPhysicsRewindDataInputProxy;
#ifdef ENGINE_NetworkPhysicsComponent_generated_h
#error "NetworkPhysicsComponent.generated.h already included, missing '#pragma once' in NetworkPhysicsComponent.h"
#endif
#define ENGINE_NetworkPhysicsComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkPhysicsRewindDataProxy>();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataInputProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsRewindDataProxy Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkPhysicsRewindDataInputProxy>();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataStateProxy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsRewindDataProxy Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkPhysicsRewindDataStateProxy>();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_332_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPhysicsSystem(); \
	friend struct Z_Construct_UClass_UNetworkPhysicsSystem_Statics; \
public: \
	DECLARE_CLASS(UNetworkPhysicsSystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetworkPhysicsSystem)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_332_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkPhysicsSystem(UNetworkPhysicsSystem&&); \
	UNetworkPhysicsSystem(const UNetworkPhysicsSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkPhysicsSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPhysicsSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkPhysicsSystem) \
	ENGINE_API virtual ~UNetworkPhysicsSystem();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_327_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_332_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_332_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_332_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkPhysicsSystem>();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_362_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkPhysicsData>();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_451_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsDatas_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkPhysicsDatas>();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_471_RPC_WRAPPERS \
	ENGINE_API virtual void ServerReceiveInputsDatas_Implementation(FNetworkPhysicsRewindDataInputProxy const& ClientInputs); \
	ENGINE_API virtual void ServerReceiveInputData_Implementation(FNetworkPhysicsRewindDataInputProxy const& ClientInputs); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedStates); \
	DECLARE_FUNCTION(execOnRep_SetReplicatedInputs); \
	DECLARE_FUNCTION(execServerReceiveInputsDatas); \
	DECLARE_FUNCTION(execServerReceiveInputData);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_471_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_471_INCLASS \
private: \
	static void StaticRegisterNativesUNetworkPhysicsComponent(); \
	friend struct Z_Construct_UClass_UNetworkPhysicsComponent_Statics; \
public: \
	DECLARE_CLASS(UNetworkPhysicsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetworkPhysicsComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedInputs=NETFIELD_REP_START, \
		ReplicatedStates, \
		NETFIELD_REP_END=ReplicatedStates	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_471_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetworkPhysicsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkPhysicsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPhysicsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkPhysicsComponent(UNetworkPhysicsComponent&&); \
	UNetworkPhysicsComponent(const UNetworkPhysicsComponent&); \
public: \
	ENGINE_API virtual ~UNetworkPhysicsComponent();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_468_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_471_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_471_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_471_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_471_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h_471_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkPhysicsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
