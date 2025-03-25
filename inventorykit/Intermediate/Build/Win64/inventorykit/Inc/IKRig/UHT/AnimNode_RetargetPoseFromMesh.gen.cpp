// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h"
#include "IKRig/Public/Retargeter/IKRetargetProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RetargetPoseFromMesh() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetProcessor_NoRegister();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetProfile();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin ScriptStruct FAnimNode_RetargetPoseFromMesh
static_assert(std::is_polymorphic<FAnimNode_RetargetPoseFromMesh>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RetargetPoseFromMesh cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh;
class UScriptStruct* FAnimNode_RetargetPoseFromMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("AnimNode_RetargetPoseFromMesh"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FAnimNode_RetargetPoseFromMesh>()
{
	return FAnimNode_RetargetPoseFromMesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The Skeletal Mesh Component to retarget animation from. Assumed to be animated and tick BEFORE this anim instance.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The Skeletal Mesh Component to retarget animation from. Assumed to be animated and tick BEFORE this anim instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IKRetargeterAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Retarget asset to use. Must define a Source and Target IK Rig compatible with the SourceMeshComponent and current anim instance.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Retarget asset to use. Must define a Source and Target IK Rig compatible with the SourceMeshComponent and current anim instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRetargetProfile_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** connect a custom retarget profile to modify the retargeter's settings at runtime.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "connect a custom retarget profile to modify the retargeter's settings at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressWarnings_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Toggle whether to print warnings about missing or incorrectly configured retarget configurations. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Toggle whether to print warnings about missing or incorrectly configured retarget configurations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Copy curves from SouceMeshComponent. This will copy any curves the source/target Skeleton have in common. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Copy curves from SouceMeshComponent. This will copy any curves the source/target Skeleton have in common." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09* Max LOD that this node is allowed to run.\n\x09* For example if you have LODThreshold at 2, it will run until LOD 2 (based on 0 index) when the component LOD becomes 3, it will stop update/evaluate\n\x09* A value of -1 forces the node to execute at all LOD levels.\n\x09*/" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run.\n* For example if you have LODThreshold at 2, it will run until LOD 2 (based on 0 index) when the component LOD becomes 3, it will stop update/evaluate\n* A value of -1 forces the node to execute at all LOD levels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODThresholdForIK_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09* Max LOD that IK is allowed to run.\n\x09* For example if you have LODThresholdForIK at 2, it will skip the IK pass on LODs 3 and greater.\n\x09* This only disables IK and does not affect the Root or FK passes.\n\x09* A value of -1 forces the node to execute at all LOD levels.\n\x09*/" },
		{ "DisplayName", "IK LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "ToolTip", "* Max LOD that IK is allowed to run.\n* For example if you have LODThresholdForIK at 2, it will skip the IK pass on LODs 3 and greater.\n* This only disables IK and does not affect the Root or FK passes.\n* A value of -1 forces the node to execute at all LOD levels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Processor_MetaData[] = {
		{ "Comment", "/** the runtime processor used to run the retarget and generate new poses */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "ToolTip", "the runtime processor used to run the retarget and generate new poses" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceMeshComponent;
	static void NewProp_bUseAttachedParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRetargeterAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomRetargetProfile;
	static void NewProp_bSuppressWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressWarnings;
	static void NewProp_bCopyCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyCurves;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODThresholdForIK;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Processor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RetargetPoseFromMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x001400000008200c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, SourceMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMeshComponent_MetaData), NewProp_SourceMeshComponent_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
{
	((FAnimNode_RetargetPoseFromMesh*)Obj)->bUseAttachedParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent = { "bUseAttachedParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RetargetPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAttachedParent_MetaData), NewProp_bUseAttachedParent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_IKRetargeterAsset = { "IKRetargeterAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, IKRetargeterAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IKRetargeterAsset_MetaData), NewProp_IKRetargeterAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_CustomRetargetProfile = { "CustomRetargetProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, CustomRetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRetargetProfile_MetaData), NewProp_CustomRetargetProfile_MetaData) }; // 1037262547
void Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings_SetBit(void* Obj)
{
	((FAnimNode_RetargetPoseFromMesh*)Obj)->bSuppressWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings = { "bSuppressWarnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RetargetPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressWarnings_MetaData), NewProp_bSuppressWarnings_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves_SetBit(void* Obj)
{
	((FAnimNode_RetargetPoseFromMesh*)Obj)->bCopyCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves = { "bCopyCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RetargetPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyCurves_MetaData), NewProp_bCopyCurves_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, LODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODThreshold_MetaData), NewProp_LODThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_LODThresholdForIK = { "LODThresholdForIK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, LODThresholdForIK), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODThresholdForIK_MetaData), NewProp_LODThresholdForIK_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_Processor = { "Processor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, Processor), Z_Construct_UClass_UIKRetargetProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Processor_MetaData), NewProp_Processor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_SourceMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_IKRetargeterAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_CustomRetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_LODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_LODThresholdForIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_Processor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_RetargetPoseFromMesh",
	Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::PropPointers),
	sizeof(FAnimNode_RetargetPoseFromMesh),
	alignof(FAnimNode_RetargetPoseFromMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.InnerSingleton;
}
// End ScriptStruct FAnimNode_RetargetPoseFromMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_RetargetPoseFromMesh::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewStructOps, TEXT("AnimNode_RetargetPoseFromMesh"), &Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RetargetPoseFromMesh), 1289646739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_1162968084(TEXT("/Script/IKRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
