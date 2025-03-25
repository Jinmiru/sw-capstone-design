// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationSkelVertSurface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationSkelVertSurface_generated_h
#error "ParticleModuleLocationSkelVertSurface.generated.h already included, missing '#pragma once' in ParticleModuleLocationSkelVertSurface.h"
#endif
#define ENGINE_ParticleModuleLocationSkelVertSurface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationSkelVertSurface(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationSkelVertSurface, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationSkelVertSurface)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationSkelVertSurface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationSkelVertSurface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationSkelVertSurface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationSkelVertSurface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleLocationSkelVertSurface(UParticleModuleLocationSkelVertSurface&&); \
	UParticleModuleLocationSkelVertSurface(const UParticleModuleLocationSkelVertSurface&); \
public: \
	ENGINE_API virtual ~UParticleModuleLocationSkelVertSurface();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLocationSkelVertSurface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h


#define FOREACH_ENUM_ELOCATIONSKELVERTSURFACESOURCE(op) \
	op(VERTSURFACESOURCE_Vert) \
	op(VERTSURFACESOURCE_Surface) 

enum ELocationSkelVertSurfaceSource : int;
template<> ENGINE_API UEnum* StaticEnum<ELocationSkelVertSurfaceSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
