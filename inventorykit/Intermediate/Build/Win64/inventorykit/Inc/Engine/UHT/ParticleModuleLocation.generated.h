// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocation_generated_h
#error "ParticleModuleLocation.generated.h already included, missing '#pragma once' in ParticleModuleLocation.h"
#endif
#define ENGINE_ParticleModuleLocation_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocation(); \
	friend struct Z_Construct_UClass_UParticleModuleLocation_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocation, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLocation)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleLocation(UParticleModuleLocation&&); \
	UParticleModuleLocation(const UParticleModuleLocation&); \
public: \
	ENGINE_API virtual ~UParticleModuleLocation();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
