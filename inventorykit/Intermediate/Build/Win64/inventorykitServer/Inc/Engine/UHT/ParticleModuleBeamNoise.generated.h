// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Beam/ParticleModuleBeamNoise.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleBeamNoise_generated_h
#error "ParticleModuleBeamNoise.generated.h already included, missing '#pragma once' in ParticleModuleBeamNoise.h"
#endif
#define ENGINE_ParticleModuleBeamNoise_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleBeamNoise(); \
	friend struct Z_Construct_UClass_UParticleModuleBeamNoise_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleBeamNoise, UParticleModuleBeamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleBeamNoise)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleBeamNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleBeamNoise); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamNoise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleBeamNoise(UParticleModuleBeamNoise&&); \
	UParticleModuleBeamNoise(const UParticleModuleBeamNoise&); \
public: \
	ENGINE_API virtual ~UParticleModuleBeamNoise();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleBeamNoise>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
