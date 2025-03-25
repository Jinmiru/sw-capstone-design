// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Event/ParticleModuleEventReceiverSpawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleEventReceiverSpawn_generated_h
#error "ParticleModuleEventReceiverSpawn.generated.h already included, missing '#pragma once' in ParticleModuleEventReceiverSpawn.h"
#endif
#define ENGINE_ParticleModuleEventReceiverSpawn_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleEventReceiverSpawn(); \
	friend struct Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleEventReceiverSpawn, UParticleModuleEventReceiverBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleEventReceiverSpawn)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleEventReceiverSpawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleEventReceiverSpawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleEventReceiverSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleEventReceiverSpawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleEventReceiverSpawn(UParticleModuleEventReceiverSpawn&&); \
	UParticleModuleEventReceiverSpawn(const UParticleModuleEventReceiverSpawn&); \
public: \
	NO_API virtual ~UParticleModuleEventReceiverSpawn();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleEventReceiverSpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
