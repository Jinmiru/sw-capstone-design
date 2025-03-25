// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeParamCrossFade.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeParamCrossFade_generated_h
#error "SoundNodeParamCrossFade.generated.h already included, missing '#pragma once' in SoundNodeParamCrossFade.h"
#endif
#define ENGINE_SoundNodeParamCrossFade_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeParamCrossFade(); \
	friend struct Z_Construct_UClass_USoundNodeParamCrossFade_Statics; \
public: \
	DECLARE_CLASS(USoundNodeParamCrossFade, USoundNodeDistanceCrossFade, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeParamCrossFade)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeParamCrossFade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeParamCrossFade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeParamCrossFade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeParamCrossFade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeParamCrossFade(USoundNodeParamCrossFade&&); \
	USoundNodeParamCrossFade(const USoundNodeParamCrossFade&); \
public: \
	ENGINE_API virtual ~USoundNodeParamCrossFade();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeParamCrossFade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
