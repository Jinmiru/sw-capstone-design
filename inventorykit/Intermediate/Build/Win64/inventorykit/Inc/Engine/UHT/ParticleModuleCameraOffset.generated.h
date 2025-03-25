// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Camera/ParticleModuleCameraOffset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleCameraOffset_generated_h
#error "ParticleModuleCameraOffset.generated.h already included, missing '#pragma once' in ParticleModuleCameraOffset.h"
#endif
#define ENGINE_ParticleModuleCameraOffset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleCameraOffset(); \
	friend struct Z_Construct_UClass_UParticleModuleCameraOffset_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleCameraOffset, UParticleModuleCameraBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleCameraOffset)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleCameraOffset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCameraOffset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleCameraOffset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCameraOffset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleCameraOffset(UParticleModuleCameraOffset&&); \
	UParticleModuleCameraOffset(const UParticleModuleCameraOffset&); \
public: \
	ENGINE_API virtual ~UParticleModuleCameraOffset();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleCameraOffset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h


#define FOREACH_ENUM_EPARTICLECAMERAOFFSETUPDATEMETHOD(op) \
	op(EPCOUM_DirectSet) \
	op(EPCOUM_Additive) \
	op(EPCOUM_Scalar) 

enum EParticleCameraOffsetUpdateMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleCameraOffsetUpdateMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
