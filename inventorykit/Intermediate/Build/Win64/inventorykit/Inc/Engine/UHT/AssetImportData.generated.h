// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorFramework/AssetImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetImportData_generated_h
#error "AssetImportData.generated.h already included, missing '#pragma once' in AssetImportData.h"
#endif
#define ENGINE_AssetImportData_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetImportInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAssetImportInfo>();

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execK2_ExtractFilenames); \
	DECLARE_FUNCTION(execK2_GetFirstFilename); \
	DECLARE_FUNCTION(execScriptedAddFilename);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UAssetImportData, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUAssetImportData(); \
	friend struct Z_Construct_UClass_UAssetImportData_Statics; \
public: \
	DECLARE_CLASS(UAssetImportData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAssetImportData) \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetImportData(UAssetImportData&&); \
	UAssetImportData(const UAssetImportData&); \
public: \
	ENGINE_API virtual ~UAssetImportData();


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_70_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
