// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationDirect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationDirect_generated_h
#error "ParticleModuleLocationDirect.generated.h already included, missing '#pragma once' in ParticleModuleLocationDirect.h"
#endif
#define ENGINE_ParticleModuleLocationDirect_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationDirect(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationDirect_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationDirect, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationDirect)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationDirect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationDirect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationDirect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationDirect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleLocationDirect(UParticleModuleLocationDirect&&); \
	UParticleModuleLocationDirect(const UParticleModuleLocationDirect&); \
public: \
	ENGINE_API virtual ~UParticleModuleLocationDirect();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLocationDirect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
