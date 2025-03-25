// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundWaveProcedural.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundWaveProcedural_generated_h
#error "SoundWaveProcedural.generated.h already included, missing '#pragma once' in SoundWaveProcedural.h"
#endif
#define ENGINE_SoundWaveProcedural_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWaveProcedural, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundWaveProcedural(); \
	friend struct Z_Construct_UClass_USoundWaveProcedural_Statics; \
public: \
	DECLARE_CLASS(USoundWaveProcedural, USoundWave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundWaveProcedural) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_29_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundWaveProcedural(USoundWaveProcedural&&); \
	USoundWaveProcedural(const USoundWaveProcedural&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundWaveProcedural); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundWaveProcedural); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundWaveProcedural) \
	ENGINE_API virtual ~USoundWaveProcedural();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundWaveProcedural>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
