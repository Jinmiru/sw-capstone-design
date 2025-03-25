// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSourceModel.h"
#include "Runtime/Engine/Classes/Engine/SkinnedAssetCommon.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/PerQualityLevelProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMesh() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset();
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClothLODBiasMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPerQualityLevels();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData_Legacy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSourceModel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkinWeightProfileInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESkeletalMeshAsyncProperties
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties;
static UEnum* ESkeletalMeshAsyncProperties_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkeletalMeshAsyncProperties"));
	}
	return Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshAsyncProperties>()
{
	return ESkeletalMeshAsyncProperties_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "ESkeletalMeshAsyncProperties::All" },
		{ "AssetImportData.Name", "ESkeletalMeshAsyncProperties::AssetImportData" },
		{ "BodySetup.Name", "ESkeletalMeshAsyncProperties::BodySetup" },
		{ "bSupportRayTracing.Name", "ESkeletalMeshAsyncProperties::bSupportRayTracing" },
		{ "CachedComposedRefPoseMatrices.Name", "ESkeletalMeshAsyncProperties::CachedComposedRefPoseMatrices" },
		{ "ClothLODBiasMode.Name", "ESkeletalMeshAsyncProperties::ClothLODBiasMode" },
		{ "Comment", "/*-----------------------------------------------------------------------------\n\x09""Async Skeletal Mesh Compilation\n-----------------------------------------------------------------------------*/" },
		{ "DefaultAnimationRig.Name", "ESkeletalMeshAsyncProperties::DefaultAnimationRig" },
		{ "DefaultEditorCameraLocation.Name", "ESkeletalMeshAsyncProperties::DefaultEditorCameraLocation" },
		{ "DefaultEditorCameraLookAt.Name", "ESkeletalMeshAsyncProperties::DefaultEditorCameraLookAt" },
		{ "DefaultEditorCameraOrthoZoom.Name", "ESkeletalMeshAsyncProperties::DefaultEditorCameraOrthoZoom" },
		{ "DefaultEditorCameraRotation.Name", "ESkeletalMeshAsyncProperties::DefaultEditorCameraRotation" },
		{ "DefaultMeshDeformer.Name", "ESkeletalMeshAsyncProperties::DefaultMeshDeformer" },
		{ "DisableBelowMinLodStripping.Name", "ESkeletalMeshAsyncProperties::DisableBelowMinLodStripping" },
		{ "EnablePerPolyCollision.Name", "ESkeletalMeshAsyncProperties::EnablePerPolyCollision" },
		{ "ExtendedBounds.Name", "ESkeletalMeshAsyncProperties::ExtendedBounds" },
		{ "FloorOffset.Name", "ESkeletalMeshAsyncProperties::FloorOffset" },
		{ "HasActiveClothingAssets.Name", "ESkeletalMeshAsyncProperties::HasActiveClothingAssets" },
		{ "HasBeenSimplified.Name", "ESkeletalMeshAsyncProperties::HasBeenSimplified" },
		{ "HasCustomDefaultEditorCamera.Name", "ESkeletalMeshAsyncProperties::HasCustomDefaultEditorCamera" },
		{ "HasVertexColors.Name", "ESkeletalMeshAsyncProperties::HasVertexColors" },
		{ "ImportedBounds.Name", "ESkeletalMeshAsyncProperties::ImportedBounds" },
		{ "ImportedModel.Name", "ESkeletalMeshAsyncProperties::ImportedModel" },
		{ "LODInfo.Name", "ESkeletalMeshAsyncProperties::LODInfo" },
		{ "LODSettings.Name", "ESkeletalMeshAsyncProperties::LODSettings" },
		{ "Materials.Name", "ESkeletalMeshAsyncProperties::Materials" },
		{ "MaxNumOptionalLODs.Name", "ESkeletalMeshAsyncProperties::MaxNumOptionalLODs" },
		{ "MaxNumStreamedLODs.Name", "ESkeletalMeshAsyncProperties::MaxNumStreamedLODs" },
		{ "MeshClothingAssets.Name", "ESkeletalMeshAsyncProperties::MeshClothingAssets" },
		{ "MeshEditorDataObject.Name", "ESkeletalMeshAsyncProperties::MeshEditorDataObject" },
		{ "MinLod.Name", "ESkeletalMeshAsyncProperties::MinLod" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "MorphTargetIndexMap.Name", "ESkeletalMeshAsyncProperties::MorphTargetIndexMap" },
		{ "MorphTargets.Name", "ESkeletalMeshAsyncProperties::MorphTargets" },
		{ "NegativeBoundsExtension.Name", "ESkeletalMeshAsyncProperties::NegativeBoundsExtension" },
		{ "NeverStream.Name", "ESkeletalMeshAsyncProperties::NeverStream" },
		{ "NodeMappingData.Name", "ESkeletalMeshAsyncProperties::NodeMappingData" },
		{ "None.Name", "ESkeletalMeshAsyncProperties::None" },
		{ "OverlayMaterial.Name", "ESkeletalMeshAsyncProperties::OverlayMaterial" },
		{ "OverlayMaterialMaxDrawDistance.Name", "ESkeletalMeshAsyncProperties::OverlayMaterialMaxDrawDistance" },
		{ "OverrideLODStreamingSettings.Name", "ESkeletalMeshAsyncProperties::OverrideLODStreamingSettings" },
		{ "PhysicsAsset.Name", "ESkeletalMeshAsyncProperties::PhysicsAsset" },
		{ "PositiveBoundsExtension.Name", "ESkeletalMeshAsyncProperties::PositiveBoundsExtension" },
		{ "PostProcessAnimBlueprint.Name", "ESkeletalMeshAsyncProperties::PostProcessAnimBlueprint" },
		{ "PreviewAttachedAssetContainer.Name", "ESkeletalMeshAsyncProperties::PreviewAttachedAssetContainer" },
		{ "RayTracingMinLOD.Name", "ESkeletalMeshAsyncProperties::RayTracingMinLOD" },
		{ "RefBasesInvMatrix.Name", "ESkeletalMeshAsyncProperties::RefBasesInvMatrix" },
		{ "RefSkeleton.Name", "ESkeletalMeshAsyncProperties::RefSkeleton" },
		{ "RequiresLODHysteresisConversion.Name", "ESkeletalMeshAsyncProperties::RequiresLODHysteresisConversion" },
		{ "RequiresLODScreenSizeConversion.Name", "ESkeletalMeshAsyncProperties::RequiresLODScreenSizeConversion" },
		{ "RetargetBasePose.Name", "ESkeletalMeshAsyncProperties::RetargetBasePose" },
		{ "SamplingInfo.Name", "ESkeletalMeshAsyncProperties::SamplingInfo" },
		{ "ShadowPhysicsAsset.Name", "ESkeletalMeshAsyncProperties::ShadowPhysicsAsset" },
		{ "SkeletalMeshRenderData.Name", "ESkeletalMeshAsyncProperties::SkeletalMeshRenderData" },
		{ "Skeleton.Name", "ESkeletalMeshAsyncProperties::Skeleton" },
		{ "SkelMirrorAxis.Name", "ESkeletalMeshAsyncProperties::SkelMirrorAxis" },
		{ "SkelMirrorFlipAxis.Name", "ESkeletalMeshAsyncProperties::SkelMirrorFlipAxis" },
		{ "SkelMirrorTable.Name", "ESkeletalMeshAsyncProperties::SkelMirrorTable" },
		{ "SkinWeightProfiles.Name", "ESkeletalMeshAsyncProperties::SkinWeightProfiles" },
		{ "SourceModels.Name", "ESkeletalMeshAsyncProperties::SourceModels" },
		{ "SupportLODStreaming.Name", "ESkeletalMeshAsyncProperties::SupportLODStreaming" },
		{ "ThumbnailInfo.Name", "ESkeletalMeshAsyncProperties::ThumbnailInfo" },
		{ "ToolTip", "Async Skeletal Mesh Compilation" },
		{ "VertexColorGuid.Name", "ESkeletalMeshAsyncProperties::VertexColorGuid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESkeletalMeshAsyncProperties::None", (int64)ESkeletalMeshAsyncProperties::None },
		{ "ESkeletalMeshAsyncProperties::Materials", (int64)ESkeletalMeshAsyncProperties::Materials },
		{ "ESkeletalMeshAsyncProperties::Skeleton", (int64)ESkeletalMeshAsyncProperties::Skeleton },
		{ "ESkeletalMeshAsyncProperties::RefSkeleton", (int64)ESkeletalMeshAsyncProperties::RefSkeleton },
		{ "ESkeletalMeshAsyncProperties::RetargetBasePose", (int64)ESkeletalMeshAsyncProperties::RetargetBasePose },
		{ "ESkeletalMeshAsyncProperties::RefBasesInvMatrix", (int64)ESkeletalMeshAsyncProperties::RefBasesInvMatrix },
		{ "ESkeletalMeshAsyncProperties::MeshClothingAssets", (int64)ESkeletalMeshAsyncProperties::MeshClothingAssets },
		{ "ESkeletalMeshAsyncProperties::SourceModels", (int64)ESkeletalMeshAsyncProperties::SourceModels },
		{ "ESkeletalMeshAsyncProperties::HasActiveClothingAssets", (int64)ESkeletalMeshAsyncProperties::HasActiveClothingAssets },
		{ "ESkeletalMeshAsyncProperties::LODSettings", (int64)ESkeletalMeshAsyncProperties::LODSettings },
		{ "ESkeletalMeshAsyncProperties::HasVertexColors", (int64)ESkeletalMeshAsyncProperties::HasVertexColors },
		{ "ESkeletalMeshAsyncProperties::VertexColorGuid", (int64)ESkeletalMeshAsyncProperties::VertexColorGuid },
		{ "ESkeletalMeshAsyncProperties::MorphTargets", (int64)ESkeletalMeshAsyncProperties::MorphTargets },
		{ "ESkeletalMeshAsyncProperties::SkeletalMeshRenderData", (int64)ESkeletalMeshAsyncProperties::SkeletalMeshRenderData },
		{ "ESkeletalMeshAsyncProperties::MeshEditorDataObject", (int64)ESkeletalMeshAsyncProperties::MeshEditorDataObject },
		{ "ESkeletalMeshAsyncProperties::NeverStream", (int64)ESkeletalMeshAsyncProperties::NeverStream },
		{ "ESkeletalMeshAsyncProperties::OverrideLODStreamingSettings", (int64)ESkeletalMeshAsyncProperties::OverrideLODStreamingSettings },
		{ "ESkeletalMeshAsyncProperties::SupportLODStreaming", (int64)ESkeletalMeshAsyncProperties::SupportLODStreaming },
		{ "ESkeletalMeshAsyncProperties::MaxNumStreamedLODs", (int64)ESkeletalMeshAsyncProperties::MaxNumStreamedLODs },
		{ "ESkeletalMeshAsyncProperties::MaxNumOptionalLODs", (int64)ESkeletalMeshAsyncProperties::MaxNumOptionalLODs },
		{ "ESkeletalMeshAsyncProperties::ImportedModel", (int64)ESkeletalMeshAsyncProperties::ImportedModel },
		{ "ESkeletalMeshAsyncProperties::LODInfo", (int64)ESkeletalMeshAsyncProperties::LODInfo },
		{ "ESkeletalMeshAsyncProperties::SkinWeightProfiles", (int64)ESkeletalMeshAsyncProperties::SkinWeightProfiles },
		{ "ESkeletalMeshAsyncProperties::CachedComposedRefPoseMatrices", (int64)ESkeletalMeshAsyncProperties::CachedComposedRefPoseMatrices },
		{ "ESkeletalMeshAsyncProperties::SamplingInfo", (int64)ESkeletalMeshAsyncProperties::SamplingInfo },
		{ "ESkeletalMeshAsyncProperties::NodeMappingData", (int64)ESkeletalMeshAsyncProperties::NodeMappingData },
		{ "ESkeletalMeshAsyncProperties::ShadowPhysicsAsset", (int64)ESkeletalMeshAsyncProperties::ShadowPhysicsAsset },
		{ "ESkeletalMeshAsyncProperties::SkelMirrorTable", (int64)ESkeletalMeshAsyncProperties::SkelMirrorTable },
		{ "ESkeletalMeshAsyncProperties::MinLod", (int64)ESkeletalMeshAsyncProperties::MinLod },
		{ "ESkeletalMeshAsyncProperties::DisableBelowMinLodStripping", (int64)ESkeletalMeshAsyncProperties::DisableBelowMinLodStripping },
		{ "ESkeletalMeshAsyncProperties::SkelMirrorAxis", (int64)ESkeletalMeshAsyncProperties::SkelMirrorAxis },
		{ "ESkeletalMeshAsyncProperties::SkelMirrorFlipAxis", (int64)ESkeletalMeshAsyncProperties::SkelMirrorFlipAxis },
		{ "ESkeletalMeshAsyncProperties::DefaultAnimationRig", (int64)ESkeletalMeshAsyncProperties::DefaultAnimationRig },
		{ "ESkeletalMeshAsyncProperties::NegativeBoundsExtension", (int64)ESkeletalMeshAsyncProperties::NegativeBoundsExtension },
		{ "ESkeletalMeshAsyncProperties::PositiveBoundsExtension", (int64)ESkeletalMeshAsyncProperties::PositiveBoundsExtension },
		{ "ESkeletalMeshAsyncProperties::ExtendedBounds", (int64)ESkeletalMeshAsyncProperties::ExtendedBounds },
		{ "ESkeletalMeshAsyncProperties::HasBeenSimplified", (int64)ESkeletalMeshAsyncProperties::HasBeenSimplified },
		{ "ESkeletalMeshAsyncProperties::EnablePerPolyCollision", (int64)ESkeletalMeshAsyncProperties::EnablePerPolyCollision },
		{ "ESkeletalMeshAsyncProperties::BodySetup", (int64)ESkeletalMeshAsyncProperties::BodySetup },
		{ "ESkeletalMeshAsyncProperties::MorphTargetIndexMap", (int64)ESkeletalMeshAsyncProperties::MorphTargetIndexMap },
		{ "ESkeletalMeshAsyncProperties::FloorOffset", (int64)ESkeletalMeshAsyncProperties::FloorOffset },
		{ "ESkeletalMeshAsyncProperties::ImportedBounds", (int64)ESkeletalMeshAsyncProperties::ImportedBounds },
		{ "ESkeletalMeshAsyncProperties::PhysicsAsset", (int64)ESkeletalMeshAsyncProperties::PhysicsAsset },
		{ "ESkeletalMeshAsyncProperties::AssetImportData", (int64)ESkeletalMeshAsyncProperties::AssetImportData },
		{ "ESkeletalMeshAsyncProperties::ThumbnailInfo", (int64)ESkeletalMeshAsyncProperties::ThumbnailInfo },
		{ "ESkeletalMeshAsyncProperties::HasCustomDefaultEditorCamera", (int64)ESkeletalMeshAsyncProperties::HasCustomDefaultEditorCamera },
		{ "ESkeletalMeshAsyncProperties::DefaultEditorCameraLocation", (int64)ESkeletalMeshAsyncProperties::DefaultEditorCameraLocation },
		{ "ESkeletalMeshAsyncProperties::DefaultEditorCameraRotation", (int64)ESkeletalMeshAsyncProperties::DefaultEditorCameraRotation },
		{ "ESkeletalMeshAsyncProperties::RequiresLODScreenSizeConversion", (int64)ESkeletalMeshAsyncProperties::RequiresLODScreenSizeConversion },
		{ "ESkeletalMeshAsyncProperties::PostProcessAnimBlueprint", (int64)ESkeletalMeshAsyncProperties::PostProcessAnimBlueprint },
		{ "ESkeletalMeshAsyncProperties::DefaultEditorCameraLookAt", (int64)ESkeletalMeshAsyncProperties::DefaultEditorCameraLookAt },
		{ "ESkeletalMeshAsyncProperties::PreviewAttachedAssetContainer", (int64)ESkeletalMeshAsyncProperties::PreviewAttachedAssetContainer },
		{ "ESkeletalMeshAsyncProperties::DefaultEditorCameraOrthoZoom", (int64)ESkeletalMeshAsyncProperties::DefaultEditorCameraOrthoZoom },
		{ "ESkeletalMeshAsyncProperties::RequiresLODHysteresisConversion", (int64)ESkeletalMeshAsyncProperties::RequiresLODHysteresisConversion },
		{ "ESkeletalMeshAsyncProperties::bSupportRayTracing", (int64)ESkeletalMeshAsyncProperties::bSupportRayTracing },
		{ "ESkeletalMeshAsyncProperties::RayTracingMinLOD", (int64)ESkeletalMeshAsyncProperties::RayTracingMinLOD },
		{ "ESkeletalMeshAsyncProperties::ClothLODBiasMode", (int64)ESkeletalMeshAsyncProperties::ClothLODBiasMode },
		{ "ESkeletalMeshAsyncProperties::DefaultMeshDeformer", (int64)ESkeletalMeshAsyncProperties::DefaultMeshDeformer },
		{ "ESkeletalMeshAsyncProperties::OverlayMaterial", (int64)ESkeletalMeshAsyncProperties::OverlayMaterial },
		{ "ESkeletalMeshAsyncProperties::OverlayMaterialMaxDrawDistance", (int64)ESkeletalMeshAsyncProperties::OverlayMaterialMaxDrawDistance },
		{ "ESkeletalMeshAsyncProperties::All", (int64)ESkeletalMeshAsyncProperties::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESkeletalMeshAsyncProperties",
	"ESkeletalMeshAsyncProperties",
	Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties()
{
	if (!Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.InnerSingleton, Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.InnerSingleton;
}
// End Enum ESkeletalMeshAsyncProperties

// Begin ScriptStruct FBoneMirrorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneMirrorInfo;
class UScriptStruct* FBoneMirrorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneMirrorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneMirrorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMirrorInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneMirrorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BoneMirrorInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneMirrorInfo>()
{
	return FBoneMirrorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[] = {
		{ "ArrayClamp", "RefSkeleton" },
		{ "Category", "BoneMirrorInfo" },
		{ "Comment", "/** The bone to mirror. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "The bone to mirror." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneFlipAxis_MetaData[] = {
		{ "Category", "BoneMirrorInfo" },
		{ "Comment", "/** Axis the bone is mirrored across. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Axis the bone is mirrored across." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneFlipAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMirrorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneMirrorInfo, SourceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceIndex_MetaData), NewProp_SourceIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis = { "BoneFlipAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneMirrorInfo, BoneFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneFlipAxis_MetaData), NewProp_BoneFlipAxis_MetaData) }; // 342925220
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BoneMirrorInfo",
	Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers),
	sizeof(FBoneMirrorInfo),
	alignof(FBoneMirrorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_BoneMirrorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneMirrorInfo.InnerSingleton, Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneMirrorInfo.InnerSingleton;
}
// End ScriptStruct FBoneMirrorInfo

// Begin ScriptStruct FBoneMirrorExport
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneMirrorExport;
class UScriptStruct* FBoneMirrorExport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneMirrorExport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneMirrorExport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMirrorExport, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneMirrorExport"));
	}
	return Z_Registration_Info_UScriptStruct_BoneMirrorExport.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneMirrorExport>()
{
	return FBoneMirrorExport::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneMirrorExport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "BoneMirrorExport" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBoneName_MetaData[] = {
		{ "Category", "BoneMirrorExport" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneFlipAxis_MetaData[] = {
		{ "Category", "BoneMirrorExport" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBoneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneFlipAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMirrorExport>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneMirrorExport, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName = { "SourceBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneMirrorExport, SourceBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBoneName_MetaData), NewProp_SourceBoneName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis = { "BoneFlipAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneMirrorExport, BoneFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneFlipAxis_MetaData), NewProp_BoneFlipAxis_MetaData) }; // 342925220
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BoneMirrorExport",
	Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers),
	sizeof(FBoneMirrorExport),
	alignof(FBoneMirrorExport),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport()
{
	if (!Z_Registration_Info_UScriptStruct_BoneMirrorExport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneMirrorExport.InnerSingleton, Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneMirrorExport.InnerSingleton;
}
// End ScriptStruct FBoneMirrorExport

// Begin ScriptStruct FSkeletalMeshClothBuildParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams;
class UScriptStruct* FSkeletalMeshClothBuildParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshClothBuildParams"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshClothBuildParams>()
{
	return FSkeletalMeshClothBuildParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct holding parameters needed when creating a new clothing asset or sub asset (LOD) */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Struct holding parameters needed when creating a new clothing asset or sub asset (LOD)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// Target asset when importing LODs\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Target asset when importing LODs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLod_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// Target LOD to import to when importing LODs\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Target LOD to import to when importing LODs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemapParameters_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// If reimporting, this will map the old LOD parameters to the new LOD mesh.\n// If adding a new LOD this will map the parameters from the preceeding LOD.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "If reimporting, this will map the old LOD parameters to the new LOD mesh.\nIf adding a new LOD this will map the parameters from the preceeding LOD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Name of the clothing asset \n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Name of the clothing asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// LOD to extract the section from\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "LOD to extract the section from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSection_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Section within the specified LOD to extract\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Section within the specified LOD to extract" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveFromMesh_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Whether or not to leave this section behind (if driving a mesh with itself). Enable this if driving a high poly mesh with a low poly\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Whether or not to leave this section behind (if driving a mesh with itself). Enable this if driving a high poly mesh with a low poly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Physics asset to extract collisions from, note this will only extract spheres and Sphyls, as that is what the simulation supports.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Physics asset to extract collisions from, note this will only extract spheres and Sphyls, as that is what the simulation supports." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetLod;
	static void NewProp_bRemapParameters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemapParameters;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceSection;
	static void NewProp_bRemoveFromMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveFromMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshClothBuildParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset = { "TargetAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, TargetAsset), Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAsset_MetaData), NewProp_TargetAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod = { "TargetLod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, TargetLod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLod_MetaData), NewProp_TargetLod_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_SetBit(void* Obj)
{
	((FSkeletalMeshClothBuildParams*)Obj)->bRemapParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters = { "bRemapParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkeletalMeshClothBuildParams), &Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemapParameters_MetaData), NewProp_bRemapParameters_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, LodIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodIndex_MetaData), NewProp_LodIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection = { "SourceSection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, SourceSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSection_MetaData), NewProp_SourceSection_MetaData) };
void Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_SetBit(void* Obj)
{
	((FSkeletalMeshClothBuildParams*)Obj)->bRemoveFromMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh = { "bRemoveFromMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkeletalMeshClothBuildParams), &Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveFromMesh_MetaData), NewProp_bRemoveFromMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAsset_MetaData), NewProp_PhysicsAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkeletalMeshClothBuildParams",
	Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers),
	sizeof(FSkeletalMeshClothBuildParams),
	alignof(FSkeletalMeshClothBuildParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshClothBuildParams

// Begin ScriptStruct FClothPhysicsProperties_Legacy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy;
class UScriptStruct* FClothPhysicsProperties_Legacy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClothPhysicsProperties_Legacy"));
	}
	return Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClothPhysicsProperties_Legacy>()
{
	return FClothPhysicsProperties_Legacy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Legacy object for back-compat loading, no longer used by clothing system\n */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Legacy object for back-compat loading, no longer used by clothing system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShearResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InertiaBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionThickness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionSquashScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiberCompression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiberExpansion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiberResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BendResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShearResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Drag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StiffnessFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MassScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InertiaBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionSquashScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FiberCompression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FiberExpansion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FiberResistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPhysicsProperties_Legacy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance = { "VerticalResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, VerticalResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalResistance_MetaData), NewProp_VerticalResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance = { "HorizontalResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, HorizontalResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalResistance_MetaData), NewProp_HorizontalResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance = { "BendResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, BendResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendResistance_MetaData), NewProp_BendResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance = { "ShearResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, ShearResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShearResistance_MetaData), NewProp_ShearResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Damping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, TetherStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherStiffness_MetaData), NewProp_TetherStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, TetherLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherLimit_MetaData), NewProp_TetherLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Drag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Drag_MetaData), NewProp_Drag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, StiffnessFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StiffnessFrequency_MetaData), NewProp_StiffnessFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale = { "MassScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, MassScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassScale_MetaData), NewProp_MassScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend = { "InertiaBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, InertiaBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InertiaBlend_MetaData), NewProp_InertiaBlend_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness = { "SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionThickness_MetaData), NewProp_SelfCollisionThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale = { "SelfCollisionSquashScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionSquashScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionSquashScale_MetaData), NewProp_SelfCollisionSquashScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionStiffness_MetaData), NewProp_SelfCollisionStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SolverFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverFrequency_MetaData), NewProp_SolverFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression = { "FiberCompression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberCompression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiberCompression_MetaData), NewProp_FiberCompression_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion = { "FiberExpansion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberExpansion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiberExpansion_MetaData), NewProp_FiberExpansion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance = { "FiberResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiberResistance_MetaData), NewProp_FiberResistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClothPhysicsProperties_Legacy",
	Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers),
	sizeof(FClothPhysicsProperties_Legacy),
	alignof(FClothPhysicsProperties_Legacy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy()
{
	if (!Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.InnerSingleton, Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.InnerSingleton;
}
// End ScriptStruct FClothPhysicsProperties_Legacy

// Begin ScriptStruct FClothingAssetData_Legacy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy;
class UScriptStruct* FClothingAssetData_Legacy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothingAssetData_Legacy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClothingAssetData_Legacy"));
	}
	return Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClothingAssetData_Legacy>()
{
	return FClothingAssetData_Legacy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Legacy struct for handling back compat serialization\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Legacy struct for handling back compat serialization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApexFileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClothPropertiesChanged_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApexFileName;
	static void NewProp_bClothPropertiesChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClothPropertiesChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothingAssetData_Legacy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothingAssetData_Legacy, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName = { "ApexFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothingAssetData_Legacy, ApexFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApexFileName_MetaData), NewProp_ApexFileName_MetaData) };
void Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_SetBit(void* Obj)
{
	((FClothingAssetData_Legacy*)Obj)->bClothPropertiesChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged = { "bClothPropertiesChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClothingAssetData_Legacy), &Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClothPropertiesChanged_MetaData), NewProp_bClothPropertiesChanged_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties = { "PhysicsProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothingAssetData_Legacy, PhysicsProperties), Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsProperties_MetaData), NewProp_PhysicsProperties_MetaData) }; // 1641674750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClothingAssetData_Legacy",
	Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers),
	sizeof(FClothingAssetData_Legacy),
	alignof(FClothingAssetData_Legacy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData_Legacy()
{
	if (!Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.InnerSingleton, Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.InnerSingleton;
}
// End ScriptStruct FClothingAssetData_Legacy

// Begin Enum EClothLODBiasMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothLODBiasMode;
static UEnum* EClothLODBiasMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClothLODBiasMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClothLODBiasMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClothLODBiasMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EClothLODBiasMode"));
	}
	return Z_Registration_Info_UEnum_EClothLODBiasMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EClothLODBiasMode>()
{
	return EClothLODBiasMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Strategy used for storing additional cloth deformer mappings depending on the\n * desired use of the RaytracingMinLOD value and of the LODBias console variable.\n */" },
		{ "MappingsToAnyLOD.Comment", "// Store all cloth deformer mappings at the expense of memory usage, to allow raytracing of the cloth elements at any higher LOD.\n// Use this mode when the RayTracing LODBias console variable is in use.\n" },
		{ "MappingsToAnyLOD.Name", "EClothLODBiasMode::MappingsToAnyLOD" },
		{ "MappingsToAnyLOD.ToolTip", "Store all cloth deformer mappings at the expense of memory usage, to allow raytracing of the cloth elements at any higher LOD.\nUse this mode when the RayTracing LODBias console variable is in use." },
		{ "MappingsToMinLOD.Comment", "// Store additional cloth deformer mappings to allow raytracing of the cloth elements at RayTracingMinLOD.\n// Raytracing of cloth elements must never be of a different LOD to the one being rendered, or to the one set in RayTracingMinLOD when using this mode.\n" },
		{ "MappingsToMinLOD.Name", "EClothLODBiasMode::MappingsToMinLOD" },
		{ "MappingsToMinLOD.ToolTip", "Store additional cloth deformer mappings to allow raytracing of the cloth elements at RayTracingMinLOD.\nRaytracing of cloth elements must never be of a different LOD to the one being rendered, or to the one set in RayTracingMinLOD when using this mode." },
		{ "MappingsToSameLOD.Comment", "// Only store the strict minimum amount of cloth deformer mappings to save on memory usage.\n// Raytracing of cloth elements must never be of a different LOD to the one being rendered when using this mode.\n" },
		{ "MappingsToSameLOD.Name", "EClothLODBiasMode::MappingsToSameLOD" },
		{ "MappingsToSameLOD.ToolTip", "Only store the strict minimum amount of cloth deformer mappings to save on memory usage.\nRaytracing of cloth elements must never be of a different LOD to the one being rendered when using this mode." },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Strategy used for storing additional cloth deformer mappings depending on the\ndesired use of the RaytracingMinLOD value and of the LODBias console variable." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClothLODBiasMode::MappingsToSameLOD", (int64)EClothLODBiasMode::MappingsToSameLOD },
		{ "EClothLODBiasMode::MappingsToMinLOD", (int64)EClothLODBiasMode::MappingsToMinLOD },
		{ "EClothLODBiasMode::MappingsToAnyLOD", (int64)EClothLODBiasMode::MappingsToAnyLOD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EClothLODBiasMode",
	"EClothLODBiasMode",
	Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EClothLODBiasMode()
{
	if (!Z_Registration_Info_UEnum_EClothLODBiasMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothLODBiasMode.InnerSingleton, Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClothLODBiasMode.InnerSingleton;
}
// End Enum EClothLODBiasMode

// Begin Class USkeletalMesh Function AddSocket
#if WITH_EDITOR
struct Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics
{
	struct SkeletalMesh_eventAddSocket_Parms
	{
		USkeletalMeshSocket* InSocket;
		bool bAddToSkeleton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 *\x09""Add a skeletal socket object to this SkeletalMesh, and optionally promotes it to USkeleton socket.\n\x09 */" },
		{ "CPP_Default_bAddToSkeleton", "false" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Add a skeletal socket object to this SkeletalMesh, and optionally promotes it to USkeleton socket." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSocket;
	static void NewProp_bAddToSkeleton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_InSocket = { "InSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventAddSocket_Parms, InSocket), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_bAddToSkeleton_SetBit(void* Obj)
{
	((SkeletalMesh_eventAddSocket_Parms*)Obj)->bAddToSkeleton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_bAddToSkeleton = { "bAddToSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkeletalMesh_eventAddSocket_Parms), &Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_bAddToSkeleton_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_InSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_bAddToSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "AddSocket", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::SkeletalMesh_eventAddSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::SkeletalMesh_eventAddSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_AddSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(USkeletalMesh::execAddSocket)
{
	P_GET_OBJECT(USkeletalMeshSocket,Z_Param_InSocket);
	P_GET_UBOOL(Z_Param_bAddToSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSocket(Z_Param_InSocket,Z_Param_bAddToSkeleton);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class USkeletalMesh Function AddSocket

// Begin Class USkeletalMesh Function FindSocketAndIndex
struct Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics
{
	struct SkeletalMesh_eventFindSocketAndIndex_Parms
	{
		FName InSocketName;
		int32 OutIndex;
		USkeletalMeshSocket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09*\x09""Find a socket object in this SkeletalMesh by name.\n\x09*\x09""Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09*   Also returns the index for the socket allowing for future fast access via GetSocketByIndex()\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Find a socket object in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\nAlso returns the index for the socket allowing for future fast access via GetSocketByIndex()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, InSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_InSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_OutIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "FindSocketAndIndex", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::SkeletalMesh_eventFindSocketAndIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::SkeletalMesh_eventFindSocketAndIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execFindSocketAndIndex)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketAndIndex(Z_Param_InSocketName,Z_Param_Out_OutIndex);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function FindSocketAndIndex

// Begin Class USkeletalMesh Function GetBounds
struct Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics
{
	struct SkeletalMesh_eventGetBounds_Parms
	{
		FBoxSphereBounds ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Get the extended bounds of this mesh (imported bounds plus bounds extension). USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Get the extended bounds of this mesh (imported bounds plus bounds extension). USkinnedAsset interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetBounds", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::SkeletalMesh_eventGetBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::SkeletalMesh_eventGetBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetBounds

// Begin Class USkeletalMesh Function GetDefaultAnimatingRig
struct Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics
{
	struct SkeletalMesh_eventGetDefaultAnimatingRig_Parms
	{
		TSoftObjectPtr<UObject> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetDefaultAnimatingRig_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetDefaultAnimatingRig", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::SkeletalMesh_eventGetDefaultAnimatingRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::SkeletalMesh_eventGetDefaultAnimatingRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetDefaultAnimatingRig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UObject>*)Z_Param__Result=P_THIS->GetDefaultAnimatingRig();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetDefaultAnimatingRig

// Begin Class USkeletalMesh Function GetDefaultMeshDeformer
struct Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics
{
	struct SkeletalMesh_eventGetDefaultMeshDeformer_Parms
	{
		UMeshDeformer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Deformer" },
		{ "Comment", "/** Get the default mesh deformer used by this mesh. A mesh deformer is used to deform the skeletal mesh at runtime */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Get the default mesh deformer used by this mesh. A mesh deformer is used to deform the skeletal mesh at runtime" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetDefaultMeshDeformer_Parms, ReturnValue), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetDefaultMeshDeformer", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::SkeletalMesh_eventGetDefaultMeshDeformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::SkeletalMesh_eventGetDefaultMeshDeformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetDefaultMeshDeformer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshDeformer**)Z_Param__Result=P_THIS->GetDefaultMeshDeformer();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetDefaultMeshDeformer

// Begin Class USkeletalMesh Function GetImportedBounds
struct Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics
{
	struct SkeletalMesh_eventGetImportedBounds_Parms
	{
		FBoxSphereBounds ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Get the original imported bounds of the skel mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Get the original imported bounds of the skel mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetImportedBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetImportedBounds", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::SkeletalMesh_eventGetImportedBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::SkeletalMesh_eventGetImportedBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetImportedBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetImportedBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetImportedBounds();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetImportedBounds

// Begin Class USkeletalMesh Function GetLODSettings
struct Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics
{
	struct SkeletalMesh_eventGetLODSettings_Parms
	{
		const USkeletalMeshLODSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetLODSettings_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetLODSettings", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::SkeletalMesh_eventGetLODSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::SkeletalMesh_eventGetLODSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetLODSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetLODSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const USkeletalMeshLODSettings**)Z_Param__Result=P_THIS->GetLODSettings();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetLODSettings

// Begin Class USkeletalMesh Function GetMaterials
struct Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics
{
	struct SkeletalMesh_eventGetMaterials_Parms
	{
		TArray<FSkeletalMaterial> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "USkinnedAsset interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkeletalMaterial, METADATA_PARAMS(0, nullptr) }; // 1879788533
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1879788533
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetMaterials", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::SkeletalMesh_eventGetMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::SkeletalMesh_eventGetMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSkeletalMaterial>*)Z_Param__Result=P_THIS->GetMaterials();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetMaterials

// Begin Class USkeletalMesh Function GetMeshClothingAssets
struct Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics
{
	struct SkeletalMesh_eventGetMeshClothingAssets_Parms
	{
		TArray<UClothingAssetBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetMeshClothingAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetMeshClothingAssets", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::SkeletalMesh_eventGetMeshClothingAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::SkeletalMesh_eventGetMeshClothingAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetMeshClothingAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UClothingAssetBase*>*)Z_Param__Result=P_THIS->GetMeshClothingAssets();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetMeshClothingAssets

// Begin Class USkeletalMesh Function GetMinLODForQualityLevels
struct Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics
{
	struct SkeletalMesh_eventGetMinLODForQualityLevels_Parms
	{
		TMap<EPerQualityLevels,int32> QualityLevelMinimumLODs;
		int32 Default;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevelMinimumLODs_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_QualityLevelMinimumLODs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp = { "QualityLevelMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EPerQualityLevels, METADATA_PARAMS(0, nullptr) }; // 702377748
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetMinLODForQualityLevels_Parms, QualityLevelMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 702377748
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetMinLODForQualityLevels_Parms, Default), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_Default,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetMinLODForQualityLevels", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::SkeletalMesh_eventGetMinLODForQualityLevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::SkeletalMesh_eventGetMinLODForQualityLevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetMinLODForQualityLevels)
{
	P_GET_TMAP_REF(EPerQualityLevels,int32,Z_Param_Out_QualityLevelMinimumLODs);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Default);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMinLODForQualityLevels(Z_Param_Out_QualityLevelMinimumLODs,Z_Param_Out_Default);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetMinLODForQualityLevels

// Begin Class USkeletalMesh Function GetMorphTargetsPtrConv
struct Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics
{
	struct SkeletalMesh_eventGetMorphTargetsPtrConv_Parms
	{
		TArray<UMorphTarget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "// NOTE: BP compiler doesn't support TObjectPtr as an argument type for UFUNCTION so this converting call is\n// required. For many morphs, this can be expensive, since it needs to resolve _all_ TObjectPtrs and construct a new\n// array for it.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "NOTE: BP compiler doesn't support TObjectPtr as an argument type for UFUNCTION so this converting call is\nrequired. For many morphs, this can be expensive, since it needs to resolve _all_ TObjectPtrs and construct a new\narray for it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetMorphTargetsPtrConv_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetMorphTargetsPtrConv", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::SkeletalMesh_eventGetMorphTargetsPtrConv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::SkeletalMesh_eventGetMorphTargetsPtrConv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetMorphTargetsPtrConv)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMorphTarget*>*)Z_Param__Result=P_THIS->GetMorphTargetsPtrConv();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetMorphTargetsPtrConv

// Begin Class USkeletalMesh Function GetNodeMappingContainer
struct Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics
{
	struct SkeletalMesh_eventGetNodeMappingContainer_Parms
	{
		UBlueprint* SourceAsset;
		UNodeMappingContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingContainer_Parms, SourceAsset), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingContainer_Parms, ReturnValue), Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_SourceAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetNodeMappingContainer", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::SkeletalMesh_eventGetNodeMappingContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::SkeletalMesh_eventGetNodeMappingContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetNodeMappingContainer)
{
	P_GET_OBJECT(UBlueprint,Z_Param_SourceAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNodeMappingContainer**)Z_Param__Result=P_THIS->GetNodeMappingContainer(Z_Param_SourceAsset);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetNodeMappingContainer

// Begin Class USkeletalMesh Function GetNodeMappingData
struct Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics
{
	struct SkeletalMesh_eventGetNodeMappingData_Parms
	{
		TArray<UNodeMappingContainer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetNodeMappingData", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::SkeletalMesh_eventGetNodeMappingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::SkeletalMesh_eventGetNodeMappingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetNodeMappingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNodeMappingContainer*>*)Z_Param__Result=P_THIS->GetNodeMappingData();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetNodeMappingData

// Begin Class USkeletalMesh Function GetOverlayMaterial
struct Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics
{
	struct SkeletalMesh_eventGetOverlayMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the default overlay material used by this mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Get the default overlay material used by this mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetOverlayMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetOverlayMaterial", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::SkeletalMesh_eventGetOverlayMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::SkeletalMesh_eventGetOverlayMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetOverlayMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetOverlayMaterial();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetOverlayMaterial

// Begin Class USkeletalMesh Function GetOverlayMaterialMaxDrawDistance
struct Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics
{
	struct SkeletalMesh_eventGetOverlayMaterialMaxDrawDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the default overlay material max draw distance used by this mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Get the default overlay material max draw distance used by this mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetOverlayMaterialMaxDrawDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetOverlayMaterialMaxDrawDistance", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::SkeletalMesh_eventGetOverlayMaterialMaxDrawDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::SkeletalMesh_eventGetOverlayMaterialMaxDrawDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetOverlayMaterialMaxDrawDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOverlayMaterialMaxDrawDistance();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetOverlayMaterialMaxDrawDistance

// Begin Class USkeletalMesh Function GetPhysicsAsset
struct Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics
{
	struct SkeletalMesh_eventGetPhysicsAsset_Parms
	{
		UPhysicsAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "USkinnedAsset interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetPhysicsAsset_Parms, ReturnValue), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetPhysicsAsset", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::SkeletalMesh_eventGetPhysicsAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::SkeletalMesh_eventGetPhysicsAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetPhysicsAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPhysicsAsset**)Z_Param__Result=P_THIS->GetPhysicsAsset();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetPhysicsAsset

// Begin Class USkeletalMesh Function GetShadowPhysicsAsset
struct Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics
{
	struct SkeletalMesh_eventGetShadowPhysicsAsset_Parms
	{
		UPhysicsAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "USkinnedAsset interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetShadowPhysicsAsset_Parms, ReturnValue), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetShadowPhysicsAsset", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::SkeletalMesh_eventGetShadowPhysicsAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::SkeletalMesh_eventGetShadowPhysicsAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetShadowPhysicsAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPhysicsAsset**)Z_Param__Result=P_THIS->GetShadowPhysicsAsset();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetShadowPhysicsAsset

// Begin Class USkeletalMesh Function GetSkeleton
struct Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics
{
	struct SkeletalMesh_eventGetSkeleton_Parms
	{
		const USkeleton* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "USkinnedAsset interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetSkeleton_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetSkeleton", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::SkeletalMesh_eventGetSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::SkeletalMesh_eventGetSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetSkeleton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const USkeleton**)Z_Param__Result=P_THIS->GetSkeleton();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetSkeleton

// Begin Class USkeletalMesh Function GetSocketByIndex
struct Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics
{
	struct SkeletalMesh_eventGetSocketByIndex_Parms
	{
		int32 Index;
		USkeletalMeshSocket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns a socket by index. Max index is NumSockets(). The meshes sockets are accessed first, then the skeletons.  */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Returns a socket by index. Max index is NumSockets(). The meshes sockets are accessed first, then the skeletons." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetSocketByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventGetSocketByIndex_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetSocketByIndex", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::SkeletalMesh_eventGetSocketByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::SkeletalMesh_eventGetSocketByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execGetSocketByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->GetSocketByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function GetSocketByIndex

// Begin Class USkeletalMesh Function IsSectionUsingCloth
struct Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics
{
	struct SkeletalMesh_eventIsSectionUsingCloth_Parms
	{
		int32 InSectionIndex;
		bool bCheckCorrespondingSections;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Clothing Simulation" },
		{ "Comment", "/** \n\x09 * Checks whether the provided section is using APEX cloth. if bCheckCorrespondingSections is true\n\x09 * disabled sections will defer to correspond sections to see if they use cloth (non-cloth sections\n\x09 * are disabled and another section added when cloth is enabled, using this flag allows for a check\n\x09 * on the original section to succeed)\n\x09 * @param InSectionIndex Index to check\n\x09 * @param bCheckCorrespondingSections Whether to check corresponding sections for disabled sections\n\x09 */" },
		{ "CPP_Default_bCheckCorrespondingSections", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Checks whether the provided section is using APEX cloth. if bCheckCorrespondingSections is true\ndisabled sections will defer to correspond sections to see if they use cloth (non-cloth sections\nare disabled and another section added when cloth is enabled, using this flag allows for a check\non the original section to succeed)\n@param InSectionIndex Index to check\n@param bCheckCorrespondingSections Whether to check corresponding sections for disabled sections" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSectionIndex;
	static void NewProp_bCheckCorrespondingSections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckCorrespondingSections;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_InSectionIndex = { "InSectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventIsSectionUsingCloth_Parms, InSectionIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections_SetBit(void* Obj)
{
	((SkeletalMesh_eventIsSectionUsingCloth_Parms*)Obj)->bCheckCorrespondingSections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections = { "bCheckCorrespondingSections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkeletalMesh_eventIsSectionUsingCloth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_InSectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "IsSectionUsingCloth", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::SkeletalMesh_eventIsSectionUsingCloth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::SkeletalMesh_eventIsSectionUsingCloth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execIsSectionUsingCloth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InSectionIndex);
	P_GET_UBOOL(Z_Param_bCheckCorrespondingSections);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSectionUsingCloth(Z_Param_InSectionIndex,Z_Param_bCheckCorrespondingSections);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function IsSectionUsingCloth

// Begin Class USkeletalMesh Function K2_GetAllMorphTargetNames
struct Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics
{
	struct SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 *\x09Returns the list of all morph targets of this skeletal mesh\n\x09 *  @return\x09The list of morph targets\n\x09 */" },
		{ "DisplayName", "Get All Morph Target Names" },
		{ "Keywords", "morph shape" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ScriptName", "GetAllMorphTargetNames" },
		{ "ToolTip", "Returns the list of all morph targets of this skeletal mesh\n@return     The list of morph targets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "K2_GetAllMorphTargetNames", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execK2_GetAllMorphTargetNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->K2_GetAllMorphTargetNames();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function K2_GetAllMorphTargetNames

// Begin Class USkeletalMesh Function NumSockets
struct Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics
{
	struct SkeletalMesh_eventNumSockets_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns the number of sockets available. Both on this mesh and it's skeleton. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Returns the number of sockets available. Both on this mesh and it's skeleton." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventNumSockets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "NumSockets", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::SkeletalMesh_eventNumSockets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::SkeletalMesh_eventNumSockets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_NumSockets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execNumSockets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->NumSockets();
	P_NATIVE_END;
}
// End Class USkeletalMesh Function NumSockets

// Begin Class USkeletalMesh Function SetDefaultAnimatingRig
struct Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics
{
	struct SkeletalMesh_eventSetDefaultAnimatingRig_Parms
	{
		TSoftObjectPtr<UObject> InAnimatingRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InAnimatingRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::NewProp_InAnimatingRig = { "InAnimatingRig", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetDefaultAnimatingRig_Parms, InAnimatingRig), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::NewProp_InAnimatingRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetDefaultAnimatingRig", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::SkeletalMesh_eventSetDefaultAnimatingRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::SkeletalMesh_eventSetDefaultAnimatingRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execSetDefaultAnimatingRig)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_InAnimatingRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultAnimatingRig(Z_Param_InAnimatingRig);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function SetDefaultAnimatingRig

// Begin Class USkeletalMesh Function SetLODSettings
struct Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics
{
	struct SkeletalMesh_eventSetLODSettings_Parms
	{
		USkeletalMeshLODSettings* InLODSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLODSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::NewProp_InLODSettings = { "InLODSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetLODSettings_Parms, InLODSettings), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::NewProp_InLODSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetLODSettings", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::SkeletalMesh_eventSetLODSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::SkeletalMesh_eventSetLODSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_SetLODSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execSetLODSettings)
{
	P_GET_OBJECT(USkeletalMeshLODSettings,Z_Param_InLODSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLODSettings(Z_Param_InLODSettings);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function SetLODSettings

// Begin Class USkeletalMesh Function SetMaterials
struct Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics
{
	struct SkeletalMesh_eventSetMaterials_Parms
	{
		TArray<FSkeletalMaterial> InMaterials;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials_Inner = { "InMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkeletalMaterial, METADATA_PARAMS(0, nullptr) }; // 1879788533
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials = { "InMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetMaterials_Parms, InMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMaterials_MetaData), NewProp_InMaterials_MetaData) }; // 1879788533
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetMaterials", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::SkeletalMesh_eventSetMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::SkeletalMesh_eventSetMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_SetMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execSetMaterials)
{
	P_GET_TARRAY_REF(FSkeletalMaterial,Z_Param_Out_InMaterials);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaterials(Z_Param_Out_InMaterials);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function SetMaterials

// Begin Class USkeletalMesh Function SetMeshClothingAssets
struct Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics
{
	struct SkeletalMesh_eventSetMeshClothingAssets_Parms
	{
		TArray<UClothingAssetBase*> InMeshClothingAssets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMeshClothingAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMeshClothingAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InMeshClothingAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets_Inner = { "InMeshClothingAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets = { "InMeshClothingAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetMeshClothingAssets_Parms, InMeshClothingAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMeshClothingAssets_MetaData), NewProp_InMeshClothingAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetMeshClothingAssets", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::SkeletalMesh_eventSetMeshClothingAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::SkeletalMesh_eventSetMeshClothingAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execSetMeshClothingAssets)
{
	P_GET_TARRAY_REF(UClothingAssetBase*,Z_Param_Out_InMeshClothingAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeshClothingAssets(Z_Param_Out_InMeshClothingAssets);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function SetMeshClothingAssets

// Begin Class USkeletalMesh Function SetMinLODForQualityLevels
struct Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics
{
	struct SkeletalMesh_eventSetMinLODForQualityLevels_Parms
	{
		TMap<EPerQualityLevels,int32> QualityLevelMinimumLODs;
		int32 Default;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "CPP_Default_Default", "-1" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Allow to override min lod quality levels on a skeletalMesh and it Default value (-1 value for Default dont override its value)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevelMinimumLODs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevelMinimumLODs_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_QualityLevelMinimumLODs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp = { "QualityLevelMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EPerQualityLevels, METADATA_PARAMS(0, nullptr) }; // 702377748
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetMinLODForQualityLevels_Parms, QualityLevelMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityLevelMinimumLODs_MetaData), NewProp_QualityLevelMinimumLODs_MetaData) }; // 702377748
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetMinLODForQualityLevels_Parms, Default), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_Default,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetMinLODForQualityLevels", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::SkeletalMesh_eventSetMinLODForQualityLevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::SkeletalMesh_eventSetMinLODForQualityLevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execSetMinLODForQualityLevels)
{
	P_GET_TMAP_REF(EPerQualityLevels,int32,Z_Param_Out_QualityLevelMinimumLODs);
	P_GET_PROPERTY(FIntProperty,Z_Param_Default);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinLODForQualityLevels(Z_Param_Out_QualityLevelMinimumLODs,Z_Param_Default);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function SetMinLODForQualityLevels

// Begin Class USkeletalMesh Function SetMorphTargets
struct Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics
{
	struct SkeletalMesh_eventSetMorphTargets_Parms
	{
		TArray<UMorphTarget*> InMorphTargets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMorphTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMorphTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InMorphTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets_Inner = { "InMorphTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets = { "InMorphTargets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetMorphTargets_Parms, InMorphTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMorphTargets_MetaData), NewProp_InMorphTargets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetMorphTargets", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::SkeletalMesh_eventSetMorphTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::SkeletalMesh_eventSetMorphTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_SetMorphTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execSetMorphTargets)
{
	P_GET_TARRAY_REF(UMorphTarget*,Z_Param_Out_InMorphTargets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMorphTargets(Z_Param_Out_InMorphTargets);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function SetMorphTargets

// Begin Class USkeletalMesh Function SetOverlayMaterial
struct Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics
{
	struct SkeletalMesh_eventSetOverlayMaterial_Parms
	{
		UMaterialInterface* NewOverlayMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Change the default overlay material used by this mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Change the default overlay material used by this mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOverlayMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::NewProp_NewOverlayMaterial = { "NewOverlayMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetOverlayMaterial_Parms, NewOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::NewProp_NewOverlayMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetOverlayMaterial", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::SkeletalMesh_eventSetOverlayMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::SkeletalMesh_eventSetOverlayMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execSetOverlayMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewOverlayMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverlayMaterial(Z_Param_NewOverlayMaterial);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function SetOverlayMaterial

// Begin Class USkeletalMesh Function SetOverlayMaterialMaxDrawDistance
struct Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics
{
	struct SkeletalMesh_eventSetOverlayMaterialMaxDrawDistance_Parms
	{
		float InMaxDrawDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Change the default overlay material max draw distance used by this mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Change the default overlay material max draw distance used by this mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxDrawDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::NewProp_InMaxDrawDistance = { "InMaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetOverlayMaterialMaxDrawDistance_Parms, InMaxDrawDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::NewProp_InMaxDrawDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetOverlayMaterialMaxDrawDistance", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::SkeletalMesh_eventSetOverlayMaterialMaxDrawDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::SkeletalMesh_eventSetOverlayMaterialMaxDrawDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execSetOverlayMaterialMaxDrawDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxDrawDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverlayMaterialMaxDrawDistance(Z_Param_InMaxDrawDistance);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function SetOverlayMaterialMaxDrawDistance

// Begin Class USkeletalMesh Function SetSkeleton
struct Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics
{
	struct SkeletalMesh_eventSetSkeleton_Parms
	{
		USkeleton* InSkeleton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkeletalMesh_eventSetSkeleton_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::NewProp_InSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetSkeleton", nullptr, nullptr, Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::SkeletalMesh_eventSetSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::SkeletalMesh_eventSetSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeletalMesh_SetSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeletalMesh::execSetSkeleton)
{
	P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkeleton(Z_Param_InSkeleton);
	P_NATIVE_END;
}
// End Class USkeletalMesh Function SetSkeleton

// Begin Class USkeletalMesh
void USkeletalMesh::GetThumbnailInfo_WrapperImpl(const void* Object, void* OutValue)
{
#if WITH_EDITORONLY_DATA
	const USkeletalMesh* Obj = (const USkeletalMesh*)Object;
	UThumbnailInfo*& Result = *(UThumbnailInfo**)OutValue;
	Result = (UThumbnailInfo*)Obj->GetThumbnailInfo();
#endif // WITH_EDITORONLY_DATA
}
void USkeletalMesh::SetThumbnailInfo_WrapperImpl(void* Object, const void* InValue)
{
#if WITH_EDITORONLY_DATA
	USkeletalMesh* Obj = (USkeletalMesh*)Object;
	UThumbnailInfo*& Value = *(UThumbnailInfo**)InValue;
	Obj->SetThumbnailInfo(Value);
#endif // WITH_EDITORONLY_DATA
}
void USkeletalMesh::StaticRegisterNativesUSkeletalMesh()
{
	UClass* Class = USkeletalMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
		{ "AddSocket", &USkeletalMesh::execAddSocket },
#endif // WITH_EDITOR
		{ "FindSocketAndIndex", &USkeletalMesh::execFindSocketAndIndex },
		{ "GetBounds", &USkeletalMesh::execGetBounds },
		{ "GetDefaultAnimatingRig", &USkeletalMesh::execGetDefaultAnimatingRig },
		{ "GetDefaultMeshDeformer", &USkeletalMesh::execGetDefaultMeshDeformer },
		{ "GetImportedBounds", &USkeletalMesh::execGetImportedBounds },
		{ "GetLODSettings", &USkeletalMesh::execGetLODSettings },
		{ "GetMaterials", &USkeletalMesh::execGetMaterials },
		{ "GetMeshClothingAssets", &USkeletalMesh::execGetMeshClothingAssets },
		{ "GetMinLODForQualityLevels", &USkeletalMesh::execGetMinLODForQualityLevels },
		{ "GetMorphTargetsPtrConv", &USkeletalMesh::execGetMorphTargetsPtrConv },
		{ "GetNodeMappingContainer", &USkeletalMesh::execGetNodeMappingContainer },
		{ "GetNodeMappingData", &USkeletalMesh::execGetNodeMappingData },
		{ "GetOverlayMaterial", &USkeletalMesh::execGetOverlayMaterial },
		{ "GetOverlayMaterialMaxDrawDistance", &USkeletalMesh::execGetOverlayMaterialMaxDrawDistance },
		{ "GetPhysicsAsset", &USkeletalMesh::execGetPhysicsAsset },
		{ "GetShadowPhysicsAsset", &USkeletalMesh::execGetShadowPhysicsAsset },
		{ "GetSkeleton", &USkeletalMesh::execGetSkeleton },
		{ "GetSocketByIndex", &USkeletalMesh::execGetSocketByIndex },
		{ "IsSectionUsingCloth", &USkeletalMesh::execIsSectionUsingCloth },
		{ "K2_GetAllMorphTargetNames", &USkeletalMesh::execK2_GetAllMorphTargetNames },
		{ "NumSockets", &USkeletalMesh::execNumSockets },
		{ "SetDefaultAnimatingRig", &USkeletalMesh::execSetDefaultAnimatingRig },
		{ "SetLODSettings", &USkeletalMesh::execSetLODSettings },
		{ "SetMaterials", &USkeletalMesh::execSetMaterials },
		{ "SetMeshClothingAssets", &USkeletalMesh::execSetMeshClothingAssets },
		{ "SetMinLODForQualityLevels", &USkeletalMesh::execSetMinLODForQualityLevels },
		{ "SetMorphTargets", &USkeletalMesh::execSetMorphTargets },
		{ "SetOverlayMaterial", &USkeletalMesh::execSetOverlayMaterial },
		{ "SetOverlayMaterialMaxDrawDistance", &USkeletalMesh::execSetOverlayMaterialMaxDrawDistance },
		{ "SetSkeleton", &USkeletalMesh::execSetSkeleton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMesh);
UClass* Z_Construct_UClass_USkeletalMesh_NoRegister()
{
	return USkeletalMesh::StaticClass();
}
struct Z_Construct_UClass_USkeletalMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * SkeletalMesh is geometry bound to a hierarchical skeleton of bones which can be animated for the purpose of deforming the mesh.\n * Skeletal Meshes are built up of two parts; a set of polygons composed to make up the surface of the mesh, and a hierarchical skeleton which can be used to animate the polygons.\n * The 3D models, rigging, and animations are created in an external modeling and animation application (3DSMax, Maya, Softimage, etc).\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Engine/SkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "SkeletalMesh is geometry bound to a hierarchical skeleton of bones which can be animated for the purpose of deforming the mesh.\nSkeletal Meshes are built up of two parts; a set of polygons composed to make up the surface of the mesh, and a hierarchical skeleton which can be used to animate the polygons.\nThe 3D models, rigging, and animations are created in an external modeling and animation application (3DSMax, Maya, Softimage, etc).\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceModels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshEditorDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "BlueprintGetter", "GetSkeleton" },
		{ "BlueprintSetter", "SetSkeleton" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtendedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositiveBoundsExtension_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeBoundsExtension_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "BlueprintGetter", "GetMaterials" },
		{ "BlueprintSetter", "SetMaterials" },
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorTable_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinQualityLevelLOD_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Quality Level Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLod_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableBelowMinLodStripping_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLODStreamingSettings_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLODStreaming_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Stream LODs" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumStreamedLODs_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOptionalLODs_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODSettings_MetaData[] = {
		{ "BlueprintGetter", "GetLODSettings" },
		{ "BlueprintSetter", "SetLODSettings" },
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimatingRig_MetaData[] = {
		{ "AllowedClasses", "/Script/ControlRigDeveloper.ControlRigBlueprint" },
		{ "BlueprintGetter", "GetDefaultAnimatingRig" },
		{ "BlueprintSetter", "SetDefaultAnimatingRig" },
		{ "Category", "AnimationRig" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorAxis_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorFlipAxis_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Comment", "/** If true, use 32 bit UVs. If false, use 16 bit UVs to save memory */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "If true, use 32 bit UVs. If false, use 16 bit UVs to save memory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "Comment", "/** If true, tangents will be stored at 16 bit vs 8 bit precision */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "If true, tangents will be stored at 16 bit vs 8 bit precision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenSimplified_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerPolyCollision_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
		{ "BlueprintGetter", "GetPhysicsAsset" },
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowPhysicsAsset_MetaData[] = {
		{ "BlueprintGetter", "GetShadowPhysicsAsset" },
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeMappingData_MetaData[] = {
		{ "BlueprintGetter", "GetNodeMappingData" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "Comment", "/** Path to the resource used to construct this skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Path to the resource used to construct this skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Date/Time-stamp of the file from the last import */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCustomDefaultEditorCamera_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraLookAt_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraOrthoZoom_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAttachedAssetContainer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingMinLOD_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothLODBiasMode_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargets_MetaData[] = {
		{ "BlueprintGetter", "GetMorphTargetsPtrConv" },
		{ "BlueprintSetter", "SetMorphTargets" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetBasePose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothingAssets_MetaData[] = {
		{ "Comment", "/** Legacy clothing asset data, will be converted to new assets after loading */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Legacy clothing asset data, will be converted to new assets after loading" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessAnimBlueprint_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessAnimBPLODThreshold_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/*\n\x09 * Max LOD level that post-process AnimBPs are evaluated.\n\x09 * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating the post-process AnimBP.\n\x09 * Setting it to -1 will always evaluate it and disable LODing.\n\x09 */" },
		{ "DisplayName", "Post-Process AnimBP LOD Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "* Max LOD level that post-process AnimBPs are evaluated.\n* For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating the post-process AnimBP.\n* Setting it to -1 will always evaluate it and disable LODing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshClothingAssets_MetaData[] = {
		{ "BlueprintGetter", "GetMeshClothingAssets" },
		{ "BlueprintSetter", "SetMeshClothingAssets" },
		{ "Category", "Clothing" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingInfo_MetaData[] = {
		{ "Category", "Sampling" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserDataEditorOnly_Inner_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserDataEditorOnly_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of named socket locations, set up in editor and used as a shortcut instead of specifying \n\x09 *\x09""everything explicitly to AttachComponent in the SkeletalMeshComponent. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinWeightProfiles_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshDeformer_MetaData[] = {
		{ "BlueprintGetter", "GetDefaultMeshDeformer" },
		{ "Category", "Deformer" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterialMaxDrawDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceModels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceModels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshEditorDataObject;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportedBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtendedBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositiveBoundsExtension;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NegativeBoundsExtension;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkelMirrorTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkelMirrorTable;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinQualityLevelLOD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinLod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisableBelowMinLodStripping;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLODStreamingSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bSupportLODStreaming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxNumStreamedLODs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxNumOptionalLODs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LODSettings;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultAnimatingRig;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkelMirrorAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkelMirrorFlipAxis;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
	static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
	static void NewProp_bHasBeenSimplified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenSimplified;
	static void NewProp_bHasVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexColors;
	static void NewProp_bEnablePerPolyCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerPolyCollision;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorGuid;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadowPhysicsAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeMappingData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeMappingData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
	static void NewProp_bHasCustomDefaultEditorCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCustomDefaultEditorCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraLookAt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultEditorCameraOrthoZoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewAttachedAssetContainer;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bSupportRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingMinLOD;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClothLODBiasMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClothLODBiasMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MorphTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargets;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetBasePose_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RetargetBasePose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClothingAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothingAssets;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PostProcessAnimBlueprint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PostProcessAnimBPLODThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshClothingAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshClothingAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserDataEditorOnly_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserDataEditorOnly;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sockets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkinWeightProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinWeightProfiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMeshDeformer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlayMaterialMaxDrawDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USkeletalMesh_AddSocket, "AddSocket" }, // 508980112
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex, "FindSocketAndIndex" }, // 2873169964
		{ &Z_Construct_UFunction_USkeletalMesh_GetBounds, "GetBounds" }, // 14235305
		{ &Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig, "GetDefaultAnimatingRig" }, // 1082664239
		{ &Z_Construct_UFunction_USkeletalMesh_GetDefaultMeshDeformer, "GetDefaultMeshDeformer" }, // 3103770839
		{ &Z_Construct_UFunction_USkeletalMesh_GetImportedBounds, "GetImportedBounds" }, // 3606049182
		{ &Z_Construct_UFunction_USkeletalMesh_GetLODSettings, "GetLODSettings" }, // 3059536681
		{ &Z_Construct_UFunction_USkeletalMesh_GetMaterials, "GetMaterials" }, // 319254862
		{ &Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets, "GetMeshClothingAssets" }, // 634150598
		{ &Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels, "GetMinLODForQualityLevels" }, // 3268078343
		{ &Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv, "GetMorphTargetsPtrConv" }, // 4150957360
		{ &Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer, "GetNodeMappingContainer" }, // 2912245352
		{ &Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData, "GetNodeMappingData" }, // 293649664
		{ &Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterial, "GetOverlayMaterial" }, // 2944765217
		{ &Z_Construct_UFunction_USkeletalMesh_GetOverlayMaterialMaxDrawDistance, "GetOverlayMaterialMaxDrawDistance" }, // 1648151502
		{ &Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset, "GetPhysicsAsset" }, // 1861902736
		{ &Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset, "GetShadowPhysicsAsset" }, // 3426549891
		{ &Z_Construct_UFunction_USkeletalMesh_GetSkeleton, "GetSkeleton" }, // 3896352598
		{ &Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex, "GetSocketByIndex" }, // 3007579879
		{ &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth, "IsSectionUsingCloth" }, // 1560467847
		{ &Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames, "K2_GetAllMorphTargetNames" }, // 1892035128
		{ &Z_Construct_UFunction_USkeletalMesh_NumSockets, "NumSockets" }, // 2190220502
		{ &Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig, "SetDefaultAnimatingRig" }, // 1254017973
		{ &Z_Construct_UFunction_USkeletalMesh_SetLODSettings, "SetLODSettings" }, // 2379663635
		{ &Z_Construct_UFunction_USkeletalMesh_SetMaterials, "SetMaterials" }, // 1163276970
		{ &Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets, "SetMeshClothingAssets" }, // 2371157096
		{ &Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels, "SetMinLODForQualityLevels" }, // 43059443
		{ &Z_Construct_UFunction_USkeletalMesh_SetMorphTargets, "SetMorphTargets" }, // 812559103
		{ &Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterial, "SetOverlayMaterial" }, // 2403606016
		{ &Z_Construct_UFunction_USkeletalMesh_SetOverlayMaterialMaxDrawDistance, "SetOverlayMaterialMaxDrawDistance" }, // 3737839727
		{ &Z_Construct_UFunction_USkeletalMesh_SetSkeleton, "SetSkeleton" }, // 1269380843
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceModels_Inner = { "SourceModels", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshSourceModel, METADATA_PARAMS(0, nullptr) }; // 1201722015
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceModels = { "SourceModels", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, SourceModels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceModels_MetaData), NewProp_SourceModels_MetaData) }; // 1201722015
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject = { "MeshEditorDataObject", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, MeshEditorDataObject_DEPRECATED), Z_Construct_UClass_USkeletalMeshEditorData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshEditorDataObject_MetaData), NewProp_MeshEditorDataObject_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0114010000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds = { "ImportedBounds", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, ImportedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedBounds_MetaData), NewProp_ImportedBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds = { "ExtendedBounds", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, ExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtendedBounds_MetaData), NewProp_ExtendedBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension = { "PositiveBoundsExtension", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, PositiveBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositiveBoundsExtension_MetaData), NewProp_PositiveBoundsExtension_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension = { "NegativeBoundsExtension", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, NegativeBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeBoundsExtension_MetaData), NewProp_NegativeBoundsExtension_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkeletalMaterial, METADATA_PARAMS(0, nullptr) }; // 1879788533
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000202005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) }; // 1879788533
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_Inner = { "SkelMirrorTable", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneMirrorInfo, METADATA_PARAMS(0, nullptr) }; // 2968788723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable = { "SkelMirrorTable", nullptr, (EPropertyFlags)0x0010000800000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, SkelMirrorTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelMirrorTable_MetaData), NewProp_SkelMirrorTable_MetaData) }; // 2968788723
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_Inner = { "LODInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshLODInfo, METADATA_PARAMS(0, nullptr) }; // 1129142360
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, LODInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODInfo_MetaData), NewProp_LODInfo_MetaData) }; // 1129142360
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinQualityLevelLOD = { "MinQualityLevelLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, MinQualityLevelLOD), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinQualityLevelLOD_MetaData), NewProp_MinQualityLevelLOD_MetaData) }; // 178663833
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod = { "MinLod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, MinLod), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLod_MetaData), NewProp_MinLod_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping = { "DisableBelowMinLodStripping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, DisableBelowMinLodStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableBelowMinLodStripping_MetaData), NewProp_DisableBelowMinLodStripping_MetaData) }; // 846681800
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj)
{
	((USkeletalMesh*)Obj)->bOverrideLODStreamingSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings = { "bOverrideLODStreamingSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLODStreamingSettings_MetaData), NewProp_bOverrideLODStreamingSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming = { "bSupportLODStreaming", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, bSupportLODStreaming), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportLODStreaming_MetaData), NewProp_bSupportLODStreaming_MetaData) }; // 846681800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs = { "MaxNumStreamedLODs", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, MaxNumStreamedLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumStreamedLODs_MetaData), NewProp_MaxNumStreamedLODs_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs = { "MaxNumOptionalLODs", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, MaxNumOptionalLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumOptionalLODs_MetaData), NewProp_MaxNumOptionalLODs_MetaData) }; // 1262733314
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings = { "LODSettings", nullptr, (EPropertyFlags)0x0114010800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, LODSettings), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODSettings_MetaData), NewProp_LODSettings_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultAnimatingRig = { "DefaultAnimatingRig", nullptr, (EPropertyFlags)0x0014000800000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, DefaultAnimatingRig), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAnimatingRig_MetaData), NewProp_DefaultAnimatingRig_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis = { "SkelMirrorAxis", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, SkelMirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelMirrorAxis_MetaData), NewProp_SkelMirrorAxis_MetaData) }; // 342925220
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis = { "SkelMirrorFlipAxis", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, SkelMirrorFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelMirrorFlipAxis_MetaData), NewProp_SkelMirrorFlipAxis_MetaData) }; // 342925220
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
{
	((USkeletalMesh*)Obj)->bUseFullPrecisionUVs_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFullPrecisionUVs_MetaData), NewProp_bUseFullPrecisionUVs_MetaData) };
void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
{
	((USkeletalMesh*)Obj)->bUseHighPrecisionTangentBasis_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighPrecisionTangentBasis_MetaData), NewProp_bUseHighPrecisionTangentBasis_MetaData) };
void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_SetBit(void* Obj)
{
	((USkeletalMesh*)Obj)->bHasBeenSimplified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified = { "bHasBeenSimplified", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenSimplified_MetaData), NewProp_bHasBeenSimplified_MetaData) };
void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_SetBit(void* Obj)
{
	((USkeletalMesh*)Obj)->bHasVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors = { "bHasVertexColors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasVertexColors_MetaData), NewProp_bHasVertexColors_MetaData) };
void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_SetBit(void* Obj)
{
	((USkeletalMesh*)Obj)->bEnablePerPolyCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision = { "bEnablePerPolyCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePerPolyCollision_MetaData), NewProp_bEnablePerPolyCollision_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid = { "VertexColorGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, VertexColorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorGuid_MetaData), NewProp_VertexColorGuid_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetup_MetaData), NewProp_BodySetup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0114010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAsset_MetaData), NewProp_PhysicsAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset = { "ShadowPhysicsAsset", nullptr, (EPropertyFlags)0x0114010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, ShadowPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowPhysicsAsset_MetaData), NewProp_ShadowPhysicsAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_Inner = { "NodeMappingData", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData = { "NodeMappingData", nullptr, (EPropertyFlags)0x0114000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, NodeMappingData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeMappingData_MetaData), NewProp_NodeMappingData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0116000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, SourceFilePath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData), NewProp_SourceFileTimestamp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x01160408000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &USkeletalMesh::SetThumbnailInfo_WrapperImpl, &USkeletalMesh::GetThumbnailInfo_WrapperImpl, 1, STRUCT_OFFSET(USkeletalMesh, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData), NewProp_ThumbnailInfo_MetaData) };
void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_SetBit(void* Obj)
{
	((USkeletalMesh*)Obj)->bHasCustomDefaultEditorCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera = { "bHasCustomDefaultEditorCamera", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCustomDefaultEditorCamera_MetaData), NewProp_bHasCustomDefaultEditorCamera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation = { "DefaultEditorCameraLocation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEditorCameraLocation_MetaData), NewProp_DefaultEditorCameraLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation = { "DefaultEditorCameraRotation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEditorCameraRotation_MetaData), NewProp_DefaultEditorCameraRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt = { "DefaultEditorCameraLookAt", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraLookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEditorCameraLookAt_MetaData), NewProp_DefaultEditorCameraLookAt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom = { "DefaultEditorCameraOrthoZoom", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraOrthoZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEditorCameraOrthoZoom_MetaData), NewProp_DefaultEditorCameraOrthoZoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer = { "PreviewAttachedAssetContainer", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, PreviewAttachedAssetContainer), Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAttachedAssetContainer_MetaData), NewProp_PreviewAttachedAssetContainer_MetaData) }; // 2102213487
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
{
	((USkeletalMesh*)Obj)->bSupportRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportRayTracing_MetaData), NewProp_bSupportRayTracing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RayTracingMinLOD = { "RayTracingMinLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, RayTracingMinLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingMinLOD_MetaData), NewProp_RayTracingMinLOD_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode = { "ClothLODBiasMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, ClothLODBiasMode), Z_Construct_UEnum_Engine_EClothLODBiasMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothLODBiasMode_MetaData), NewProp_ClothLODBiasMode_MetaData) }; // 3409368845
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_Inner = { "MorphTargets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets = { "MorphTargets", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, MorphTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargets_MetaData), NewProp_MorphTargets_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset = { "FloorOffset", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, FloorOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorOffset_MetaData), NewProp_FloorOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_Inner = { "RetargetBasePose", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose = { "RetargetBasePose", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, RetargetBasePose), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetBasePose_MetaData), NewProp_RetargetBasePose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_Inner = { "ClothingAssets", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothingAssetData_Legacy, METADATA_PARAMS(0, nullptr) }; // 2366561228
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets = { "ClothingAssets", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, ClothingAssets_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothingAssets_MetaData), NewProp_ClothingAssets_MetaData) }; // 2366561228
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint = { "PostProcessAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, PostProcessAnimBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessAnimBlueprint_MetaData), NewProp_PostProcessAnimBlueprint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBPLODThreshold = { "PostProcessAnimBPLODThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, PostProcessAnimBPLODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessAnimBPLODThreshold_MetaData), NewProp_PostProcessAnimBPLODThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_Inner = { "MeshClothingAssets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets = { "MeshClothingAssets", nullptr, (EPropertyFlags)0x0114000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, MeshClothingAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshClothingAssets_MetaData), NewProp_MeshClothingAssets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo = { "SamplingInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, SamplingInfo), Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingInfo_MetaData), NewProp_SamplingInfo_MetaData) }; // 4125599671
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x01240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserDataEditorOnly_Inner = { "AssetUserDataEditorOnly", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserDataEditorOnly_Inner_MetaData), NewProp_AssetUserDataEditorOnly_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserDataEditorOnly = { "AssetUserDataEditorOnly", nullptr, (EPropertyFlags)0x01240c8800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, AssetUserDataEditorOnly), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserDataEditorOnly_MetaData), NewProp_AssetUserDataEditorOnly_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sockets_MetaData), NewProp_Sockets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_Inner = { "SkinWeightProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkinWeightProfileInfo, METADATA_PARAMS(0, nullptr) }; // 2102121985
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles = { "SkinWeightProfiles", nullptr, (EPropertyFlags)0x0020080000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, SkinWeightProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinWeightProfiles_MetaData), NewProp_SkinWeightProfiles_MetaData) }; // 2102121985
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultMeshDeformer = { "DefaultMeshDeformer", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, DefaultMeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMeshDeformer_MetaData), NewProp_DefaultMeshDeformer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_OverlayMaterialMaxDrawDistance = { "OverlayMaterialMaxDrawDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMesh, OverlayMaterialMaxDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterialMaxDrawDistance_MetaData), NewProp_OverlayMaterialMaxDrawDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMesh_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceModels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceModels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinQualityLevelLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultAnimatingRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RayTracingMinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBPLODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserDataEditorOnly_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserDataEditorOnly,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultMeshDeformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_OverlayMaterialMaxDrawDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkeletalMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkinnedAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkeletalMesh_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, IInterface_CollisionDataProvider), false },  // 4090871341
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, IInterface_AssetUserData), false },  // 505316468
	{ Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, INodeMappingProviderInterface), false },  // 2699525937
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMesh_Statics::ClassParams = {
	&USkeletalMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkeletalMesh_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletalMesh()
{
	if (!Z_Registration_Info_UClass_USkeletalMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMesh.OuterSingleton, Z_Construct_UClass_USkeletalMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletalMesh.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkeletalMesh>()
{
	return USkeletalMesh::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMesh)
// End Class USkeletalMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESkeletalMeshAsyncProperties_StaticEnum, TEXT("ESkeletalMeshAsyncProperties"), &Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2960065567U) },
		{ EClothLODBiasMode_StaticEnum, TEXT("EClothLODBiasMode"), &Z_Registration_Info_UEnum_EClothLODBiasMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3409368845U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoneMirrorInfo::StaticStruct, Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewStructOps, TEXT("BoneMirrorInfo"), &Z_Registration_Info_UScriptStruct_BoneMirrorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneMirrorInfo), 2968788723U) },
		{ FBoneMirrorExport::StaticStruct, Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewStructOps, TEXT("BoneMirrorExport"), &Z_Registration_Info_UScriptStruct_BoneMirrorExport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneMirrorExport), 3545123909U) },
		{ FSkeletalMeshClothBuildParams::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewStructOps, TEXT("SkeletalMeshClothBuildParams"), &Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshClothBuildParams), 2471428830U) },
		{ FClothPhysicsProperties_Legacy::StaticStruct, Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewStructOps, TEXT("ClothPhysicsProperties_Legacy"), &Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothPhysicsProperties_Legacy), 1641674750U) },
		{ FClothingAssetData_Legacy::StaticStruct, Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewStructOps, TEXT("ClothingAssetData_Legacy"), &Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothingAssetData_Legacy), 2366561228U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMesh, USkeletalMesh::StaticClass, TEXT("USkeletalMesh"), &Z_Registration_Info_UClass_USkeletalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMesh), 704039762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_1660334956(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
