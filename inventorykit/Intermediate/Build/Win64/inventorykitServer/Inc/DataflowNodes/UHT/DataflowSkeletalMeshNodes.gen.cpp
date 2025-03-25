// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowNodes/Public/Dataflow/DataflowSkeletalMeshNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSkeletalMeshNodes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetSkeletonDataflowNode();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataflowNodes();
// End Cross Module References

// Begin ScriptStruct FGetSkeletalMeshDataflowNode
static_assert(std::is_polymorphic<FGetSkeletalMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetSkeletalMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode;
class UScriptStruct* FGetSkeletalMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("GetSkeletalMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FGetSkeletalMeshDataflowNode>()
{
	return FGetSkeletalMeshDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetSkeletalMeshDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetSkeletalMeshDataflowNode, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetSkeletalMeshDataflowNode, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_PropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GetSkeletalMeshDataflowNode",
	Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::PropPointers),
	sizeof(FGetSkeletalMeshDataflowNode),
	alignof(FGetSkeletalMeshDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetSkeletalMeshDataflowNode

// Begin ScriptStruct FGetSkeletonDataflowNode
static_assert(std::is_polymorphic<FGetSkeletonDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetSkeletonDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode;
class UScriptStruct* FGetSkeletonDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("GetSkeletonDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FGetSkeletonDataflowNode>()
{
	return FGetSkeletonDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Skeleton" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetSkeletonDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetSkeletonDataflowNode, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetSkeletonDataflowNode, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_PropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GetSkeletonDataflowNode",
	Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::PropPointers),
	sizeof(FGetSkeletonDataflowNode),
	alignof(FGetSkeletonDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetSkeletonDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetSkeletonDataflowNode

// Begin ScriptStruct FSkeletalMeshBoneDataflowNode
static_assert(std::is_polymorphic<FSkeletalMeshBoneDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSkeletalMeshBoneDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode;
class UScriptStruct* FSkeletalMeshBoneDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("SkeletalMeshBoneDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FSkeletalMeshBoneDataflowNode>()
{
	return FSkeletalMeshBoneDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndexOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Index" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndexOut;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshBoneDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshBoneDataflowNode, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshBoneDataflowNode, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneIndexOut = { "BoneIndexOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshBoneDataflowNode, BoneIndexOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndexOut_MetaData), NewProp_BoneIndexOut_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshBoneDataflowNode, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneIndexOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_PropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SkeletalMeshBoneDataflowNode",
	Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::PropPointers),
	sizeof(FSkeletalMeshBoneDataflowNode),
	alignof(FSkeletalMeshBoneDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshBoneDataflowNode

// Begin ScriptStruct FSkeletalMeshReferenceTransformDataflowNode
static_assert(std::is_polymorphic<FSkeletalMeshReferenceTransformDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSkeletalMeshReferenceTransformDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode;
class UScriptStruct* FSkeletalMeshReferenceTransformDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("SkeletalMeshReferenceTransformDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FSkeletalMeshReferenceTransformDataflowNode>()
{
	return FSkeletalMeshReferenceTransformDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndexIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "Index" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshIn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndexIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshReferenceTransformDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_SkeletalMeshIn = { "SkeletalMeshIn", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshReferenceTransformDataflowNode, SkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshIn_MetaData), NewProp_SkeletalMeshIn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_BoneIndexIn = { "BoneIndexIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshReferenceTransformDataflowNode, BoneIndexIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndexIn_MetaData), NewProp_BoneIndexIn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_TransformOut = { "TransformOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshReferenceTransformDataflowNode, TransformOut), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformOut_MetaData), NewProp_TransformOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_SkeletalMeshIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_BoneIndexIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_TransformOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SkeletalMeshReferenceTransformDataflowNode",
	Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::PropPointers),
	sizeof(FSkeletalMeshReferenceTransformDataflowNode),
	alignof(FSkeletalMeshReferenceTransformDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshReferenceTransformDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSkeletalMeshNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGetSkeletalMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewStructOps, TEXT("GetSkeletalMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetSkeletalMeshDataflowNode), 3938698902U) },
		{ FGetSkeletonDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewStructOps, TEXT("GetSkeletonDataflowNode"), &Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetSkeletonDataflowNode), 2801984140U) },
		{ FSkeletalMeshBoneDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewStructOps, TEXT("SkeletalMeshBoneDataflowNode"), &Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshBoneDataflowNode), 4165397256U) },
		{ FSkeletalMeshReferenceTransformDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewStructOps, TEXT("SkeletalMeshReferenceTransformDataflowNode"), &Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshReferenceTransformDataflowNode), 2724835219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSkeletalMeshNodes_h_1531345123(TEXT("/Script/DataflowNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSkeletalMeshNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSkeletalMeshNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
