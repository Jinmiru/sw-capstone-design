// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithStaticMeshTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithStaticMeshTemplate() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshTemplate_NoRegister();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin ScriptStruct FDatasmithMeshBuildSettingsTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithMeshBuildSettingsTemplate;
class UScriptStruct* FDatasmithMeshBuildSettingsTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithMeshBuildSettingsTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithMeshBuildSettingsTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithMeshBuildSettingsTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithMeshBuildSettingsTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithMeshBuildSettingsTemplate>()
{
	return FDatasmithMeshBuildSettingsTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcLightmapIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DstLightmapIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
	static void NewProp_bRecomputeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
	static void NewProp_bRecomputeTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangents;
	static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
	static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
	static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
	static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLightmapResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SrcLightmapIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DstLightmapIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithMeshBuildSettingsTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
{
	((FDatasmithMeshBuildSettingsTemplate*)Obj)->bUseMikkTSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMikkTSpace_MetaData), NewProp_bUseMikkTSpace_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
{
	((FDatasmithMeshBuildSettingsTemplate*)Obj)->bRecomputeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecomputeNormals_MetaData), NewProp_bRecomputeNormals_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents_SetBit(void* Obj)
{
	((FDatasmithMeshBuildSettingsTemplate*)Obj)->bRecomputeTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents = { "bRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecomputeTangents_MetaData), NewProp_bRecomputeTangents_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
{
	((FDatasmithMeshBuildSettingsTemplate*)Obj)->bRemoveDegenerates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveDegenerates_MetaData), NewProp_bRemoveDegenerates_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
{
	((FDatasmithMeshBuildSettingsTemplate*)Obj)->bUseHighPrecisionTangentBasis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighPrecisionTangentBasis_MetaData), NewProp_bUseHighPrecisionTangentBasis_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
{
	((FDatasmithMeshBuildSettingsTemplate*)Obj)->bUseFullPrecisionUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFullPrecisionUVs_MetaData), NewProp_bUseFullPrecisionUVs_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
{
	((FDatasmithMeshBuildSettingsTemplate*)Obj)->bGenerateLightmapUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithMeshBuildSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateLightmapUVs_MetaData), NewProp_bGenerateLightmapUVs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithMeshBuildSettingsTemplate, MinLightmapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLightmapResolution_MetaData), NewProp_MinLightmapResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_SrcLightmapIndex = { "SrcLightmapIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithMeshBuildSettingsTemplate, SrcLightmapIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcLightmapIndex_MetaData), NewProp_SrcLightmapIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_DstLightmapIndex = { "DstLightmapIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithMeshBuildSettingsTemplate, DstLightmapIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DstLightmapIndex_MetaData), NewProp_DstLightmapIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRecomputeTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bRemoveDegenerates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseHighPrecisionTangentBasis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseFullPrecisionUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bGenerateLightmapUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_MinLightmapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_SrcLightmapIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_DstLightmapIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithMeshBuildSettingsTemplate",
	Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::PropPointers),
	sizeof(FDatasmithMeshBuildSettingsTemplate),
	alignof(FDatasmithMeshBuildSettingsTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithMeshBuildSettingsTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithMeshBuildSettingsTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithMeshBuildSettingsTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithMeshBuildSettingsTemplate

// Begin ScriptStruct FDatasmithStaticMaterialTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithStaticMaterialTemplate;
class UScriptStruct* FDatasmithStaticMaterialTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithStaticMaterialTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithStaticMaterialTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithStaticMaterialTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithStaticMaterialTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithStaticMaterialTemplate>()
{
	return FDatasmithStaticMaterialTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithStaticMaterialTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithStaticMaterialTemplate, MaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotName_MetaData), NewProp_MaterialSlotName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithStaticMaterialTemplate, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInterface_MetaData), NewProp_MaterialInterface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewProp_MaterialInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithStaticMaterialTemplate",
	Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::PropPointers),
	sizeof(FDatasmithStaticMaterialTemplate),
	alignof(FDatasmithStaticMaterialTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithStaticMaterialTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithStaticMaterialTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithStaticMaterialTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithStaticMaterialTemplate

// Begin ScriptStruct FDatasmithMeshSectionInfoTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoTemplate;
class UScriptStruct* FDatasmithMeshSectionInfoTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithMeshSectionInfoTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithMeshSectionInfoTemplate>()
{
	return FDatasmithMeshSectionInfoTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithMeshSectionInfoTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithMeshSectionInfoTemplate, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewProp_MaterialIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithMeshSectionInfoTemplate",
	Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::PropPointers),
	sizeof(FDatasmithMeshSectionInfoTemplate),
	alignof(FDatasmithMeshSectionInfoTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithMeshSectionInfoTemplate

// Begin ScriptStruct FDatasmithMeshSectionInfoMapTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoMapTemplate;
class UScriptStruct* FDatasmithMeshSectionInfoMapTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoMapTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoMapTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithMeshSectionInfoMapTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoMapTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithMeshSectionInfoMapTemplate>()
{
	return FDatasmithMeshSectionInfoMapTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Map_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithMeshSectionInfoMapTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate, METADATA_PARAMS(0, nullptr) }; // 2481708158
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithMeshSectionInfoMapTemplate, Map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) }; // 2481708158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewProp_Map,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithMeshSectionInfoMapTemplate",
	Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::PropPointers),
	sizeof(FDatasmithMeshSectionInfoMapTemplate),
	alignof(FDatasmithMeshSectionInfoMapTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoMapTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoMapTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoMapTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithMeshSectionInfoMapTemplate

// Begin Class UDatasmithStaticMeshTemplate
void UDatasmithStaticMeshTemplate::StaticRegisterNativesUDatasmithStaticMeshTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshTemplate);
UClass* Z_Construct_UClass_UDatasmithStaticMeshTemplate_NoRegister()
{
	return UDatasmithStaticMeshTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithStaticMeshTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionInfoMap_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMaterials_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionInfoMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuildSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_SectionInfoMap = { "SectionInfoMap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, SectionInfoMap), Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionInfoMap_MetaData), NewProp_SectionInfoMap_MetaData) }; // 399059323
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapCoordinateIndex = { "LightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, LightMapCoordinateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMapCoordinateIndex_MetaData), NewProp_LightMapCoordinateIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, LightMapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMapResolution_MetaData), NewProp_LightMapResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings_Inner = { "BuildSettings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate, METADATA_PARAMS(0, nullptr) }; // 3891788293
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, BuildSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildSettings_MetaData), NewProp_BuildSettings_MetaData) }; // 3891788293
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials_Inner = { "StaticMaterials", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate, METADATA_PARAMS(0, nullptr) }; // 2241044257
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials = { "StaticMaterials", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithStaticMeshTemplate, StaticMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMaterials_MetaData), NewProp_StaticMaterials_MetaData) }; // 2241044257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_SectionInfoMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapCoordinateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_LightMapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_BuildSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::NewProp_StaticMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::ClassParams = {
	&UDatasmithStaticMeshTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithStaticMeshTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshTemplate>()
{
	return UDatasmithStaticMeshTemplate::StaticClass();
}
UDatasmithStaticMeshTemplate::UDatasmithStaticMeshTemplate() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshTemplate);
UDatasmithStaticMeshTemplate::~UDatasmithStaticMeshTemplate() {}
// End Class UDatasmithStaticMeshTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDatasmithMeshBuildSettingsTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewStructOps, TEXT("DatasmithMeshBuildSettingsTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithMeshBuildSettingsTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithMeshBuildSettingsTemplate), 3891788293U) },
		{ FDatasmithStaticMaterialTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewStructOps, TEXT("DatasmithStaticMaterialTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithStaticMaterialTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithStaticMaterialTemplate), 2241044257U) },
		{ FDatasmithMeshSectionInfoTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewStructOps, TEXT("DatasmithMeshSectionInfoTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithMeshSectionInfoTemplate), 2481708158U) },
		{ FDatasmithMeshSectionInfoMapTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewStructOps, TEXT("DatasmithMeshSectionInfoMapTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithMeshSectionInfoMapTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithMeshSectionInfoMapTemplate), 399059323U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithStaticMeshTemplate, UDatasmithStaticMeshTemplate::StaticClass, TEXT("UDatasmithStaticMeshTemplate"), &Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshTemplate), 1989014214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h_1062634507(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
