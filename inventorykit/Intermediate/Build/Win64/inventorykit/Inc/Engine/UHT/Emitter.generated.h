// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Emitter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicalMaterial;
struct FLinearColor;
#ifdef ENGINE_Emitter_generated_h
#error "Emitter.generated.h already included, missing '#pragma once' in Emitter.h"
#endif
#define ENGINE_Emitter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_22_DELEGATE \
ENGINE_API void FParticleSpawnSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleSpawnSignature, FName EventName, float EmitterTime, FVector Location, FVector Velocity);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_29_DELEGATE \
ENGINE_API void FParticleBurstSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleBurstSignature, FName EventName, float EmitterTime, int32 ParticleCount);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_39_DELEGATE \
ENGINE_API void FParticleDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleDeathSignature, FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_52_DELEGATE \
ENGINE_API void FParticleCollisionSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleCollisionSignature, FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMaterialParameter); \
	DECLARE_FUNCTION(execSetActorParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetTemplate); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execToggleActive); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execOnRep_bCurrentlyActive); \
	DECLARE_FUNCTION(execOnParticleSystemFinished);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_INCLASS \
private: \
	static void StaticRegisterNativesAEmitter(); \
	friend struct Z_Construct_UClass_AEmitter_Statics; \
public: \
	DECLARE_CLASS(AEmitter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AEmitter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bCurrentlyActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bCurrentlyActive	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmitter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEmitter(AEmitter&&); \
	AEmitter(const AEmitter&); \
public: \
	ENGINE_API virtual ~AEmitter();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_54_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AEmitter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
