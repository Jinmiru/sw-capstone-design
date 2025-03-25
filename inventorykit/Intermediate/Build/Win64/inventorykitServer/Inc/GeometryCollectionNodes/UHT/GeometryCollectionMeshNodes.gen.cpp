// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionMeshNodes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionMeshNodes() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FBoxToMeshDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetMeshDataDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshAppendDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBooleanDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInfoDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FPointsToMeshDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FPointsToMeshDataflowNode
static_assert(std::is_polymorphic<FPointsToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FPointsToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode;
class UScriptStruct* FPointsToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("PointsToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FPointsToMeshDataflowNode>()
{
	return FPointsToMeshDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts points into a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts points into a DynamicMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Comment", "/** Points input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Points input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Mesh output */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleCount_MetaData[] = {
		{ "Comment", "/** Mesh triangle count */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh triangle count" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointsToMeshDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointsToMeshDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointsToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointsToMeshDataflowNode, TriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleCount_MetaData), NewProp_TriangleCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_TriangleCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"PointsToMeshDataflowNode",
	Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::PropPointers),
	sizeof(FPointsToMeshDataflowNode),
	alignof(FPointsToMeshDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPointsToMeshDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.InnerSingleton;
}
// End ScriptStruct FPointsToMeshDataflowNode

// Begin ScriptStruct FBoxToMeshDataflowNode
static_assert(std::is_polymorphic<FBoxToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FBoxToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode;
class UScriptStruct* FBoxToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("BoxToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FBoxToMeshDataflowNode>()
{
	return FBoxToMeshDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a BoundingBox into a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts a BoundingBox into a DynamicMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Comment", "/** BoundingBox input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "BoundingBox input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Mesh output */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleCount_MetaData[] = {
		{ "Comment", "/** Mesh triangle count */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh triangle count" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxToMeshDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxToMeshDataflowNode, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxToMeshDataflowNode, TriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleCount_MetaData), NewProp_TriangleCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_TriangleCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"BoxToMeshDataflowNode",
	Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::PropPointers),
	sizeof(FBoxToMeshDataflowNode),
	alignof(FBoxToMeshDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoxToMeshDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.InnerSingleton;
}
// End ScriptStruct FBoxToMeshDataflowNode

// Begin ScriptStruct FMeshInfoDataflowNode
static_assert(std::is_polymorphic<FMeshInfoDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshInfoDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode;
class UScriptStruct* FMeshInfoDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfoDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshInfoDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshInfoDataflowNode>()
{
	return FMeshInfoDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Collects information from the DynamicMesh and outputs it into a formatted string\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Collects information from the DynamicMesh and outputs it into a formatted string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** DynamicMesh for the information */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "DynamicMesh for the information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoString_MetaData[] = {
		{ "Comment", "/** Formatted output string */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Formatted output string" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InfoString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInfoDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfoDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_InfoString = { "InfoString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfoDataflowNode, InfoString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoString_MetaData), NewProp_InfoString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_InfoString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MeshInfoDataflowNode",
	Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::PropPointers),
	sizeof(FMeshInfoDataflowNode),
	alignof(FMeshInfoDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshInfoDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.InnerSingleton;
}
// End ScriptStruct FMeshInfoDataflowNode

// Begin ScriptStruct FMeshToCollectionDataflowNode
static_assert(std::is_polymorphic<FMeshToCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshToCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode;
class UScriptStruct* FMeshToCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshToCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshToCollectionDataflowNode>()
{
	return FMeshToCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a DynamicMesh to a Collection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts a DynamicMesh to a Collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** DynamicMesh to convert */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "DynamicMesh to convert" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Output Collection */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output Collection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshToCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshToCollectionDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshToCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MeshToCollectionDataflowNode",
	Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::PropPointers),
	sizeof(FMeshToCollectionDataflowNode),
	alignof(FMeshToCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FMeshToCollectionDataflowNode

// Begin ScriptStruct FCollectionToMeshDataflowNode
static_assert(std::is_polymorphic<FCollectionToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode;
class UScriptStruct* FCollectionToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionToMeshDataflowNode>()
{
	return FCollectionToMeshDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a Collection to a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts a Collection to a DynamicMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to convert*/" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Collection to convert" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCenterPivot_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Center Pivot" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Output DynamicMesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output DynamicMesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static void NewProp_bCenterPivot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterPivot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionToMeshDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionToMeshDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
void Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot_SetBit(void* Obj)
{
	((FCollectionToMeshDataflowNode*)Obj)->bCenterPivot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot = { "bCenterPivot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCollectionToMeshDataflowNode), &Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCenterPivot_MetaData), NewProp_bCenterPivot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"CollectionToMeshDataflowNode",
	Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::PropPointers),
	sizeof(FCollectionToMeshDataflowNode),
	alignof(FCollectionToMeshDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.InnerSingleton;
}
// End ScriptStruct FCollectionToMeshDataflowNode

// Begin ScriptStruct FStaticMeshToMeshDataflowNode
static_assert(std::is_polymorphic<FStaticMeshToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FStaticMeshToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode;
class UScriptStruct* FStaticMeshToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("StaticMeshToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FStaticMeshToMeshDataflowNode>()
{
	return FStaticMeshToMeshDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a StaticMesh into a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts a StaticMesh into a DynamicMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** StaticMesh to convert */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "StaticMesh to convert" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHiRes_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Output the HiRes representation, if set to true and HiRes doesn't exist it will output empty mesh */" },
		{ "DisplayName", "Use HiRes" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output the HiRes representation, if set to true and HiRes doesn't exist it will output empty mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Specifies the LOD level to use */" },
		{ "DisplayName", "LOD Level" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Specifies the LOD level to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Output mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_bUseHiRes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHiRes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshToMeshDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToMeshDataflowNode, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
void Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes_SetBit(void* Obj)
{
	((FStaticMeshToMeshDataflowNode*)Obj)->bUseHiRes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes = { "bUseHiRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticMeshToMeshDataflowNode), &Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHiRes_MetaData), NewProp_bUseHiRes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToMeshDataflowNode, LODLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODLevel_MetaData), NewProp_LODLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_LODLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"StaticMeshToMeshDataflowNode",
	Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::PropPointers),
	sizeof(FStaticMeshToMeshDataflowNode),
	alignof(FStaticMeshToMeshDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.InnerSingleton;
}
// End ScriptStruct FStaticMeshToMeshDataflowNode

// Begin ScriptStruct FMeshAppendDataflowNode
static_assert(std::is_polymorphic<FMeshAppendDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshAppendDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode;
class UScriptStruct* FMeshAppendDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshAppendDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshAppendDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshAppendDataflowNode>()
{
	return FMeshAppendDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Appends two meshes\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Appends two meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1_MetaData[] = {
		{ "Comment", "/** Mesh input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh2_MetaData[] = {
		{ "Comment", "/** Mesh input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Output mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshAppendDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh1 = { "Mesh1", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshAppendDataflowNode, Mesh1), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1_MetaData), NewProp_Mesh1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh2 = { "Mesh2", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshAppendDataflowNode, Mesh2), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh2_MetaData), NewProp_Mesh2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshAppendDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MeshAppendDataflowNode",
	Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::PropPointers),
	sizeof(FMeshAppendDataflowNode),
	alignof(FMeshAppendDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshAppendDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.InnerSingleton;
}
// End ScriptStruct FMeshAppendDataflowNode

// Begin Enum EMeshBooleanOperationEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshBooleanOperationEnum;
static UEnum* EMeshBooleanOperationEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EMeshBooleanOperationEnum"));
	}
	return Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EMeshBooleanOperationEnum>()
{
	return EMeshBooleanOperationEnum_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EMeshBooleanOperationEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_MeshBoolean_Difference.DisplayName", "Difference" },
		{ "Dataflow_MeshBoolean_Difference.Name", "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Difference" },
		{ "Dataflow_MeshBoolean_Intersect.DisplayName", "Intersect" },
		{ "Dataflow_MeshBoolean_Intersect.Name", "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Intersect" },
		{ "Dataflow_MeshBoolean_Union.DisplayName", "Union" },
		{ "Dataflow_MeshBoolean_Union.Name", "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Union" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Union", (int64)EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Union },
		{ "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Intersect", (int64)EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Intersect },
		{ "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Difference", (int64)EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Difference },
		{ "EMeshBooleanOperationEnum::Dataflow_Max", (int64)EMeshBooleanOperationEnum::Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"EMeshBooleanOperationEnum",
	"EMeshBooleanOperationEnum",
	Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.InnerSingleton;
}
// End Enum EMeshBooleanOperationEnum

// Begin ScriptStruct FMeshBooleanDataflowNode
static_assert(std::is_polymorphic<FMeshBooleanDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshBooleanDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode;
class UScriptStruct* FMeshBooleanDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshBooleanDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshBooleanDataflowNode>()
{
	return FMeshBooleanDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Mesh boolean (Union, Intersect, Difference) between two meshes\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh boolean (Union, Intersect, Difference) between two meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Boolean operation */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Boolean operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1_MetaData[] = {
		{ "Comment", "/** Mesh input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh2_MetaData[] = {
		{ "Comment", "/** Mesh input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Output mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshBooleanDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshBooleanDataflowNode, Operation), Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 918277888
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh1 = { "Mesh1", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshBooleanDataflowNode, Mesh1), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1_MetaData), NewProp_Mesh1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh2 = { "Mesh2", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshBooleanDataflowNode, Mesh2), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh2_MetaData), NewProp_Mesh2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshBooleanDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MeshBooleanDataflowNode",
	Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::PropPointers),
	sizeof(FMeshBooleanDataflowNode),
	alignof(FMeshBooleanDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshBooleanDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.InnerSingleton;
}
// End ScriptStruct FMeshBooleanDataflowNode

// Begin ScriptStruct FMeshCopyToPointsDataflowNode
static_assert(std::is_polymorphic<FMeshCopyToPointsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshCopyToPointsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode;
class UScriptStruct* FMeshCopyToPointsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshCopyToPointsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshCopyToPointsDataflowNode>()
{
	return FMeshCopyToPointsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Copies the same mesh with scale onto points\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Copies the same mesh with scale onto points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Comment", "/** Points to copy meshes onto */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Points to copy meshes onto" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshToCopy_MetaData[] = {
		{ "Comment", "/** Mesh to copy onto points */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh to copy onto points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** Scale appied to the mesh */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Scale appied to the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Copied meshes */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Copied meshes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToCopy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshCopyToPointsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCopyToPointsDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_MeshToCopy = { "MeshToCopy", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCopyToPointsDataflowNode, MeshToCopy), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshToCopy_MetaData), NewProp_MeshToCopy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCopyToPointsDataflowNode, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshCopyToPointsDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_MeshToCopy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MeshCopyToPointsDataflowNode",
	Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::PropPointers),
	sizeof(FMeshCopyToPointsDataflowNode),
	alignof(FMeshCopyToPointsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.InnerSingleton;
}
// End ScriptStruct FMeshCopyToPointsDataflowNode

// Begin ScriptStruct FGetMeshDataDataflowNode
static_assert(std::is_polymorphic<FGetMeshDataDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetMeshDataDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode;
class UScriptStruct* FGetMeshDataDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetMeshDataDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetMeshDataDataflowNode>()
{
	return FGetMeshDataDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Outputs Mesh data\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Outputs Mesh data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Mesh for the data */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh for the data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[] = {
		{ "Comment", "/** Number of vertices */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Number of vertices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCount_MetaData[] = {
		{ "Comment", "/** Number of edges */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Number of edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleCount_MetaData[] = {
		{ "Comment", "/** Number of triangles */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Number of triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetMeshDataDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetMeshDataDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetMeshDataDataflowNode, VertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexCount_MetaData), NewProp_VertexCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_EdgeCount = { "EdgeCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetMeshDataDataflowNode, EdgeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCount_MetaData), NewProp_EdgeCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetMeshDataDataflowNode, TriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleCount_MetaData), NewProp_TriangleCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_VertexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_EdgeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_TriangleCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GetMeshDataDataflowNode",
	Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::PropPointers),
	sizeof(FGetMeshDataDataflowNode),
	alignof(FGetMeshDataDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetMeshDataDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetMeshDataDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshBooleanOperationEnum_StaticEnum, TEXT("EMeshBooleanOperationEnum"), &Z_Registration_Info_UEnum_EMeshBooleanOperationEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 918277888U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPointsToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewStructOps, TEXT("PointsToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointsToMeshDataflowNode), 66607571U) },
		{ FBoxToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewStructOps, TEXT("BoxToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxToMeshDataflowNode), 1700298883U) },
		{ FMeshInfoDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewStructOps, TEXT("MeshInfoDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshInfoDataflowNode), 3817430787U) },
		{ FMeshToCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewStructOps, TEXT("MeshToCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshToCollectionDataflowNode), 86511534U) },
		{ FCollectionToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewStructOps, TEXT("CollectionToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionToMeshDataflowNode), 3440316573U) },
		{ FStaticMeshToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewStructOps, TEXT("StaticMeshToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshToMeshDataflowNode), 3161221709U) },
		{ FMeshAppendDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewStructOps, TEXT("MeshAppendDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshAppendDataflowNode), 3671116022U) },
		{ FMeshBooleanDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewStructOps, TEXT("MeshBooleanDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshBooleanDataflowNode), 2896998939U) },
		{ FMeshCopyToPointsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewStructOps, TEXT("MeshCopyToPointsDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshCopyToPointsDataflowNode), 2513985244U) },
		{ FGetMeshDataDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewStructOps, TEXT("GetMeshDataDataflowNode"), &Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetMeshDataDataflowNode), 2384360755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_397964374(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
