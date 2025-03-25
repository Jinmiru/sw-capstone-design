// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleSystemReplay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleSystemReplay_generated_h
#error "ParticleSystemReplay.generated.h already included, missing '#pragma once' in ParticleSystemReplay.h"
#endif
#define ENGINE_ParticleSystemReplay_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleEmitterReplayFrame>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleSystemReplayFrame>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemReplay, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemReplay(); \
	friend struct Z_Construct_UClass_UParticleSystemReplay_Statics; \
public: \
	DECLARE_CLASS(UParticleSystemReplay, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleSystemReplay) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemReplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemReplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemReplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemReplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleSystemReplay(UParticleSystemReplay&&); \
	UParticleSystemReplay(const UParticleSystemReplay&); \
public: \
	NO_API virtual ~UParticleSystemReplay();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_66_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleSystemReplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
