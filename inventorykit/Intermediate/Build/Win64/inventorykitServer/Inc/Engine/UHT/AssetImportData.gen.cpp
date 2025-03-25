// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetImportData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetImportInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAssetImportInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetImportInfo;
class UScriptStruct* FAssetImportInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetImportInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetImportInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetImportInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AssetImportInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AssetImportInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetImportInfo>()
{
	return FAssetImportInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetImportInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that is used to store an array of asset import data as an asset registry tag */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Struct that is used to store an array of asset import data as an asset registry tag" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetImportInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetImportInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AssetImportInfo",
	nullptr,
	0,
	sizeof(FAssetImportInfo),
	alignof(FAssetImportInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetImportInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetImportInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetImportInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AssetImportInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetImportInfo.InnerSingleton, Z_Construct_UScriptStruct_FAssetImportInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetImportInfo.InnerSingleton;
}
// End ScriptStruct FAssetImportInfo

// Begin Class UAssetImportData Function K2_ExtractFilenames
#if WITH_EDITOR
struct Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics
{
	struct AssetImportData_eventK2_ExtractFilenames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetImportData" },
		{ "DisplayName", "ExtractFilenames" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ScriptName", "ExtractFilenames" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetImportData_eventK2_ExtractFilenames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportData, nullptr, "K2_ExtractFilenames", nullptr, nullptr, Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::AssetImportData_eventK2_ExtractFilenames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::AssetImportData_eventK2_ExtractFilenames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAssetImportData::execK2_ExtractFilenames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->K2_ExtractFilenames();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAssetImportData Function K2_ExtractFilenames

// Begin Class UAssetImportData Function K2_GetFirstFilename
#if WITH_EDITOR
struct Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics
{
	struct AssetImportData_eventK2_GetFirstFilename_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetImportData" },
		{ "Comment", "/** Helper function to return the first filename stored in this data. The resulting filename will be absolute (ie, not relative to the asset).  */" },
		{ "DisplayName", "GetFirstFilename" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ScriptName", "GetFirstFilename" },
		{ "ToolTip", "Helper function to return the first filename stored in this data. The resulting filename will be absolute (ie, not relative to the asset)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetImportData_eventK2_GetFirstFilename_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportData, nullptr, "K2_GetFirstFilename", nullptr, nullptr, Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::AssetImportData_eventK2_GetFirstFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::AssetImportData_eventK2_GetFirstFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAssetImportData::execK2_GetFirstFilename)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->K2_GetFirstFilename();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAssetImportData Function K2_GetFirstFilename

// Begin Class UAssetImportData Function ScriptedAddFilename
#if WITH_EDITOR
struct Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics
{
	struct AssetImportData_eventScriptedAddFilename_Parms
	{
		FString InPath;
		int32 Index;
		FString SourceFileLabel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetImportData" },
		{ "Comment", "/**\n\x09 * Add or update a filename at the specified index. If the index is greater then the number of source file,\n\x09 * it will add empty filenames to fill up to the specified index. The timespan and MD5 will be computed.\n\x09 *\n\x09 * @Param InPath: The filename we want to set at the specified index.\n\x09 * @Param Index: This specify the source file index in case you have many source file for an imported asset\n\x09 * @Param SourceFileLabel: Optional, can be empty string, the label we want to see in the UI when displaying the source file. (useful for multi source)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Add or update a filename at the specified index. If the index is greater then the number of source file,\nit will add empty filenames to fill up to the specified index. The timespan and MD5 will be computed.\n\n@Param InPath: The filename we want to set at the specified index.\n@Param Index: This specify the source file index in case you have many source file for an imported asset\n@Param SourceFileLabel: Optional, can be empty string, the label we want to see in the UI when displaying the source file. (useful for multi source)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFileLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetImportData_eventScriptedAddFilename_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetImportData_eventScriptedAddFilename_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_SourceFileLabel = { "SourceFileLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetImportData_eventScriptedAddFilename_Parms, SourceFileLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_SourceFileLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportData, nullptr, "ScriptedAddFilename", nullptr, nullptr, Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::AssetImportData_eventScriptedAddFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::AssetImportData_eventScriptedAddFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAssetImportData::execScriptedAddFilename)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceFileLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScriptedAddFilename(Z_Param_InPath,Z_Param_Index,Z_Param_SourceFileLabel);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAssetImportData Function ScriptedAddFilename

// Begin Class UAssetImportData
void UAssetImportData::StaticRegisterNativesUAssetImportData()
{
#if WITH_EDITOR
	UClass* Class = UAssetImportData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_ExtractFilenames", &UAssetImportData::execK2_ExtractFilenames },
		{ "K2_GetFirstFilename", &UAssetImportData::execK2_GetFirstFilename },
		{ "ScriptedAddFilename", &UAssetImportData::execScriptedAddFilename },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetImportData);
UClass* Z_Construct_UClass_UAssetImportData_NoRegister()
{
	return UAssetImportData::StaticClass();
}
struct Z_Construct_UClass_UAssetImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* todo: Make this class better suited to multiple import paths - maybe have FAssetImportInfo use a map rather than array? */" },
		{ "IncludePath", "EditorFramework/AssetImportData.h" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "todo: Make this class better suited to multiple import paths - maybe have FAssetImportInfo use a map rather than array?" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "Comment", "/** Path to the resource used to construct this static mesh. Relative to the object's package, BaseDir() or absolute */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Path to the resource used to construct this static mesh. Relative to the object's package, BaseDir() or absolute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Date/Time-stamp of the file from the last import */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
		{ "Category", "File Path" },
		{ "Comment", "/** Source file data describing the files that were used to import this asset. */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Source file data describing the files that were used to import this asset." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames, "K2_ExtractFilenames" }, // 1671224040
		{ &Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename, "K2_GetFirstFilename" }, // 828629944
		{ &Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename, "ScriptedAddFilename" }, // 3866397763
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetImportData, SourceFilePath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetImportData, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData), NewProp_SourceFileTimestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetImportData, SourceData), Z_Construct_UScriptStruct_FAssetImportInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceData_MetaData), NewProp_SourceData_MetaData) }; // 1529673043
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFileTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UAssetImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetImportData_Statics::ClassParams = {
	&UAssetImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAssetImportData_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportData_Statics::PropPointers), 0),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetImportData()
{
	if (!Z_Registration_Info_UClass_UAssetImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetImportData.OuterSingleton, Z_Construct_UClass_UAssetImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetImportData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAssetImportData>()
{
	return UAssetImportData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetImportData);
UAssetImportData::~UAssetImportData() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FARCHIVE_SERIALIZER(UAssetImportData)
#endif // WITH_EDITORONLY_DATA
// End Class UAssetImportData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetImportInfo::StaticStruct, Z_Construct_UScriptStruct_FAssetImportInfo_Statics::NewStructOps, TEXT("AssetImportInfo"), &Z_Registration_Info_UScriptStruct_AssetImportInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetImportInfo), 1529673043U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetImportData, UAssetImportData::StaticClass, TEXT("UAssetImportData"), &Z_Registration_Info_UClass_UAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetImportData), 1319492561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_1898253178(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
