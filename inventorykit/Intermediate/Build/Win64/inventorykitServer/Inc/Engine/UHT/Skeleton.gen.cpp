// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeleton() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSlotGroup();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneNode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReductionSetting();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReferencePose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonToMeshLinkup();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualBone();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSkeletonToMeshLinkup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletonToMeshLinkup;
class UScriptStruct* FSkeletonToMeshLinkup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletonToMeshLinkup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletonToMeshLinkup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletonToMeshLinkup"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletonToMeshLinkup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletonToMeshLinkup>()
{
	return FSkeletonToMeshLinkup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set. */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonToMeshTable_MetaData[] = {
		{ "Comment", "/** \n\x09 * Mapping table. Size must be same as size of bone tree (not Mesh Ref Pose). \n\x09 * No index should be more than the number of bones in this skeleton\n\x09 * -1 indicates no match for this bone - will be ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Mapping table. Size must be same as size of bone tree (not Mesh Ref Pose).\nNo index should be more than the number of bones in this skeleton\n-1 indicates no match for this bone - will be ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshToSkeletonTable_MetaData[] = {
		{ "Comment", "/** \n\x09 * Mapping table. Size must be same as size of ref pose (not bone tree). \n\x09 * No index should be more than the number of bones in this skeletalmesh\n\x09 * -1 indicates no match for this bone - will be ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Mapping table. Size must be same as size of ref pose (not bone tree).\nNo index should be more than the number of bones in this skeletalmesh\n-1 indicates no match for this bone - will be ignored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletonToMeshTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletonToMeshTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshToSkeletonTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshToSkeletonTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletonToMeshLinkup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable_Inner = { "SkeletonToMeshTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable = { "SkeletonToMeshTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletonToMeshLinkup, SkeletonToMeshTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonToMeshTable_MetaData), NewProp_SkeletonToMeshTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable_Inner = { "MeshToSkeletonTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable = { "MeshToSkeletonTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletonToMeshLinkup, MeshToSkeletonTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshToSkeletonTable_MetaData), NewProp_MeshToSkeletonTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_SkeletonToMeshTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewProp_MeshToSkeletonTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkeletonToMeshLinkup",
	Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::PropPointers),
	sizeof(FSkeletonToMeshLinkup),
	alignof(FSkeletonToMeshLinkup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletonToMeshLinkup()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletonToMeshLinkup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletonToMeshLinkup.InnerSingleton, Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletonToMeshLinkup.InnerSingleton;
}
// End ScriptStruct FSkeletonToMeshLinkup

// Begin Enum EBoneTranslationRetargetingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode;
static UEnum* EBoneTranslationRetargetingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneTranslationRetargetingMode"));
	}
	return Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBoneTranslationRetargetingMode::Type>()
{
	return EBoneTranslationRetargetingMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Animation.Comment", "/** Use translation from animation data. */" },
		{ "Animation.Name", "EBoneTranslationRetargetingMode::Animation" },
		{ "Animation.ToolTip", "Use translation from animation data." },
		{ "AnimationRelative.Comment", "/** Use Translation from animation, but also play the difference from retargeting pose as an additive. */" },
		{ "AnimationRelative.Name", "EBoneTranslationRetargetingMode::AnimationRelative" },
		{ "AnimationRelative.ToolTip", "Use Translation from animation, but also play the difference from retargeting pose as an additive." },
		{ "AnimationScaled.Comment", "/** Use Translation from animation, but scale length by Skeleton's proportions. */" },
		{ "AnimationScaled.Name", "EBoneTranslationRetargetingMode::AnimationScaled" },
		{ "AnimationScaled.ToolTip", "Use Translation from animation, but scale length by Skeleton's proportions." },
		{ "Comment", "/** Bone translation retargeting mode. */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "OrientAndScale.Comment", "/** Apply delta orientation and scale from ref pose */" },
		{ "OrientAndScale.Name", "EBoneTranslationRetargetingMode::OrientAndScale" },
		{ "OrientAndScale.ToolTip", "Apply delta orientation and scale from ref pose" },
		{ "Skeleton.Comment", "/** Use fixed translation from Skeleton. */" },
		{ "Skeleton.Name", "EBoneTranslationRetargetingMode::Skeleton" },
		{ "Skeleton.ToolTip", "Use fixed translation from Skeleton." },
		{ "ToolTip", "Bone translation retargeting mode." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBoneTranslationRetargetingMode::Animation", (int64)EBoneTranslationRetargetingMode::Animation },
		{ "EBoneTranslationRetargetingMode::Skeleton", (int64)EBoneTranslationRetargetingMode::Skeleton },
		{ "EBoneTranslationRetargetingMode::AnimationScaled", (int64)EBoneTranslationRetargetingMode::AnimationScaled },
		{ "EBoneTranslationRetargetingMode::AnimationRelative", (int64)EBoneTranslationRetargetingMode::AnimationRelative },
		{ "EBoneTranslationRetargetingMode::OrientAndScale", (int64)EBoneTranslationRetargetingMode::OrientAndScale },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBoneTranslationRetargetingMode",
	"EBoneTranslationRetargetingMode::Type",
	Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode()
{
	if (!Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.InnerSingleton, Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.InnerSingleton;
}
// End Enum EBoneTranslationRetargetingMode

// Begin ScriptStruct FBoneNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneNode;
class UScriptStruct* FBoneNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneNode"));
	}
	return Z_Registration_Info_UScriptStruct_BoneNode.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneNode>()
{
	return FBoneNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Each Bone node in BoneTree */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Each Bone node in BoneTree" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of bone, this is the search criteria to match with mesh bone. This will be NAME_None if deleted. */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Name of bone, this is the search criteria to match with mesh bone. This will be NAME_None if deleted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[] = {
		{ "Comment", "/** Parent Index. -1 if not used. The root has 0 as its parent. Do not delete the element but set this to -1. If it is revived by other reason, fix up this link. */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Parent Index. -1 if not used. The root has 0 as its parent. Do not delete the element but set this to -1. If it is revived by other reason, fix up this link." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationRetargetingMode_MetaData[] = {
		{ "Category", "BoneNode" },
		{ "Comment", "/** Retargeting Mode for Translation Component. */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Retargeting Mode for Translation Component." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationRetargetingMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneNode, Name_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneNode, ParentIndex_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndex_MetaData), NewProp_ParentIndex_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_TranslationRetargetingMode = { "TranslationRetargetingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneNode, TranslationRetargetingMode), Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationRetargetingMode_MetaData), NewProp_TranslationRetargetingMode_MetaData) }; // 3360584387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneNode_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_ParentIndex,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneNode_Statics::NewProp_TranslationRetargetingMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BoneNode",
	Z_Construct_UScriptStruct_FBoneNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneNode_Statics::PropPointers),
	sizeof(FBoneNode),
	alignof(FBoneNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneNode()
{
	if (!Z_Registration_Info_UScriptStruct_BoneNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneNode.InnerSingleton, Z_Construct_UScriptStruct_FBoneNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneNode.InnerSingleton;
}
// End ScriptStruct FBoneNode

// Begin ScriptStruct FReferencePose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReferencePose;
class UScriptStruct* FReferencePose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReferencePose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReferencePose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferencePose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ReferencePose"));
	}
	return Z_Registration_Info_UScriptStruct_ReferencePose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FReferencePose>()
{
	return FReferencePose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FReferencePose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set. */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceReferenceMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PoseName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePose_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencePose;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceReferenceMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferencePose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencePose, PoseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseName_MetaData), NewProp_PoseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose_Inner = { "ReferencePose", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose = { "ReferencePose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencePose, ReferencePose), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePose_MetaData), NewProp_ReferencePose_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_SourceReferenceMesh = { "SourceReferenceMesh", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencePose, SourceReferenceMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceReferenceMesh_MetaData), NewProp_SourceReferenceMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReferencePose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_PoseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_ReferencePose,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePose_Statics::NewProp_SourceReferenceMesh,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReferencePose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ReferencePose",
	Z_Construct_UScriptStruct_FReferencePose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePose_Statics::PropPointers),
	sizeof(FReferencePose),
	alignof(FReferencePose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReferencePose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReferencePose()
{
	if (!Z_Registration_Info_UScriptStruct_ReferencePose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReferencePose.InnerSingleton, Z_Construct_UScriptStruct_FReferencePose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ReferencePose.InnerSingleton;
}
// End ScriptStruct FReferencePose

// Begin ScriptStruct FBoneReductionSetting
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneReductionSetting;
class UScriptStruct* FBoneReductionSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneReductionSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneReductionSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneReductionSetting, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneReductionSetting"));
	}
	return Z_Registration_Info_UScriptStruct_BoneReductionSetting.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneReductionSetting>()
{
	return FBoneReductionSetting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneReductionSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BonesToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneReductionSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove_Inner = { "BonesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove = { "BonesToRemove", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneReductionSetting, BonesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesToRemove_MetaData), NewProp_BonesToRemove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewProp_BonesToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BoneReductionSetting",
	Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::PropPointers),
	sizeof(FBoneReductionSetting),
	alignof(FBoneReductionSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneReductionSetting()
{
	if (!Z_Registration_Info_UScriptStruct_BoneReductionSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneReductionSetting.InnerSingleton, Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneReductionSetting.InnerSingleton;
}
// End ScriptStruct FBoneReductionSetting

// Begin ScriptStruct FNameMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameMapping;
class UScriptStruct* FNameMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NameMapping"));
	}
	return Z_Registration_Info_UScriptStruct_NameMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNameMapping>()
{
	return FNameMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNameMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameMapping, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameMapping, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameMapping_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NameMapping",
	Z_Construct_UScriptStruct_FNameMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameMapping_Statics::PropPointers),
	sizeof(FNameMapping),
	alignof(FNameMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNameMapping()
{
	if (!Z_Registration_Info_UScriptStruct_NameMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameMapping.InnerSingleton, Z_Construct_UScriptStruct_FNameMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NameMapping.InnerSingleton;
}
// End ScriptStruct FNameMapping

// Begin ScriptStruct FAnimSlotGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSlotGroup;
class UScriptStruct* FAnimSlotGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSlotGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSlotGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSlotGroup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSlotGroup"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSlotGroup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSlotGroup>()
{
	return FAnimSlotGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSlotGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSlotGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSlotGroup, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames_Inner = { "SlotNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames = { "SlotNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSlotGroup, SlotNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotNames_MetaData), NewProp_SlotNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewProp_SlotNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimSlotGroup",
	Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::PropPointers),
	sizeof(FAnimSlotGroup),
	alignof(FAnimSlotGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSlotGroup()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSlotGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSlotGroup.InnerSingleton, Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSlotGroup.InnerSingleton;
}
// End ScriptStruct FAnimSlotGroup

// Begin ScriptStruct FVirtualBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualBone;
class UScriptStruct* FVirtualBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualBone, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VirtualBone"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualBone.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVirtualBone>()
{
	return FVirtualBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVirtualBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_SourceBoneName = { "SourceBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualBone, SourceBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBoneName_MetaData), NewProp_SourceBoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_TargetBoneName = { "TargetBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualBone, TargetBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBoneName_MetaData), NewProp_TargetBoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_VirtualBoneName = { "VirtualBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualBone, VirtualBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualBoneName_MetaData), NewProp_VirtualBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_SourceBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_TargetBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualBone_Statics::NewProp_VirtualBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"VirtualBone",
	Z_Construct_UScriptStruct_FVirtualBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualBone_Statics::PropPointers),
	sizeof(FVirtualBone),
	alignof(FVirtualBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVirtualBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVirtualBone()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualBone.InnerSingleton, Z_Construct_UScriptStruct_FVirtualBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VirtualBone.InnerSingleton;
}
// End ScriptStruct FVirtualBone

// Begin Class USkeleton Function AddCompatibleSkeleton
struct Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics
{
	struct Skeleton_eventAddCompatibleSkeleton_Parms
	{
		const USkeleton* SourceSkeleton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::NewProp_SourceSkeleton = { "SourceSkeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skeleton_eventAddCompatibleSkeleton_Parms, SourceSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSkeleton_MetaData), NewProp_SourceSkeleton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::NewProp_SourceSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeleton, nullptr, "AddCompatibleSkeleton", nullptr, nullptr, Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::Skeleton_eventAddCompatibleSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::Skeleton_eventAddCompatibleSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeleton::execAddCompatibleSkeleton)
{
	P_GET_OBJECT(USkeleton,Z_Param_SourceSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCompatibleSkeleton(Z_Param_SourceSkeleton);
	P_NATIVE_END;
}
// End Class USkeleton Function AddCompatibleSkeleton

// Begin Class USkeleton Function AddCompatibleSkeletonSoft
struct Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics
{
	struct Skeleton_eventAddCompatibleSkeletonSoft_Parms
	{
		TSoftObjectPtr<USkeleton> SourceSkeleton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skeleton" },
		{ "DisplayName", "AddCompatibleSkeleton" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::NewProp_SourceSkeleton = { "SourceSkeleton", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skeleton_eventAddCompatibleSkeletonSoft_Parms, SourceSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSkeleton_MetaData), NewProp_SourceSkeleton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::NewProp_SourceSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeleton, nullptr, "AddCompatibleSkeletonSoft", nullptr, nullptr, Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::Skeleton_eventAddCompatibleSkeletonSoft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::Skeleton_eventAddCompatibleSkeletonSoft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeleton::execAddCompatibleSkeletonSoft)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<USkeleton>,Z_Param_Out_SourceSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCompatibleSkeletonSoft(Z_Param_Out_SourceSkeleton);
	P_NATIVE_END;
}
// End Class USkeleton Function AddCompatibleSkeletonSoft

// Begin Class USkeleton Function GetBlendProfile
struct Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics
{
	struct Skeleton_eventGetBlendProfile_Parms
	{
		FName InProfileName;
		UBlendProfile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Get the specified blend profile by name */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Get the specified blend profile by name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InProfileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::NewProp_InProfileName = { "InProfileName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skeleton_eventGetBlendProfile_Parms, InProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InProfileName_MetaData), NewProp_InProfileName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skeleton_eventGetBlendProfile_Parms, ReturnValue), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::NewProp_InProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeleton, nullptr, "GetBlendProfile", nullptr, nullptr, Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::Skeleton_eventGetBlendProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::Skeleton_eventGetBlendProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkeleton_GetBlendProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkeleton::execGetBlendProfile)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InProfileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBlendProfile**)Z_Param__Result=P_THIS->GetBlendProfile(Z_Param_Out_InProfileName);
	P_NATIVE_END;
}
// End Class USkeleton Function GetBlendProfile

// Begin Class USkeleton
void USkeleton::StaticRegisterNativesUSkeleton()
{
	UClass* Class = USkeleton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCompatibleSkeleton", &USkeleton::execAddCompatibleSkeleton },
		{ "AddCompatibleSkeletonSoft", &USkeleton::execAddCompatibleSkeletonSoft },
		{ "GetBlendProfile", &USkeleton::execGetBlendProfile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeleton);
UClass* Z_Construct_UClass_USkeleton_NoRegister()
{
	return USkeleton::StaticClass();
}
struct Z_Construct_UClass_USkeleton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09USkeleton : that links between mesh and animation\n *\x09\x09- Bone hierarchy for animations\n *\x09\x09- Bone/track linkup between mesh and animation\n *\x09\x09- Retargetting related\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/Skeleton.h" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "USkeleton : that links between mesh and animation\n        - Bone hierarchy for animations\n        - Bone/track linkup between mesh and animation\n        - Retargetting related" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneTree_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Skeleton bone tree - each contains name and parent index**/" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Skeleton bone tree - each contains name and parent index*" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefLocalPoses_MetaData[] = {
		{ "Comment", "/** Reference skeleton poses in local space */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Reference skeleton poses in local space" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[] = {
		{ "Comment", "/** Guid for virtual bones.\n\x09 *  Separate so that we don't have to dirty the original guid when only changing virtual bones */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Guid for virtual bones.\nSeparate so that we don't have to dirty the original guid when only changing virtual bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBones_MetaData[] = {
		{ "Comment", "/**\n\x09*  Array of this skeletons virtual bones. These are new bones are links between two existing bones\n\x09*  and are baked into all the skeletons animations\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of this skeletons virtual bones. These are new bones are links between two existing bones\nand are baked into all the skeletons animations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleSkeletons_MetaData[] = {
		{ "Category", "CompatibleSkeletons" },
		{ "Comment", "/**\n\x09 * The list of compatible skeletons. This skeleton will be able to use animation data originating from skeletons within this array, such as animation sequences.\n\x09 * This property is not bi-directional.\n\x09 * \n\x09 * This is an array of TSoftObjectPtr in order to prevent all skeletons to be loaded, as we only want to load things on demand.\n\x09 * As this is EditAnywhere and an array of TSoftObjectPtr, checking validity of pointers is needed.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "The list of compatible skeletons. This skeleton will be able to use animation data originating from skeletons within this array, such as animation sequences.\nThis property is not bi-directional.\n\nThis is an array of TSoftObjectPtr in order to prevent all skeletons to be loaded, as we only want to load things on demand.\nAs this is EditAnywhere and an array of TSoftObjectPtr, checking validity of pointers is needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of named socket locations, set up in editor and used as a shortcut instead of specifying \n\x09 *\x09""everything explicitly to AttachComponent in the SkeletalMeshComponent.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmartNames_MetaData[] = {
		{ "Comment", "// DEPRECATED - moved to CurveMetaData\n" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "DEPRECATED - moved to CurveMetaData" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfiles_Inner_MetaData[] = {
		{ "Comment", "/** List of blend profiles available in this skeleton */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "List of blend profiles available in this skeleton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfiles_MetaData[] = {
		{ "Comment", "/** List of blend profiles available in this skeleton */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "List of blend profiles available in this skeleton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotGroups_MetaData[] = {
		{ "Comment", "// serialized slot groups and slot names.\n" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "serialized slot groups and slot names." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Comment", "/** The default skeletal mesh to use when previewing this skeleton */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this skeleton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPreviewSkeletalMeshes_MetaData[] = {
		{ "Comment", "/** The additional skeletal meshes to use when previewing this skeleton */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "The additional skeletal meshes to use when previewing this skeleton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationNotifies_MetaData[] = {
		{ "Comment", "/** AnimNotifiers that has been created. Right now there is no delete step for this, but in the future we'll supply delete**/" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "AnimNotifiers that has been created. Right now there is no delete step for this, but in the future we'll supply delete*" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAttachedAssetContainer_MetaData[] = {
		{ "Comment", "/* Attached assets component for this skeleton */" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Attached assets component for this skeleton" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserDataEditorOnly_Inner_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserDataEditorOnly_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/Skeleton.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTree_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneTree;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefLocalPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RefLocalPoses;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VirtualBones;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CompatibleSkeletons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleSkeletons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sockets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmartNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendProfiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotGroups;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AdditionalPreviewSkeletalMeshes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationNotifies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationNotifies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewAttachedAssetContainer;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserDataEditorOnly_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserDataEditorOnly;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton, "AddCompatibleSkeleton" }, // 3870430820
		{ &Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft, "AddCompatibleSkeletonSoft" }, // 3207277274
		{ &Z_Construct_UFunction_USkeleton_GetBlendProfile, "GetBlendProfile" }, // 3407477072
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeleton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree_Inner = { "BoneTree", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneNode, METADATA_PARAMS(0, nullptr) }; // 252113900
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree = { "BoneTree", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, BoneTree), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneTree_MetaData), NewProp_BoneTree_MetaData) }; // 252113900
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses_Inner = { "RefLocalPoses", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses = { "RefLocalPoses", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, RefLocalPoses_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefLocalPoses_MetaData), NewProp_RefLocalPoses_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBoneGuid = { "VirtualBoneGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualBoneGuid_MetaData), NewProp_VirtualBoneGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones_Inner = { "VirtualBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVirtualBone, METADATA_PARAMS(0, nullptr) }; // 1549598084
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones = { "VirtualBones", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, VirtualBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualBones_MetaData), NewProp_VirtualBones_MetaData) }; // 1549598084
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_CompatibleSkeletons_Inner = { "CompatibleSkeletons", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_CompatibleSkeletons = { "CompatibleSkeletons", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, CompatibleSkeletons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleSkeletons_MetaData), NewProp_CompatibleSkeletons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sockets_MetaData), NewProp_Sockets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_SmartNames = { "SmartNames", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, SmartNames_DEPRECATED), Z_Construct_UScriptStruct_FSmartNameContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmartNames_MetaData), NewProp_SmartNames_MetaData) }; // 666233554
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_Inner = { "BlendProfiles", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfiles_Inner_MetaData), NewProp_BlendProfiles_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles = { "BlendProfiles", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, BlendProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfiles_MetaData), NewProp_BlendProfiles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups_Inner = { "SlotGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimSlotGroup, METADATA_PARAMS(0, nullptr) }; // 4228411638
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups = { "SlotGroups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, SlotGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotGroups_MetaData), NewProp_SlotGroups_MetaData) }; // 4228411638
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSkeletalMesh_MetaData), NewProp_PreviewSkeletalMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AdditionalPreviewSkeletalMeshes = { "AdditionalPreviewSkeletalMeshes", nullptr, (EPropertyFlags)0x0044010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, AdditionalPreviewSkeletalMeshes), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPreviewSkeletalMeshes_MetaData), NewProp_AdditionalPreviewSkeletalMeshes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies_Inner = { "AnimationNotifies", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies = { "AnimationNotifies", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, AnimationNotifies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationNotifies_MetaData), NewProp_AnimationNotifies_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewAttachedAssetContainer = { "PreviewAttachedAssetContainer", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, PreviewAttachedAssetContainer), Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAttachedAssetContainer_MetaData), NewProp_PreviewAttachedAssetContainer_MetaData) }; // 2102213487
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x01240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserDataEditorOnly_Inner = { "AssetUserDataEditorOnly", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserDataEditorOnly_Inner_MetaData), NewProp_AssetUserDataEditorOnly_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserDataEditorOnly = { "AssetUserDataEditorOnly", nullptr, (EPropertyFlags)0x01240c8800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeleton, AssetUserDataEditorOnly), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserDataEditorOnly_MetaData), NewProp_AssetUserDataEditorOnly_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_BoneTree,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_RefLocalPoses,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBoneGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_VirtualBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_CompatibleSkeletons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_CompatibleSkeletons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_Sockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_SmartNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_BlendProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_SlotGroups,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AdditionalPreviewSkeletalMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AnimationNotifies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_PreviewAttachedAssetContainer,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserDataEditorOnly_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeleton_Statics::NewProp_AssetUserDataEditorOnly,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkeleton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkeleton_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(USkeleton, IInterface_AssetUserData), false },  // 505316468
	{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(USkeleton, IInterface_PreviewMeshProvider), false },  // 1431543565
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeleton_Statics::ClassParams = {
	&USkeleton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkeleton_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeleton_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeleton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeleton()
{
	if (!Z_Registration_Info_UClass_USkeleton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeleton.OuterSingleton, Z_Construct_UClass_USkeleton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeleton.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkeleton>()
{
	return USkeleton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeleton);
USkeleton::~USkeleton() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeleton)
// End Class USkeleton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBoneTranslationRetargetingMode_StaticEnum, TEXT("EBoneTranslationRetargetingMode"), &Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3360584387U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkeletonToMeshLinkup::StaticStruct, Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewStructOps, TEXT("SkeletonToMeshLinkup"), &Z_Registration_Info_UScriptStruct_SkeletonToMeshLinkup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletonToMeshLinkup), 2050666403U) },
		{ FBoneNode::StaticStruct, Z_Construct_UScriptStruct_FBoneNode_Statics::NewStructOps, TEXT("BoneNode"), &Z_Registration_Info_UScriptStruct_BoneNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneNode), 252113900U) },
		{ FReferencePose::StaticStruct, Z_Construct_UScriptStruct_FReferencePose_Statics::NewStructOps, TEXT("ReferencePose"), &Z_Registration_Info_UScriptStruct_ReferencePose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReferencePose), 1112732911U) },
		{ FBoneReductionSetting::StaticStruct, Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewStructOps, TEXT("BoneReductionSetting"), &Z_Registration_Info_UScriptStruct_BoneReductionSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneReductionSetting), 589059860U) },
		{ FNameMapping::StaticStruct, Z_Construct_UScriptStruct_FNameMapping_Statics::NewStructOps, TEXT("NameMapping"), &Z_Registration_Info_UScriptStruct_NameMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameMapping), 1174403948U) },
		{ FAnimSlotGroup::StaticStruct, Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewStructOps, TEXT("AnimSlotGroup"), &Z_Registration_Info_UScriptStruct_AnimSlotGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSlotGroup), 4228411638U) },
		{ FVirtualBone::StaticStruct, Z_Construct_UScriptStruct_FVirtualBone_Statics::NewStructOps, TEXT("VirtualBone"), &Z_Registration_Info_UScriptStruct_VirtualBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualBone), 1549598084U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeleton, USkeleton::StaticClass, TEXT("USkeleton"), &Z_Registration_Info_UClass_USkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeleton), 1610544911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_1786056465(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
