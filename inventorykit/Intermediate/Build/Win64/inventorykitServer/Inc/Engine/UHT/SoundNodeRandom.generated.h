// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeRandom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeRandom_generated_h
#error "SoundNodeRandom.generated.h already included, missing '#pragma once' in SoundNodeRandom.h"
#endif
#define ENGINE_SoundNodeRandom_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeRandom(); \
	friend struct Z_Construct_UClass_USoundNodeRandom_Statics; \
public: \
	DECLARE_CLASS(USoundNodeRandom, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeRandom)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeRandom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeRandom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeRandom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeRandom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeRandom(USoundNodeRandom&&); \
	USoundNodeRandom(const USoundNodeRandom&); \
public: \
	ENGINE_API virtual ~USoundNodeRandom();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeRandom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
