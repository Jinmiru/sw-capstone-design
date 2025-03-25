// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangePipelineMeshesUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePipelineMeshesUtilities() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister();
INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer();
INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshGeometry();
INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshInstance();
INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin ScriptStruct FInterchangeLodSceneNodeContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer;
class UScriptStruct* FInterchangeLodSceneNodeContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangeLodSceneNodeContainer"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangeLodSceneNodeContainer>()
{
	return FInterchangeLodSceneNodeContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This container exists only because UPROPERTY cannot support nested container. See FInterchangeMeshInstance.\n*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* This container exists only because UPROPERTY cannot support nested container. See FInterchangeMeshInstance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodes_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * Each scene node here represents a mesh scene node. If it represents a LOD group, there may be more then one mesh scene node for a specific LOD index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Each scene node here represents a mesh scene node. If it represents a LOD group, there may be more then one mesh scene node for a specific LOD index." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SceneNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeLodSceneNodeContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_Inner = { "SceneNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInterchangeSceneNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes = { "SceneNodes", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeLodSceneNodeContainer, SceneNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneNodes_MetaData), NewProp_SceneNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	&NewStructOps,
	"InterchangeLodSceneNodeContainer",
	Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers),
	sizeof(FInterchangeLodSceneNodeContainer),
	alignof(FInterchangeLodSceneNodeContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.InnerSingleton;
}
// End ScriptStruct FInterchangeLodSceneNodeContainer

// Begin ScriptStruct FInterchangeMeshInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeMeshInstance;
class UScriptStruct* FInterchangeMeshInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshInstance, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangeMeshInstance"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangeMeshInstance>()
{
	return FInterchangeMeshInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* A mesh instance is a description of a translated scene node that points to a translated mesh asset.\n* A mesh instance that points to an LOD group can have many LODs and many scene mesh nodes per LOD index.\n* A mesh instance that points to a mesh node will have only LOD 0 and will point to one scene mesh node.\n*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* A mesh instance is a description of a translated scene node that points to a translated mesh asset.\n* A mesh instance that points to an LOD group can have many LODs and many scene mesh nodes per LOD index.\n* A mesh instance that points to a mesh node will have only LOD 0 and will point to one scene mesh node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * This ID represents either a LOD group scene node UID or a mesh scene node UID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "This ID represents either a LOD group scene node UID or a mesh scene node UID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodGroupNode_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * This member is null unless the mesh instance represents a LOD group.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "This member is null unless the mesh instance represents a LOD group." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceSkinnedMesh_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceMorphTarget_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMorphTargets_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodePerLodIndex_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * Each scene node here represents a mesh scene node. If it represents a LOD group, there may be more then one mesh scene node for a specific LOD index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Each scene node here represents a mesh scene node. If it represents a LOD group, there may be more then one mesh scene node for a specific LOD index." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencingMeshGeometryUids_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * All mesh geometry referenced by this MeshInstance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "All mesh geometry referenced by this MeshInstance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LodGroupNode;
	static void NewProp_bReferenceSkinnedMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceSkinnedMesh;
	static void NewProp_bReferenceMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceMorphTarget;
	static void NewProp_bHasMorphTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMorphTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneNodePerLodIndex_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SceneNodePerLodIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SceneNodePerLodIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencingMeshGeometryUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencingMeshGeometryUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeMeshInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshInstance, MeshInstanceUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshInstanceUid_MetaData), NewProp_MeshInstanceUid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode = { "LodGroupNode", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshInstance, LodGroupNode), Z_Construct_UClass_UInterchangeSceneNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodGroupNode_MetaData), NewProp_LodGroupNode_MetaData) };
void Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_SetBit(void* Obj)
{
	((FInterchangeMeshInstance*)Obj)->bReferenceSkinnedMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh = { "bReferenceSkinnedMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangeMeshInstance), &Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReferenceSkinnedMesh_MetaData), NewProp_bReferenceSkinnedMesh_MetaData) };
void Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_SetBit(void* Obj)
{
	((FInterchangeMeshInstance*)Obj)->bReferenceMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget = { "bReferenceMorphTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangeMeshInstance), &Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReferenceMorphTarget_MetaData), NewProp_bReferenceMorphTarget_MetaData) };
void Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets_SetBit(void* Obj)
{
	((FInterchangeMeshInstance*)Obj)->bHasMorphTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets = { "bHasMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangeMeshInstance), &Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMorphTargets_MetaData), NewProp_bHasMorphTargets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_ValueProp = { "SceneNodePerLodIndex", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer, METADATA_PARAMS(0, nullptr) }; // 3233783294
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_Key_KeyProp = { "SceneNodePerLodIndex_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex = { "SceneNodePerLodIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshInstance, SceneNodePerLodIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneNodePerLodIndex_MetaData), NewProp_SceneNodePerLodIndex_MetaData) }; // 3233783294
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_Inner = { "ReferencingMeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids = { "ReferencingMeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshInstance, ReferencingMeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencingMeshGeometryUids_MetaData), NewProp_ReferencingMeshGeometryUids_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	&NewStructOps,
	"InterchangeMeshInstance",
	Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers),
	sizeof(FInterchangeMeshInstance),
	alignof(FInterchangeMeshInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshInstance()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.InnerSingleton;
}
// End ScriptStruct FInterchangeMeshInstance

// Begin ScriptStruct FInterchangeMeshGeometry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry;
class UScriptStruct* FInterchangeMeshGeometry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshGeometry, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangeMeshGeometry"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangeMeshGeometry>()
{
	return FInterchangeMeshGeometry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* A mesh geometry is a description of a translated mesh asset node that defines a geometry.\n*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* A mesh geometry is a description of a translated mesh asset node that defines a geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshUid_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * The unique ID of the UInterchangeMeshNode represented by this structure.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "The unique ID of the UInterchangeMeshNode represented by this structure." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshNode_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * The UInterchangeMeshNode pointer represented by this structure.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The UInterchangeMeshNode pointer represented by this structure." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencingMeshInstanceUids_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * All mesh instances that refer to this UInterchangeMeshNode pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "All mesh instances that refer to this UInterchangeMeshNode pointer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedSocketUids_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * A list of all scene nodes that represent sockets attached to this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "A list of all scene nodes that represent sockets attached to this mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshUid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencingMeshInstanceUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencingMeshInstanceUids;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttachedSocketUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedSocketUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeMeshGeometry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid = { "MeshUid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshGeometry, MeshUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshUid_MetaData), NewProp_MeshUid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode = { "MeshNode", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshGeometry, MeshNode), Z_Construct_UClass_UInterchangeMeshNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshNode_MetaData), NewProp_MeshNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_Inner = { "ReferencingMeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids = { "ReferencingMeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshGeometry, ReferencingMeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencingMeshInstanceUids_MetaData), NewProp_ReferencingMeshInstanceUids_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_Inner = { "AttachedSocketUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids = { "AttachedSocketUids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshGeometry, AttachedSocketUids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedSocketUids_MetaData), NewProp_AttachedSocketUids_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	&NewStructOps,
	"InterchangeMeshGeometry",
	Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers),
	sizeof(FInterchangeMeshGeometry),
	alignof(FInterchangeMeshGeometry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshGeometry()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.InnerSingleton;
}
// End ScriptStruct FInterchangeMeshGeometry

// Begin ScriptStruct FInterchangePipelineMeshesUtilitiesContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext;
class UScriptStruct* FInterchangePipelineMeshesUtilitiesContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangePipelineMeshesUtilitiesContext"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangePipelineMeshesUtilitiesContext>()
{
	return FInterchangePipelineMeshesUtilitiesContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Represents the context UInterchangePipelineMeshesUtilities will use when the client queries data.\n*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* Represents the context UInterchangePipelineMeshesUtilities will use when the client queries data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertStaticMeshToSkeletalMesh_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * If enabled, all static meshes are converted to skeletal meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "If enabled, all static meshes are converted to skeletal meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertSkeletalMeshToStaticMesh_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * If enabled, all skeletal meshes are converted to static meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "If enabled, all skeletal meshes are converted to static meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * If enabled, all static meshes that have morph targets will be imported as skeletal meshes instead.\n\x09 */" },
		{ "DisplayName", "Convert Static Meshes with Morph Targets to Skeletal Meshes" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "If enabled, all static meshes that have morph targets will be imported as skeletal meshes instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * If enabled, meshes nested in bone hierarchies are imported as meshes instead of being converted to bones. If the meshes are not skinned, they are\n\x09 * added to the skeletal mesh and removed from the list of static meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "If enabled, meshes nested in bone hierarchies are imported as meshes instead of being converted to bones. If the meshes are not skinned, they are\nadded to the skeletal mesh and removed from the list of static meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQueryGeometryOnlyIfNoInstance_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * When querying geometry, this flag will not add MeshGeometry if there is a scene node that points to a geometry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "When querying geometry, this flag will not add MeshGeometry if there is a scene node that points to a geometry." },
	};
#endif // WITH_METADATA
	static void NewProp_bConvertStaticMeshToSkeletalMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertStaticMeshToSkeletalMesh;
	static void NewProp_bConvertSkeletalMeshToStaticMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertSkeletalMeshToStaticMesh;
	static void NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertStaticsWithMorphTargetsToSkeletals;
	static void NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMeshesInBoneHierarchy;
	static void NewProp_bQueryGeometryOnlyIfNoInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQueryGeometryOnlyIfNoInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangePipelineMeshesUtilitiesContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_SetBit(void* Obj)
{
	((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bConvertStaticMeshToSkeletalMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh = { "bConvertStaticMeshToSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertStaticMeshToSkeletalMesh_MetaData), NewProp_bConvertStaticMeshToSkeletalMesh_MetaData) };
void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_SetBit(void* Obj)
{
	((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bConvertSkeletalMeshToStaticMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh = { "bConvertSkeletalMeshToStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertSkeletalMeshToStaticMesh_MetaData), NewProp_bConvertSkeletalMeshToStaticMesh_MetaData) };
void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit(void* Obj)
{
	((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bConvertStaticsWithMorphTargetsToSkeletals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals = { "bConvertStaticsWithMorphTargetsToSkeletals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData), NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData) };
void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
{
	((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bImportMeshesInBoneHierarchy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportMeshesInBoneHierarchy_MetaData), NewProp_bImportMeshesInBoneHierarchy_MetaData) };
void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance_SetBit(void* Obj)
{
	((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bQueryGeometryOnlyIfNoInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance = { "bQueryGeometryOnlyIfNoInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQueryGeometryOnlyIfNoInstance_MetaData), NewProp_bQueryGeometryOnlyIfNoInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	&NewStructOps,
	"InterchangePipelineMeshesUtilitiesContext",
	Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::PropPointers),
	sizeof(FInterchangePipelineMeshesUtilitiesContext),
	alignof(FInterchangePipelineMeshesUtilitiesContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.InnerSingleton, Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.InnerSingleton;
}
// End ScriptStruct FInterchangePipelineMeshesUtilitiesContext

// Begin Class UInterchangePipelineMeshesUtilities Function CreateInterchangePipelineMeshesUtilities
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics
{
	struct InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms
	{
		UInterchangeBaseNodeContainer* BaseNodeContainer;
		UInterchangePipelineMeshesUtilities* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Create an instance of UInterchangePipelineMeshesUtilities.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Create an instance of UInterchangePipelineMeshesUtilities." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms, ReturnValue), Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_BaseNodeContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "CreateInterchangePipelineMeshesUtilities", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execCreateInterchangePipelineMeshesUtilities)
{
	P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInterchangePipelineMeshesUtilities**)Z_Param__Result=UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities(Z_Param_BaseNodeContainer);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function CreateInterchangePipelineMeshesUtilities

// Begin Class UInterchangePipelineMeshesUtilities Function GetAllMeshGeometry
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms
	{
		TArray<FString> MeshGeometryUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the unique IDs of all mesh geometry.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the unique IDs of all mesh geometry." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshGeometry", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshGeometry)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllMeshGeometry(Z_Param_Out_MeshGeometryUids);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetAllMeshGeometry

// Begin Class UInterchangePipelineMeshesUtilities Function GetAllMeshGeometryNotInstanced
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms
	{
		TArray<FString> MeshGeometryUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the unique IDs of all non-instanced mesh geometry.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the unique IDs of all non-instanced mesh geometry." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshGeometryNotInstanced", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshGeometryNotInstanced)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllMeshGeometryNotInstanced(Z_Param_Out_MeshGeometryUids);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetAllMeshGeometryNotInstanced

// Begin Class UInterchangePipelineMeshesUtilities Function GetAllMeshInstanceUids
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms
	{
		TArray<FString> MeshInstanceUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the unique IDs of all mesh instances.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the unique IDs of all mesh instances." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshInstanceUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllMeshInstanceUids(Z_Param_Out_MeshInstanceUids);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetAllMeshInstanceUids

// Begin Class UInterchangePipelineMeshesUtilities Function GetAllMeshInstanceUidsUsingMeshGeometryUid
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms
	{
		FString MeshGeometryUid;
		TArray<FString> MeshInstanceUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all instanced mesh UIDs that use the mesh geometry unique ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all instanced mesh UIDs that use the mesh geometry unique ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms, MeshGeometryUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshGeometryUid_MetaData), NewProp_MeshGeometryUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshInstanceUidsUsingMeshGeometryUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUidsUsingMeshGeometryUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
	P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllMeshInstanceUidsUsingMeshGeometryUid(Z_Param_MeshGeometryUid,Z_Param_Out_MeshInstanceUids);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetAllMeshInstanceUidsUsingMeshGeometryUid

// Begin Class UInterchangePipelineMeshesUtilities Function GetAllSkinnedMeshGeometry
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms
	{
		TArray<FString> MeshGeometryUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the unique IDs of all skinned mesh geometry.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the unique IDs of all skinned mesh geometry." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllSkinnedMeshGeometry", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshGeometry)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllSkinnedMeshGeometry(Z_Param_Out_MeshGeometryUids);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetAllSkinnedMeshGeometry

// Begin Class UInterchangePipelineMeshesUtilities Function GetAllSkinnedMeshInstance
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms
	{
		TArray<FString> MeshInstanceUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the unique IDs of all skinned mesh instances.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the unique IDs of all skinned mesh instances." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllSkinnedMeshInstance", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshInstance)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllSkinnedMeshInstance(Z_Param_Out_MeshInstanceUids);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetAllSkinnedMeshInstance

// Begin Class UInterchangePipelineMeshesUtilities Function GetAllStaticMeshGeometry
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms
	{
		TArray<FString> MeshGeometryUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the unique IDs of all static mesh geometry.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the unique IDs of all static mesh geometry." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllStaticMeshGeometry", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllStaticMeshGeometry)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllStaticMeshGeometry(Z_Param_Out_MeshGeometryUids);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetAllStaticMeshGeometry

// Begin Class UInterchangePipelineMeshesUtilities Function GetAllStaticMeshInstance
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms
	{
		TArray<FString> MeshInstanceUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the unique IDs of all static mesh instances.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the unique IDs of all static mesh instances." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllStaticMeshInstance", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllStaticMeshInstance)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllStaticMeshInstance(Z_Param_Out_MeshInstanceUids);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetAllStaticMeshInstance

// Begin Class UInterchangePipelineMeshesUtilities Function GetMeshGeometryByUid
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms
	{
		FString MeshGeometryUid;
		FInterchangeMeshGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the geometry mesh from the unique ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the geometry mesh from the unique ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms, MeshGeometryUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshGeometryUid_MetaData), NewProp_MeshGeometryUid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeMeshGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2166041185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshGeometryByUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshGeometryByUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInterchangeMeshGeometry*)Z_Param__Result=P_THIS->GetMeshGeometryByUid(Z_Param_MeshGeometryUid);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetMeshGeometryByUid

// Begin Class UInterchangePipelineMeshesUtilities Function GetMeshGeometrySkeletonRootUid
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms
	{
		FString MeshGeometryUid;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return the skeleton root node UID. This is the UID for a UInterchangeSceneNode that has a \"Joint\" specialized type.\n\x09* Return an empty string if the MeshGeometryUid parameter points to nothing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return the skeleton root node UID. This is the UID for a UInterchangeSceneNode that has a \"Joint\" specialized type.\nReturn an empty string if the MeshGeometryUid parameter points to nothing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms, MeshGeometryUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshGeometryUid_MetaData), NewProp_MeshGeometryUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshGeometrySkeletonRootUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshGeometrySkeletonRootUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetMeshGeometrySkeletonRootUid(Z_Param_MeshGeometryUid);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetMeshGeometrySkeletonRootUid

// Begin Class UInterchangePipelineMeshesUtilities Function GetMeshInstanceByUid
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms
	{
		FString MeshInstanceUid;
		FInterchangeMeshInstance ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the instanced mesh from the unique ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the instanced mesh from the unique ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms, MeshInstanceUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshInstanceUid_MetaData), NewProp_MeshInstanceUid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeMeshInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4070679797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshInstanceByUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshInstanceByUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshInstanceUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInterchangeMeshInstance*)Z_Param__Result=P_THIS->GetMeshInstanceByUid(Z_Param_MeshInstanceUid);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetMeshInstanceByUid

// Begin Class UInterchangePipelineMeshesUtilities Function GetMeshInstanceSkeletonRootUid
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics
{
	struct InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms
	{
		FString MeshInstanceUid;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return the skeleton root node UID. This is the UID for a UInterchangeSceneNode that has a \"Joint\" specialized type.\n\x09* Return an empty string if the MeshInstanceUid parameter points to nothing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return the skeleton root node UID. This is the UID for a UInterchangeSceneNode that has a \"Joint\" specialized type.\nReturn an empty string if the MeshInstanceUid parameter points to nothing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms, MeshInstanceUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshInstanceUid_MetaData), NewProp_MeshInstanceUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshInstanceSkeletonRootUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshInstanceSkeletonRootUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshInstanceUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetMeshInstanceSkeletonRootUid(Z_Param_MeshInstanceUid);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function GetMeshInstanceSkeletonRootUid

// Begin Class UInterchangePipelineMeshesUtilities Function IsValidMeshGeometryUid
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics
{
	struct InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms
	{
		FString MeshGeometryUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return true if there is an existing FInterchangeMeshGeometry that matches the MeshInstanceUid key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return true if there is an existing FInterchangeMeshGeometry that matches the MeshInstanceUid key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms, MeshGeometryUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshGeometryUid_MetaData), NewProp_MeshGeometryUid_MetaData) };
void Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms), &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "IsValidMeshGeometryUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execIsValidMeshGeometryUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidMeshGeometryUid(Z_Param_MeshGeometryUid);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function IsValidMeshGeometryUid

// Begin Class UInterchangePipelineMeshesUtilities Function IsValidMeshInstanceUid
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics
{
	struct InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms
	{
		FString MeshInstanceUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return true if there is an existing FInterchangeMeshInstance that matches the MeshInstanceUid key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return true if there is an existing FInterchangeMeshInstance that matches the MeshInstanceUid key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms, MeshInstanceUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshInstanceUid_MetaData), NewProp_MeshInstanceUid_MetaData) };
void Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms), &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "IsValidMeshInstanceUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execIsValidMeshInstanceUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshInstanceUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidMeshInstanceUid(Z_Param_MeshInstanceUid);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function IsValidMeshInstanceUid

// Begin Class UInterchangePipelineMeshesUtilities Function SetContext
struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics
{
	struct InterchangePipelineMeshesUtilities_eventSetContext_Parms
	{
		FInterchangePipelineMeshesUtilitiesContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventSetContext_Parms, Context), Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 323814150
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "SetContext", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::InterchangePipelineMeshesUtilities_eventSetContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::InterchangePipelineMeshesUtilities_eventSetContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execSetContext)
{
	P_GET_STRUCT_REF(FInterchangePipelineMeshesUtilitiesContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContext(Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Class UInterchangePipelineMeshesUtilities Function SetContext

// Begin Class UInterchangePipelineMeshesUtilities
void UInterchangePipelineMeshesUtilities::StaticRegisterNativesUInterchangePipelineMeshesUtilities()
{
	UClass* Class = UInterchangePipelineMeshesUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateInterchangePipelineMeshesUtilities", &UInterchangePipelineMeshesUtilities::execCreateInterchangePipelineMeshesUtilities },
		{ "GetAllMeshGeometry", &UInterchangePipelineMeshesUtilities::execGetAllMeshGeometry },
		{ "GetAllMeshGeometryNotInstanced", &UInterchangePipelineMeshesUtilities::execGetAllMeshGeometryNotInstanced },
		{ "GetAllMeshInstanceUids", &UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUids },
		{ "GetAllMeshInstanceUidsUsingMeshGeometryUid", &UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUidsUsingMeshGeometryUid },
		{ "GetAllSkinnedMeshGeometry", &UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshGeometry },
		{ "GetAllSkinnedMeshInstance", &UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshInstance },
		{ "GetAllStaticMeshGeometry", &UInterchangePipelineMeshesUtilities::execGetAllStaticMeshGeometry },
		{ "GetAllStaticMeshInstance", &UInterchangePipelineMeshesUtilities::execGetAllStaticMeshInstance },
		{ "GetMeshGeometryByUid", &UInterchangePipelineMeshesUtilities::execGetMeshGeometryByUid },
		{ "GetMeshGeometrySkeletonRootUid", &UInterchangePipelineMeshesUtilities::execGetMeshGeometrySkeletonRootUid },
		{ "GetMeshInstanceByUid", &UInterchangePipelineMeshesUtilities::execGetMeshInstanceByUid },
		{ "GetMeshInstanceSkeletonRootUid", &UInterchangePipelineMeshesUtilities::execGetMeshInstanceSkeletonRootUid },
		{ "IsValidMeshGeometryUid", &UInterchangePipelineMeshesUtilities::execIsValidMeshGeometryUid },
		{ "IsValidMeshInstanceUid", &UInterchangePipelineMeshesUtilities::execIsValidMeshInstanceUid },
		{ "SetContext", &UInterchangePipelineMeshesUtilities::execSetContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineMeshesUtilities);
UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister()
{
	return UInterchangePipelineMeshesUtilities::StaticClass();
}
struct Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**/" },
		{ "IncludePath", "InterchangePipelineMeshesUtilities.h" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities, "CreateInterchangePipelineMeshesUtilities" }, // 3384258145
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry, "GetAllMeshGeometry" }, // 3328617064
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced, "GetAllMeshGeometryNotInstanced" }, // 269004421
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids, "GetAllMeshInstanceUids" }, // 1493456210
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid, "GetAllMeshInstanceUidsUsingMeshGeometryUid" }, // 2222575643
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry, "GetAllSkinnedMeshGeometry" }, // 4141276705
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance, "GetAllSkinnedMeshInstance" }, // 820649854
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry, "GetAllStaticMeshGeometry" }, // 1237567845
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance, "GetAllStaticMeshInstance" }, // 804206341
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid, "GetMeshGeometryByUid" }, // 1136061479
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid, "GetMeshGeometrySkeletonRootUid" }, // 2095374148
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid, "GetMeshInstanceByUid" }, // 2140386394
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid, "GetMeshInstanceSkeletonRootUid" }, // 2710303682
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid, "IsValidMeshGeometryUid" }, // 3924516072
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid, "IsValidMeshInstanceUid" }, // 3519242964
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext, "SetContext" }, // 2959768712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineMeshesUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::ClassParams = {
	&UInterchangePipelineMeshesUtilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities()
{
	if (!Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton, Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangePipelineMeshesUtilities>()
{
	return UInterchangePipelineMeshesUtilities::StaticClass();
}
UInterchangePipelineMeshesUtilities::UInterchangePipelineMeshesUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineMeshesUtilities);
UInterchangePipelineMeshesUtilities::~UInterchangePipelineMeshesUtilities() {}
// End Class UInterchangePipelineMeshesUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInterchangeLodSceneNodeContainer::StaticStruct, Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewStructOps, TEXT("InterchangeLodSceneNodeContainer"), &Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeLodSceneNodeContainer), 3233783294U) },
		{ FInterchangeMeshInstance::StaticStruct, Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewStructOps, TEXT("InterchangeMeshInstance"), &Z_Registration_Info_UScriptStruct_InterchangeMeshInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeMeshInstance), 4070679797U) },
		{ FInterchangeMeshGeometry::StaticStruct, Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewStructOps, TEXT("InterchangeMeshGeometry"), &Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeMeshGeometry), 2166041185U) },
		{ FInterchangePipelineMeshesUtilitiesContext::StaticStruct, Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewStructOps, TEXT("InterchangePipelineMeshesUtilitiesContext"), &Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangePipelineMeshesUtilitiesContext), 323814150U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePipelineMeshesUtilities, UInterchangePipelineMeshesUtilities::StaticClass, TEXT("UInterchangePipelineMeshesUtilities"), &Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineMeshesUtilities), 1341746149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_3805848042(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
