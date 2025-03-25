// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceEditorPivotActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelInstanceEditorPivotActor_generated_h
#error "LevelInstanceEditorPivotActor.generated.h already included, missing '#pragma once' in LevelInstanceEditorPivotActor.h"
#endif
#define ENGINE_LevelInstanceEditorPivotActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALevelInstancePivot(); \
	friend struct Z_Construct_UClass_ALevelInstancePivot_Statics; \
public: \
	DECLARE_CLASS(ALevelInstancePivot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALevelInstancePivot) \
	virtual UObject* _getUObject() const override { return const_cast<ALevelInstancePivot*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALevelInstancePivot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelInstancePivot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALevelInstancePivot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelInstancePivot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALevelInstancePivot(ALevelInstancePivot&&); \
	ALevelInstancePivot(const ALevelInstancePivot&); \
public: \
	ENGINE_API virtual ~ALevelInstancePivot();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALevelInstancePivot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
