// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveTable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveTable();
ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveTableMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ECurveTableMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurveTableMode;
static UEnum* ECurveTableMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECurveTableMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECurveTableMode"));
	}
	return Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECurveTableMode>()
{
	return ECurveTableMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECurveTableMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Whether the curve table contains simple, rich, or no curves\n*/" },
		{ "Empty.Name", "ECurveTableMode::Empty" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "RichCurves.Name", "ECurveTableMode::RichCurves" },
		{ "SimpleCurves.Name", "ECurveTableMode::SimpleCurves" },
		{ "ToolTip", "Whether the curve table contains simple, rich, or no curves" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECurveTableMode::Empty", (int64)ECurveTableMode::Empty },
		{ "ECurveTableMode::SimpleCurves", (int64)ECurveTableMode::SimpleCurves },
		{ "ECurveTableMode::RichCurves", (int64)ECurveTableMode::RichCurves },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECurveTableMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECurveTableMode",
	"ECurveTableMode",
	Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECurveTableMode()
{
	if (!Z_Registration_Info_UEnum_ECurveTableMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurveTableMode.InnerSingleton, Z_Construct_UEnum_Engine_ECurveTableMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECurveTableMode.InnerSingleton;
}
// End Enum ECurveTableMode

// Begin Class UCurveTable
void UCurveTable::StaticRegisterNativesUCurveTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveTable);
UClass* Z_Construct_UClass_UCurveTable_NoRegister()
{
	return UCurveTable::StaticClass();
}
struct Z_Construct_UClass_UCurveTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Imported spreadsheet table as curves.\n */" },
		{ "IncludePath", "Engine/CurveTable.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "Imported spreadsheet table as curves." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[] = {
		{ "Comment", "/** The filename imported to create this object. Relative to this object's package, BaseDir() or absolute */" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveTable, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveTable, ImportPath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportPath_MetaData), NewProp_ImportPath_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UCurveTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveTable_Statics::ClassParams = {
	&UCurveTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UCurveTable_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::PropPointers), 0),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveTable()
{
	if (!Z_Registration_Info_UClass_UCurveTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveTable.OuterSingleton, Z_Construct_UClass_UCurveTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveTable.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCurveTable>()
{
	return UCurveTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveTable);
UCurveTable::~UCurveTable() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveTable)
// End Class UCurveTable

// Begin ScriptStruct FCurveTableRowHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveTableRowHandle;
class UScriptStruct* FCurveTableRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveTableRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveTableRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveTableRowHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveTableRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_CurveTableRowHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveTableRowHandle>()
{
	return FCurveTableRowHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handle to a particular row in a table.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "Handle to a particular row in a table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveTable_MetaData[] = {
		{ "Category", "CurveTableRowHandle" },
		{ "Comment", "/** Pointer to table we want a row from */" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to table we want a row from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "Category", "CurveTableRowHandle" },
		{ "Comment", "/** Name of row in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "Name of row in the table that we want" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveTableRowHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable = { "CurveTable", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveTableRowHandle, CurveTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveTable_MetaData), NewProp_CurveTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveTableRowHandle, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CurveTableRowHandle",
	Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers),
	sizeof(FCurveTableRowHandle),
	alignof(FCurveTableRowHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle()
{
	if (!Z_Registration_Info_UScriptStruct_CurveTableRowHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveTableRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurveTableRowHandle.InnerSingleton;
}
// End ScriptStruct FCurveTableRowHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECurveTableMode_StaticEnum, TEXT("ECurveTableMode"), &Z_Registration_Info_UEnum_ECurveTableMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2572408224U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCurveTableRowHandle::StaticStruct, Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewStructOps, TEXT("CurveTableRowHandle"), &Z_Registration_Info_UScriptStruct_CurveTableRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveTableRowHandle), 1199935626U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveTable, UCurveTable::StaticClass, TEXT("UCurveTable"), &Z_Registration_Info_UClass_UCurveTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveTable), 1017298451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_1099529189(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
