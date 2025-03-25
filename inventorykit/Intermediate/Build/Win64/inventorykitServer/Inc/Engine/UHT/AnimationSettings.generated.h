// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimationSettings_generated_h
#error "AnimationSettings.generated.h already included, missing '#pragma once' in AnimationSettings.h"
#endif
#define ENGINE_AnimationSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetBoneCustomAttributeNamesToImport);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSettings(); \
	friend struct Z_Construct_UClass_UAnimationSettings_Statics; \
public: \
	DECLARE_CLASS(UAnimationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationSettings(UAnimationSettings&&); \
	UAnimationSettings(const UAnimationSettings&); \
public: \
	ENGINE_API virtual ~UAnimationSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
