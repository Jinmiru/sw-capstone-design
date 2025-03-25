// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleSystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFXSystemAsset;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;
enum class EAttachmentRule : uint8;
struct FLinearColor;
#ifdef ENGINE_ParticleSystemComponent_generated_h
#error "ParticleSystemComponent.generated.h already included, missing '#pragma once' in ParticleSystemComponent.h"
#endif
#define ENGINE_ParticleSystemComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_96_DELEGATE \
ENGINE_API void FOnSystemFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSystemFinished, UParticleSystemComponent* PSystem);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleSysParam_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleSysParam>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_335_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFXSystemSpawnParameters>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_380_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReleaseToPool); \
	DECLARE_FUNCTION(execSetUseAutoManageAttachment); \
	DECLARE_FUNCTION(execSetAutoAttachmentParameters); \
	DECLARE_FUNCTION(execSetEmitterEnable); \
	DECLARE_FUNCTION(execGetFXSystemAsset); \
	DECLARE_FUNCTION(execSetActorParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_380_INCLASS \
private: \
	static void StaticRegisterNativesUFXSystemComponent(); \
	friend struct Z_Construct_UClass_UFXSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UFXSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFXSystemComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_380_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFXSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFXSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFXSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFXSystemComponent(UFXSystemComponent&&); \
	UFXSystemComponent(const UFXSystemComponent&); \
public: \
	ENGINE_API virtual ~UFXSystemComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_377_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_380_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_380_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_380_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_380_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFXSystemComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_490_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGenerateParticleEvent); \
	DECLARE_FUNCTION(execGetNamedMaterial); \
	DECLARE_FUNCTION(execCreateNamedDynamicMaterialInstance); \
	DECLARE_FUNCTION(execSetTrailSourceData); \
	DECLARE_FUNCTION(execEndTrails); \
	DECLARE_FUNCTION(execBeginTrails); \
	DECLARE_FUNCTION(execGetNumActiveParticles); \
	DECLARE_FUNCTION(execSetTemplate); \
	DECLARE_FUNCTION(execSetMaterialParameter); \
	DECLARE_FUNCTION(execGetBeamTargetStrength); \
	DECLARE_FUNCTION(execGetBeamTargetTangent); \
	DECLARE_FUNCTION(execGetBeamTargetPoint); \
	DECLARE_FUNCTION(execGetBeamSourceStrength); \
	DECLARE_FUNCTION(execGetBeamSourceTangent); \
	DECLARE_FUNCTION(execGetBeamSourcePoint); \
	DECLARE_FUNCTION(execGetBeamEndPoint); \
	DECLARE_FUNCTION(execSetBeamTargetStrength); \
	DECLARE_FUNCTION(execSetBeamTargetTangent); \
	DECLARE_FUNCTION(execSetBeamTargetPoint); \
	DECLARE_FUNCTION(execSetBeamSourceStrength); \
	DECLARE_FUNCTION(execSetBeamSourceTangent); \
	DECLARE_FUNCTION(execSetBeamSourcePoint); \
	DECLARE_FUNCTION(execSetBeamEndPoint); \
	DECLARE_FUNCTION(execSetAutoAttachParams);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_490_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_490_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemComponent(); \
	friend struct Z_Construct_UClass_UParticleSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UParticleSystemComponent, UFXSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleSystemComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_490_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_490_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleSystemComponent(UParticleSystemComponent&&); \
	UParticleSystemComponent(const UParticleSystemComponent&); \
public: \
	ENGINE_API virtual ~UParticleSystemComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_485_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_490_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_490_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_490_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_490_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h


#define FOREACH_ENUM_EPARTICLESYSPARAMTYPE(op) \
	op(PSPT_None) \
	op(PSPT_Scalar) \
	op(PSPT_ScalarRand) \
	op(PSPT_Vector) \
	op(PSPT_VectorRand) \
	op(PSPT_Color) \
	op(PSPT_Actor) \
	op(PSPT_Material) \
	op(PSPT_VectorUnitRand) 

enum EParticleSysParamType : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleSysParamType>();

#define FOREACH_ENUM_PARTICLEREPLAYSTATE(op) \
	op(PRS_Disabled) \
	op(PRS_Capturing) \
	op(PRS_Replaying) 

enum ParticleReplayState : int;
template<> ENGINE_API UEnum* StaticEnum<ParticleReplayState>();

#define FOREACH_ENUM_EPARTICLEEVENTTYPE(op) \
	op(EPET_Any) \
	op(EPET_Spawn) \
	op(EPET_Death) \
	op(EPET_Collision) \
	op(EPET_Burst) \
	op(EPET_Blueprint) 

enum EParticleEventType : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
