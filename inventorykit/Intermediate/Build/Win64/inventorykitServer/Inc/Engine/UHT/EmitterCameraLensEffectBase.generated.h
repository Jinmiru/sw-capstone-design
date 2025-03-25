// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/EmitterCameraLensEffectBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EmitterCameraLensEffectBase_generated_h
#error "EmitterCameraLensEffectBase.generated.h already included, missing '#pragma once' in EmitterCameraLensEffectBase.h"
#endif
#define ENGINE_EmitterCameraLensEffectBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAEmitterCameraLensEffectBase(); \
	friend struct Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics; \
public: \
	DECLARE_CLASS(AEmitterCameraLensEffectBase, AEmitter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AEmitterCameraLensEffectBase) \
	virtual UObject* _getUObject() const override { return const_cast<AEmitterCameraLensEffectBase*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AEmitterCameraLensEffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmitterCameraLensEffectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AEmitterCameraLensEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmitterCameraLensEffectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEmitterCameraLensEffectBase(AEmitterCameraLensEffectBase&&); \
	AEmitterCameraLensEffectBase(const AEmitterCameraLensEffectBase&); \
public: \
	ENGINE_API virtual ~AEmitterCameraLensEffectBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AEmitterCameraLensEffectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
