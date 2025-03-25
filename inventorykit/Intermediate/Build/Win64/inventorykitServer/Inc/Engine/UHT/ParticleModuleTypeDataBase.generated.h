// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleTypeDataBase_generated_h
#error "ParticleModuleTypeDataBase.generated.h already included, missing '#pragma once' in ParticleModuleTypeDataBase.h"
#endif
#define ENGINE_ParticleModuleTypeDataBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataBase(); \
	friend struct Z_Construct_UClass_UParticleModuleTypeDataBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTypeDataBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleTypeDataBase(UParticleModuleTypeDataBase&&); \
	UParticleModuleTypeDataBase(const UParticleModuleTypeDataBase&); \
public: \
	ENGINE_API virtual ~UParticleModuleTypeDataBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleTypeDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
