// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/MeshSimplificationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshSimplificationSettings_generated_h
#error "MeshSimplificationSettings.generated.h already included, missing '#pragma once' in MeshSimplificationSettings.h"
#endif
#define ENGINE_MeshSimplificationSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMeshSimplificationSettings(); \
	friend struct Z_Construct_UClass_UMeshSimplificationSettings_Statics; \
public: \
	DECLARE_CLASS(UMeshSimplificationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMeshSimplificationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshSimplificationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshSimplificationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshSimplificationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSimplificationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshSimplificationSettings(UMeshSimplificationSettings&&); \
	UMeshSimplificationSettings(const UMeshSimplificationSettings&); \
public: \
	ENGINE_API virtual ~UMeshSimplificationSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMeshSimplificationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
