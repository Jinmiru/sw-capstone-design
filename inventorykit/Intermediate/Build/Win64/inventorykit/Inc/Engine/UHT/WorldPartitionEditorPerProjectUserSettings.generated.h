// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionEditorPerProjectUserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionEditorPerProjectUserSettings_generated_h
#error "WorldPartitionEditorPerProjectUserSettings.generated.h already included, missing '#pragma once' in WorldPartitionEditorPerProjectUserSettings.h"
#endif
#define ENGINE_WorldPartitionEditorPerProjectUserSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldPartitionPerWorldSettings>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionEditorPerProjectUserSettings(); \
	friend struct Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionEditorPerProjectUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionEditorPerProjectUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionEditorPerProjectUserSettings(UWorldPartitionEditorPerProjectUserSettings&&); \
	UWorldPartitionEditorPerProjectUserSettings(const UWorldPartitionEditorPerProjectUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionEditorPerProjectUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionEditorPerProjectUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionEditorPerProjectUserSettings) \
	ENGINE_API virtual ~UWorldPartitionEditorPerProjectUserSettings();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_47_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionEditorPerProjectUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
