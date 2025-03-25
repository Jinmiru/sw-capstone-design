// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeLooping.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeLooping_generated_h
#error "SoundNodeLooping.generated.h already included, missing '#pragma once' in SoundNodeLooping.h"
#endif
#define ENGINE_SoundNodeLooping_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeLooping(); \
	friend struct Z_Construct_UClass_USoundNodeLooping_Statics; \
public: \
	DECLARE_CLASS(USoundNodeLooping, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeLooping)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeLooping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeLooping) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeLooping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeLooping); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeLooping(USoundNodeLooping&&); \
	USoundNodeLooping(const USoundNodeLooping&); \
public: \
	ENGINE_API virtual ~USoundNodeLooping();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeLooping>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeLooping_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
