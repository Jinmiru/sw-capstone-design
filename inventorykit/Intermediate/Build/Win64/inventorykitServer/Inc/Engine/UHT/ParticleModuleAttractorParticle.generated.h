// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Attractor/ParticleModuleAttractorParticle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleAttractorParticle_generated_h
#error "ParticleModuleAttractorParticle.generated.h already included, missing '#pragma once' in ParticleModuleAttractorParticle.h"
#endif
#define ENGINE_ParticleModuleAttractorParticle_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAttractorParticle(); \
	friend struct Z_Construct_UClass_UParticleModuleAttractorParticle_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleAttractorParticle, UParticleModuleAttractorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleAttractorParticle)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAttractorParticle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAttractorParticle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAttractorParticle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAttractorParticle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleAttractorParticle(UParticleModuleAttractorParticle&&); \
	UParticleModuleAttractorParticle(const UParticleModuleAttractorParticle&); \
public: \
	ENGINE_API virtual ~UParticleModuleAttractorParticle();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleAttractorParticle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h


#define FOREACH_ENUM_EATTRACTORPARTICLESELECTIONMETHOD(op) \
	op(EAPSM_Random) \
	op(EAPSM_Sequential) 

enum EAttractorParticleSelectionMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EAttractorParticleSelectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
