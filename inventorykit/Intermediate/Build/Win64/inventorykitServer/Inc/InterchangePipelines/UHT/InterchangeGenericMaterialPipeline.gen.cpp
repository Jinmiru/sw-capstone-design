// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangeGenericMaterialPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericMaterialPipeline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister();
INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption();
INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin Enum EInterchangeMaterialImportOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMaterialImportOption;
static UEnum* EInterchangeMaterialImportOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeMaterialImportOption"));
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeMaterialImportOption>()
{
	return EInterchangeMaterialImportOption_StaticEnum();
}
struct Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ImportAsMaterialInstances.Comment", "/** Import all materials from the source as material instance assets. */" },
		{ "ImportAsMaterialInstances.Name", "EInterchangeMaterialImportOption::ImportAsMaterialInstances" },
		{ "ImportAsMaterialInstances.ToolTip", "Import all materials from the source as material instance assets." },
		{ "ImportAsMaterials.Comment", "/** Import all materials from the source as material assets. */" },
		{ "ImportAsMaterials.Name", "EInterchangeMaterialImportOption::ImportAsMaterials" },
		{ "ImportAsMaterials.ToolTip", "Import all materials from the source as material assets." },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeMaterialImportOption::ImportAsMaterials", (int64)EInterchangeMaterialImportOption::ImportAsMaterials },
		{ "EInterchangeMaterialImportOption::ImportAsMaterialInstances", (int64)EInterchangeMaterialImportOption::ImportAsMaterialInstances },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	"EInterchangeMaterialImportOption",
	"EInterchangeMaterialImportOption",
	Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.InnerSingleton;
}
// End Enum EInterchangeMaterialImportOption

// Begin Enum EInterchangeMaterialSearchLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation;
static UEnum* EInterchangeMaterialSearchLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeMaterialSearchLocation"));
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeMaterialSearchLocation>()
{
	return EInterchangeMaterialSearchLocation_StaticEnum();
}
struct Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllAssets.Comment", "/** Search for existing material in all assets folders. */" },
		{ "AllAssets.Name", "EInterchangeMaterialSearchLocation::AllAssets" },
		{ "AllAssets.ToolTip", "Search for existing material in all assets folders." },
		{ "BlueprintType", "true" },
		{ "DoNotSearch.Comment", "/** Do not search for existing existing materials */" },
		{ "DoNotSearch.Name", "EInterchangeMaterialSearchLocation::DoNotSearch" },
		{ "DoNotSearch.ToolTip", "Do not search for existing existing materials" },
		{ "Local.Comment", "/** Search for existing material in local import folder only. */" },
		{ "Local.Name", "EInterchangeMaterialSearchLocation::Local" },
		{ "Local.ToolTip", "Search for existing material in local import folder only." },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "UnderParent.Comment", "/** Search for existing material recursively from parent folder. */" },
		{ "UnderParent.Name", "EInterchangeMaterialSearchLocation::UnderParent" },
		{ "UnderParent.ToolTip", "Search for existing material recursively from parent folder." },
		{ "UnderRoot.Comment", "/** Search for existing material recursively from root folder. */" },
		{ "UnderRoot.Name", "EInterchangeMaterialSearchLocation::UnderRoot" },
		{ "UnderRoot.ToolTip", "Search for existing material recursively from root folder." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeMaterialSearchLocation::Local", (int64)EInterchangeMaterialSearchLocation::Local },
		{ "EInterchangeMaterialSearchLocation::UnderParent", (int64)EInterchangeMaterialSearchLocation::UnderParent },
		{ "EInterchangeMaterialSearchLocation::UnderRoot", (int64)EInterchangeMaterialSearchLocation::UnderRoot },
		{ "EInterchangeMaterialSearchLocation::AllAssets", (int64)EInterchangeMaterialSearchLocation::AllAssets },
		{ "EInterchangeMaterialSearchLocation::DoNotSearch", (int64)EInterchangeMaterialSearchLocation::DoNotSearch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	"EInterchangeMaterialSearchLocation",
	"EInterchangeMaterialSearchLocation",
	Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation.InnerSingleton;
}
// End Enum EInterchangeMaterialSearchLocation

// Begin Class UInterchangeGenericMaterialPipeline
void UInterchangeGenericMaterialPipeline::StaticRegisterNativesUInterchangeGenericMaterialPipeline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericMaterialPipeline);
UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister()
{
	return UInterchangeGenericMaterialPipeline::StaticClass();
}
struct Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericMaterialPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PipelineDisplayName_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** The name of the pipeline that will be display in the import dialog. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "PipelineInternalEditionData", "True" },
		{ "StandAlonePipelineProperty", "True" },
		{ "ToolTip", "The name of the pipeline that will be display in the import dialog." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** If enabled, imports the material assets found in the sources. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "If enabled, imports the material assets found in the sources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchLocation_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Specify where we should search for existing materials when importing.*/" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "Specify where we should search for existing materials when importing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "AlwaysResetToDefault", "True" },
		{ "Category", "Materials" },
		{ "Comment", "/** If set, and there is only one asset and one source, the imported asset will be given this name. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "StandAlonePipelineProperty", "True" },
		{ "ToolTip", "If set, and there is only one asset and one source, the imported asset will be given this name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialImport_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Determines what kind of material assets should be created for the imported materials. */" },
		{ "EditCondition", "bImportMaterials" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "Determines what kind of material assets should be created for the imported materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIdentifyDuplicateMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** If set, reference materials along with respective material instances are created. */" },
		{ "EditCondition", "bImportMaterials" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "If set, reference materials along with respective material instances are created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterialInstanceForParent_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** If set, additional material instances are created for reference/parent materials. */" },
		{ "EditCondition", "bIdentifyDuplicateMaterials" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "If set, additional material instances are created for reference/parent materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "Materials" },
		{ "Comment", "/** Optional material used as the parent when importing materials as instances. If no parent material is specified, one will be automatically selected during the import process. */" },
		{ "EditCondition", "bImportMaterials && MaterialImport==EInterchangeMaterialImportOption::ImportAsMaterialInstances" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "Optional material used as the parent when importing materials as instances. If no parent material is specified, one will be automatically selected during the import process." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePipeline_MetaData[] = {
		{ "Category", "Textures" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[] = {
		{ "Comment", "/** END UInterchangePipelineBase overrides */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "END UInterchangePipelineBase overrides" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PipelineDisplayName;
	static void NewProp_bImportMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMaterials;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SearchLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchLocation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialImport_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialImport;
	static void NewProp_bIdentifyDuplicateMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIdentifyDuplicateMaterials;
	static void NewProp_bCreateMaterialInstanceForParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterialInstanceForParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TexturePipeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericMaterialPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_PipelineDisplayName = { "PipelineDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, PipelineDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PipelineDisplayName_MetaData), NewProp_PipelineDisplayName_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials_SetBit(void* Obj)
{
	((UInterchangeGenericMaterialPipeline*)Obj)->bImportMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials = { "bImportMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMaterialPipeline), &Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportMaterials_MetaData), NewProp_bImportMaterials_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_SearchLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_SearchLocation = { "SearchLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, SearchLocation), Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialSearchLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchLocation_MetaData), NewProp_SearchLocation_MetaData) }; // 1236223651
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport = { "MaterialImport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, MaterialImport), Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialImport_MetaData), NewProp_MaterialImport_MetaData) }; // 435739104
void Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bIdentifyDuplicateMaterials_SetBit(void* Obj)
{
	((UInterchangeGenericMaterialPipeline*)Obj)->bIdentifyDuplicateMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bIdentifyDuplicateMaterials = { "bIdentifyDuplicateMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMaterialPipeline), &Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bIdentifyDuplicateMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIdentifyDuplicateMaterials_MetaData), NewProp_bIdentifyDuplicateMaterials_MetaData) };
void Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bCreateMaterialInstanceForParent_SetBit(void* Obj)
{
	((UInterchangeGenericMaterialPipeline*)Obj)->bCreateMaterialInstanceForParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bCreateMaterialInstanceForParent = { "bCreateMaterialInstanceForParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericMaterialPipeline), &Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bCreateMaterialInstanceForParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMaterialInstanceForParent_MetaData), NewProp_bCreateMaterialInstanceForParent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, ParentMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentMaterial_MetaData), NewProp_ParentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_TexturePipeline = { "TexturePipeline", nullptr, (EPropertyFlags)0x01160000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, TexturePipeline), Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePipeline_MetaData), NewProp_TexturePipeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseNodeContainer_MetaData), NewProp_BaseNodeContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_PipelineDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_SearchLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_SearchLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bIdentifyDuplicateMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bCreateMaterialInstanceForParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_ParentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_TexturePipeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_BaseNodeContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::ClassParams = {
	&UInterchangeGenericMaterialPipeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline()
{
	if (!Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericMaterialPipeline>()
{
	return UInterchangeGenericMaterialPipeline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericMaterialPipeline);
UInterchangeGenericMaterialPipeline::~UInterchangeGenericMaterialPipeline() {}
// End Class UInterchangeGenericMaterialPipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeMaterialImportOption_StaticEnum, TEXT("EInterchangeMaterialImportOption"), &Z_Registration_Info_UEnum_EInterchangeMaterialImportOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 435739104U) },
		{ EInterchangeMaterialSearchLocation_StaticEnum, TEXT("EInterchangeMaterialSearchLocation"), &Z_Registration_Info_UEnum_EInterchangeMaterialSearchLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1236223651U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericMaterialPipeline, UInterchangeGenericMaterialPipeline::StaticClass, TEXT("UInterchangeGenericMaterialPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericMaterialPipeline), 2331922061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_3093273220(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
