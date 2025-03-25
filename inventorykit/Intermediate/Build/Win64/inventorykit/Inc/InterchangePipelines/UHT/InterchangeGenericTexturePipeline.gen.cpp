// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangeGenericTexturePipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericTexturePipeline() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin Class UInterchangeGenericTexturePipeline
void UInterchangeGenericTexturePipeline::StaticRegisterNativesUInterchangeGenericTexturePipeline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericTexturePipeline);
UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister()
{
	return UInterchangeGenericTexturePipeline::StaticClass();
}
struct Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericTexturePipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PipelineDisplayName_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** The name of the pipeline that will be display in the import dialog. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "PipelineInternalEditionData", "True" },
		{ "StandAlonePipelineProperty", "True" },
		{ "ToolTip", "The name of the pipeline that will be display in the import dialog." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportTextures_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** If enabled, imports all texture assets found in the source. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enabled, imports all texture assets found in the source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "AlwaysResetToDefault", "True" },
		{ "Category", "Textures" },
		{ "Comment", "/** If set, and there is only one asset and one source, the imported asset will be given this name. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "StandAlonePipelineProperty", "True" },
		{ "ToolTip", "If set, and there is only one asset and one source, the imported asset will be given this name." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectNormalMapTexture_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** \n\x09 * If enabled, tests each newly imported texture to see if it is a normal map.\n\x09 * If it is, the SRGB, Compression Settings, and LOD Group properties of that texture will be adjusted.\n\x09 */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enabled, tests each newly imported texture to see if it is a normal map.\nIf it is, the SRGB, Compression Settings, and LOD Group properties of that texture will be adjusted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipNormalMapGreenChannel_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** If enabled, the texture's green channel will be inverted for normal maps. This setting is only used if the Detect Normal Map Texture setting is also enabled. */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enabled, the texture's green channel will be inverted for normal maps. This setting is only used if the Detect Normal Map Texture setting is also enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportUDIMs_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** If enabled, imports textures as UDIMs if they are named using a UDIM naming pattern. */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enabled, imports textures as UDIMs if they are named using a UDIM naming pattern." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileExtensionsToImportAsLongLatCubemap_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Specify the file types that should be imported as long/lat cubemaps. */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "Specify the file types that should be imported as long/lat cubemaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferCompressedSourceData_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** \n\x09 * If enabled, the translator compresses the source data payload whenever possible. This generally results in smaller assets.\n\x09 * However, some operations like the texture build might be slower, because the source data first needs to be decompressed.\n\x09 * If disabled, the translator leaves the decision to the factory or the pipelines.\n\x09 */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enabled, the translator compresses the source data payload whenever possible. This generally results in smaller assets.\nHowever, some operations like the texture build might be slower, because the source data first needs to be decompressed.\nIf disabled, the translator leaves the decision to the factory or the pipelines." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNonPowerOfTwo_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** If enabled, textures that have a non-power-of-two resolution are imported. */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enabled, textures that have a non-power-of-two resolution are imported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PipelineDisplayName;
	static void NewProp_bImportTextures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportTextures;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDetectNormalMapTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectNormalMapTexture;
	static void NewProp_bFlipNormalMapGreenChannel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipNormalMapGreenChannel;
	static void NewProp_bImportUDIMs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportUDIMs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileExtensionsToImportAsLongLatCubemap_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_FileExtensionsToImportAsLongLatCubemap;
	static void NewProp_bPreferCompressedSourceData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferCompressedSourceData;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bAllowNonPowerOfTwo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNonPowerOfTwo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericTexturePipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_PipelineDisplayName = { "PipelineDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericTexturePipeline, PipelineDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PipelineDisplayName_MetaData), NewProp_PipelineDisplayName_MetaData) };
void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures_SetBit(void* Obj)
{
	((UInterchangeGenericTexturePipeline*)Obj)->bImportTextures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures = { "bImportTextures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportTextures_MetaData), NewProp_bImportTextures_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericTexturePipeline, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture_SetBit(void* Obj)
{
	((UInterchangeGenericTexturePipeline*)Obj)->bDetectNormalMapTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture = { "bDetectNormalMapTexture", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectNormalMapTexture_MetaData), NewProp_bDetectNormalMapTexture_MetaData) };
void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel_SetBit(void* Obj)
{
	((UInterchangeGenericTexturePipeline*)Obj)->bFlipNormalMapGreenChannel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel = { "bFlipNormalMapGreenChannel", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipNormalMapGreenChannel_MetaData), NewProp_bFlipNormalMapGreenChannel_MetaData) };
void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs_SetBit(void* Obj)
{
	((UInterchangeGenericTexturePipeline*)Obj)->bImportUDIMs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs = { "bImportUDIMs", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportUDIMs_MetaData), NewProp_bImportUDIMs_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap_ElementProp = { "FileExtensionsToImportAsLongLatCubemap", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap = { "FileExtensionsToImportAsLongLatCubemap", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericTexturePipeline, FileExtensionsToImportAsLongLatCubemap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileExtensionsToImportAsLongLatCubemap_MetaData), NewProp_FileExtensionsToImportAsLongLatCubemap_MetaData) };
void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData_SetBit(void* Obj)
{
	((UInterchangeGenericTexturePipeline*)Obj)->bPreferCompressedSourceData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData = { "bPreferCompressedSourceData", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferCompressedSourceData_MetaData), NewProp_bPreferCompressedSourceData_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo_SetBit(void* Obj)
{
	((UInterchangeGenericTexturePipeline*)Obj)->bAllowNonPowerOfTwo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo = { "bAllowNonPowerOfTwo", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNonPowerOfTwo_MetaData), NewProp_bAllowNonPowerOfTwo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericTexturePipeline, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseNodeContainer_MetaData), NewProp_BaseNodeContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_PipelineDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_AssetName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_BaseNodeContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::ClassParams = {
	&UInterchangeGenericTexturePipeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline()
{
	if (!Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericTexturePipeline>()
{
	return UInterchangeGenericTexturePipeline::StaticClass();
}
UInterchangeGenericTexturePipeline::UInterchangeGenericTexturePipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericTexturePipeline);
UInterchangeGenericTexturePipeline::~UInterchangeGenericTexturePipeline() {}
// End Class UInterchangeGenericTexturePipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericTexturePipeline, UInterchangeGenericTexturePipeline::StaticClass, TEXT("UInterchangeGenericTexturePipeline"), &Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericTexturePipeline), 2571040747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_849853216(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
