// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SkinnedAssetCommon.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
#include "Runtime/Engine/Public/Animation/SkeletalMeshVertexAttribute.h"
#include "Runtime/Engine/Public/MeshUVChannelInfo.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedAssetCommon() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheUsage();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSectionReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESkinCacheUsage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkinCacheUsage;
static UEnum* ESkinCacheUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESkinCacheUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESkinCacheUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkinCacheUsage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkinCacheUsage"));
	}
	return Z_Registration_Info_UEnum_ESkinCacheUsage.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESkinCacheUsage>()
{
	return ESkinCacheUsage_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESkinCacheUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Comment", "// Auto will defer to child or global behavior based on context\n" },
		{ "Auto.Name", "ESkinCacheUsage::Auto" },
		{ "Auto.ToolTip", "Auto will defer to child or global behavior based on context" },
		{ "Disabled.Comment", "// Mesh will not use the skin cache. However, if Support Ray Tracing is enabled on the mesh, the skin cache will still be used for Ray Tracing updates\n" },
		{ "Disabled.Name", "ESkinCacheUsage::Disabled" },
		{ "Disabled.ToolTip", "Mesh will not use the skin cache. However, if Support Ray Tracing is enabled on the mesh, the skin cache will still be used for Ray Tracing updates" },
		{ "Enabled.Comment", "// Mesh will use the skin cache\n" },
		{ "Enabled.Name", "ESkinCacheUsage::Enabled" },
		{ "Enabled.ToolTip", "Mesh will use the skin cache" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESkinCacheUsage::Auto", (int64)ESkinCacheUsage::Auto },
		{ "ESkinCacheUsage::Disabled", (int64)ESkinCacheUsage::Disabled },
		{ "ESkinCacheUsage::Enabled", (int64)ESkinCacheUsage::Enabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkinCacheUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESkinCacheUsage",
	"ESkinCacheUsage",
	Z_Construct_UEnum_Engine_ESkinCacheUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkinCacheUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkinCacheUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESkinCacheUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESkinCacheUsage()
{
	if (!Z_Registration_Info_UEnum_ESkinCacheUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkinCacheUsage.InnerSingleton, Z_Construct_UEnum_Engine_ESkinCacheUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESkinCacheUsage.InnerSingleton;
}
// End Enum ESkinCacheUsage

// Begin Enum ESkinCacheDefaultBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior;
static UEnum* ESkinCacheDefaultBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkinCacheDefaultBehavior"));
	}
	return Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESkinCacheDefaultBehavior>()
{
	return ESkinCacheDefaultBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Exclusive.Comment", "// All skeletal meshes are excluded from the skin cache. Each must opt in individually. If Support Ray Tracing is enabled on a mesh, will force inclusive behavior on that mesh\n" },
		{ "Exclusive.Name", "ESkinCacheDefaultBehavior::Exclusive" },
		{ "Exclusive.ToolTip", "All skeletal meshes are excluded from the skin cache. Each must opt in individually. If Support Ray Tracing is enabled on a mesh, will force inclusive behavior on that mesh" },
		{ "Inclusive.Comment", "// All skeletal meshes are included into the skin cache. Each must opt out individually\n" },
		{ "Inclusive.Name", "ESkinCacheDefaultBehavior::Inclusive" },
		{ "Inclusive.ToolTip", "All skeletal meshes are included into the skin cache. Each must opt out individually" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESkinCacheDefaultBehavior::Exclusive", (int64)ESkinCacheDefaultBehavior::Exclusive },
		{ "ESkinCacheDefaultBehavior::Inclusive", (int64)ESkinCacheDefaultBehavior::Inclusive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESkinCacheDefaultBehavior",
	"ESkinCacheDefaultBehavior",
	Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior()
{
	if (!Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.InnerSingleton, Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior.InnerSingleton;
}
// End Enum ESkinCacheDefaultBehavior

// Begin ScriptStruct FSectionReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SectionReference;
class UScriptStruct* FSectionReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SectionReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SectionReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSectionReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SectionReference"));
	}
	return Z_Registration_Info_UScriptStruct_SectionReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSectionReference>()
{
	return FSectionReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSectionReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[] = {
		{ "Category", "SectionReference" },
		{ "Comment", "/** Index of the section we reference. **/" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Index of the section we reference. *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSectionReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSectionReference_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSectionReference, SectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionIndex_MetaData), NewProp_SectionIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSectionReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectionReference_Statics::NewProp_SectionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSectionReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SectionReference",
	Z_Construct_UScriptStruct_FSectionReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionReference_Statics::PropPointers),
	sizeof(FSectionReference),
	alignof(FSectionReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSectionReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSectionReference()
{
	if (!Z_Registration_Info_UScriptStruct_SectionReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SectionReference.InnerSingleton, Z_Construct_UScriptStruct_FSectionReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SectionReference.InnerSingleton;
}
// End ScriptStruct FSectionReference

// Begin ScriptStruct FSkeletalMeshLODInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshLODInfo;
class UScriptStruct* FSkeletalMeshLODInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshLODInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshLODInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshLODInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshLODInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshLODInfo>()
{
	return FSkeletalMeshLODInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing information for a particular LOD level, such as materials and info for when to use it. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Struct containing information for a particular LOD level, such as materials and info for when to use it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/** \n\x09 * ScreenSize to display this LOD.\n\x09 * The screen size is based around the projected diameter of the bounding\n\x09 * sphere of the model. i.e. 0.5 means half the screen's maximum dimension.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "ScreenSize to display this LOD.\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODHysteresis_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/**\x09Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple. */" },
		{ "DisplayName", "LOD Hysteresis" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODMaterialMap_MetaData[] = {
		{ "Comment", "/** Mapping table from this LOD's materials to the USkeletalMesh materials array.\n\x09 * section index is the key\n\x09 * remapped material index is the value, can be INDEX_NONE for no remapping\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Mapping table from this LOD's materials to the USkeletalMesh materials array.\nsection index is the key\nremapped material index is the value, can be INDEX_NONE for no remapping" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableShadowCasting_MetaData[] = {
		{ "Comment", "/** Per-section control over whether to enable shadow casting. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Per-section control over whether to enable shadow casting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovedBones_MetaData[] = {
		{ "Comment", "/** This has been removed in editor. We could re-apply this in import time or by mesh reduction utilities*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "This has been removed in editor. We could re-apply this in import time or by mesh reduction utilities" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** build settings to apply when building render data. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "build settings to apply when building render data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Reduction settings to apply when building render data. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Reduction settings to apply when building render data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Bones which should be removed from the skeleton for the LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Bones which should be removed from the skeleton for the LOD level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesToPrioritize_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Bones which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Bones which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionsToPrioritize_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Sections which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Sections which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightOfPrioritization_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much to consideration to give BonesToPrioritize and SectionsToPrioritize.  The weight is an additional vertex simplification penalty where 0 means nothing. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "How much to consideration to give BonesToPrioritize and SectionsToPrioritize.  The weight is an additional vertex simplification penalty where 0 means nothing." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakePoseOverride_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** This is used when you are sharing the LOD settings, but you'd like to override the BasePose. This precedes prior to BakePose*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "This is used when you are sharing the LOD settings, but you'd like to override the BasePose. This precedes prior to BakePose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceImportFilename_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/** The filename of the file tha was used to import this LOD if it was not auto generated. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "The filename of the file tha was used to import this LOD if it was not auto generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinCacheUsage_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/**\n\x09 * How this LOD uses the skin cache feature. Auto will defer to the default project global option. If Support Ray Tracing is enabled on the mesh, will imply Enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "How this LOD uses the skin cache feature. Auto will defer to the default project global option. If Support Ray Tracing is enabled on the mesh, will imply Enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetPositionErrorTolerance_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** The Morph target position error tolerance in microns. Larger values result in better compression and lower memory footprint, but also lower quality. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "The Morph target position error tolerance in microns. Larger values result in better compression and lower memory footprint, but also lower quality." },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenSimplified_MetaData[] = {
		{ "Comment", "/** Whether to disable morph targets for this LOD. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Whether to disable morph targets for this LOD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPerLODVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCPUAccess_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/** Keeps this LODs data on the CPU so it can be used for things such as sampling in FX. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Keeps this LODs data on the CPU so it can be used for things such as sampling in FX." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildHalfEdgeBuffers_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/**\n\x09 * If true, we will cache/cook half edge data that provides vertex connectivity information across material sections, which\n \x09 * may be useful for other systems like Mesh Deformer.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "If true, we will cache/cook half edge data that provides vertex connectivity information across material sections, which\nmay be useful for other systems like Mesh Deformer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMeshDeformer_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/** Whether a Mesh Deformer applied to the mesh asset or Skinned Mesh Component should be used on this LOD or not */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Whether a Mesh Deformer applied to the mesh asset or Skinned Mesh Component should be used on this LOD or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexAttributes_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/** List of vertex attributes to include for rendering and what type they should be */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "List of vertex attributes to include for rendering and what type they should be" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/**\n\x09Mesh supports uniformly distributed sampling in constant time.\n\x09Memory cost is 8 bytes per triangle.\n\x09""Example usage is uniform spawning of particles.\n\x09*/" },
		{ "EditCondition", "bAllowCPUAccess" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Mesh supports uniformly distributed sampling in constant time.\nMemory cost is 8 bytes per triangle.\nExample usage is uniform spawning of particles." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportWithBaseMesh_MetaData[] = {
		{ "Comment", "/*\n\x09 * This boolean specify if the LOD was imported with the base mesh or not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "* This boolean specify if the LOD was imported with the base mesh or not." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODHysteresis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODMaterialMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODMaterialMap;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableShadowCasting_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_bEnableShadowCasting;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RemovedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedBones;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonesToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonesToPrioritize_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToPrioritize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionsToPrioritize_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionsToPrioritize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightOfPrioritization;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakePose;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakePoseOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceImportFilename;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkinCacheUsage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkinCacheUsage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphTargetPositionErrorTolerance;
	static void NewProp_bHasBeenSimplified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenSimplified;
	static void NewProp_bHasPerLODVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPerLODVertexColors;
	static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
	static void NewProp_bBuildHalfEdgeBuffers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildHalfEdgeBuffers;
	static void NewProp_bAllowMeshDeformer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMeshDeformer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexAttributes;
	static void NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling;
#if WITH_EDITORONLY_DATA
	static void NewProp_bImportWithBaseMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportWithBaseMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshLODInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, ScreenSize), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) }; // 50753708
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODHysteresis = { "LODHysteresis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, LODHysteresis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODHysteresis_MetaData), NewProp_LODHysteresis_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap_Inner = { "LODMaterialMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap = { "LODMaterialMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, LODMaterialMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODMaterialMap_MetaData), NewProp_LODMaterialMap_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting_Inner = { "bEnableShadowCasting", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting = { "bEnableShadowCasting", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, bEnableShadowCasting_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableShadowCasting_MetaData), NewProp_bEnableShadowCasting_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones_Inner = { "RemovedBones", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones = { "RemovedBones", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, RemovedBones_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovedBones_MetaData), NewProp_RemovedBones_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BuildSettings), Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildSettings_MetaData), NewProp_BuildSettings_MetaData) }; // 384816126
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, ReductionSettings), Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReductionSettings_MetaData), NewProp_ReductionSettings_MetaData) }; // 3903286612
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove_Inner = { "BonesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove = { "BonesToRemove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BonesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesToRemove_MetaData), NewProp_BonesToRemove_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize_Inner = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BonesToPrioritize), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesToPrioritize_MetaData), NewProp_BonesToPrioritize_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SectionsToPrioritize_Inner = { "SectionsToPrioritize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSectionReference, METADATA_PARAMS(0, nullptr) }; // 4053227867
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SectionsToPrioritize = { "SectionsToPrioritize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, SectionsToPrioritize), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionsToPrioritize_MetaData), NewProp_SectionsToPrioritize_MetaData) }; // 4053227867
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_WeightOfPrioritization = { "WeightOfPrioritization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, WeightOfPrioritization), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightOfPrioritization_MetaData), NewProp_WeightOfPrioritization_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePose = { "BakePose", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BakePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakePose_MetaData), NewProp_BakePose_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePoseOverride = { "BakePoseOverride", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BakePoseOverride), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakePoseOverride_MetaData), NewProp_BakePoseOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SourceImportFilename = { "SourceImportFilename", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, SourceImportFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceImportFilename_MetaData), NewProp_SourceImportFilename_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage = { "SkinCacheUsage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, SkinCacheUsage), Z_Construct_UEnum_Engine_ESkinCacheUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinCacheUsage_MetaData), NewProp_SkinCacheUsage_MetaData) }; // 3678286733
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_MorphTargetPositionErrorTolerance = { "MorphTargetPositionErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, MorphTargetPositionErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetPositionErrorTolerance_MetaData), NewProp_MorphTargetPositionErrorTolerance_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified_SetBit(void* Obj)
{
	((FSkeletalMeshLODInfo*)Obj)->bHasBeenSimplified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified = { "bHasBeenSimplified", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenSimplified_MetaData), NewProp_bHasBeenSimplified_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors_SetBit(void* Obj)
{
	((FSkeletalMeshLODInfo*)Obj)->bHasPerLODVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors = { "bHasPerLODVertexColors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPerLODVertexColors_MetaData), NewProp_bHasPerLODVertexColors_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
{
	((FSkeletalMeshLODInfo*)Obj)->bAllowCPUAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCPUAccess_MetaData), NewProp_bAllowCPUAccess_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bBuildHalfEdgeBuffers_SetBit(void* Obj)
{
	((FSkeletalMeshLODInfo*)Obj)->bBuildHalfEdgeBuffers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bBuildHalfEdgeBuffers = { "bBuildHalfEdgeBuffers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bBuildHalfEdgeBuffers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildHalfEdgeBuffers_MetaData), NewProp_bBuildHalfEdgeBuffers_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowMeshDeformer_SetBit(void* Obj)
{
	((FSkeletalMeshLODInfo*)Obj)->bAllowMeshDeformer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowMeshDeformer = { "bAllowMeshDeformer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowMeshDeformer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMeshDeformer_MetaData), NewProp_bAllowMeshDeformer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_VertexAttributes_Inner = { "VertexAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo, METADATA_PARAMS(0, nullptr) }; // 34094187
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_VertexAttributes = { "VertexAttributes", nullptr, (EPropertyFlags)0x0010040000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, VertexAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexAttributes_MetaData), NewProp_VertexAttributes_MetaData) }; // 34094187
void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj)
{
	((FSkeletalMeshLODInfo*)Obj)->bSupportUniformlyDistributedSampling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling = { "bSupportUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportUniformlyDistributedSampling_MetaData), NewProp_bSupportUniformlyDistributedSampling_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh_SetBit(void* Obj)
{
	((FSkeletalMeshLODInfo*)Obj)->bImportWithBaseMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh = { "bImportWithBaseMesh", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportWithBaseMesh_MetaData), NewProp_bImportWithBaseMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODHysteresis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BuildSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ReductionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SectionsToPrioritize_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SectionsToPrioritize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_WeightOfPrioritization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePoseOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SourceImportFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_MorphTargetPositionErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bBuildHalfEdgeBuffers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowMeshDeformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_VertexAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_VertexAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkeletalMeshLODInfo",
	Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::PropPointers),
	sizeof(FSkeletalMeshLODInfo),
	alignof(FSkeletalMeshLODInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshLODInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshLODInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshLODInfo.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshLODInfo

// Begin ScriptStruct FSkeletalMaterial
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMaterial;
class UScriptStruct* FSkeletalMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMaterial, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMaterial.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMaterial>()
{
	return FSkeletalMaterial::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//~ Begin Material Interface for USkeletalMesh - contains a material and a shadow casting flag\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/*This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableShadowCasting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedMaterialSlotName_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/*This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelData_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Data used for texture streaming relative to each UV channels. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAssetCommon.h" },
		{ "ToolTip", "Data used for texture streaming relative to each UV channels." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
#if WITH_EDITORONLY_DATA
	static void NewProp_bEnableShadowCasting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableShadowCasting;
	static void NewProp_bRecomputeTangent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ImportedMaterialSlotName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVChannelData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMaterial, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInterface_MetaData), NewProp_MaterialInterface_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMaterial, MaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotName_MetaData), NewProp_MaterialSlotName_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting_SetBit(void* Obj)
{
	((FSkeletalMaterial*)Obj)->bEnableShadowCasting_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting = { "bEnableShadowCasting", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkeletalMaterial), &Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableShadowCasting_MetaData), NewProp_bEnableShadowCasting_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent_SetBit(void* Obj)
{
	((FSkeletalMaterial*)Obj)->bRecomputeTangent_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent = { "bRecomputeTangent", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkeletalMaterial), &Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecomputeTangent_MetaData), NewProp_bRecomputeTangent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_ImportedMaterialSlotName = { "ImportedMaterialSlotName", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMaterial, ImportedMaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedMaterialSlotName_MetaData), NewProp_ImportedMaterialSlotName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_UVChannelData = { "UVChannelData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMaterial, UVChannelData), Z_Construct_UScriptStruct_FMeshUVChannelInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelData_MetaData), NewProp_UVChannelData_MetaData) }; // 869722330
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialSlotName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_ImportedMaterialSlotName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_UVChannelData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkeletalMaterial",
	Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::PropPointers),
	sizeof(FSkeletalMaterial),
	alignof(FSkeletalMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMaterial.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMaterial.InnerSingleton;
}
// End ScriptStruct FSkeletalMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESkinCacheUsage_StaticEnum, TEXT("ESkinCacheUsage"), &Z_Registration_Info_UEnum_ESkinCacheUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3678286733U) },
		{ ESkinCacheDefaultBehavior_StaticEnum, TEXT("ESkinCacheDefaultBehavior"), &Z_Registration_Info_UEnum_ESkinCacheDefaultBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3858089192U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSectionReference::StaticStruct, Z_Construct_UScriptStruct_FSectionReference_Statics::NewStructOps, TEXT("SectionReference"), &Z_Registration_Info_UScriptStruct_SectionReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSectionReference), 4053227867U) },
		{ FSkeletalMeshLODInfo::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewStructOps, TEXT("SkeletalMeshLODInfo"), &Z_Registration_Info_UScriptStruct_SkeletalMeshLODInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshLODInfo), 1129142360U) },
		{ FSkeletalMaterial::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewStructOps, TEXT("SkeletalMaterial"), &Z_Registration_Info_UScriptStruct_SkeletalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMaterial), 1879788533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_989297483(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
