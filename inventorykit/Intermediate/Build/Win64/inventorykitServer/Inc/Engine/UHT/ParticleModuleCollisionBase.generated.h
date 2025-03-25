// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Collision/ParticleModuleCollisionBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleCollisionBase_generated_h
#error "ParticleModuleCollisionBase.generated.h already included, missing '#pragma once' in ParticleModuleCollisionBase.h"
#endif
#define ENGINE_ParticleModuleCollisionBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleCollisionBase(); \
	friend struct Z_Construct_UClass_UParticleModuleCollisionBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleCollisionBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleCollisionBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleCollisionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleCollisionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleCollisionBase(UParticleModuleCollisionBase&&); \
	UParticleModuleCollisionBase(const UParticleModuleCollisionBase&); \
public: \
	NO_API virtual ~UParticleModuleCollisionBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleCollisionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h


#define FOREACH_ENUM_EPARTICLECOLLISIONCOMPLETE(op) \
	op(EPCC_Kill) \
	op(EPCC_Freeze) \
	op(EPCC_HaltCollisions) \
	op(EPCC_FreezeTranslation) \
	op(EPCC_FreezeRotation) \
	op(EPCC_FreezeMovement) 

enum EParticleCollisionComplete : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleCollisionComplete>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
