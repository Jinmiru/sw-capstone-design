// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelBounds.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelBounds_generated_h
#error "LevelBounds.generated.h already included, missing '#pragma once' in LevelBounds.h"
#endif
#define ENGINE_LevelBounds_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_INCLASS \
private: \
	static void StaticRegisterNativesALevelBounds(); \
	friend struct Z_Construct_UClass_ALevelBounds_Statics; \
public: \
	DECLARE_CLASS(ALevelBounds, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALevelBounds)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALevelBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelBounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALevelBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelBounds); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALevelBounds(ALevelBounds&&); \
	ALevelBounds(const ALevelBounds&); \
public: \
	ENGINE_API virtual ~ALevelBounds();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALevelBounds>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
