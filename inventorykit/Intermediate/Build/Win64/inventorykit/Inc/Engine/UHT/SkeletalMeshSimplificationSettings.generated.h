// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkeletalMeshSimplificationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshSimplificationSettings_generated_h
#error "SkeletalMeshSimplificationSettings.generated.h already included, missing '#pragma once' in SkeletalMeshSimplificationSettings.h"
#endif
#define ENGINE_SkeletalMeshSimplificationSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshSimplificationSettings(); \
	friend struct Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshSimplificationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshSimplificationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshSimplificationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshSimplificationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshSimplificationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshSimplificationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletalMeshSimplificationSettings(USkeletalMeshSimplificationSettings&&); \
	USkeletalMeshSimplificationSettings(const USkeletalMeshSimplificationSettings&); \
public: \
	ENGINE_API virtual ~USkeletalMeshSimplificationSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshSimplificationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
