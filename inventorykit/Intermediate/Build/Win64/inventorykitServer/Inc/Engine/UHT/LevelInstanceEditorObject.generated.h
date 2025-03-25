// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceEditorObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelInstanceEditorObject_generated_h
#error "LevelInstanceEditorObject.generated.h already included, missing '#pragma once' in LevelInstanceEditorObject.h"
#endif
#define ENGINE_LevelInstanceEditorObject_generated_h

#define FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULevelInstanceEditorObject(); \
	friend struct Z_Construct_UClass_ULevelInstanceEditorObject_Statics; \
public: \
	DECLARE_CLASS(ULevelInstanceEditorObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelInstanceEditorObject)


#define FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelInstanceEditorObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelInstanceEditorObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelInstanceEditorObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceEditorObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelInstanceEditorObject(ULevelInstanceEditorObject&&); \
	ULevelInstanceEditorObject(const ULevelInstanceEditorObject&); \
public: \
	NO_API virtual ~ULevelInstanceEditorObject();


#define FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelInstanceEditorObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_LevelInstance_LevelInstanceEditorObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
