// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeMature.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeMature_generated_h
#error "SoundNodeMature.generated.h already included, missing '#pragma once' in SoundNodeMature.h"
#endif
#define ENGINE_SoundNodeMature_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeMature(); \
	friend struct Z_Construct_UClass_USoundNodeMature_Statics; \
public: \
	DECLARE_CLASS(USoundNodeMature, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeMature)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeMature(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeMature) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeMature); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeMature); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeMature(USoundNodeMature&&); \
	USoundNodeMature(const USoundNodeMature&); \
public: \
	ENGINE_API virtual ~USoundNodeMature();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeMature>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMature_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
