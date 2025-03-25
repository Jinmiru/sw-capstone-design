// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeEnveloper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeEnveloper_generated_h
#error "SoundNodeEnveloper.generated.h already included, missing '#pragma once' in SoundNodeEnveloper.h"
#endif
#define ENGINE_SoundNodeEnveloper_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeEnveloper, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeEnveloper(); \
	friend struct Z_Construct_UClass_USoundNodeEnveloper_Statics; \
public: \
	DECLARE_CLASS(USoundNodeEnveloper, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeEnveloper) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeEnveloper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeEnveloper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeEnveloper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeEnveloper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeEnveloper(USoundNodeEnveloper&&); \
	USoundNodeEnveloper(const USoundNodeEnveloper&); \
public: \
	ENGINE_API virtual ~USoundNodeEnveloper();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeEnveloper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
