// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleSourceMovement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleSourceMovement_generated_h
#error "ParticleModuleSourceMovement.generated.h already included, missing '#pragma once' in ParticleModuleSourceMovement.h"
#endif
#define ENGINE_ParticleModuleSourceMovement_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSourceMovement(); \
	friend struct Z_Construct_UClass_UParticleModuleSourceMovement_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleSourceMovement, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleSourceMovement)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleSourceMovement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSourceMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleSourceMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSourceMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleSourceMovement(UParticleModuleSourceMovement&&); \
	UParticleModuleSourceMovement(const UParticleModuleSourceMovement&); \
public: \
	ENGINE_API virtual ~UParticleModuleSourceMovement();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleSourceMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleSourceMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
