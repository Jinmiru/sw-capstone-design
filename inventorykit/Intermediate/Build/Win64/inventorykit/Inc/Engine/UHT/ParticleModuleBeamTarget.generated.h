// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Beam/ParticleModuleBeamTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleBeamTarget_generated_h
#error "ParticleModuleBeamTarget.generated.h already included, missing '#pragma once' in ParticleModuleBeamTarget.h"
#endif
#define ENGINE_ParticleModuleBeamTarget_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleBeamTarget(); \
	friend struct Z_Construct_UClass_UParticleModuleBeamTarget_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleBeamTarget, UParticleModuleBeamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleBeamTarget)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleBeamTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleBeamTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleBeamTarget(UParticleModuleBeamTarget&&); \
	UParticleModuleBeamTarget(const UParticleModuleBeamTarget&); \
public: \
	ENGINE_API virtual ~UParticleModuleBeamTarget();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleBeamTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
