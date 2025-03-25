// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstanceSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneSpaces();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERelativeTransformSpace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheUsage();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshDeformerInstanceSet();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVertexOffsetUsage();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EBoneVisibilityStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneVisibilityStatus;
static UEnum* EBoneVisibilityStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBoneVisibilityStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBoneVisibilityStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneVisibilityStatus, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneVisibilityStatus"));
	}
	return Z_Registration_Info_UEnum_EBoneVisibilityStatus.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBoneVisibilityStatus>()
{
	return EBoneVisibilityStatus_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BVS_ExplicitlyHidden.Comment", "/** Bone is hidden directly. */" },
		{ "BVS_ExplicitlyHidden.Name", "BVS_ExplicitlyHidden" },
		{ "BVS_ExplicitlyHidden.ToolTip", "Bone is hidden directly." },
		{ "BVS_HiddenByParent.Comment", "/** Bone is hidden because it's parent is hidden. */" },
		{ "BVS_HiddenByParent.Name", "BVS_HiddenByParent" },
		{ "BVS_HiddenByParent.ToolTip", "Bone is hidden because it's parent is hidden." },
		{ "BVS_MAX.Name", "BVS_MAX" },
		{ "BVS_Visible.Comment", "/** Bone is visible. */" },
		{ "BVS_Visible.Name", "BVS_Visible" },
		{ "BVS_Visible.ToolTip", "Bone is visible." },
		{ "Comment", "/** The valid BoneVisibilityStates values; A bone is only visible if it is *exactly* 1 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "The valid BoneVisibilityStates values; A bone is only visible if it is *exactly* 1" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BVS_HiddenByParent", (int64)BVS_HiddenByParent },
		{ "BVS_Visible", (int64)BVS_Visible },
		{ "BVS_ExplicitlyHidden", (int64)BVS_ExplicitlyHidden },
		{ "BVS_MAX", (int64)BVS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBoneVisibilityStatus",
	"EBoneVisibilityStatus",
	Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus()
{
	if (!Z_Registration_Info_UEnum_EBoneVisibilityStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneVisibilityStatus.InnerSingleton, Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBoneVisibilityStatus.InnerSingleton;
}
// End Enum EBoneVisibilityStatus

// Begin Enum EPhysBodyOp
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysBodyOp;
static UEnum* EPhysBodyOp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPhysBodyOp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPhysBodyOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPhysBodyOp, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPhysBodyOp"));
	}
	return Z_Registration_Info_UEnum_EPhysBodyOp.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPhysBodyOp>()
{
	return EPhysBodyOp_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPhysBodyOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** PhysicsBody options when bone is hidden */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "PBO_MAX.Name", "PBO_MAX" },
		{ "PBO_None.Comment", "/** Don't do anything. */" },
		{ "PBO_None.Name", "PBO_None" },
		{ "PBO_None.ToolTip", "Don't do anything." },
		{ "PBO_Term.Comment", "/** Terminate - if you terminate, you won't be able to re-init when unhidden. */" },
		{ "PBO_Term.Name", "PBO_Term" },
		{ "PBO_Term.ToolTip", "Terminate - if you terminate, you won't be able to re-init when unhidden." },
		{ "ToolTip", "PhysicsBody options when bone is hidden" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PBO_None", (int64)PBO_None },
		{ "PBO_Term", (int64)PBO_Term },
		{ "PBO_MAX", (int64)PBO_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPhysBodyOp",
	"EPhysBodyOp",
	Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp()
{
	if (!Z_Registration_Info_UEnum_EPhysBodyOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysBodyOp.InnerSingleton, Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPhysBodyOp.InnerSingleton;
}
// End Enum EPhysBodyOp

// Begin Enum EVisibilityBasedAnimTickOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption;
static UEnum* EVisibilityBasedAnimTickOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityBasedAnimTickOption"));
	}
	return Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVisibilityBasedAnimTickOption>()
{
	return EVisibilityBasedAnimTickOption_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysTickPose.Comment", "/** Always Tick, but Refresh BoneTransforms only when rendered. */" },
		{ "AlwaysTickPose.Name", "EVisibilityBasedAnimTickOption::AlwaysTickPose" },
		{ "AlwaysTickPose.ToolTip", "Always Tick, but Refresh BoneTransforms only when rendered." },
		{ "AlwaysTickPoseAndRefreshBones.Comment", "/** Always Tick and Refresh BoneTransforms whether rendered or not. */" },
		{ "AlwaysTickPoseAndRefreshBones.Name", "EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones" },
		{ "AlwaysTickPoseAndRefreshBones.ToolTip", "Always Tick and Refresh BoneTransforms whether rendered or not." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Skinned Mesh Animation Tick option based on rendered or not. This dictates \"TickPose and RefreshBoneTransforms\" */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "OnlyTickMontagesAndRefreshBonesWhenPlayingMontages.Comment", "/**\n\x09\x09When rendered Tick Pose and Refresh Bone Transforms,\n\x09\x09otherwise, just update montages alongside BoneTransforms.\n\x09\x09(AnimBP graph will not be updated).\n\x09*/" },
		{ "OnlyTickMontagesAndRefreshBonesWhenPlayingMontages.Name", "EVisibilityBasedAnimTickOption::OnlyTickMontagesAndRefreshBonesWhenPlayingMontages" },
		{ "OnlyTickMontagesAndRefreshBonesWhenPlayingMontages.ToolTip", "When rendered Tick Pose and Refresh Bone Transforms,\notherwise, just update montages alongside BoneTransforms.\n(AnimBP graph will not be updated)." },
		{ "OnlyTickMontagesWhenNotRendered.Comment", "/**\n\x09\x09When rendered Tick Pose and Refresh Bone Transforms,\n\x09\x09otherwise, just update montages and skip everything else.\n\x09\x09(AnimBP graph will not be updated).\n\x09*/" },
		{ "OnlyTickMontagesWhenNotRendered.Name", "EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered" },
		{ "OnlyTickMontagesWhenNotRendered.ToolTip", "When rendered Tick Pose and Refresh Bone Transforms,\notherwise, just update montages and skip everything else.\n(AnimBP graph will not be updated)." },
		{ "OnlyTickPoseWhenRendered.Comment", "/** Tick only when rendered, and it will only RefreshBoneTransforms when rendered. */" },
		{ "OnlyTickPoseWhenRendered.Name", "EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered" },
		{ "OnlyTickPoseWhenRendered.ToolTip", "Tick only when rendered, and it will only RefreshBoneTransforms when rendered." },
		{ "ToolTip", "Skinned Mesh Animation Tick option based on rendered or not. This dictates \"TickPose and RefreshBoneTransforms\"" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones", (int64)EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones },
		{ "EVisibilityBasedAnimTickOption::AlwaysTickPose", (int64)EVisibilityBasedAnimTickOption::AlwaysTickPose },
		{ "EVisibilityBasedAnimTickOption::OnlyTickMontagesAndRefreshBonesWhenPlayingMontages", (int64)EVisibilityBasedAnimTickOption::OnlyTickMontagesAndRefreshBonesWhenPlayingMontages },
		{ "EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered", (int64)EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered },
		{ "EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered", (int64)EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVisibilityBasedAnimTickOption",
	"EVisibilityBasedAnimTickOption",
	Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption()
{
	if (!Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.InnerSingleton, Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.InnerSingleton;
}
// End Enum EVisibilityBasedAnimTickOption

// Begin Enum EBoneSpaces
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneSpaces;
static UEnum* EBoneSpaces_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBoneSpaces.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBoneSpaces.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneSpaces, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneSpaces"));
	}
	return Z_Registration_Info_UEnum_EBoneSpaces.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBoneSpaces::Type>()
{
	return EBoneSpaces_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBoneSpaces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Values for specifying bone space. */" },
		{ "ComponentSpace.Comment", "/** Set position of bone in components reference frame. */" },
		{ "ComponentSpace.DisplayName", "Component Space" },
		{ "ComponentSpace.Name", "EBoneSpaces::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "Set position of bone in components reference frame." },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Values for specifying bone space." },
		{ "WorldSpace.Comment", "/** Set absolute position of bone in world space. */" },
		{ "WorldSpace.DisplayName", "World Space" },
		{ "WorldSpace.Name", "EBoneSpaces::WorldSpace" },
		{ "WorldSpace.ToolTip", "Set absolute position of bone in world space." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBoneSpaces::WorldSpace", (int64)EBoneSpaces::WorldSpace },
		{ "EBoneSpaces::ComponentSpace", (int64)EBoneSpaces::ComponentSpace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneSpaces_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBoneSpaces",
	"EBoneSpaces::Type",
	Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBoneSpaces()
{
	if (!Z_Registration_Info_UEnum_EBoneSpaces.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneSpaces.InnerSingleton, Z_Construct_UEnum_Engine_EBoneSpaces_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBoneSpaces.InnerSingleton;
}
// End Enum EBoneSpaces

// Begin ScriptStruct FSkelMeshSkinWeightInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo;
class UScriptStruct* FSkelMeshSkinWeightInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshSkinWeightInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshSkinWeightInfo>()
{
	return FSkelMeshSkinWeightInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Vertex skin weight info supplied for a component override. */" },
		{ "HasNativeBreak", "/Script/Engine.KismetRenderingLibrary.BreakSkinWeightInfo" },
		{ "HasNativeMake", "/Script/Engine.KismetRenderingLibrary.MakeSkinWeightInfo" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Vertex skin weight info supplied for a component override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[] = {
		{ "Comment", "/** Index of bones that influence this vertex */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Index of bones that influence this vertex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[] = {
		{ "Comment", "/** Influence of each bone on this vertex */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Influence of each bone on this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Weights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshSkinWeightInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Bones, FSkelMeshSkinWeightInfo), STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Bones), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bones_MetaData), NewProp_Bones_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Weights, FSkelMeshSkinWeightInfo), STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Weights), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weights_MetaData), NewProp_Weights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkelMeshSkinWeightInfo",
	Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers),
	sizeof(FSkelMeshSkinWeightInfo),
	alignof(FSkelMeshSkinWeightInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.InnerSingleton;
}
// End ScriptStruct FSkelMeshSkinWeightInfo

// Begin ScriptStruct FSkelMeshComponentLODInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo;
class UScriptStruct* FSkelMeshComponentLODInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshComponentLODInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshComponentLODInfo>()
{
	return FSkelMeshComponentLODInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** LOD specific setup for the skeletal mesh component. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "LOD specific setup for the skeletal mesh component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenMaterials_MetaData[] = {
		{ "Comment", "/** Material corresponds to section. To show/hide each section, use this. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Material corresponds to section. To show/hide each section, use this." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HiddenMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshComponentLODInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_Inner = { "HiddenMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials = { "HiddenMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkelMeshComponentLODInfo, HiddenMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenMaterials_MetaData), NewProp_HiddenMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkelMeshComponentLODInfo",
	Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers),
	sizeof(FSkelMeshComponentLODInfo),
	alignof(FSkelMeshComponentLODInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.InnerSingleton;
}
// End ScriptStruct FSkelMeshComponentLODInfo

// Begin ScriptStruct FVertexOffsetUsage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexOffsetUsage;
class UScriptStruct* FVertexOffsetUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexOffsetUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexOffsetUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexOffsetUsage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VertexOffsetUsage"));
	}
	return Z_Registration_Info_UScriptStruct_VertexOffsetUsage.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVertexOffsetUsage>()
{
	return FVertexOffsetUsage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Engine.EVertexOffsetUsageType" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Usage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexOffsetUsage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexOffsetUsage, Usage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Usage_MetaData), NewProp_Usage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewProp_Usage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"VertexOffsetUsage",
	Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::PropPointers),
	sizeof(FVertexOffsetUsage),
	alignof(FVertexOffsetUsage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVertexOffsetUsage()
{
	if (!Z_Registration_Info_UScriptStruct_VertexOffsetUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexOffsetUsage.InnerSingleton, Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VertexOffsetUsage.InnerSingleton;
}
// End ScriptStruct FVertexOffsetUsage

// Begin ScriptStruct FMeshDeformerInstanceSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshDeformerInstanceSet;
class UScriptStruct* FMeshDeformerInstanceSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshDeformerInstanceSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshDeformerInstanceSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshDeformerInstanceSet, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshDeformerInstanceSet"));
	}
	return Z_Registration_Info_UScriptStruct_MeshDeformerInstanceSet.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshDeformerInstanceSet>()
{
	return FMeshDeformerInstanceSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Same as FMeshDeformerSet, except for mesh deformer instances */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Same as FMeshDeformerSet, except for mesh deformer instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformerInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeformerInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshDeformerInstanceSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::NewProp_DeformerInstances_Inner = { "DeformerInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshDeformerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::NewProp_DeformerInstances = { "DeformerInstances", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshDeformerInstanceSet, DeformerInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformerInstances_MetaData), NewProp_DeformerInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::NewProp_DeformerInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::NewProp_DeformerInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MeshDeformerInstanceSet",
	Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::PropPointers),
	sizeof(FMeshDeformerInstanceSet),
	alignof(FMeshDeformerInstanceSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshDeformerInstanceSet()
{
	if (!Z_Registration_Info_UScriptStruct_MeshDeformerInstanceSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshDeformerInstanceSet.InnerSingleton, Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshDeformerInstanceSet.InnerSingleton;
}
// End ScriptStruct FMeshDeformerInstanceSet

// Begin Class USkinnedMeshComponent Function BoneIsChildOf
struct Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics
{
	struct SkinnedMeshComponent_eventBoneIsChildOf_Parms
	{
		FName BoneName;
		FName ParentBoneName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Tests if BoneName is child of (or equal to) ParentBoneName.\n\x09 *\n\x09 * @param BoneName Name of the bone\n\x09 * @param ParentBone Name to check\n\x09 *\n\x09 * @return true if child (strictly, not same). false otherwise\n\x09 * Note - will return false if ChildBoneIndex is the same as ParentBoneIndex ie. must be strictly a child.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Tests if BoneName is child of (or equal to) ParentBoneName.\n\n@param BoneName Name of the bone\n@param ParentBone Name to check\n\n@return true if child (strictly, not same). false otherwise\nNote - will return false if ChildBoneIndex is the same as ParentBoneIndex ie. must be strictly a child." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, ParentBoneName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventBoneIsChildOf_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventBoneIsChildOf_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ParentBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "BoneIsChildOf", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::SkinnedMeshComponent_eventBoneIsChildOf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::SkinnedMeshComponent_eventBoneIsChildOf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execBoneIsChildOf)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParentBoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BoneIsChildOf(Z_Param_BoneName,Z_Param_ParentBoneName);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function BoneIsChildOf

// Begin Class USkinnedMeshComponent Function ClearSkinWeightOverride
struct Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics
{
	struct SkinnedMeshComponent_eventClearSkinWeightOverride_Parms
	{
		int32 LODIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear any applied skin weight override */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any applied skin weight override" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventClearSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::NewProp_LODIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearSkinWeightOverride", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::SkinnedMeshComponent_eventClearSkinWeightOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::SkinnedMeshComponent_eventClearSkinWeightOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execClearSkinWeightOverride)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSkinWeightOverride(Z_Param_LODIndex);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function ClearSkinWeightOverride

// Begin Class USkinnedMeshComponent Function ClearSkinWeightProfile
struct Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear the Skin Weight Profile from this component, in case it is set */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear the Skin Weight Profile from this component, in case it is set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearSkinWeightProfile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execClearSkinWeightProfile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSkinWeightProfile();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function ClearSkinWeightProfile

// Begin Class USkinnedMeshComponent Function ClearVertexColorOverride
struct Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics
{
	struct SkinnedMeshComponent_eventClearVertexColorOverride_Parms
	{
		int32 LODIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear any applied vertex color override */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any applied vertex color override" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventClearVertexColorOverride_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::NewProp_LODIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearVertexColorOverride", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::SkinnedMeshComponent_eventClearVertexColorOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::SkinnedMeshComponent_eventClearVertexColorOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execClearVertexColorOverride)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearVertexColorOverride(Z_Param_LODIndex);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function ClearVertexColorOverride

// Begin Class USkinnedMeshComponent Function FindClosestBone_K2
struct Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics
{
	struct SkinnedMeshComponent_eventFindClosestBone_K2_Parms
	{
		FVector TestLocation;
		FVector BoneLocation;
		float IgnoreScale;
		bool bRequirePhysicsAsset;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bRequirePhysicsAsset" },
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** finds the closest bone to the given location\n\x09*\n\x09* @param TestLocation the location to test against\n\x09* @param BoneLocation (optional, out) if specified, set to the world space location of the bone that was found, or (0,0,0) if no bone was found\n\x09* @param IgnoreScale (optional) if specified, only bones with scaling larger than the specified factor are considered\n\x09* @param bRequirePhysicsAsset (optional) if true, only bones with physics will be considered\n\x09*\n\x09* @return the name of the bone that was found, or 'None' if no bone was found\n\x09*/" },
		{ "CPP_Default_bRequirePhysicsAsset", "false" },
		{ "CPP_Default_IgnoreScale", "0.000000" },
		{ "DisplayName", "Find Closest Bone" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "finds the closest bone to the given location\n\n@param TestLocation the location to test against\n@param BoneLocation (optional, out) if specified, set to the world space location of the bone that was found, or (0,0,0) if no bone was found\n@param IgnoreScale (optional) if specified, only bones with scaling larger than the specified factor are considered\n@param bRequirePhysicsAsset (optional) if true, only bones with physics will be considered\n\n@return the name of the bone that was found, or 'None' if no bone was found" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IgnoreScale;
	static void NewProp_bRequirePhysicsAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequirePhysicsAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_TestLocation = { "TestLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_BoneLocation = { "BoneLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, BoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_IgnoreScale = { "IgnoreScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, IgnoreScale), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventFindClosestBone_K2_Parms*)Obj)->bRequirePhysicsAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset = { "bRequirePhysicsAsset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventFindClosestBone_K2_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_TestLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_BoneLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_IgnoreScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "FindClosestBone_K2", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::SkinnedMeshComponent_eventFindClosestBone_K2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::SkinnedMeshComponent_eventFindClosestBone_K2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execFindClosestBone_K2)
{
	P_GET_STRUCT(FVector,Z_Param_TestLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BoneLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_IgnoreScale);
	P_GET_UBOOL(Z_Param_bRequirePhysicsAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->FindClosestBone_K2(Z_Param_TestLocation,Z_Param_Out_BoneLocation,Z_Param_IgnoreScale,Z_Param_bRequirePhysicsAsset);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function FindClosestBone_K2

// Begin Class USkinnedMeshComponent Function GetBoneIndex
struct Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics
{
	struct SkinnedMeshComponent_eventGetBoneIndex_Parms
	{
		FName BoneName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Find the index of bone by name. Looks in the current SkeletalMesh being used by this SkeletalMeshComponent.\n\x09 * \n\x09 * @param BoneName Name of bone to look up\n\x09 * \n\x09 * @return Index of the named bone in the current SkeletalMesh. Will return INDEX_NONE if bone not found.\n\x09 *\n\x09 * @see USkeletalMesh::GetBoneIndex.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Find the index of bone by name. Looks in the current SkeletalMesh being used by this SkeletalMeshComponent.\n\n@param BoneName Name of bone to look up\n\n@return Index of the named bone in the current SkeletalMesh. Will return INDEX_NONE if bone not found.\n\n@see USkeletalMesh::GetBoneIndex." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetBoneIndex", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::SkinnedMeshComponent_eventGetBoneIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::SkinnedMeshComponent_eventGetBoneIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetBoneIndex)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBoneIndex(Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetBoneIndex

// Begin Class USkinnedMeshComponent Function GetBoneName
struct Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics
{
	struct SkinnedMeshComponent_eventGetBoneName_Parms
	{
		int32 BoneIndex;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Get Bone Name from index\n\x09 * @param BoneIndex Index of the bone\n\x09 *\n\x09 * @return the name of the bone at the specified index \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Bone Name from index\n@param BoneIndex Index of the bone\n\n@return the name of the bone at the specified index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, BoneIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_BoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetBoneName", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::SkinnedMeshComponent_eventGetBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::SkinnedMeshComponent_eventGetBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetBoneName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BoneIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetBoneName(Z_Param_BoneIndex);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetBoneName

// Begin Class USkinnedMeshComponent Function GetBoneTransform
struct Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics
{
	struct SkinnedMeshComponent_eventGetBoneTransform_Parms
	{
		FName InBoneName;
		TEnumAsByte<ERelativeTransformSpace> TransformSpace;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Get world-space bone transform.\n\x09 * @param InBoneName Name of the the bone to get the transform \n\x09 * @return Bone transform in world space if bone is found. Otherwise it will return component's transform in world space.\n\x09 */" },
		{ "CPP_Default_TransformSpace", "RTS_World" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get world-space bone transform.\n@param InBoneName Name of the the bone to get the transform\n@return Bone transform in world space if bone is found. Otherwise it will return component's transform in world space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneTransform_Parms, InBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::NewProp_TransformSpace = { "TransformSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneTransform_Parms, TransformSpace), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(0, nullptr) }; // 3473466935
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::NewProp_InBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::NewProp_TransformSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetBoneTransform", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::SkinnedMeshComponent_eventGetBoneTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::SkinnedMeshComponent_eventGetBoneTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetBoneTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InBoneName);
	P_GET_PROPERTY(FByteProperty,Z_Param_TransformSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetBoneTransform(Z_Param_InBoneName,ERelativeTransformSpace(Z_Param_TransformSpace));
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetBoneTransform

// Begin Class USkinnedMeshComponent Function GetCurrentSkinWeightProfileName
struct Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics
{
	struct SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Return the name of the Skin Weight Profile that is currently set otherwise returns 'None' */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Return the name of the Skin Weight Profile that is currently set otherwise returns 'None'" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetCurrentSkinWeightProfileName", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetCurrentSkinWeightProfileName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetCurrentSkinWeightProfileName();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetCurrentSkinWeightProfileName

// Begin Class USkinnedMeshComponent Function GetDeltaTransformFromRefPose
struct Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics
{
	struct SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms
	{
		FName BoneName;
		FName BaseName;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09* Get delta transform from reference pose based on BaseNode.\n\x09* This uses last frame up-to-date transform, so it will have a frame delay if you use this info in the AnimGraph\n\x09*\n\x09* @param BoneName Name of the bone\n\x09* @param BaseName Name of the base bone - if none, it will use parent as a base\n\x09* \n\x09* @return the delta transform from refpose in that given space (BaseName)\n\x09*/" },
		{ "CPP_Default_BaseName", "None" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get delta transform from reference pose based on BaseNode.\nThis uses last frame up-to-date transform, so it will have a frame delay if you use this info in the AnimGraph\n\n@param BoneName Name of the bone\n@param BaseName Name of the base bone - if none, it will use parent as a base\n\n@return the delta transform from refpose in that given space (BaseName)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BaseName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, BaseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetDeltaTransformFromRefPose", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetDeltaTransformFromRefPose)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FNameProperty,Z_Param_BaseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetDeltaTransformFromRefPose(Z_Param_BoneName,Z_Param_BaseName);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetDeltaTransformFromRefPose

// Begin Class USkinnedMeshComponent Function GetForcedLOD
struct Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics
{
	struct SkinnedMeshComponent_eventGetForcedLOD_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Get ForcedLodModel of the mesh component. Note that the actual forced LOD level is the return value minus one and zero means no forced LOD */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get ForcedLodModel of the mesh component. Note that the actual forced LOD level is the return value minus one and zero means no forced LOD" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetForcedLOD_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetForcedLOD", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::SkinnedMeshComponent_eventGetForcedLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::SkinnedMeshComponent_eventGetForcedLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetForcedLOD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetForcedLOD();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetForcedLOD

// Begin Class USkinnedMeshComponent Function GetMeshDeformerInstance
struct Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics
{
	struct SkinnedMeshComponent_eventGetMeshDeformerInstance_Parms
	{
		UMeshDeformerInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetMeshDeformerInstance_Parms, ReturnValue), Z_Construct_UClass_UMeshDeformerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetMeshDeformerInstance", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::SkinnedMeshComponent_eventGetMeshDeformerInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::SkinnedMeshComponent_eventGetMeshDeformerInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetMeshDeformerInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeshDeformerInstance**)Z_Param__Result=P_THIS->GetMeshDeformerInstance();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetMeshDeformerInstance

// Begin Class USkinnedMeshComponent Function GetNumBones
struct Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics
{
	struct SkinnedMeshComponent_eventGetNumBones_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09*  Returns the number of bones in the skeleton.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns the number of bones in the skeleton." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetNumBones_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetNumBones", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::SkinnedMeshComponent_eventGetNumBones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::SkinnedMeshComponent_eventGetNumBones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetNumBones)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumBones();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetNumBones

// Begin Class USkinnedMeshComponent Function GetNumLODs
struct Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics
{
	struct SkinnedMeshComponent_eventGetNumLODs_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Get the number of LODs on this component */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get the number of LODs on this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetNumLODs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetNumLODs", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::SkinnedMeshComponent_eventGetNumLODs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::SkinnedMeshComponent_eventGetNumLODs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetNumLODs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumLODs();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetNumLODs

// Begin Class USkinnedMeshComponent Function GetParentBone
struct Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics
{
	struct SkinnedMeshComponent_eventGetParentBone_Parms
	{
		FName BoneName;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Get Parent Bone of the input bone\n\x09 * \n\x09 * @param BoneName Name of the bone\n\x09 *\n\x09 * @return the name of the parent bone for the specified bone. Returns 'None' if the bone does not exist or it is the root bone \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Parent Bone of the input bone\n\n@param BoneName Name of the bone\n\n@return the name of the parent bone for the specified bone. Returns 'None' if the bone does not exist or it is the root bone" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetParentBone", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::SkinnedMeshComponent_eventGetParentBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::SkinnedMeshComponent_eventGetParentBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetParentBone)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetParentBone(Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetParentBone

// Begin Class USkinnedMeshComponent Function GetPredictedLODLevel
struct Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics
{
	struct SkinnedMeshComponent_eventGetPredictedLODLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Get predicted LOD level. This value is usually calculated in UpdateLODStatus, but can be modified by skeletal mesh streaming. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get predicted LOD level. This value is usually calculated in UpdateLODStatus, but can be modified by skeletal mesh streaming." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetPredictedLODLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetPredictedLODLevel", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::SkinnedMeshComponent_eventGetPredictedLODLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::SkinnedMeshComponent_eventGetPredictedLODLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetPredictedLODLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPredictedLODLevel();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetPredictedLODLevel

// Begin Class USkinnedMeshComponent Function GetRefPosePosition
struct Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics
{
	struct SkinnedMeshComponent_eventGetRefPosePosition_Parms
	{
		int32 BoneIndex;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Gets the local-space position of a bone in the reference pose. \n\x09 *\n\x09 * @param BoneIndex Index of the bone\n\x09 *\n\x09 * @return Local space reference position \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Gets the local-space position of a bone in the reference pose.\n\n@param BoneIndex Index of the bone\n\n@return Local space reference position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPosePosition_Parms, BoneIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPosePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_BoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetRefPosePosition", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::SkinnedMeshComponent_eventGetRefPosePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::SkinnedMeshComponent_eventGetRefPosePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetRefPosePosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BoneIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRefPosePosition(Z_Param_BoneIndex);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetRefPosePosition

// Begin Class USkinnedMeshComponent Function GetRefPoseTransform
struct Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics
{
	struct SkinnedMeshComponent_eventGetRefPoseTransform_Parms
	{
		int32 BoneIndex;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Gets the local-space transform of a bone in the reference pose. \n\x09 *\n\x09 * @param BoneIndex Index of the bone\n\x09 *\n\x09 * @return Local space reference transform \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Gets the local-space transform of a bone in the reference pose.\n\n@param BoneIndex Index of the bone\n\n@return Local space reference transform" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPoseTransform_Parms, BoneIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPoseTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::NewProp_BoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetRefPoseTransform", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::SkinnedMeshComponent_eventGetRefPoseTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::SkinnedMeshComponent_eventGetRefPoseTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetRefPoseTransform)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BoneIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetRefPoseTransform(Z_Param_BoneIndex);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetRefPoseTransform

// Begin Class USkinnedMeshComponent Function GetSkeletalMesh_DEPRECATED
struct Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics
{
	struct SkinnedMeshComponent_eventGetSkeletalMesh_DEPRECATED_Parms
	{
		USkeletalMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use USkeletalMeshComponent::GetSkeletalMeshAsset() or GetSkinnedAsset() instead." },
		{ "DisplayName", "Get Skeletal Mesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSkeletalMesh_DEPRECATED_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetSkeletalMesh_DEPRECATED", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::SkinnedMeshComponent_eventGetSkeletalMesh_DEPRECATED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::SkinnedMeshComponent_eventGetSkeletalMesh_DEPRECATED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetSkeletalMesh_DEPRECATED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMesh**)Z_Param__Result=P_THIS->GetSkeletalMesh_DEPRECATED();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetSkeletalMesh_DEPRECATED

// Begin Class USkinnedMeshComponent Function GetSkinnedAsset
struct Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics
{
	struct SkinnedMeshComponent_eventGetSkinnedAsset_Parms
	{
		USkinnedAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Get the SkinnedAsset rendered for this mesh.\n\x09 *\n\x09 * @return the SkinnedAsset set to this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get the SkinnedAsset rendered for this mesh.\n\n@return the SkinnedAsset set to this mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSkinnedAsset_Parms, ReturnValue), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetSkinnedAsset", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::SkinnedMeshComponent_eventGetSkinnedAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::SkinnedMeshComponent_eventGetSkinnedAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetSkinnedAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkinnedAsset**)Z_Param__Result=P_THIS->GetSkinnedAsset();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetSkinnedAsset

// Begin Class USkinnedMeshComponent Function GetSocketBoneName
struct Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics
{
	struct SkinnedMeshComponent_eventGetSocketBoneName_Parms
	{
		FName InSocketName;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Returns bone name linked to a given named socket on the skeletal mesh component.\n\x09 * If you're unsure to deal with sockets or bones names, you can use this function to filter through, and always return the bone name.\n\x09 *\n\x09 * @param\x09""bone name or socket name\n\x09 *\n\x09 * @return\x09""bone name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns bone name linked to a given named socket on the skeletal mesh component.\nIf you're unsure to deal with sockets or bones names, you can use this function to filter through, and always return the bone name.\n\n@param       bone name or socket name\n\n@return      bone name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, InSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_InSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetSocketBoneName", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::SkinnedMeshComponent_eventGetSocketBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::SkinnedMeshComponent_eventGetSocketBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetSocketBoneName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSocketBoneName(Z_Param_InSocketName);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetSocketBoneName

// Begin Class USkinnedMeshComponent Function GetTwistAndSwingAngleOfDeltaRotationFromRefPose
struct Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics
{
	struct SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms
	{
		FName BoneName;
		float OutTwistAngle;
		float OutSwingAngle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Get Twist and Swing Angle in Degree of Delta Rotation from Reference Pose in Local space \n\x09 *\n\x09 * First this function gets rotation of current, and rotation of ref pose in local space, and \n\x09 * And gets twist/swing angle value from refpose aligned. \n\x09 * \n\x09 * @param BoneName Name of the bone\n\x09 * @param OutTwistAngle TwistAngle in degree\n\x09 * @param OutSwingAngle SwingAngle in degree\n\x09 *\n\x09 * @return true if succeed. False otherwise. Often due to incorrect bone name. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Twist and Swing Angle in Degree of Delta Rotation from Reference Pose in Local space\n\nFirst this function gets rotation of current, and rotation of ref pose in local space, and\nAnd gets twist/swing angle value from refpose aligned.\n\n@param BoneName Name of the bone\n@param OutTwistAngle TwistAngle in degree\n@param OutSwingAngle SwingAngle in degree\n\n@return true if succeed. False otherwise. Often due to incorrect bone name." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTwistAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSwingAngle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutTwistAngle = { "OutTwistAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms, OutTwistAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutSwingAngle = { "OutSwingAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms, OutSwingAngle), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutTwistAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutSwingAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetTwistAndSwingAngleOfDeltaRotationFromRefPose", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetTwistAndSwingAngleOfDeltaRotationFromRefPose)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTwistAngle);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSwingAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTwistAndSwingAngleOfDeltaRotationFromRefPose(Z_Param_BoneName,Z_Param_Out_OutTwistAngle,Z_Param_Out_OutSwingAngle);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetTwistAndSwingAngleOfDeltaRotationFromRefPose

// Begin Class USkinnedMeshComponent Function GetVertexOffsetUsage
struct Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics
{
	struct SkinnedMeshComponent_eventGetVertexOffsetUsage_Parms
	{
		int32 LODIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetVertexOffsetUsage_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventGetVertexOffsetUsage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetVertexOffsetUsage", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::SkinnedMeshComponent_eventGetVertexOffsetUsage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::SkinnedMeshComponent_eventGetVertexOffsetUsage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execGetVertexOffsetUsage)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetVertexOffsetUsage(Z_Param_LODIndex);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function GetVertexOffsetUsage

// Begin Class USkinnedMeshComponent Function HideBoneByName
struct Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics
{
	struct SkinnedMeshComponent_eventHideBoneByName_Parms
	{
		FName BoneName;
		TEnumAsByte<EPhysBodyOp> PhysBodyOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09Hides the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\n\x09 *\x09""Compared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\x09 *\n\x09 *\x09@param  BoneName            Name of bone to hide\n\x09 *\x09@param\x09PhysBodyOption\x09\x09Option for physics bodies that attach to the bones to be hidden\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Hides the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\n@param  BoneName            Name of bone to hide\n@param  PhysBodyOption          Option for physics bodies that attach to the bones to be hidden" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PhysBodyOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_PhysBodyOption = { "PhysBodyOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, PhysBodyOption), Z_Construct_UEnum_Engine_EPhysBodyOp, METADATA_PARAMS(0, nullptr) }; // 269779865
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_PhysBodyOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "HideBoneByName", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::SkinnedMeshComponent_eventHideBoneByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::SkinnedMeshComponent_eventHideBoneByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execHideBoneByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FByteProperty,Z_Param_PhysBodyOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideBoneByName(Z_Param_BoneName,EPhysBodyOp(Z_Param_PhysBodyOption));
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function HideBoneByName

// Begin Class USkinnedMeshComponent Function IsBoneHiddenByName
struct Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics
{
	struct SkinnedMeshComponent_eventIsBoneHiddenByName_Parms
	{
		FName BoneName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 *\x09""Determines if the specified bone is hidden. \n\x09 *\n\x09 *\x09@param  BoneName            Name of bone to check\n\x09 *\n\x09 *\x09@return true if hidden\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Determines if the specified bone is hidden.\n\n@param  BoneName            Name of bone to check\n\n@return true if hidden" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventIsBoneHiddenByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsBoneHiddenByName", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::SkinnedMeshComponent_eventIsBoneHiddenByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execIsBoneHiddenByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBoneHiddenByName(Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function IsBoneHiddenByName

// Begin Class USkinnedMeshComponent Function IsMaterialSectionShown
struct Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics
{
	struct SkinnedMeshComponent_eventIsMaterialSectionShown_Parms
	{
		int32 MaterialID;
		int32 LODIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Returns whether a specific material section is currently hidden on this component (by using ShowMaterialSection) */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns whether a specific material section is currently hidden on this component (by using ShowMaterialSection)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms, MaterialID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventIsMaterialSectionShown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_MaterialID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsMaterialSectionShown", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::SkinnedMeshComponent_eventIsMaterialSectionShown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::SkinnedMeshComponent_eventIsMaterialSectionShown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execIsMaterialSectionShown)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMaterialSectionShown(Z_Param_MaterialID,Z_Param_LODIndex);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function IsMaterialSectionShown

// Begin Class USkinnedMeshComponent Function IsUsingSkinWeightProfile
struct Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics
{
	struct SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Check whether or not a Skin Weight Profile is currently set */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Check whether or not a Skin Weight Profile is currently set" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsUsingSkinWeightProfile", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execIsUsingSkinWeightProfile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingSkinWeightProfile();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function IsUsingSkinWeightProfile

// Begin Class USkinnedMeshComponent Function OverrideMinLOD
struct Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics
{
	struct SkinnedMeshComponent_eventOverrideMinLOD_Parms
	{
		int32 InNewMinLOD;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Override the Min LOD of the mesh component\n\x09 *\n\x09 * @param\x09InNewMinLOD\x09Override new MinLodModel that make sure the LOD does not go below of this value. Range from [0, Max Number of LOD - 1]. This will affect in the next tick update.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Override the Min LOD of the mesh component\n\n@param       InNewMinLOD     Override new MinLodModel that make sure the LOD does not go below of this value. Range from [0, Max Number of LOD - 1]. This will affect in the next tick update." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNewMinLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::NewProp_InNewMinLOD = { "InNewMinLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventOverrideMinLOD_Parms, InNewMinLOD), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::NewProp_InNewMinLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "OverrideMinLOD", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::SkinnedMeshComponent_eventOverrideMinLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::SkinnedMeshComponent_eventOverrideMinLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execOverrideMinLOD)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNewMinLOD);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideMinLOD(Z_Param_InNewMinLOD);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function OverrideMinLOD

// Begin Class USkinnedMeshComponent Function SetCapsuleIndirectShadowMinVisibility
struct Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics
{
	struct SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCapsuleIndirectShadowMinVisibility", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetCapsuleIndirectShadowMinVisibility)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCapsuleIndirectShadowMinVisibility(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetCapsuleIndirectShadowMinVisibility

// Begin Class USkinnedMeshComponent Function SetCastCapsuleDirectShadow
struct Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics
{
	struct SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCastCapsuleDirectShadow", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetCastCapsuleDirectShadow)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastCapsuleDirectShadow(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetCastCapsuleDirectShadow

// Begin Class USkinnedMeshComponent Function SetCastCapsuleIndirectShadow
struct Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics
{
	struct SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCastCapsuleIndirectShadow", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetCastCapsuleIndirectShadow)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastCapsuleIndirectShadow(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetCastCapsuleIndirectShadow

// Begin Class USkinnedMeshComponent Function SetForcedLOD
struct Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics
{
	struct SkinnedMeshComponent_eventSetForcedLOD_Parms
	{
		int32 InNewForcedLOD;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set ForcedLodModel of the mesh component\n\x09 *\n\x09 * @param\x09InNewForcedLOD\x09Set new ForcedLODModel that forces to set the incoming LOD. Range from [1, Max Number of LOD]. This will affect in the next tick update. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set ForcedLodModel of the mesh component\n\n@param       InNewForcedLOD  Set new ForcedLODModel that forces to set the incoming LOD. Range from [1, Max Number of LOD]. This will affect in the next tick update." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNewForcedLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::NewProp_InNewForcedLOD = { "InNewForcedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetForcedLOD_Parms, InNewForcedLOD), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::NewProp_InNewForcedLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetForcedLOD", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::SkinnedMeshComponent_eventSetForcedLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::SkinnedMeshComponent_eventSetForcedLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetForcedLOD)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNewForcedLOD);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForcedLOD(Z_Param_InNewForcedLOD);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetForcedLOD

// Begin Class USkinnedMeshComponent Function SetLeaderPoseComponent
struct Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics
{
	struct SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms
	{
		USkinnedMeshComponent* NewLeaderBoneComponent;
		bool bForceUpdate;
		bool bInFollowerShouldTickPose;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set LeaderPoseComponent for this component\n\x09 *\n\x09 * @param NewLeaderBoneComponent New LeaderPoseComponent\n\x09 * @param bForceUpdate If false, the function will be skipped if NewLeaderBoneComponent is the same as currently setup (default)\n\x09 * @param bInFollowerShouldTickPose If false, Follower components will not execute TickPose (default)\n\x09 */" },
		{ "CPP_Default_bForceUpdate", "false" },
		{ "CPP_Default_bInFollowerShouldTickPose", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set LeaderPoseComponent for this component\n\n@param NewLeaderBoneComponent New LeaderPoseComponent\n@param bForceUpdate If false, the function will be skipped if NewLeaderBoneComponent is the same as currently setup (default)\n@param bInFollowerShouldTickPose If false, Follower components will not execute TickPose (default)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLeaderBoneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLeaderBoneComponent;
	static void NewProp_bForceUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
	static void NewProp_bInFollowerShouldTickPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInFollowerShouldTickPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_NewLeaderBoneComponent = { "NewLeaderBoneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms, NewLeaderBoneComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLeaderBoneComponent_MetaData), NewProp_NewLeaderBoneComponent_MetaData) };
void Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms*)Obj)->bForceUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bInFollowerShouldTickPose_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms*)Obj)->bInFollowerShouldTickPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bInFollowerShouldTickPose = { "bInFollowerShouldTickPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bInFollowerShouldTickPose_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_NewLeaderBoneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bForceUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bInFollowerShouldTickPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetLeaderPoseComponent", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetLeaderPoseComponent)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_NewLeaderBoneComponent);
	P_GET_UBOOL(Z_Param_bForceUpdate);
	P_GET_UBOOL(Z_Param_bInFollowerShouldTickPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLeaderPoseComponent(Z_Param_NewLeaderBoneComponent,Z_Param_bForceUpdate,Z_Param_bInFollowerShouldTickPose);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetLeaderPoseComponent

// Begin Class USkinnedMeshComponent Function SetMeshDeformer
struct Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics
{
	struct SkinnedMeshComponent_eventSetMeshDeformer_Parms
	{
		UMeshDeformer* InMeshDeformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Change the MeshDeformer that is used for this Component.\n\x09 *\n\x09 * @param InMeshDeformer New mesh deformer to set for this component\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Change the MeshDeformer that is used for this Component.\n\n@param InMeshDeformer New mesh deformer to set for this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMeshDeformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::NewProp_InMeshDeformer = { "InMeshDeformer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMeshDeformer_Parms, InMeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::NewProp_InMeshDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetMeshDeformer", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::SkinnedMeshComponent_eventSetMeshDeformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::SkinnedMeshComponent_eventSetMeshDeformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetMeshDeformer)
{
	P_GET_OBJECT(UMeshDeformer,Z_Param_InMeshDeformer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeshDeformer(Z_Param_InMeshDeformer);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetMeshDeformer

// Begin Class USkinnedMeshComponent Function SetMinLOD
struct Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics
{
	struct SkinnedMeshComponent_eventSetMinLOD_Parms
	{
		int32 InNewMinLOD;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use USkinnedMeshComponent::OverrideMinLOD() instead." },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNewMinLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::NewProp_InNewMinLOD = { "InNewMinLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMinLOD_Parms, InNewMinLOD), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::NewProp_InNewMinLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetMinLOD", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::SkinnedMeshComponent_eventSetMinLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::SkinnedMeshComponent_eventSetMinLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetMinLOD)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNewMinLOD);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinLOD(Z_Param_InNewMinLOD);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetMinLOD

// Begin Class USkinnedMeshComponent Function SetPhysicsAsset
struct Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics
{
	struct SkinnedMeshComponent_eventSetPhysicsAsset_Parms
	{
		UPhysicsAsset* NewPhysicsAsset;
		bool bForceReInit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Override the Physics Asset of the mesh. It uses SkeletalMesh.PhysicsAsset, but if you'd like to override use this function\n\x09 * \n\x09 * @param\x09NewPhysicsAsset\x09New PhysicsAsset\n\x09 * @param\x09""bForceReInit\x09""Force reinitialize\n\x09 */" },
		{ "CPP_Default_bForceReInit", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Override the Physics Asset of the mesh. It uses SkeletalMesh.PhysicsAsset, but if you'd like to override use this function\n\n@param       NewPhysicsAsset New PhysicsAsset\n@param       bForceReInit    Force reinitialize" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPhysicsAsset;
	static void NewProp_bForceReInit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_NewPhysicsAsset = { "NewPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPhysicsAsset_Parms, NewPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventSetPhysicsAsset_Parms*)Obj)->bForceReInit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit = { "bForceReInit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetPhysicsAsset_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_NewPhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetPhysicsAsset", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::SkinnedMeshComponent_eventSetPhysicsAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::SkinnedMeshComponent_eventSetPhysicsAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetPhysicsAsset)
{
	P_GET_OBJECT(UPhysicsAsset,Z_Param_NewPhysicsAsset);
	P_GET_UBOOL(Z_Param_bForceReInit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhysicsAsset(Z_Param_NewPhysicsAsset,Z_Param_bForceReInit);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetPhysicsAsset

// Begin Class USkinnedMeshComponent Function SetPostSkinningOffsets
struct Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics
{
	struct SkinnedMeshComponent_eventSetPostSkinningOffsets_Parms
	{
		int32 LODIndex;
		TArray<FVector> Offsets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Offsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPostSkinningOffsets_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_Offsets_Inner = { "Offsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPostSkinningOffsets_Parms, Offsets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_Offsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_Offsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetPostSkinningOffsets", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::SkinnedMeshComponent_eventSetPostSkinningOffsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::SkinnedMeshComponent_eventSetPostSkinningOffsets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetPostSkinningOffsets)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_TARRAY(FVector,Z_Param_Offsets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPostSkinningOffsets(Z_Param_LODIndex,Z_Param_Offsets);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetPostSkinningOffsets

// Begin Class USkinnedMeshComponent Function SetPreSkinningOffsets
struct Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics
{
	struct SkinnedMeshComponent_eventSetPreSkinningOffsets_Parms
	{
		int32 LODIndex;
		TArray<FVector> Offsets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Offsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPreSkinningOffsets_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_Offsets_Inner = { "Offsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPreSkinningOffsets_Parms, Offsets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_Offsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_Offsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetPreSkinningOffsets", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::SkinnedMeshComponent_eventSetPreSkinningOffsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::SkinnedMeshComponent_eventSetPreSkinningOffsets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetPreSkinningOffsets)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_TARRAY(FVector,Z_Param_Offsets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPreSkinningOffsets(Z_Param_LODIndex,Z_Param_Offsets);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetPreSkinningOffsets

// Begin Class USkinnedMeshComponent Function SetRenderStatic
struct Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics
{
	struct SkinnedMeshComponent_eventSetRenderStatic_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set whether this skinned mesh should be rendered as static mesh in a reference pose\n\x09 *\n\x09 * @param\x09whether this skinned mesh should be rendered as static\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set whether this skinned mesh should be rendered as static mesh in a reference pose\n\n@param       whether this skinned mesh should be rendered as static" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventSetRenderStatic_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetRenderStatic_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetRenderStatic", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::SkinnedMeshComponent_eventSetRenderStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::SkinnedMeshComponent_eventSetRenderStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetRenderStatic)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderStatic(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetRenderStatic

// Begin Class USkinnedMeshComponent Function SetSkinnedAssetAndUpdate
struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics
{
	struct SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms
	{
		USkinnedAsset* NewMesh;
		bool bReinitPose;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Change the SkinnedAsset that is rendered for this Component. Will re-initialize the animation tree etc.\n\x09 *\n\x09 * @param NewMesh New mesh to set for this component\n\x09 * @param bReinitPose Whether we should keep current pose or reinitialize.\n\x09 */" },
		{ "CPP_Default_bReinitPose", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Change the SkinnedAsset that is rendered for this Component. Will re-initialize the animation tree etc.\n\n@param NewMesh New mesh to set for this component\n@param bReinitPose Whether we should keep current pose or reinitialize." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static void NewProp_bReinitPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms, NewMesh), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_bReinitPose_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms*)Obj)->bReinitPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_bReinitPose = { "bReinitPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_bReinitPose_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_NewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_bReinitPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkinnedAssetAndUpdate", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetSkinnedAssetAndUpdate)
{
	P_GET_OBJECT(USkinnedAsset,Z_Param_NewMesh);
	P_GET_UBOOL(Z_Param_bReinitPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkinnedAssetAndUpdate(Z_Param_NewMesh,Z_Param_bReinitPose);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetSkinnedAssetAndUpdate

// Begin Class USkinnedMeshComponent Function SetSkinWeightOverride
struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics
{
	struct SkinnedMeshComponent_eventSetSkinWeightOverride_Parms
	{
		int32 LODIndex;
		TArray<FSkelMeshSkinWeightInfo> SkinWeights;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Allow override of skin weights on a per-component basis. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allow override of skin weights on a per-component basis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinWeights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkinWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinWeights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_Inner = { "SkinWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(0, nullptr) }; // 3914821906
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights = { "SkinWeights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, SkinWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinWeights_MetaData), NewProp_SkinWeights_MetaData) }; // 3914821906
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkinWeightOverride", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::SkinnedMeshComponent_eventSetSkinWeightOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::SkinnedMeshComponent_eventSetSkinWeightOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetSkinWeightOverride)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_TARRAY_REF(FSkelMeshSkinWeightInfo,Z_Param_Out_SkinWeights);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkinWeightOverride(Z_Param_LODIndex,Z_Param_Out_SkinWeights);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetSkinWeightOverride

// Begin Class USkinnedMeshComponent Function SetSkinWeightProfile
struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics
{
	struct SkinnedMeshComponent_eventSetSkinWeightProfile_Parms
	{
		FName InProfileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Setup an override Skin Weight Profile for this component */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Setup an override Skin Weight Profile for this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InProfileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_InProfileName = { "InProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightProfile_Parms, InProfileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventSetSkinWeightProfile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetSkinWeightProfile_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_InProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkinWeightProfile", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::SkinnedMeshComponent_eventSetSkinWeightProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::SkinnedMeshComponent_eventSetSkinWeightProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetSkinWeightProfile)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InProfileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSkinWeightProfile(Z_Param_InProfileName);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetSkinWeightProfile

// Begin Class USkinnedMeshComponent Function SetVertexColorOverride_LinearColor
struct Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics
{
	struct SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms
	{
		int32 LODIndex;
		TArray<FLinearColor> VertexColors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Allow override of vertex colors on a per-component basis, taking array of Blueprint-friendly LinearColors. */" },
		{ "DisplayName", "Set Vertex Color Override" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allow override of vertex colors on a per-component basis, taking array of Blueprint-friendly LinearColors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColors_MetaData), NewProp_VertexColors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetVertexColorOverride_LinearColor", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetVertexColorOverride_LinearColor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVertexColorOverride_LinearColor(Z_Param_LODIndex,Z_Param_Out_VertexColors);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetVertexColorOverride_LinearColor

// Begin Class USkinnedMeshComponent Function SetVertexOffsetUsage
struct Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics
{
	struct SkinnedMeshComponent_eventSetVertexOffsetUsage_Parms
	{
		int32 LODIndex;
		int32 Usage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Usage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexOffsetUsage_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexOffsetUsage_Parms, Usage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::NewProp_Usage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetVertexOffsetUsage", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::SkinnedMeshComponent_eventSetVertexOffsetUsage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::SkinnedMeshComponent_eventSetVertexOffsetUsage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execSetVertexOffsetUsage)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Usage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVertexOffsetUsage(Z_Param_LODIndex,Z_Param_Usage);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function SetVertexOffsetUsage

// Begin Class USkinnedMeshComponent Function ShowAllMaterialSections
struct Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics
{
	struct SkinnedMeshComponent_eventShowAllMaterialSections_Parms
	{
		int32 LODIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear any material visibility modifications made by ShowMaterialSection */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any material visibility modifications made by ShowMaterialSection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowAllMaterialSections_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::NewProp_LODIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ShowAllMaterialSections", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::SkinnedMeshComponent_eventShowAllMaterialSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::SkinnedMeshComponent_eventShowAllMaterialSections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execShowAllMaterialSections)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAllMaterialSections(Z_Param_LODIndex);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function ShowAllMaterialSections

// Begin Class USkinnedMeshComponent Function ShowMaterialSection
struct Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics
{
	struct SkinnedMeshComponent_eventShowMaterialSection_Parms
	{
		int32 MaterialID;
		int32 SectionIndex;
		bool bShow;
		int32 LODIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09""Allows hiding of a particular material (by ID) on this instance of a SkeletalMesh.\n\x09 *\n\x09 * @param MaterialID - Index of the material show/hide\n\x09 * @param bShow - True to show the material, false to hide it\n\x09 * @param LODIndex - Index of the LOD to modify material visibility within\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allows hiding of a particular material (by ID) on this instance of a SkeletalMesh.\n\n@param MaterialID - Index of the material show/hide\n@param bShow - True to show the material, false to hide it\n@param LODIndex - Index of the LOD to modify material visibility within" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, MaterialID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((SkinnedMeshComponent_eventShowMaterialSection_Parms*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkinnedMeshComponent_eventShowMaterialSection_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_MaterialID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_LODIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ShowMaterialSection", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::SkinnedMeshComponent_eventShowMaterialSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::SkinnedMeshComponent_eventShowMaterialSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execShowMaterialSection)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_GET_UBOOL(Z_Param_bShow);
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMaterialSection(Z_Param_MaterialID,Z_Param_SectionIndex,Z_Param_bShow,Z_Param_LODIndex);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function ShowMaterialSection

// Begin Class USkinnedMeshComponent Function TransformFromBoneSpace
struct Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics
{
	struct SkinnedMeshComponent_eventTransformFromBoneSpace_Parms
	{
		FName BoneName;
		FVector InPosition;
		FRotator InRotation;
		FVector OutPosition;
		FRotator OutRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09Transform a location/rotation in bone relative space to world space.\n\x09 *\n\x09 * @param BoneName Name of bone\n\x09 * @param InPosition Input position\n\x09 * @param InRotation Input rotation\n\x09 * @param OutPosition (out) Transformed position\n\x09 * @param OutRotation (out) Transformed rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Transform a location/rotation in bone relative space to world space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "TransformFromBoneSpace", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::SkinnedMeshComponent_eventTransformFromBoneSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::SkinnedMeshComponent_eventTransformFromBoneSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execTransformFromBoneSpace)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_InPosition);
	P_GET_STRUCT(FRotator,Z_Param_InRotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TransformFromBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function TransformFromBoneSpace

// Begin Class USkinnedMeshComponent Function TransformToBoneSpace
struct Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics
{
	struct SkinnedMeshComponent_eventTransformToBoneSpace_Parms
	{
		FName BoneName;
		FVector InPosition;
		FRotator InRotation;
		FVector OutPosition;
		FRotator OutRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09Transform a location/rotation from world space to bone relative space.\n\x09 *\x09This is handy if you know the location in world space for a bone attachment, as AttachComponent takes location/rotation in bone-relative space.\n\x09 *\n\x09 * @param BoneName Name of bone\n\x09 * @param InPosition Input position\n\x09 * @param InRotation Input rotation\n\x09 * @param OutPosition (out) Transformed position\n\x09 * @param OutRotation (out) Transformed rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Transform a location/rotation from world space to bone relative space.\nThis is handy if you know the location in world space for a bone attachment, as AttachComponent takes location/rotation in bone-relative space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "TransformToBoneSpace", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::SkinnedMeshComponent_eventTransformToBoneSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::SkinnedMeshComponent_eventTransformToBoneSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execTransformToBoneSpace)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_InPosition);
	P_GET_STRUCT(FRotator,Z_Param_InRotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TransformToBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function TransformToBoneSpace

// Begin Class USkinnedMeshComponent Function UnHideBoneByName
struct Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics
{
	struct SkinnedMeshComponent_eventUnHideBoneByName_Parms
	{
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09UnHide the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\n\x09 *\x09""Compared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\x09 *\x09@param  BoneName            Name of bone to unhide\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "UnHide the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n@param  BoneName            Name of bone to unhide" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventUnHideBoneByName_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "UnHideBoneByName", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::SkinnedMeshComponent_eventUnHideBoneByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::SkinnedMeshComponent_eventUnHideBoneByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execUnHideBoneByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnHideBoneByName(Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function UnHideBoneByName

// Begin Class USkinnedMeshComponent Function UnloadSkinWeightProfile
struct Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics
{
	struct SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms
	{
		FName InProfileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Unload a Skin Weight Profile's skin weight buffer (if created) */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Unload a Skin Weight Profile's skin weight buffer (if created)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InProfileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::NewProp_InProfileName = { "InProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms, InProfileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::NewProp_InProfileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "UnloadSkinWeightProfile", nullptr, nullptr, Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execUnloadSkinWeightProfile)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InProfileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadSkinWeightProfile(Z_Param_InProfileName);
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function UnloadSkinWeightProfile

// Begin Class USkinnedMeshComponent Function UnsetMeshDeformer
struct Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Unset any MeshDeformer applied to this Component.\n\x09 *\n\x09 * @param InMeshDeformer New mesh deformer to set for this component\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Unset any MeshDeformer applied to this Component.\n\n@param InMeshDeformer New mesh deformer to set for this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "UnsetMeshDeformer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshComponent::execUnsetMeshDeformer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnsetMeshDeformer();
	P_NATIVE_END;
}
// End Class USkinnedMeshComponent Function UnsetMeshDeformer

// Begin Class USkinnedMeshComponent
void USkinnedMeshComponent::SetSkeletalMesh_WrapperImpl(void* Object, const void* InValue)
{
	USkinnedMeshComponent* Obj = (USkinnedMeshComponent*)Object;
	USkeletalMesh*& Value = *(USkeletalMesh**)InValue;
	Obj->SetSkeletalMesh_DEPRECATED(Value);
}
void USkinnedMeshComponent::StaticRegisterNativesUSkinnedMeshComponent()
{
	UClass* Class = USkinnedMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BoneIsChildOf", &USkinnedMeshComponent::execBoneIsChildOf },
		{ "ClearSkinWeightOverride", &USkinnedMeshComponent::execClearSkinWeightOverride },
		{ "ClearSkinWeightProfile", &USkinnedMeshComponent::execClearSkinWeightProfile },
		{ "ClearVertexColorOverride", &USkinnedMeshComponent::execClearVertexColorOverride },
		{ "FindClosestBone_K2", &USkinnedMeshComponent::execFindClosestBone_K2 },
		{ "GetBoneIndex", &USkinnedMeshComponent::execGetBoneIndex },
		{ "GetBoneName", &USkinnedMeshComponent::execGetBoneName },
		{ "GetBoneTransform", &USkinnedMeshComponent::execGetBoneTransform },
		{ "GetCurrentSkinWeightProfileName", &USkinnedMeshComponent::execGetCurrentSkinWeightProfileName },
		{ "GetDeltaTransformFromRefPose", &USkinnedMeshComponent::execGetDeltaTransformFromRefPose },
		{ "GetForcedLOD", &USkinnedMeshComponent::execGetForcedLOD },
		{ "GetMeshDeformerInstance", &USkinnedMeshComponent::execGetMeshDeformerInstance },
		{ "GetNumBones", &USkinnedMeshComponent::execGetNumBones },
		{ "GetNumLODs", &USkinnedMeshComponent::execGetNumLODs },
		{ "GetParentBone", &USkinnedMeshComponent::execGetParentBone },
		{ "GetPredictedLODLevel", &USkinnedMeshComponent::execGetPredictedLODLevel },
		{ "GetRefPosePosition", &USkinnedMeshComponent::execGetRefPosePosition },
		{ "GetRefPoseTransform", &USkinnedMeshComponent::execGetRefPoseTransform },
		{ "GetSkeletalMesh_DEPRECATED", &USkinnedMeshComponent::execGetSkeletalMesh_DEPRECATED },
		{ "GetSkinnedAsset", &USkinnedMeshComponent::execGetSkinnedAsset },
		{ "GetSocketBoneName", &USkinnedMeshComponent::execGetSocketBoneName },
		{ "GetTwistAndSwingAngleOfDeltaRotationFromRefPose", &USkinnedMeshComponent::execGetTwistAndSwingAngleOfDeltaRotationFromRefPose },
		{ "GetVertexOffsetUsage", &USkinnedMeshComponent::execGetVertexOffsetUsage },
		{ "HideBoneByName", &USkinnedMeshComponent::execHideBoneByName },
		{ "IsBoneHiddenByName", &USkinnedMeshComponent::execIsBoneHiddenByName },
		{ "IsMaterialSectionShown", &USkinnedMeshComponent::execIsMaterialSectionShown },
		{ "IsUsingSkinWeightProfile", &USkinnedMeshComponent::execIsUsingSkinWeightProfile },
		{ "OverrideMinLOD", &USkinnedMeshComponent::execOverrideMinLOD },
		{ "SetCapsuleIndirectShadowMinVisibility", &USkinnedMeshComponent::execSetCapsuleIndirectShadowMinVisibility },
		{ "SetCastCapsuleDirectShadow", &USkinnedMeshComponent::execSetCastCapsuleDirectShadow },
		{ "SetCastCapsuleIndirectShadow", &USkinnedMeshComponent::execSetCastCapsuleIndirectShadow },
		{ "SetForcedLOD", &USkinnedMeshComponent::execSetForcedLOD },
		{ "SetLeaderPoseComponent", &USkinnedMeshComponent::execSetLeaderPoseComponent },
		{ "SetMeshDeformer", &USkinnedMeshComponent::execSetMeshDeformer },
		{ "SetMinLOD", &USkinnedMeshComponent::execSetMinLOD },
		{ "SetPhysicsAsset", &USkinnedMeshComponent::execSetPhysicsAsset },
		{ "SetPostSkinningOffsets", &USkinnedMeshComponent::execSetPostSkinningOffsets },
		{ "SetPreSkinningOffsets", &USkinnedMeshComponent::execSetPreSkinningOffsets },
		{ "SetRenderStatic", &USkinnedMeshComponent::execSetRenderStatic },
		{ "SetSkinnedAssetAndUpdate", &USkinnedMeshComponent::execSetSkinnedAssetAndUpdate },
		{ "SetSkinWeightOverride", &USkinnedMeshComponent::execSetSkinWeightOverride },
		{ "SetSkinWeightProfile", &USkinnedMeshComponent::execSetSkinWeightProfile },
		{ "SetVertexColorOverride_LinearColor", &USkinnedMeshComponent::execSetVertexColorOverride_LinearColor },
		{ "SetVertexOffsetUsage", &USkinnedMeshComponent::execSetVertexOffsetUsage },
		{ "ShowAllMaterialSections", &USkinnedMeshComponent::execShowAllMaterialSections },
		{ "ShowMaterialSection", &USkinnedMeshComponent::execShowMaterialSection },
		{ "TransformFromBoneSpace", &USkinnedMeshComponent::execTransformFromBoneSpace },
		{ "TransformToBoneSpace", &USkinnedMeshComponent::execTransformToBoneSpace },
		{ "UnHideBoneByName", &USkinnedMeshComponent::execUnHideBoneByName },
		{ "UnloadSkinWeightProfile", &USkinnedMeshComponent::execUnloadSkinWeightProfile },
		{ "UnsetMeshDeformer", &USkinnedMeshComponent::execUnsetMeshDeformer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinnedMeshComponent);
UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister()
{
	return USkinnedMeshComponent::StaticClass();
}
struct Z_Construct_UClass_USkinnedMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Skinned mesh component that supports bone skinned mesh rendering.\n * This class does not support animation.\n *\n * @see USkeletalMeshComponent\n*/" },
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "Components/SkinnedMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Skinned mesh component that supports bone skinned mesh rendering.\nThis class does not support animation.\n\n@see USkeletalMeshComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "BlueprintGetter", "GetSkeletalMesh_DEPRECATED" },
		{ "Category", "Mesh|SkeletalAsset" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use USkeletalMeshComponent::GetSkeletalMeshAsset() or GetSkinnedAsset() instead." },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedAsset_MetaData[] = {
		{ "BlueprintGetter", "GetSkinnedAsset" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderPoseComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 *\x09If set, this SkeletalMeshComponent will not use its SpaceBase for bone transform, but will\n\x09 *\x09use the component space transforms from the LeaderPoseComponent. This is used when constructing a character using multiple skeletal meshes sharing the same\n\x09 *\x09skeleton within the same Actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If set, this SkeletalMeshComponent will not use its SpaceBase for bone transform, but will\nuse the component space transforms from the LeaderPoseComponent. This is used when constructing a character using multiple skeletal meshes sharing the same\nskeleton within the same Actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinCacheUsage_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 * How this Component's LOD uses the skin cache feature. Auto will defer to the asset's (SkeletalMesh) option. If Ray Tracing is enabled, will imply Enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "How this Component's LOD uses the skin cache feature. Auto will defer to the asset's (SkeletalMesh) option. If Ray Tracing is enabled, will imply Enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetMeshDeformer_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** If true, MeshDeformer will be used. If false, use the default mesh deformer on the SkeletalMesh. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, MeshDeformer will be used. If false, use the default mesh deformer on the SkeletalMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformer_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** The mesh deformer to use. If no mesh deformer is set from here or the SkeletalMesh, then we fall back to the fixed function deformation. */" },
		{ "editcondition", "bSetMeshDeformer" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "The mesh deformer to use. If no mesh deformer is set from here or the SkeletalMesh, then we fall back to the fixed function deformation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerInstanceSettings_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Object containing instance settings for the bound MeshDeformer. */" },
		{ "DisplayName", "Deformer Settings" },
		{ "EditCondition", "MeshDeformerInstanceSettings!=nullptr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Object containing instance settings for the bound MeshDeformer." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerInstance_MetaData[] = {
		{ "BlueprintGetter", "GetMeshDeformerInstance" },
		{ "Category", "Deformer" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the GetMeshDeformerInstance function instead" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerInstances_MetaData[] = {
		{ "Comment", "/** Object containing state for the bound MeshDeformer. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Object containing state for the bound MeshDeformer." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Wireframe color\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Wireframe color" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09 *\x09PhysicsAsset is set in SkeletalMesh by default, but you can override with this value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "PhysicsAsset is set in SkeletalMesh by default, but you can override with this value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/**\n\x09 * This is the min LOD that this component will use.  (e.g. if set to 2 then only 2+ LOD Models will be used.) This is useful to set on\n\x09 * meshes which are known to be a certain distance away and still want to have better LODs when zoomed in on them.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "This is the min LOD that this component will use.  (e.g. if set to 2 then only 2+ LOD Models will be used.) This is useful to set on\nmeshes which are known to be a certain distance away and still want to have better LODs when zoomed in on them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n\x09 * 1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\n\x09 * A lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\n\x09 * Value can be < 0 (from legcay content, or code changes)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\nA lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\nValue can be < 0 (from legcay content, or code changes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[] = {
		{ "Comment", "/** LOD array info. Each index will correspond to the LOD index **/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "LOD array info. Each index will correspond to the LOD index *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityBasedAnimTickOption_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/*\n\x09 * This is tick animation frequency option based on this component rendered or not or using montage\n\x09 *  You can change this default value in the INI file \n\x09 * Mostly related with performance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "* This is tick animation frequency option based on this component rendered or not or using montage\n*  You can change this default value in the INI file\n* Mostly related with performance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinLod_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Whether we should use the min lod specified in MinLodModel for this component instead of the min lod in the mesh */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether we should use the min lod specified in MinLodModel for this component instead of the min lod in the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBoundsFromLeaderPoseComponent_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** \n\x09 * When true, we will just using the bounds from our LeaderPoseComponent.  This is useful for when we have a Mesh Parented\n\x09 * to the main SkelMesh (e.g. outline mesh or a full body overdraw effect that is toggled) that is always going to be the same\n\x09 * bounds as parent.  We want to do no calculations in that case.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "When true, we will just using the bounds from our LeaderPoseComponent.  This is useful for when we have a Mesh Parented\nto the main SkelMesh (e.g. outline mesh or a full body overdraw effect that is toggled) that is always going to be the same\nbounds as parent.  We want to do no calculations in that case." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceWireframe_MetaData[] = {
		{ "Comment", "/** Forces the mesh to draw in wireframe mode. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Forces the mesh to draw in wireframe mode." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayBones_MetaData[] = {
		{ "Comment", "/** Draw the skeleton hierarchy for this skel mesh. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Draw the skeleton hierarchy for this skel mesh." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMorphTarget_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Disable Morphtarget for this component. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Disable Morphtarget for this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideSkin_MetaData[] = {
		{ "Comment", "/** Don't bother rendering the skin. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Don't bother rendering the skin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerBoneMotionBlur_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09 *\x09If true, use per-bone motion blur on this skeletal mesh (requires additional rendering, can be disabled to save performance).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, use per-bone motion blur on this skeletal mesh (requires additional rendering, can be disabled to save performance)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComponentUseFixedSkelBounds_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** When true, skip using the physics asset etc. and always use the fixed bounds defined in the SkeletalMesh. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "When true, skip using the physics asset etc. and always use the fixed bounds defined in the SkeletalMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderAllBodiesForBounds_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** If true, when updating bounds from a PhysicsAsset, consider _all_ BodySetups, not just those flagged with bConsiderForBounds. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, when updating bounds from a PhysicsAsset, consider _all_ BodySetups, not just those flagged with bConsiderForBounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncAttachParentLOD_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component uses its parents LOD when attached if available\n\x09* ForcedLOD can override this change. By default, it will use parent LOD.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, this component uses its parents LOD when attached if available\nForcedLOD can override this change. By default, it will use parent LOD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanHighlightSelectedSections_MetaData[] = {
		{ "Comment", "/** Whether or not we can highlight selected sections - this should really only be done in the editor */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether or not we can highlight selected sections - this should really only be done in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecentlyRendered_MetaData[] = {
		{ "Comment", "/** true if mesh has been recently rendered, false otherwise */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "true if mesh has been recently rendered, false otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleDirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for direct shadowing from lights.\n\x09 * This type of shadowing is approximate but handles extremely wide area shadowing well.  The softness of the shadow depends on the light's LightSourceAngle / SourceRadius.\n\x09 * This flag will force bCastInsetShadow to be enabled.\n\x09 */" },
		{ "DisplayName", "Capsule Direct Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for direct shadowing from lights.\nThis type of shadowing is approximate but handles extremely wide area shadowing well.  The softness of the shadow depends on the light's LightSourceAngle / SourceRadius.\nThis flag will force bCastInsetShadow to be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleIndirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for shadowing indirect lighting (from lightmaps or skylight).\n\x09 */" },
		{ "DisplayName", "Capsule Indirect Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for shadowing indirect lighting (from lightmaps or skylight)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCPUSkinning_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** if TRUE, Owner will determine how often animation will be updated and evaluated. See AnimUpdateRateTick() \n\x09 * This allows to skip frames for performance. (For example based on visibility and size on screen). */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "if TRUE, Owner will determine how often animation will be updated and evaluated. See AnimUpdateRateTick()\nThis allows to skip frames for performance. (For example based on visibility and size on screen)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayDebugUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Enable on screen debugging of update rate optimization. \n\x09 * Red = Skipping 0 frames, Green = skipping 1 frame, Blue = skipping 2 frames, black = skipping more than 2 frames. \n\x09 * @todo: turn this into a console command. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Enable on screen debugging of update rate optimization.\nRed = Skipping 0 frames, Green = skipping 1 frame, Blue = skipping 2 frames, black = skipping more than 2 frames.\n@todo: turn this into a console command." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderStatic_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09 *\x09If true, render as static in reference pose.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, render as static in reference pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreLeaderPoseComponentLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Flag that when set will ensure UpdateLODStatus will not take the LeaderPoseComponent's current LOD in consideration when determining the correct LOD level (this requires LeaderPoseComponent's LOD to always be >= determined LOD otherwise bone transforms could be missing */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Flag that when set will ensure UpdateLODStatus will not take the LeaderPoseComponent's current LOD in consideration when determining the correct LOD level (this requires LeaderPoseComponent's LOD to always be >= determined LOD otherwise bone transforms could be missing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedLocalBoundsUpToDate_MetaData[] = {
		{ "Comment", "/** true when CachedLocalBounds is up to date. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "true when CachedLocalBounds is up to date." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedWorldSpaceBoundsUpToDate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceMeshObjectUpdate_MetaData[] = {
		{ "Comment", "/** If true, UpdateTransform will always result in a call to MeshObject->Update. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, UpdateTransform will always result in a call to MeshObject->Update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceUpdateDynamicDataImmediately_MetaData[] = {
		{ "Comment", "/**\n\x09   Whether to update dynamic bone & cloth sim data immediately, not to wait until GDME or defer update to RHIThread.\n\x09   When set to true, it is the equivalent of r.DeferSkeletalDynamicDataUpdateUntilGDME=0 and r.RHICmdDeferSkeletalLockAndFillToRHIThread=0.\n\x09   When set to false, r.DeferSkeletalDynamicDataUpdateUntilGDME and r.RHICmdDeferSkeletalLockAndFillToRHIThread values are respected.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to update dynamic bone & cloth sim data immediately, not to wait until GDME or defer update to RHIThread.\nWhen set to true, it is the equivalent of r.DeferSkeletalDynamicDataUpdateUntilGDME=0 and r.RHICmdDeferSkeletalLockAndFillToRHIThread=0.\nWhen set to false, r.DeferSkeletalDynamicDataUpdateUntilGDME and r.RHICmdDeferSkeletalLockAndFillToRHIThread values are respected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowerShouldTickPose_MetaData[] = {
		{ "Comment", "/** If false, Follower components ShouldTickPose function will return false (default) */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If false, Follower components ShouldTickPose function will return false (default)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleIndirectShadowMinVisibility_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Controls how dark the capsule indirect shadow can be.\n\x09 */" },
		{ "DisplayName", "Capsule Indirect Shadow Min Visibility" },
		{ "EditCondition", "bCastCapsuleIndirectShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Controls how dark the capsule indirect shadow can be." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWorldOrLocalSpaceBounds_MetaData[] = {
		{ "Comment", "/** Bounds cached, so they're computed just once, either in local or worldspace depending on cvar 'a.CacheLocalSpaceBounds'. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Bounds cached, so they're computed just once, either in local or worldspace depending on cvar 'a.CacheLocalSpaceBounds'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWorldToLocalTransform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedAsset;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LeaderPoseComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkinCacheUsage_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkinCacheUsage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinCacheUsage;
	static void NewProp_bSetMeshDeformer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetMeshDeformer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDeformer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDeformerInstanceSettings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDeformerInstance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshDeformerInstances;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAssetOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLodModel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisibilityBasedAnimTickOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibilityBasedAnimTickOption;
	static void NewProp_bOverrideMinLod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinLod;
	static void NewProp_bUseBoundsFromLeaderPoseComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBoundsFromLeaderPoseComponent;
	static void NewProp_bForceWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceWireframe;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDisplayBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayBones;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bDisableMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMorphTarget;
	static void NewProp_bHideSkin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideSkin;
	static void NewProp_bPerBoneMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerBoneMotionBlur;
	static void NewProp_bComponentUseFixedSkelBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComponentUseFixedSkelBounds;
	static void NewProp_bConsiderAllBodiesForBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderAllBodiesForBounds;
	static void NewProp_bSyncAttachParentLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncAttachParentLOD;
	static void NewProp_bCanHighlightSelectedSections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHighlightSelectedSections;
	static void NewProp_bRecentlyRendered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecentlyRendered;
	static void NewProp_bCastCapsuleDirectShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleDirectShadow;
	static void NewProp_bCastCapsuleIndirectShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleIndirectShadow;
	static void NewProp_bCPUSkinning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCPUSkinning;
	static void NewProp_bEnableUpdateRateOptimizations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUpdateRateOptimizations;
	static void NewProp_bDisplayDebugUpdateRateOptimizations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayDebugUpdateRateOptimizations;
	static void NewProp_bRenderStatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderStatic;
	static void NewProp_bIgnoreLeaderPoseComponentLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreLeaderPoseComponentLOD;
	static void NewProp_bCachedLocalBoundsUpToDate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedLocalBoundsUpToDate;
	static void NewProp_bCachedWorldSpaceBoundsUpToDate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedWorldSpaceBoundsUpToDate;
	static void NewProp_bForceMeshObjectUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMeshObjectUpdate;
	static void NewProp_bForceUpdateDynamicDataImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpdateDynamicDataImmediately;
	static void NewProp_bFollowerShouldTickPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowerShouldTickPose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleIndirectShadowMinVisibility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedWorldOrLocalSpaceBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedWorldToLocalTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf, "BoneIsChildOf" }, // 3580557033
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride, "ClearSkinWeightOverride" }, // 2927989410
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile, "ClearSkinWeightProfile" }, // 269574048
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride, "ClearVertexColorOverride" }, // 3897553675
		{ &Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2, "FindClosestBone_K2" }, // 798337716
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex, "GetBoneIndex" }, // 2738688248
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName, "GetBoneName" }, // 4177533505
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneTransform, "GetBoneTransform" }, // 440572340
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName, "GetCurrentSkinWeightProfileName" }, // 1567037033
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose, "GetDeltaTransformFromRefPose" }, // 949346441
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD, "GetForcedLOD" }, // 3199784139
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance, "GetMeshDeformerInstance" }, // 1958336182
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones, "GetNumBones" }, // 206691640
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs, "GetNumLODs" }, // 368967190
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone, "GetParentBone" }, // 1033964350
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel, "GetPredictedLODLevel" }, // 1701041769
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition, "GetRefPosePosition" }, // 3361037443
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform, "GetRefPoseTransform" }, // 1568002616
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED, "GetSkeletalMesh_DEPRECATED" }, // 1627531743
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset, "GetSkinnedAsset" }, // 3301681887
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName, "GetSocketBoneName" }, // 2173707758
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose, "GetTwistAndSwingAngleOfDeltaRotationFromRefPose" }, // 1254807136
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage, "GetVertexOffsetUsage" }, // 3979132362
		{ &Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName, "HideBoneByName" }, // 3857255232
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName, "IsBoneHiddenByName" }, // 1384822344
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown, "IsMaterialSectionShown" }, // 4131193421
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile, "IsUsingSkinWeightProfile" }, // 1233274105
		{ &Z_Construct_UFunction_USkinnedMeshComponent_OverrideMinLOD, "OverrideMinLOD" }, // 1944375346
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility, "SetCapsuleIndirectShadowMinVisibility" }, // 3268459520
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow, "SetCastCapsuleDirectShadow" }, // 2006489105
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow, "SetCastCapsuleIndirectShadow" }, // 4253260567
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD, "SetForcedLOD" }, // 3434594553
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent, "SetLeaderPoseComponent" }, // 2445610805
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer, "SetMeshDeformer" }, // 2079336166
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD, "SetMinLOD" }, // 2033795153
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset, "SetPhysicsAsset" }, // 3307891631
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets, "SetPostSkinningOffsets" }, // 100809283
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets, "SetPreSkinningOffsets" }, // 1853776746
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic, "SetRenderStatic" }, // 987307497
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate, "SetSkinnedAssetAndUpdate" }, // 448426729
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride, "SetSkinWeightOverride" }, // 1701699720
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile, "SetSkinWeightProfile" }, // 520993940
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor, "SetVertexColorOverride_LinearColor" }, // 1444255787
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage, "SetVertexOffsetUsage" }, // 2198780599
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections, "ShowAllMaterialSections" }, // 1684581434
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection, "ShowMaterialSection" }, // 1816261650
		{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace, "TransformFromBoneSpace" }, // 1914086417
		{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace, "TransformToBoneSpace" }, // 3225721513
		{ &Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName, "UnHideBoneByName" }, // 414893996
		{ &Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile, "UnloadSkinWeightProfile" }, // 4160332140
		{ &Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer, "UnsetMeshDeformer" }, // 4244960370
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinnedMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &USkinnedMeshComponent::SetSkeletalMesh_WrapperImpl, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinnedAsset = { "SkinnedAsset", nullptr, (EPropertyFlags)0x0144000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, SkinnedAsset), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedAsset_MetaData), NewProp_SkinnedAsset_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LeaderPoseComponent = { "LeaderPoseComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, LeaderPoseComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderPoseComponent_MetaData), NewProp_LeaderPoseComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner = { "SkinCacheUsage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ESkinCacheUsage, METADATA_PARAMS(0, nullptr) }; // 3678286733
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage = { "SkinCacheUsage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, SkinCacheUsage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinCacheUsage_MetaData), NewProp_SkinCacheUsage_MetaData) }; // 3678286733
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bSetMeshDeformer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer = { "bSetMeshDeformer", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetMeshDeformer_MetaData), NewProp_bSetMeshDeformer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformer = { "MeshDeformer", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, MeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDeformer_MetaData), NewProp_MeshDeformer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstanceSettings = { "MeshDeformerInstanceSettings", nullptr, (EPropertyFlags)0x01260800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, MeshDeformerInstanceSettings), Z_Construct_UClass_UMeshDeformerInstanceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDeformerInstanceSettings_MetaData), NewProp_MeshDeformerInstanceSettings_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstance = { "MeshDeformerInstance", nullptr, (EPropertyFlags)0x0124080820002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, MeshDeformerInstance_DEPRECATED), Z_Construct_UClass_UMeshDeformerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDeformerInstance_MetaData), NewProp_MeshDeformerInstance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstances = { "MeshDeformerInstances", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, MeshDeformerInstances), Z_Construct_UScriptStruct_FMeshDeformerInstanceSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDeformerInstances_MetaData), NewProp_MeshDeformerInstances_MetaData) }; // 960096483
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, WireframeColor_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeColor_MetaData), NewProp_WireframeColor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride = { "PhysicsAssetOverride", nullptr, (EPropertyFlags)0x0114040000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, PhysicsAssetOverride), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAssetOverride_MetaData), NewProp_PhysicsAssetOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel = { "ForcedLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, ForcedLodModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedLodModel_MetaData), NewProp_ForcedLodModel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel = { "MinLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, MinLodModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLodModel_MetaData), NewProp_MinLodModel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, StreamingDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData), NewProp_StreamingDistanceMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_Inner = { "LODInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, METADATA_PARAMS(0, nullptr) }; // 1188215855
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, LODInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODInfo_MetaData), NewProp_LODInfo_MetaData) }; // 1188215855
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption = { "VisibilityBasedAnimTickOption", nullptr, (EPropertyFlags)0x0010040200004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, VisibilityBasedAnimTickOption), Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityBasedAnimTickOption_MetaData), NewProp_VisibilityBasedAnimTickOption_MetaData) }; // 4257997877
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bOverrideMinLod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod = { "bOverrideMinLod", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMinLod_MetaData), NewProp_bOverrideMinLod_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bUseBoundsFromLeaderPoseComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent = { "bUseBoundsFromLeaderPoseComponent", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBoundsFromLeaderPoseComponent_MetaData), NewProp_bUseBoundsFromLeaderPoseComponent_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bForceWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe = { "bForceWireframe", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceWireframe_MetaData), NewProp_bForceWireframe_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bDisplayBones_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones = { "bDisplayBones", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayBones_MetaData), NewProp_bDisplayBones_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bDisableMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget = { "bDisableMorphTarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableMorphTarget_MetaData), NewProp_bDisableMorphTarget_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bHideSkin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin = { "bHideSkin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideSkin_MetaData), NewProp_bHideSkin_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bPerBoneMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur = { "bPerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerBoneMotionBlur_MetaData), NewProp_bPerBoneMotionBlur_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bComponentUseFixedSkelBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds = { "bComponentUseFixedSkelBounds", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComponentUseFixedSkelBounds_MetaData), NewProp_bComponentUseFixedSkelBounds_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bConsiderAllBodiesForBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds = { "bConsiderAllBodiesForBounds", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsiderAllBodiesForBounds_MetaData), NewProp_bConsiderAllBodiesForBounds_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bSyncAttachParentLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD = { "bSyncAttachParentLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncAttachParentLOD_MetaData), NewProp_bSyncAttachParentLOD_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bCanHighlightSelectedSections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections = { "bCanHighlightSelectedSections", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanHighlightSelectedSections_MetaData), NewProp_bCanHighlightSelectedSections_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bRecentlyRendered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered = { "bRecentlyRendered", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecentlyRendered_MetaData), NewProp_bRecentlyRendered_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bCastCapsuleDirectShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow = { "bCastCapsuleDirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastCapsuleDirectShadow_MetaData), NewProp_bCastCapsuleDirectShadow_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bCastCapsuleIndirectShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow = { "bCastCapsuleIndirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastCapsuleIndirectShadow_MetaData), NewProp_bCastCapsuleIndirectShadow_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bCPUSkinning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning = { "bCPUSkinning", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCPUSkinning_MetaData), NewProp_bCPUSkinning_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bEnableUpdateRateOptimizations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations = { "bEnableUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUpdateRateOptimizations_MetaData), NewProp_bEnableUpdateRateOptimizations_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bDisplayDebugUpdateRateOptimizations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations = { "bDisplayDebugUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayDebugUpdateRateOptimizations_MetaData), NewProp_bDisplayDebugUpdateRateOptimizations_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bRenderStatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic = { "bRenderStatic", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderStatic_MetaData), NewProp_bRenderStatic_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bIgnoreLeaderPoseComponentLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD = { "bIgnoreLeaderPoseComponentLOD", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreLeaderPoseComponentLOD_MetaData), NewProp_bIgnoreLeaderPoseComponentLOD_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bCachedLocalBoundsUpToDate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate = { "bCachedLocalBoundsUpToDate", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedLocalBoundsUpToDate_MetaData), NewProp_bCachedLocalBoundsUpToDate_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bCachedWorldSpaceBoundsUpToDate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate = { "bCachedWorldSpaceBoundsUpToDate", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedWorldSpaceBoundsUpToDate_MetaData), NewProp_bCachedWorldSpaceBoundsUpToDate_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bForceMeshObjectUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate = { "bForceMeshObjectUpdate", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceMeshObjectUpdate_MetaData), NewProp_bForceMeshObjectUpdate_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bForceUpdateDynamicDataImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately = { "bForceUpdateDynamicDataImmediately", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceUpdateDynamicDataImmediately_MetaData), NewProp_bForceUpdateDynamicDataImmediately_MetaData) };
void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose_SetBit(void* Obj)
{
	((USkinnedMeshComponent*)Obj)->bFollowerShouldTickPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose = { "bFollowerShouldTickPose", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowerShouldTickPose_MetaData), NewProp_bFollowerShouldTickPose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility = { "CapsuleIndirectShadowMinVisibility", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, CapsuleIndirectShadowMinVisibility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleIndirectShadowMinVisibility_MetaData), NewProp_CapsuleIndirectShadowMinVisibility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldOrLocalSpaceBounds = { "CachedWorldOrLocalSpaceBounds", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, CachedWorldOrLocalSpaceBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWorldOrLocalSpaceBounds_MetaData), NewProp_CachedWorldOrLocalSpaceBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform = { "CachedWorldToLocalTransform", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshComponent, CachedWorldToLocalTransform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWorldToLocalTransform_MetaData), NewProp_CachedWorldToLocalTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinnedAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LeaderPoseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstanceSettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstance,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstances,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldOrLocalSpaceBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkinnedMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkinnedMeshComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULODSyncInterface_NoRegister, (int32)VTABLE_OFFSET(USkinnedMeshComponent, ILODSyncInterface), false },  // 3498189645
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinnedMeshComponent_Statics::ClassParams = {
	&USkinnedMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A810A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkinnedMeshComponent()
{
	if (!Z_Registration_Info_UClass_USkinnedMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinnedMeshComponent.OuterSingleton, Z_Construct_UClass_USkinnedMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkinnedMeshComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkinnedMeshComponent>()
{
	return USkinnedMeshComponent::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkinnedMeshComponent)
// End Class USkinnedMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBoneVisibilityStatus_StaticEnum, TEXT("EBoneVisibilityStatus"), &Z_Registration_Info_UEnum_EBoneVisibilityStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4260074105U) },
		{ EPhysBodyOp_StaticEnum, TEXT("EPhysBodyOp"), &Z_Registration_Info_UEnum_EPhysBodyOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 269779865U) },
		{ EVisibilityBasedAnimTickOption_StaticEnum, TEXT("EVisibilityBasedAnimTickOption"), &Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4257997877U) },
		{ EBoneSpaces_StaticEnum, TEXT("EBoneSpaces"), &Z_Registration_Info_UEnum_EBoneSpaces, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3917135836U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkelMeshSkinWeightInfo::StaticStruct, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewStructOps, TEXT("SkelMeshSkinWeightInfo"), &Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkelMeshSkinWeightInfo), 3914821906U) },
		{ FSkelMeshComponentLODInfo::StaticStruct, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewStructOps, TEXT("SkelMeshComponentLODInfo"), &Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkelMeshComponentLODInfo), 1188215855U) },
		{ FVertexOffsetUsage::StaticStruct, Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewStructOps, TEXT("VertexOffsetUsage"), &Z_Registration_Info_UScriptStruct_VertexOffsetUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexOffsetUsage), 841440818U) },
		{ FMeshDeformerInstanceSet::StaticStruct, Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics::NewStructOps, TEXT("MeshDeformerInstanceSet"), &Z_Registration_Info_UScriptStruct_MeshDeformerInstanceSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshDeformerInstanceSet), 960096483U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkinnedMeshComponent, USkinnedMeshComponent::StaticClass, TEXT("USkinnedMeshComponent"), &Z_Registration_Info_UClass_USkinnedMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinnedMeshComponent), 3500222751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_1347792059(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
