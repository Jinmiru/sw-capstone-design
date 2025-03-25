// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableCategoryHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FTableRowBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TableRowBase;
class UScriptStruct* FTableRowBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TableRowBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TableRowBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TableRowBase"));
	}
	return Z_Registration_Info_UScriptStruct_TableRowBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTableRowBase>()
{
	return FTableRowBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTableRowBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all table row structs to inherit from.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Base class for all table row structs to inherit from." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableRowBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableRowBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TableRowBase",
	nullptr,
	0,
	sizeof(FTableRowBase),
	alignof(FTableRowBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTableRowBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase()
{
	if (!Z_Registration_Info_UScriptStruct_TableRowBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TableRowBase.InnerSingleton, Z_Construct_UScriptStruct_FTableRowBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TableRowBase.InnerSingleton;
}
// End ScriptStruct FTableRowBase

// Begin Class UDataTable
void UDataTable::StaticRegisterNativesUDataTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataTable);
UClass* Z_Construct_UClass_UDataTable_NoRegister()
{
	return UDataTable::StaticClass();
}
struct Z_Construct_UClass_UDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Imported spreadsheet table.\n */" },
		{ "IncludePath", "Engine/DataTable.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Imported spreadsheet table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowStruct_MetaData[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/** Structure to use for each row of the table, must inherit from FTableRowBase */" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Structure to use for each row of the table, must inherit from FTableRowBase" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStripFromClientBuilds_MetaData[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/** Set to true to not cook this data table into client builds. Useful for sensitive tables that only servers should know about. */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Set to true to not cook this data table into client builds. Useful for sensitive tables that only servers should know about." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreExtraFields_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Set to true to ignore extra fields in the import data, if false it will warn about them */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Set to true to ignore extra fields in the import data, if false it will warn about them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMissingFields_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Set to true to ignore any fields that are expected but missing, if false it will warn about them */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Set to true to ignore any fields that are expected but missing, if false it will warn about them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportKeyField_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Explicit field in import data to use as key. If this is empty it uses Name for JSON and the first field found for CSV */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Explicit field in import data to use as key. If this is empty it uses Name for JSON and the first field found for CSV" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSource" },
		{ "Comment", "/** The file this data table was imported from, may be empty */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The file this data table was imported from, may be empty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[] = {
		{ "Comment", "/** The filename imported to create this object. Relative to this object's package, BaseDir() or absolute */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowStructName_MetaData[] = {
		{ "Comment", "/** The name of the RowStruct we were using when we were last saved */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The name of the RowStruct we were using when we were last saved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowStructPathName_MetaData[] = {
		{ "Comment", "/** The name of the RowStruct we were using when we were last saved */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The name of the RowStruct we were using when we were last saved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowsSerializedWithTags_MetaData[] = {
		{ "Comment", "/** When RowStruct is being modified, row data is stored serialized with tags */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "When RowStruct is being modified, row data is stored serialized with tags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporarilyReferencedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowStruct;
	static void NewProp_bStripFromClientBuilds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripFromClientBuilds;
	static void NewProp_bIgnoreExtraFields_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreExtraFields;
	static void NewProp_bIgnoreMissingFields_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMissingFields;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportKeyField;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportPath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowStructName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowStructPathName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RowsSerializedWithTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RowsSerializedWithTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TemporarilyReferencedObjects_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_TemporarilyReferencedObjects;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct = { "RowStruct", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataTable, RowStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowStruct_MetaData), NewProp_RowStruct_MetaData) };
void Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_SetBit(void* Obj)
{
	((UDataTable*)Obj)->bStripFromClientBuilds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds = { "bStripFromClientBuilds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDataTable), &Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStripFromClientBuilds_MetaData), NewProp_bStripFromClientBuilds_MetaData) };
void Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_SetBit(void* Obj)
{
	((UDataTable*)Obj)->bIgnoreExtraFields = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields = { "bIgnoreExtraFields", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDataTable), &Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreExtraFields_MetaData), NewProp_bIgnoreExtraFields_MetaData) };
void Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_SetBit(void* Obj)
{
	((UDataTable*)Obj)->bIgnoreMissingFields = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields = { "bIgnoreMissingFields", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDataTable), &Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreMissingFields_MetaData), NewProp_bIgnoreMissingFields_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField = { "ImportKeyField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataTable, ImportKeyField), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportKeyField_MetaData), NewProp_ImportKeyField_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataTable, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataTable, ImportPath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportPath_MetaData), NewProp_ImportPath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName = { "RowStructName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataTable, RowStructName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowStructName_MetaData), NewProp_RowStructName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructPathName = { "RowStructPathName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataTable, RowStructPathName), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowStructPathName_MetaData), NewProp_RowStructPathName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_Inner = { "RowsSerializedWithTags", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags = { "RowsSerializedWithTags", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataTable, RowsSerializedWithTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowsSerializedWithTags_MetaData), NewProp_RowsSerializedWithTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_ElementProp = { "TemporarilyReferencedObjects", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects = { "TemporarilyReferencedObjects", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataTable, TemporarilyReferencedObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporarilyReferencedObjects_MetaData), NewProp_TemporarilyReferencedObjects_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataTable_Statics::ClassParams = {
	&UDataTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataTable()
{
	if (!Z_Registration_Info_UClass_UDataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataTable.OuterSingleton, Z_Construct_UClass_UDataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataTable.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataTable>()
{
	return UDataTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTable);
IMPLEMENT_FARCHIVE_SERIALIZER(UDataTable)
// End Class UDataTable

// Begin ScriptStruct FDataTableRowHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataTableRowHandle;
class UScriptStruct* FDataTableRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataTableRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataTableRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableRowHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DataTableRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_DataTableRowHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataTableRowHandle>()
{
	return FDataTableRowHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataTableRowHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a particular row in a table*/" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Handle to a particular row in a table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTableRowHandle" },
		{ "Comment", "/** Pointer to table we want a row from */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to table we want a row from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "Category", "DataTableRowHandle" },
		{ "Comment", "/** Name of row in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Name of row in the table that we want" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableRowHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataTableRowHandle, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataTableRowHandle, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DataTableRowHandle",
	Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers),
	sizeof(FDataTableRowHandle),
	alignof(FDataTableRowHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle()
{
	if (!Z_Registration_Info_UScriptStruct_DataTableRowHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataTableRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataTableRowHandle.InnerSingleton;
}
// End ScriptStruct FDataTableRowHandle

// Begin ScriptStruct FDataTableCategoryHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataTableCategoryHandle;
class UScriptStruct* FDataTableCategoryHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableCategoryHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DataTableCategoryHandle"));
	}
	return Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataTableCategoryHandle>()
{
	return FDataTableCategoryHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a particular set of rows in a table */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Handle to a particular set of rows in a table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTableCategoryHandle" },
		{ "Comment", "/** Pointer to table we want a row from */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to table we want a row from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
		{ "Category", "DataTableCategoryHandle" },
		{ "Comment", "/** Name of column in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Name of column in the table that we want" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowContents_MetaData[] = {
		{ "Category", "DataTableCategoryHandle" },
		{ "Comment", "/** Contents of rows in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Contents of rows in the table that we want" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ColumnName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowContents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableCategoryHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataTableCategoryHandle, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataTableCategoryHandle, ColumnName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnName_MetaData), NewProp_ColumnName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents = { "RowContents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataTableCategoryHandle, RowContents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowContents_MetaData), NewProp_RowContents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DataTableCategoryHandle",
	Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers),
	sizeof(FDataTableCategoryHandle),
	alignof(FDataTableCategoryHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataTableCategoryHandle()
{
	if (!Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.InnerSingleton, Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.InnerSingleton;
}
// End ScriptStruct FDataTableCategoryHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTableRowBase::StaticStruct, Z_Construct_UScriptStruct_FTableRowBase_Statics::NewStructOps, TEXT("TableRowBase"), &Z_Registration_Info_UScriptStruct_TableRowBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTableRowBase), 3243949676U) },
		{ FDataTableRowHandle::StaticStruct, Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewStructOps, TEXT("DataTableRowHandle"), &Z_Registration_Info_UScriptStruct_DataTableRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataTableRowHandle), 1360917958U) },
		{ FDataTableCategoryHandle::StaticStruct, Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewStructOps, TEXT("DataTableCategoryHandle"), &Z_Registration_Info_UScriptStruct_DataTableCategoryHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataTableCategoryHandle), 1560566686U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataTable, UDataTable::StaticClass, TEXT("UDataTable"), &Z_Registration_Info_UClass_UDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataTable), 1194479680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_709095036(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
