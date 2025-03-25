// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Rotation/ParticleModuleRotation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleRotation_generated_h
#error "ParticleModuleRotation.generated.h already included, missing '#pragma once' in ParticleModuleRotation.h"
#endif
#define ENGINE_ParticleModuleRotation_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleRotation(); \
	friend struct Z_Construct_UClass_UParticleModuleRotation_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleRotation, UParticleModuleRotationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleRotation)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleRotation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleRotation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleRotation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleRotation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleRotation(UParticleModuleRotation&&); \
	UParticleModuleRotation(const UParticleModuleRotation&); \
public: \
	ENGINE_API virtual ~UParticleModuleRotation();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleRotation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
