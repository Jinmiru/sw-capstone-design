// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeWaveParam.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeWaveParam_generated_h
#error "SoundNodeWaveParam.generated.h already included, missing '#pragma once' in SoundNodeWaveParam.h"
#endif
#define ENGINE_SoundNodeWaveParam_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeWaveParam(); \
	friend struct Z_Construct_UClass_USoundNodeWaveParam_Statics; \
public: \
	DECLARE_CLASS(USoundNodeWaveParam, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeWaveParam)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeWaveParam(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeWaveParam) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeWaveParam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeWaveParam); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeWaveParam(USoundNodeWaveParam&&); \
	USoundNodeWaveParam(const USoundNodeWaveParam&); \
public: \
	ENGINE_API virtual ~USoundNodeWaveParam();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeWaveParam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
