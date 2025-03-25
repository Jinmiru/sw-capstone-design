// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/Volume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Volume_generated_h
#error "Volume.generated.h already included, missing '#pragma once' in Volume.h"
#endif
#define ENGINE_Volume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAVolume(); \
	friend struct Z_Construct_UClass_AVolume_Statics; \
public: \
	DECLARE_CLASS(AVolume, ABrush, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVolume(AVolume&&); \
	AVolume(const AVolume&); \
public: \
	ENGINE_API virtual ~AVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
