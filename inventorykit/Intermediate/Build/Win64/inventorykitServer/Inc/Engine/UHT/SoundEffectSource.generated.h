// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundEffectSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundEffectSource_generated_h
#error "SoundEffectSource.generated.h already included, missing '#pragma once' in SoundEffectSource.h"
#endif
#define ENGINE_SoundEffectSource_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundEffectSourcePreset(); \
	friend struct Z_Construct_UClass_USoundEffectSourcePreset_Statics; \
public: \
	DECLARE_CLASS(USoundEffectSourcePreset, USoundEffectPreset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundEffectSourcePreset)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundEffectSourcePreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundEffectSourcePreset(USoundEffectSourcePreset&&); \
	USoundEffectSourcePreset(const USoundEffectSourcePreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundEffectSourcePreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectSourcePreset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectSourcePreset) \
	ENGINE_API virtual ~USoundEffectSourcePreset();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundEffectSourcePreset>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSourceEffectChainEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundEffectSourcePresetChain(); \
	friend struct Z_Construct_UClass_USoundEffectSourcePresetChain_Statics; \
public: \
	DECLARE_CLASS(USoundEffectSourcePresetChain, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundEffectSourcePresetChain)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundEffectSourcePresetChain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundEffectSourcePresetChain(USoundEffectSourcePresetChain&&); \
	USoundEffectSourcePresetChain(const USoundEffectSourcePresetChain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundEffectSourcePresetChain); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectSourcePresetChain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectSourcePresetChain) \
	ENGINE_API virtual ~USoundEffectSourcePresetChain();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_47_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundEffectSourcePresetChain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
