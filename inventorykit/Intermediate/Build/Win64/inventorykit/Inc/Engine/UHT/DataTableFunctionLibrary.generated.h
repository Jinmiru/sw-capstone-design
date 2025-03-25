// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/DataTableFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveTable;
class UDataTable;
class UScriptStruct;
struct FTableRowBase;
#ifdef ENGINE_DataTableFunctionLibrary_generated_h
#error "DataTableFunctionLibrary.generated.h already included, missing '#pragma once' in DataTableFunctionLibrary.h"
#endif
#define ENGINE_DataTableFunctionLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDataTableColumnAsString); \
	DECLARE_FUNCTION(execGetDataTableColumnNameFromExportName); \
	DECLARE_FUNCTION(execGetDataTableColumnExportNames); \
	DECLARE_FUNCTION(execGetDataTableColumnNames); \
	DECLARE_FUNCTION(execGetDataTableRowNames); \
	DECLARE_FUNCTION(execDoesDataTableRowExist); \
	DECLARE_FUNCTION(execGetDataTableRowStruct); \
	DECLARE_FUNCTION(execEvaluateCurveTableRow);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execExportDataTableToJSONFile); \
	DECLARE_FUNCTION(execExportDataTableToJSONString); \
	DECLARE_FUNCTION(execExportDataTableToCSVFile); \
	DECLARE_FUNCTION(execExportDataTableToCSVString); \
	DECLARE_FUNCTION(execFillDataTableFromJSONFile); \
	DECLARE_FUNCTION(execFillDataTableFromJSONString); \
	DECLARE_FUNCTION(execFillDataTableFromCSVFile); \
	DECLARE_FUNCTION(execFillDataTableFromCSVString);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUDataTableFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDataTableFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataTableFunctionLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataTableFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataTableFunctionLibrary(UDataTableFunctionLibrary&&); \
	UDataTableFunctionLibrary(const UDataTableFunctionLibrary&); \
public: \
	ENGINE_API virtual ~UDataTableFunctionLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataTableFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_DataTableFunctionLibrary_h


#define FOREACH_ENUM_EEVALUATECURVETABLERESULT(op) \
	op(EEvaluateCurveTableResult::RowFound) \
	op(EEvaluateCurveTableResult::RowNotFound) 

namespace EEvaluateCurveTableResult { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EEvaluateCurveTableResult::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
