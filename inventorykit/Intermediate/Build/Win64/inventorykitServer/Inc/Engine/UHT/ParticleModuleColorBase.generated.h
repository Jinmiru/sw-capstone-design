// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Color/ParticleModuleColorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleColorBase_generated_h
#error "ParticleModuleColorBase.generated.h already included, missing '#pragma once' in ParticleModuleColorBase.h"
#endif
#define ENGINE_ParticleModuleColorBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleColorBase(); \
	friend struct Z_Construct_UClass_UParticleModuleColorBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleColorBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleColorBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleColorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleColorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleColorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleColorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleColorBase(UParticleModuleColorBase&&); \
	UParticleModuleColorBase(const UParticleModuleColorBase&); \
public: \
	ENGINE_API virtual ~UParticleModuleColorBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleColorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
