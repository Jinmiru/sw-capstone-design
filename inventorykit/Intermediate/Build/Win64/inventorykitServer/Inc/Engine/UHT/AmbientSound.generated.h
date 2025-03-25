// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/AmbientSound.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AmbientSound_generated_h
#error "AmbientSound.generated.h already included, missing '#pragma once' in AmbientSound.h"
#endif
#define ENGINE_AmbientSound_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAmbientSound(); \
	friend struct Z_Construct_UClass_AAmbientSound_Statics; \
public: \
	DECLARE_CLASS(AAmbientSound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AAmbientSound)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmbientSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AAmbientSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmbientSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAmbientSound(AAmbientSound&&); \
	AAmbientSound(const AAmbientSound&); \
public: \
	ENGINE_API virtual ~AAmbientSound();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AAmbientSound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
