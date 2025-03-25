// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangeGenericAssetsPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericAssetsPipeline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAssetsPipeline();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAssetsPipeline_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin Class UInterchangeGenericAssetsPipeline
void UInterchangeGenericAssetsPipeline::StaticRegisterNativesUInterchangeGenericAssetsPipeline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericAssetsPipeline);
UClass* Z_Construct_UClass_UInterchangeGenericAssetsPipeline_NoRegister()
{
	return UInterchangeGenericAssetsPipeline::StaticClass();
}
struct Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This pipeline is the generic option for all types of meshes. It should be called before specialized mesh pipelines like the generic static mesh or skeletal mesh pipelines.\n * All import options that are shared between mesh types should be added here.\n *\n */" },
		{ "IncludePath", "InterchangeGenericAssetsPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "This pipeline is the generic option for all types of meshes. It should be called before specialized mesh pipelines like the generic static mesh or skeletal mesh pipelines.\nAll import options that are shared between mesh types should be added here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PipelineDisplayName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** The name of the pipeline that will be display in the import dialog. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "PipelineInternalEditionData", "True" },
		{ "StandAlonePipelineProperty", "True" },
		{ "ToolTip", "The name of the pipeline that will be display in the import dialog." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportStrategy_MetaData[] = {
		{ "AdjustPipelineAndRefreshDetailOnChange", "True" },
		{ "Category", "Common" },
		{ "Comment", "/* Set the reimport strategy. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "Set the reimport strategy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSourceNameForAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** If enabled, and the Asset Name setting is empty, and there is only one asset and one source, the imported asset is given the same name as the source data. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "If enabled, and the Asset Name setting is empty, and there is only one asset and one source, the imported asset is given the same name as the source data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "AlwaysResetToDefault", "True" },
		{ "Category", "Common" },
		{ "Comment", "/** If set, and there is only one asset and one source, the imported asset is given this name. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "StandAlonePipelineProperty", "True" },
		{ "ToolTip", "If set, and there is only one asset and one source, the imported asset is given this name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportOffsetTranslation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Translation offset applied to meshes and animations. */" },
		{ "DisplayName", "Offset Translation" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "Translation offset applied to meshes and animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportOffsetRotation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Rotation offset applied to meshes and animations. */" },
		{ "DisplayName", "Offset Rotation" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "Rotation offset applied to meshes and animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportOffsetUniformScale_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Uniform scale offset applied to meshes and animations. */" },
		{ "DisplayName", "Offset Uniform Scale" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "Uniform scale offset applied to meshes and animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonMeshesProperties_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "//////\x09""COMMON_MESHES_CATEGORY Properties //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "COMMON_MESHES_CATEGORY Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "//////  COMMON_SKELETAL_ANIMATIONS_CATEGORY //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "COMMON_SKELETAL_ANIMATIONS_CATEGORY" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshPipeline_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "//////\x09MESHES_CATEGORY Properties //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "MESHES_CATEGORY Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPipeline_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//////\x09""ANIMATIONS_CATEGORY Properties //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "ANIMATIONS_CATEGORY Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPipeline_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "//////\x09MATERIALS_CATEGORY Properties //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "MATERIALS_CATEGORY Properties" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PipelineDisplayName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReimportStrategy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReimportStrategy;
	static void NewProp_bUseSourceNameForAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSourceNameForAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportOffsetTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportOffsetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportOffsetUniformScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonMeshesProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonSkeletalMeshesAndAnimationsProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshPipeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationPipeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialPipeline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericAssetsPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_PipelineDisplayName = { "PipelineDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, PipelineDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PipelineDisplayName_MetaData), NewProp_PipelineDisplayName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy = { "ReimportStrategy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, ReimportStrategy), Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportStrategy_MetaData), NewProp_ReimportStrategy_MetaData) }; // 2417377604
void Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset_SetBit(void* Obj)
{
	((UInterchangeGenericAssetsPipeline*)Obj)->bUseSourceNameForAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset = { "bUseSourceNameForAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAssetsPipeline), &Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSourceNameForAsset_MetaData), NewProp_bUseSourceNameForAsset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetTranslation = { "ImportOffsetTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, ImportOffsetTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportOffsetTranslation_MetaData), NewProp_ImportOffsetTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetRotation = { "ImportOffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, ImportOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportOffsetRotation_MetaData), NewProp_ImportOffsetRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetUniformScale = { "ImportOffsetUniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, ImportOffsetUniformScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportOffsetUniformScale_MetaData), NewProp_ImportOffsetUniformScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonMeshesProperties = { "CommonMeshesProperties", nullptr, (EPropertyFlags)0x01160000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, CommonMeshesProperties), Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonMeshesProperties_MetaData), NewProp_CommonMeshesProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties = { "CommonSkeletalMeshesAndAnimationsProperties", nullptr, (EPropertyFlags)0x01160000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, CommonSkeletalMeshesAndAnimationsProperties), Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData), NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MeshPipeline = { "MeshPipeline", nullptr, (EPropertyFlags)0x01160000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, MeshPipeline), Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshPipeline_MetaData), NewProp_MeshPipeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AnimationPipeline = { "AnimationPipeline", nullptr, (EPropertyFlags)0x01160000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, AnimationPipeline), Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationPipeline_MetaData), NewProp_AnimationPipeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MaterialPipeline = { "MaterialPipeline", nullptr, (EPropertyFlags)0x01160000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, MaterialPipeline), Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPipeline_MetaData), NewProp_MaterialPipeline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_PipelineDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetUniformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonMeshesProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MeshPipeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AnimationPipeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MaterialPipeline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::ClassParams = {
	&UInterchangeGenericAssetsPipeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeGenericAssetsPipeline()
{
	if (!Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericAssetsPipeline>()
{
	return UInterchangeGenericAssetsPipeline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericAssetsPipeline);
UInterchangeGenericAssetsPipeline::~UInterchangeGenericAssetsPipeline() {}
// End Class UInterchangeGenericAssetsPipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericAssetsPipeline, UInterchangeGenericAssetsPipeline::StaticClass, TEXT("UInterchangeGenericAssetsPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericAssetsPipeline), 4038285524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h_473679320(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
