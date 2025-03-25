// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_CopyPoseFromMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyPoseFromMesh() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_CopyPoseFromMesh
static_assert(std::is_polymorphic<FAnimNode_CopyPoseFromMesh>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_CopyPoseFromMesh cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CopyPoseFromMesh;
class UScriptStruct* FAnimNode_CopyPoseFromMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CopyPoseFromMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CopyPoseFromMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CopyPoseFromMesh"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CopyPoseFromMesh.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_CopyPoseFromMesh>()
{
	return FAnimNode_CopyPoseFromMesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller to copy a bone's transform to another one.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "ToolTip", "Simple controller to copy a bone's transform to another one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/*  This is used by default if it's valid */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "This is used by default if it's valid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/* If SourceMeshComponent is not valid, and if this is true, it will look for attahced parent as a source */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If SourceMeshComponent is not valid, and if this is true, it will look for attahced parent as a source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyCurves_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/* Copy curves also from SouceMeshComponent. This will copy the curves if this instance also contains curve attributes */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Copy curves also from SouceMeshComponent. This will copy the curves if this instance also contains curve attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyCustomAttributes_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/* Copy custom attributes from SouceMeshComponent */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Copy custom attributes from SouceMeshComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMeshPose_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/* Use root space transform to copy to the target pose. By default, it copies their relative transform (bone space)*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Use root space transform to copy to the target pose. By default, it copies their relative transform (bone space)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBoneToCopy_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/* If you want to specify copy root, use this - this will ensure copy only below of this joint (inclusively) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If you want to specify copy root, use this - this will ensure copy only below of this joint (inclusively)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceMeshComponent;
	static void NewProp_bUseAttachedParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
	static void NewProp_bCopyCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyCurves;
	static void NewProp_bCopyCustomAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyCustomAttributes;
	static void NewProp_bUseMeshPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMeshPose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoneToCopy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyPoseFromMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x001400000008200c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyPoseFromMesh, SourceMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMeshComponent_MetaData), NewProp_SourceMeshComponent_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
{
	((FAnimNode_CopyPoseFromMesh*)Obj)->bUseAttachedParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent = { "bUseAttachedParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_CopyPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAttachedParent_MetaData), NewProp_bUseAttachedParent_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves_SetBit(void* Obj)
{
	((FAnimNode_CopyPoseFromMesh*)Obj)->bCopyCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves = { "bCopyCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_CopyPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyCurves_MetaData), NewProp_bCopyCurves_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCustomAttributes_SetBit(void* Obj)
{
	((FAnimNode_CopyPoseFromMesh*)Obj)->bCopyCustomAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCustomAttributes = { "bCopyCustomAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_CopyPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCustomAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyCustomAttributes_MetaData), NewProp_bCopyCustomAttributes_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseMeshPose_SetBit(void* Obj)
{
	((FAnimNode_CopyPoseFromMesh*)Obj)->bUseMeshPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseMeshPose = { "bUseMeshPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_CopyPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseMeshPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMeshPose_MetaData), NewProp_bUseMeshPose_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_RootBoneToCopy = { "RootBoneToCopy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyPoseFromMesh, RootBoneToCopy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBoneToCopy_MetaData), NewProp_RootBoneToCopy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_SourceMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCustomAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseMeshPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_RootBoneToCopy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_CopyPoseFromMesh",
	Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::PropPointers),
	sizeof(FAnimNode_CopyPoseFromMesh),
	alignof(FAnimNode_CopyPoseFromMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CopyPoseFromMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CopyPoseFromMesh.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CopyPoseFromMesh.InnerSingleton;
}
// End ScriptStruct FAnimNode_CopyPoseFromMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CopyPoseFromMesh_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_CopyPoseFromMesh::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewStructOps, TEXT("AnimNode_CopyPoseFromMesh"), &Z_Registration_Info_UScriptStruct_AnimNode_CopyPoseFromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CopyPoseFromMesh), 3644564504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CopyPoseFromMesh_h_861096489(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CopyPoseFromMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CopyPoseFromMesh_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
