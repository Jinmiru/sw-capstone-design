// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Parameter/ParticleModuleParameterDynamic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleParameterDynamic_generated_h
#error "ParticleModuleParameterDynamic.generated.h already included, missing '#pragma once' in ParticleModuleParameterDynamic.h"
#endif
#define ENGINE_ParticleModuleParameterDynamic_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEmitterDynamicParameter>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleParameterDynamic(); \
	friend struct Z_Construct_UClass_UParticleModuleParameterDynamic_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleParameterDynamic, UParticleModuleParameterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleParameterDynamic)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleParameterDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleParameterDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleParameterDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleParameterDynamic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleParameterDynamic(UParticleModuleParameterDynamic&&); \
	UParticleModuleParameterDynamic(const UParticleModuleParameterDynamic&); \
public: \
	ENGINE_API virtual ~UParticleModuleParameterDynamic();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_96_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleParameterDynamic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h


#define FOREACH_ENUM_EEMITTERDYNAMICPARAMETERVALUE(op) \
	op(EDPV_UserSet) \
	op(EDPV_AutoSet) \
	op(EDPV_VelocityX) \
	op(EDPV_VelocityY) \
	op(EDPV_VelocityZ) \
	op(EDPV_VelocityMag) 

enum EEmitterDynamicParameterValue : int;
template<> ENGINE_API UEnum* StaticEnum<EEmitterDynamicParameterValue>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
