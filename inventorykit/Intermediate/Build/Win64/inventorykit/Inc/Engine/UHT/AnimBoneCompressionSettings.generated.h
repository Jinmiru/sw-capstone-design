// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimBoneCompressionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimBoneCompressionSettings_generated_h
#error "AnimBoneCompressionSettings.generated.h already included, missing '#pragma once' in AnimBoneCompressionSettings.h"
#endif
#define ENGINE_AnimBoneCompressionSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBoneCompressionSettings(); \
	friend struct Z_Construct_UClass_UAnimBoneCompressionSettings_Statics; \
public: \
	DECLARE_CLASS(UAnimBoneCompressionSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimBoneCompressionSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBoneCompressionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBoneCompressionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBoneCompressionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBoneCompressionSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimBoneCompressionSettings(UAnimBoneCompressionSettings&&); \
	UAnimBoneCompressionSettings(const UAnimBoneCompressionSettings&); \
public: \
	ENGINE_API virtual ~UAnimBoneCompressionSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimBoneCompressionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
