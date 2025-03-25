// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundClass_generated_h
#error "SoundClass.generated.h already included, missing '#pragma once' in SoundClass.h"
#endif
#define ENGINE_SoundClass_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundClassEditorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundClassEditorData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundClassProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundClassProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPassiveSoundMixModifier>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_210_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundClass, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_210_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClass(); \
	friend struct Z_Construct_UClass_USoundClass_Statics; \
public: \
	DECLARE_CLASS(USoundClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundClass) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_210_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_210_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundClass(USoundClass&&); \
	USoundClass(const USoundClass&); \
public: \
	ENGINE_API virtual ~USoundClass();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_207_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_210_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_210_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_210_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
