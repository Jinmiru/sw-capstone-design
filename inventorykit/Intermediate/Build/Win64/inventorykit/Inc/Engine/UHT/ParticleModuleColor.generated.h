// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Color/ParticleModuleColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleColor_generated_h
#error "ParticleModuleColor.generated.h already included, missing '#pragma once' in ParticleModuleColor.h"
#endif
#define ENGINE_ParticleModuleColor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleColor(); \
	friend struct Z_Construct_UClass_UParticleModuleColor_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleColor, UParticleModuleColorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleColor)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleColor(UParticleModuleColor&&); \
	UParticleModuleColor(const UParticleModuleColor&); \
public: \
	ENGINE_API virtual ~UParticleModuleColor();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
