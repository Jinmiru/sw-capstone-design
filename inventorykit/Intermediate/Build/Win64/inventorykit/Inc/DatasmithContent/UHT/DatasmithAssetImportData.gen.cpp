// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithAssetImportData.h"
#include "DatasmithContent/Public/DatasmithImportOptions.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAssetImportData() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAdditionalData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCADImportSceneData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCADImportSceneData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithFBXSceneImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithFBXSceneImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData_NoRegister();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithAssetImportOptions();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportBaseOptions();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportInfo();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin ScriptStruct FDatasmithImportInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithImportInfo;
class UScriptStruct* FDatasmithImportInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithImportInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithImportInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithImportInfo, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithImportInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithImportInfo.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithImportInfo>()
{
	return FDatasmithImportInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that fill the same role as FAssetImportInfo, but for SourceUri.\n * Eventually, the SourceUri should be directly added to FAssetImportInfo and replace the \"RelativeFilename\".\n */" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Structure that fill the same role as FAssetImportInfo, but for SourceUri.\nEventually, the SourceUri should be directly added to FAssetImportInfo and replace the \"RelativeFilename\"." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceUri_MetaData[] = {
		{ "Comment", "/** The Uri of to the source that this asset was imported from. */" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "The Uri of to the source that this asset was imported from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceHash_MetaData[] = {
		{ "Comment", "/**\n\x09 * The MD5 hash of the source when it was imported. Should be updated alongside the SourceUri\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "The MD5 hash of the source when it was imported. Should be updated alongside the SourceUri" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceUri;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithImportInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceUri = { "SourceUri", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithImportInfo, SourceUri), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceUri_MetaData), NewProp_SourceUri_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceHash = { "SourceHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithImportInfo, SourceHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceHash_MetaData), NewProp_SourceHash_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceUri,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithImportInfo",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::PropPointers), 0),
	sizeof(FDatasmithImportInfo),
	alignof(FDatasmithImportInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithImportInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithImportInfo.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithImportInfo.InnerSingleton;
}
// End ScriptStruct FDatasmithImportInfo

// Begin Class UDatasmithAssetImportData
void UDatasmithAssetImportData::StaticRegisterNativesUDatasmithAssetImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithAssetImportData);
UClass* Z_Construct_UClass_UDatasmithAssetImportData_NoRegister()
{
	return UDatasmithAssetImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithAssetImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportOptions_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_Inner_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatasmithImportInfo_MetaData[] = {
		{ "Category", "External Source" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetImportOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatasmithImportInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithAssetImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions = { "AssetImportOptions", nullptr, (EPropertyFlags)0x0010000800000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAssetImportData, AssetImportOptions), Z_Construct_UScriptStruct_FDatasmithAssetImportOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportOptions_MetaData), NewProp_AssetImportOptions_MetaData) }; // 2542004436
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner = { "AdditionalData", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDatasmithAdditionalData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalData_Inner_MetaData), NewProp_AdditionalData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0114008800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAssetImportData, AdditionalData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalData_MetaData), NewProp_AdditionalData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_DatasmithImportInfo = { "DatasmithImportInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAssetImportData, DatasmithImportInfo), Z_Construct_UScriptStruct_FDatasmithImportInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatasmithImportInfo_MetaData), NewProp_DatasmithImportInfo_MetaData) }; // 4167547918
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_DatasmithImportInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UDatasmithAssetImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::ClassParams = {
	&UDatasmithAssetImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers), 0),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithAssetImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithAssetImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithAssetImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithAssetImportData.OuterSingleton, Z_Construct_UClass_UDatasmithAssetImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithAssetImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithAssetImportData>()
{
	return UDatasmithAssetImportData::StaticClass();
}
UDatasmithAssetImportData::UDatasmithAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithAssetImportData);
UDatasmithAssetImportData::~UDatasmithAssetImportData() {}
// End Class UDatasmithAssetImportData

// Begin Class UDatasmithStaticMeshImportData
void UDatasmithStaticMeshImportData::StaticRegisterNativesUDatasmithStaticMeshImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshImportData);
UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData_NoRegister()
{
	return UDatasmithStaticMeshImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshImportData, ImportOptions), Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportOptions_MetaData), NewProp_ImportOptions_MetaData) }; // 3172738165
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::ClassParams = {
	&UDatasmithStaticMeshImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers), 0),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshImportData>()
{
	return UDatasmithStaticMeshImportData::StaticClass();
}
UDatasmithStaticMeshImportData::UDatasmithStaticMeshImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshImportData);
UDatasmithStaticMeshImportData::~UDatasmithStaticMeshImportData() {}
// End Class UDatasmithStaticMeshImportData

// Begin Class UDatasmithStaticMeshCADImportData
void UDatasmithStaticMeshCADImportData::StaticRegisterNativesUDatasmithStaticMeshCADImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshCADImportData);
UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData_NoRegister()
{
	return UDatasmithStaticMeshCADImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "InternalProperty" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TessellationOptions_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelUnit_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelTolerance_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourcePath_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceFilename_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxiliaryFilenames_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TessellationOptions;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ModelUnit;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ModelTolerance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResourceFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuxiliaryFilenames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AuxiliaryFilenames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshCADImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions = { "TessellationOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, TessellationOptions), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TessellationOptions_MetaData), NewProp_TessellationOptions_MetaData) }; // 1974329635
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit = { "ModelUnit", nullptr, (EPropertyFlags)0x0010000800030001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ModelUnit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelUnit_MetaData), NewProp_ModelUnit_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance = { "ModelTolerance", nullptr, (EPropertyFlags)0x0010000800030001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ModelTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelTolerance_MetaData), NewProp_ModelTolerance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath = { "ResourcePath", nullptr, (EPropertyFlags)0x0020080800030001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ResourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourcePath_MetaData), NewProp_ResourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename = { "ResourceFilename", nullptr, (EPropertyFlags)0x0020080800030001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ResourceFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceFilename_MetaData), NewProp_ResourceFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_Inner = { "AuxiliaryFilenames", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames = { "AuxiliaryFilenames", nullptr, (EPropertyFlags)0x0020080800030001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, AuxiliaryFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxiliaryFilenames_MetaData), NewProp_AuxiliaryFilenames_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithStaticMeshImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::ClassParams = {
	&UDatasmithStaticMeshCADImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers), 0),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshCADImportData>()
{
	return UDatasmithStaticMeshCADImportData::StaticClass();
}
UDatasmithStaticMeshCADImportData::UDatasmithStaticMeshCADImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshCADImportData);
UDatasmithStaticMeshCADImportData::~UDatasmithStaticMeshCADImportData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithStaticMeshCADImportData)
// End Class UDatasmithStaticMeshCADImportData

// Begin Class UDatasmithSceneImportData
void UDatasmithSceneImportData::StaticRegisterNativesUDatasmithSceneImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithSceneImportData);
UClass* Z_Construct_UClass_UDatasmithSceneImportData_NoRegister()
{
	return UDatasmithSceneImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithSceneImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for import data and options used when importing any asset from Datasmith\n */" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Base class for import data and options used when importing any asset from Datasmith" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatasmithImportInfo_MetaData[] = {
		{ "Category", "External Source" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatasmithImportInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSceneImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions = { "BaseOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithSceneImportData, BaseOptions), Z_Construct_UScriptStruct_FDatasmithImportBaseOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOptions_MetaData), NewProp_BaseOptions_MetaData) }; // 1864737225
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_DatasmithImportInfo = { "DatasmithImportInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithSceneImportData, DatasmithImportInfo), Z_Construct_UScriptStruct_FDatasmithImportInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatasmithImportInfo_MetaData), NewProp_DatasmithImportInfo_MetaData) }; // 4167547918
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_DatasmithImportInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UDatasmithSceneImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSceneImportData_Statics::ClassParams = {
	&UDatasmithSceneImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers), 0),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithSceneImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithSceneImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithSceneImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithSceneImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithSceneImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSceneImportData>()
{
	return UDatasmithSceneImportData::StaticClass();
}
UDatasmithSceneImportData::UDatasmithSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSceneImportData);
UDatasmithSceneImportData::~UDatasmithSceneImportData() {}
// End Class UDatasmithSceneImportData

// Begin Class UDatasmithTranslatedSceneImportData
void UDatasmithTranslatedSceneImportData::StaticRegisterNativesUDatasmithTranslatedSceneImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithTranslatedSceneImportData);
UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData_NoRegister()
{
	return UDatasmithTranslatedSceneImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import data and options specific to Datasmith scenes imported through the translator system\n */" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Import data and options specific to Datasmith scenes imported through the translator system" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithTranslatedSceneImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions_Inner = { "AdditionalOptions", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDatasmithOptionsBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions = { "AdditionalOptions", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithTranslatedSceneImportData, AdditionalOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalOptions_MetaData), NewProp_AdditionalOptions_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::ClassParams = {
	&UDatasmithTranslatedSceneImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers), 0),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithTranslatedSceneImportData>()
{
	return UDatasmithTranslatedSceneImportData::StaticClass();
}
UDatasmithTranslatedSceneImportData::UDatasmithTranslatedSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithTranslatedSceneImportData);
UDatasmithTranslatedSceneImportData::~UDatasmithTranslatedSceneImportData() {}
// End Class UDatasmithTranslatedSceneImportData

// Begin Class UDatasmithCADImportSceneData
void UDatasmithCADImportSceneData::StaticRegisterNativesUDatasmithCADImportSceneData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCADImportSceneData);
UClass* Z_Construct_UClass_UDatasmithCADImportSceneData_NoRegister()
{
	return UDatasmithCADImportSceneData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithCADImportSceneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import data and options specific to tessellated Datasmith scenes\n */" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Import data and options specific to tessellated Datasmith scenes" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TessellationOptions_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TessellationOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCADImportSceneData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions = { "TessellationOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCADImportSceneData, TessellationOptions), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TessellationOptions_MetaData), NewProp_TessellationOptions_MetaData) }; // 1974329635
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::ClassParams = {
	&UDatasmithCADImportSceneData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers), 0),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithCADImportSceneData()
{
	if (!Z_Registration_Info_UClass_UDatasmithCADImportSceneData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCADImportSceneData.OuterSingleton, Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithCADImportSceneData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCADImportSceneData>()
{
	return UDatasmithCADImportSceneData::StaticClass();
}
UDatasmithCADImportSceneData::UDatasmithCADImportSceneData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCADImportSceneData);
UDatasmithCADImportSceneData::~UDatasmithCADImportSceneData() {}
// End Class UDatasmithCADImportSceneData

// Begin Class UDatasmithMDLSceneImportData
void UDatasmithMDLSceneImportData::StaticRegisterNativesUDatasmithMDLSceneImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithMDLSceneImportData);
UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData_NoRegister()
{
	return UDatasmithMDLSceneImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMDLSceneImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::ClassParams = {
	&UDatasmithMDLSceneImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithMDLSceneImportData>()
{
	return UDatasmithMDLSceneImportData::StaticClass();
}
UDatasmithMDLSceneImportData::UDatasmithMDLSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMDLSceneImportData);
UDatasmithMDLSceneImportData::~UDatasmithMDLSceneImportData() {}
// End Class UDatasmithMDLSceneImportData

// Begin Class UDatasmithGLTFSceneImportData
void UDatasmithGLTFSceneImportData::StaticRegisterNativesUDatasmithGLTFSceneImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithGLTFSceneImportData);
UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData_NoRegister()
{
	return UDatasmithGLTFSceneImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Generator Name" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Version" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Author" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_License_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "License" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
	static const UECodeGen_Private::FStrPropertyParams NewProp_License;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithGLTFSceneImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Generator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generator_MetaData), NewProp_Generator_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Author), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Author_MetaData), NewProp_Author_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License = { "License", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, License), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_License_MetaData), NewProp_License_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::ClassParams = {
	&UDatasmithGLTFSceneImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithGLTFSceneImportData>()
{
	return UDatasmithGLTFSceneImportData::StaticClass();
}
UDatasmithGLTFSceneImportData::UDatasmithGLTFSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithGLTFSceneImportData);
UDatasmithGLTFSceneImportData::~UDatasmithGLTFSceneImportData() {}
// End Class UDatasmithGLTFSceneImportData

// Begin Class UDatasmithStaticMeshGLTFImportData
void UDatasmithStaticMeshGLTFImportData::StaticRegisterNativesUDatasmithStaticMeshGLTFImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshGLTFImportData);
UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_NoRegister()
{
	return UDatasmithStaticMeshGLTFImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshName_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceMeshName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshGLTFImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName = { "SourceMeshName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshGLTFImportData, SourceMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMeshName_MetaData), NewProp_SourceMeshName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithStaticMeshImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::ClassParams = {
	&UDatasmithStaticMeshGLTFImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshGLTFImportData>()
{
	return UDatasmithStaticMeshGLTFImportData::StaticClass();
}
UDatasmithStaticMeshGLTFImportData::UDatasmithStaticMeshGLTFImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshGLTFImportData);
UDatasmithStaticMeshGLTFImportData::~UDatasmithStaticMeshGLTFImportData() {}
// End Class UDatasmithStaticMeshGLTFImportData

// Begin Class UDatasmithFBXSceneImportData
void UDatasmithFBXSceneImportData::StaticRegisterNativesUDatasmithFBXSceneImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithFBXSceneImportData);
UClass* Z_Construct_UClass_UDatasmithFBXSceneImportData_NoRegister()
{
	return UDatasmithFBXSceneImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturesDir_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateSerialization_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "// Corresponds to a EDatasmithFBXIntermediateSerializationType\n" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Corresponds to a EDatasmithFBXIntermediateSerializationType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bColorizeMaterials_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TexturesDir;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntermediateSerialization;
	static void NewProp_bColorizeMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorizeMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithFBXSceneImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
{
	((UDatasmithFBXSceneImportData*)Obj)->bGenerateLightmapUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithFBXSceneImportData), &Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateLightmapUVs_MetaData), NewProp_bGenerateLightmapUVs_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_TexturesDir = { "TexturesDir", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithFBXSceneImportData, TexturesDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturesDir_MetaData), NewProp_TexturesDir_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_IntermediateSerialization = { "IntermediateSerialization", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithFBXSceneImportData, IntermediateSerialization), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateSerialization_MetaData), NewProp_IntermediateSerialization_MetaData) };
void Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials_SetBit(void* Obj)
{
	((UDatasmithFBXSceneImportData*)Obj)->bColorizeMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials = { "bColorizeMaterials", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithFBXSceneImportData), &Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bColorizeMaterials_MetaData), NewProp_bColorizeMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_TexturesDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_IntermediateSerialization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::ClassParams = {
	&UDatasmithFBXSceneImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithFBXSceneImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithFBXSceneImportData>()
{
	return UDatasmithFBXSceneImportData::StaticClass();
}
UDatasmithFBXSceneImportData::UDatasmithFBXSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithFBXSceneImportData);
UDatasmithFBXSceneImportData::~UDatasmithFBXSceneImportData() {}
// End Class UDatasmithFBXSceneImportData

// Begin Class UDatasmithDeltaGenAssetImportData
void UDatasmithDeltaGenAssetImportData::StaticRegisterNativesUDatasmithDeltaGenAssetImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithDeltaGenAssetImportData);
UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_NoRegister()
{
	return UDatasmithDeltaGenAssetImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDeltaGenAssetImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::ClassParams = {
	&UDatasmithDeltaGenAssetImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.OuterSingleton, Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithDeltaGenAssetImportData>()
{
	return UDatasmithDeltaGenAssetImportData::StaticClass();
}
UDatasmithDeltaGenAssetImportData::UDatasmithDeltaGenAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDeltaGenAssetImportData);
UDatasmithDeltaGenAssetImportData::~UDatasmithDeltaGenAssetImportData() {}
// End Class UDatasmithDeltaGenAssetImportData

// Begin Class UDatasmithDeltaGenSceneImportData
void UDatasmithDeltaGenSceneImportData::StaticRegisterNativesUDatasmithDeltaGenSceneImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithDeltaGenSceneImportData);
UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_NoRegister()
{
	return UDatasmithDeltaGenSceneImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeDuplicatedNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveInvisibleNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyNodeHierarchy_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportVar_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportPos_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportTml_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TmlPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMergeNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeNodes;
	static void NewProp_bOptimizeDuplicatedNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeDuplicatedNodes;
	static void NewProp_bRemoveInvisibleNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveInvisibleNodes;
	static void NewProp_bSimplifyNodeHierarchy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyNodeHierarchy;
	static void NewProp_bImportVar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVar;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarPath;
	static void NewProp_bImportPos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportPos;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PosPath;
	static void NewProp_bImportTml_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportTml;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TmlPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDeltaGenSceneImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes_SetBit(void* Obj)
{
	((UDatasmithDeltaGenSceneImportData*)Obj)->bMergeNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes = { "bMergeNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeNodes_MetaData), NewProp_bMergeNodes_MetaData) };
void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_SetBit(void* Obj)
{
	((UDatasmithDeltaGenSceneImportData*)Obj)->bOptimizeDuplicatedNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes = { "bOptimizeDuplicatedNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeDuplicatedNodes_MetaData), NewProp_bOptimizeDuplicatedNodes_MetaData) };
void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes_SetBit(void* Obj)
{
	((UDatasmithDeltaGenSceneImportData*)Obj)->bRemoveInvisibleNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes = { "bRemoveInvisibleNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveInvisibleNodes_MetaData), NewProp_bRemoveInvisibleNodes_MetaData) };
void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy_SetBit(void* Obj)
{
	((UDatasmithDeltaGenSceneImportData*)Obj)->bSimplifyNodeHierarchy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy = { "bSimplifyNodeHierarchy", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimplifyNodeHierarchy_MetaData), NewProp_bSimplifyNodeHierarchy_MetaData) };
void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar_SetBit(void* Obj)
{
	((UDatasmithDeltaGenSceneImportData*)Obj)->bImportVar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar = { "bImportVar", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportVar_MetaData), NewProp_bImportVar_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_VarPath = { "VarPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithDeltaGenSceneImportData, VarPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarPath_MetaData), NewProp_VarPath_MetaData) };
void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos_SetBit(void* Obj)
{
	((UDatasmithDeltaGenSceneImportData*)Obj)->bImportPos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos = { "bImportPos", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportPos_MetaData), NewProp_bImportPos_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_PosPath = { "PosPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithDeltaGenSceneImportData, PosPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosPath_MetaData), NewProp_PosPath_MetaData) };
void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml_SetBit(void* Obj)
{
	((UDatasmithDeltaGenSceneImportData*)Obj)->bImportTml = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml = { "bImportTml", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportTml_MetaData), NewProp_bImportTml_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_TmlPath = { "TmlPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithDeltaGenSceneImportData, TmlPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TmlPath_MetaData), NewProp_TmlPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_VarPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_PosPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_TmlPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithFBXSceneImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::ClassParams = {
	&UDatasmithDeltaGenSceneImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithDeltaGenSceneImportData>()
{
	return UDatasmithDeltaGenSceneImportData::StaticClass();
}
UDatasmithDeltaGenSceneImportData::UDatasmithDeltaGenSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDeltaGenSceneImportData);
UDatasmithDeltaGenSceneImportData::~UDatasmithDeltaGenSceneImportData() {}
// End Class UDatasmithDeltaGenSceneImportData

// Begin Class UDatasmithVREDAssetImportData
void UDatasmithVREDAssetImportData::StaticRegisterNativesUDatasmithVREDAssetImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithVREDAssetImportData);
UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData_NoRegister()
{
	return UDatasmithVREDAssetImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithVREDAssetImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::ClassParams = {
	&UDatasmithVREDAssetImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.OuterSingleton, Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithVREDAssetImportData>()
{
	return UDatasmithVREDAssetImportData::StaticClass();
}
UDatasmithVREDAssetImportData::UDatasmithVREDAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithVREDAssetImportData);
UDatasmithVREDAssetImportData::~UDatasmithVREDAssetImportData() {}
// End Class UDatasmithVREDAssetImportData

// Begin Class UDatasmithVREDSceneImportData
void UDatasmithVREDSceneImportData::StaticRegisterNativesUDatasmithVREDSceneImportData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithVREDSceneImportData);
UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData_NoRegister()
{
	return UDatasmithVREDSceneImportData::StaticClass();
}
struct Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeDuplicatedNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportMats_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatsPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportVar_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCleanVar_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportLightInfo_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightInfoPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportClipInfo_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipInfoPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMergeNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeNodes;
	static void NewProp_bOptimizeDuplicatedNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeDuplicatedNodes;
	static void NewProp_bImportMats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMats;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatsPath;
	static void NewProp_bImportVar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVar;
	static void NewProp_bCleanVar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanVar;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VarPath;
	static void NewProp_bImportLightInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportLightInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LightInfoPath;
	static void NewProp_bImportClipInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportClipInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClipInfoPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithVREDSceneImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes_SetBit(void* Obj)
{
	((UDatasmithVREDSceneImportData*)Obj)->bMergeNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes = { "bMergeNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeNodes_MetaData), NewProp_bMergeNodes_MetaData) };
void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_SetBit(void* Obj)
{
	((UDatasmithVREDSceneImportData*)Obj)->bOptimizeDuplicatedNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes = { "bOptimizeDuplicatedNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeDuplicatedNodes_MetaData), NewProp_bOptimizeDuplicatedNodes_MetaData) };
void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats_SetBit(void* Obj)
{
	((UDatasmithVREDSceneImportData*)Obj)->bImportMats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats = { "bImportMats", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportMats_MetaData), NewProp_bImportMats_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_MatsPath = { "MatsPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithVREDSceneImportData, MatsPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatsPath_MetaData), NewProp_MatsPath_MetaData) };
void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar_SetBit(void* Obj)
{
	((UDatasmithVREDSceneImportData*)Obj)->bImportVar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar = { "bImportVar", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportVar_MetaData), NewProp_bImportVar_MetaData) };
void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar_SetBit(void* Obj)
{
	((UDatasmithVREDSceneImportData*)Obj)->bCleanVar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar = { "bCleanVar", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCleanVar_MetaData), NewProp_bCleanVar_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_VarPath = { "VarPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithVREDSceneImportData, VarPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarPath_MetaData), NewProp_VarPath_MetaData) };
void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo_SetBit(void* Obj)
{
	((UDatasmithVREDSceneImportData*)Obj)->bImportLightInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo = { "bImportLightInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportLightInfo_MetaData), NewProp_bImportLightInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_LightInfoPath = { "LightInfoPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithVREDSceneImportData, LightInfoPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightInfoPath_MetaData), NewProp_LightInfoPath_MetaData) };
void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo_SetBit(void* Obj)
{
	((UDatasmithVREDSceneImportData*)Obj)->bImportClipInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo = { "bImportClipInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportClipInfo_MetaData), NewProp_bImportClipInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_ClipInfoPath = { "ClipInfoPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithVREDSceneImportData, ClipInfoPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipInfoPath_MetaData), NewProp_ClipInfoPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_MatsPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_VarPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_LightInfoPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_ClipInfoPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithFBXSceneImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::ClassParams = {
	&UDatasmithVREDSceneImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData()
{
	if (!Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithVREDSceneImportData>()
{
	return UDatasmithVREDSceneImportData::StaticClass();
}
UDatasmithVREDSceneImportData::UDatasmithVREDSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithVREDSceneImportData);
UDatasmithVREDSceneImportData::~UDatasmithVREDSceneImportData() {}
// End Class UDatasmithVREDSceneImportData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDatasmithImportInfo::StaticStruct, Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewStructOps, TEXT("DatasmithImportInfo"), &Z_Registration_Info_UScriptStruct_DatasmithImportInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithImportInfo), 4167547918U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithAssetImportData, UDatasmithAssetImportData::StaticClass, TEXT("UDatasmithAssetImportData"), &Z_Registration_Info_UClass_UDatasmithAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithAssetImportData), 1393758435U) },
		{ Z_Construct_UClass_UDatasmithStaticMeshImportData, UDatasmithStaticMeshImportData::StaticClass, TEXT("UDatasmithStaticMeshImportData"), &Z_Registration_Info_UClass_UDatasmithStaticMeshImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshImportData), 298870150U) },
		{ Z_Construct_UClass_UDatasmithStaticMeshCADImportData, UDatasmithStaticMeshCADImportData::StaticClass, TEXT("UDatasmithStaticMeshCADImportData"), &Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshCADImportData), 2523840051U) },
		{ Z_Construct_UClass_UDatasmithSceneImportData, UDatasmithSceneImportData::StaticClass, TEXT("UDatasmithSceneImportData"), &Z_Registration_Info_UClass_UDatasmithSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithSceneImportData), 891177947U) },
		{ Z_Construct_UClass_UDatasmithTranslatedSceneImportData, UDatasmithTranslatedSceneImportData::StaticClass, TEXT("UDatasmithTranslatedSceneImportData"), &Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithTranslatedSceneImportData), 1533051248U) },
		{ Z_Construct_UClass_UDatasmithCADImportSceneData, UDatasmithCADImportSceneData::StaticClass, TEXT("UDatasmithCADImportSceneData"), &Z_Registration_Info_UClass_UDatasmithCADImportSceneData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCADImportSceneData), 1845792371U) },
		{ Z_Construct_UClass_UDatasmithMDLSceneImportData, UDatasmithMDLSceneImportData::StaticClass, TEXT("UDatasmithMDLSceneImportData"), &Z_Registration_Info_UClass_UDatasmithMDLSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithMDLSceneImportData), 764526392U) },
		{ Z_Construct_UClass_UDatasmithGLTFSceneImportData, UDatasmithGLTFSceneImportData::StaticClass, TEXT("UDatasmithGLTFSceneImportData"), &Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithGLTFSceneImportData), 2461168885U) },
		{ Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData, UDatasmithStaticMeshGLTFImportData::StaticClass, TEXT("UDatasmithStaticMeshGLTFImportData"), &Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshGLTFImportData), 3077191885U) },
		{ Z_Construct_UClass_UDatasmithFBXSceneImportData, UDatasmithFBXSceneImportData::StaticClass, TEXT("UDatasmithFBXSceneImportData"), &Z_Registration_Info_UClass_UDatasmithFBXSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithFBXSceneImportData), 824604900U) },
		{ Z_Construct_UClass_UDatasmithDeltaGenAssetImportData, UDatasmithDeltaGenAssetImportData::StaticClass, TEXT("UDatasmithDeltaGenAssetImportData"), &Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithDeltaGenAssetImportData), 2656505734U) },
		{ Z_Construct_UClass_UDatasmithDeltaGenSceneImportData, UDatasmithDeltaGenSceneImportData::StaticClass, TEXT("UDatasmithDeltaGenSceneImportData"), &Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithDeltaGenSceneImportData), 2356887197U) },
		{ Z_Construct_UClass_UDatasmithVREDAssetImportData, UDatasmithVREDAssetImportData::StaticClass, TEXT("UDatasmithVREDAssetImportData"), &Z_Registration_Info_UClass_UDatasmithVREDAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithVREDAssetImportData), 2982871862U) },
		{ Z_Construct_UClass_UDatasmithVREDSceneImportData, UDatasmithVREDSceneImportData::StaticClass, TEXT("UDatasmithVREDSceneImportData"), &Z_Registration_Info_UClass_UDatasmithVREDSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithVREDSceneImportData), 1040574542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_3223917010(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
