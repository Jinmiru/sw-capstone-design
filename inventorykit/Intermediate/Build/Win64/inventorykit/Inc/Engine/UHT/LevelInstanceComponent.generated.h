// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelInstanceComponent_generated_h
#error "LevelInstanceComponent.generated.h already included, missing '#pragma once' in LevelInstanceComponent.h"
#endif
#define ENGINE_LevelInstanceComponent_generated_h

#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelInstanceComponent, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_26_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULevelInstanceComponent(); \
	friend struct Z_Construct_UClass_ULevelInstanceComponent_Statics; \
public: \
	DECLARE_CLASS(ULevelInstanceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelInstanceComponent) \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelInstanceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelInstanceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelInstanceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelInstanceComponent(ULevelInstanceComponent&&); \
	ULevelInstanceComponent(const ULevelInstanceComponent&); \
public: \
	ENGINE_API virtual ~ULevelInstanceComponent();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelInstanceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
