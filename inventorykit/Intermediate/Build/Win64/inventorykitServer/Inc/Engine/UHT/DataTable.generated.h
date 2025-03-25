// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DataTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DataTable_generated_h
#error "DataTable.generated.h already included, missing '#pragma once' in DataTable.h"
#endif
#define ENGINE_DataTable_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTableRowBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTableRowBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_71_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDataTable, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUDataTable(); \
	friend struct Z_Construct_UClass_UDataTable_Statics; \
public: \
	DECLARE_CLASS(UDataTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_71_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataTable(UDataTable&&); \
	UDataTable(const UDataTable&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_67_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_71_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataTable>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_424_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataTableRowHandle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDataTableRowHandle>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_497_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDataTableCategoryHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
