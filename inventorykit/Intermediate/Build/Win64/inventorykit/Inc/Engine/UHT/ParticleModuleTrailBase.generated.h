// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Trail/ParticleModuleTrailBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleTrailBase_generated_h
#error "ParticleModuleTrailBase.generated.h already included, missing '#pragma once' in ParticleModuleTrailBase.h"
#endif
#define ENGINE_ParticleModuleTrailBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTrailBase(); \
	friend struct Z_Construct_UClass_UParticleModuleTrailBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTrailBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleTrailBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleTrailBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTrailBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleTrailBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTrailBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleTrailBase(UParticleModuleTrailBase&&); \
	UParticleModuleTrailBase(const UParticleModuleTrailBase&); \
public: \
	NO_API virtual ~UParticleModuleTrailBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleTrailBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
