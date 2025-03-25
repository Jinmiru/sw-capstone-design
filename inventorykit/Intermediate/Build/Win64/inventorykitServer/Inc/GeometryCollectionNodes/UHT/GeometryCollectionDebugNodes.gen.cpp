// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionDebugNodes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionUtilityNodes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionDebugNodes() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSphereCovering();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FWriteStringToFile();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FConvexHullToMeshDataflowNode
static_assert(std::is_polymorphic<FConvexHullToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FConvexHullToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConvexHullToMeshDataflowNode;
class UScriptStruct* FConvexHullToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConvexHullToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConvexHullToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ConvexHullToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ConvexHullToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FConvexHullToMeshDataflowNode>()
{
	return FConvexHullToMeshDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Convert convex hulls on a geometry collection to a dynamic mesh\n" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Convert convex hulls on a geometry collection to a dynamic mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to convert hulls from -- if not provided, all convex hulls will be converted. */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Optional transform selection to convert hulls from -- if not provided, all convex hulls will be converted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConvexHullToMeshDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConvexHullToMeshDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConvexHullToMeshDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalSelectionFilter_MetaData), NewProp_OptionalSelectionFilter_MetaData) }; // 2980507218
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConvexHullToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::NewProp_OptionalSelectionFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ConvexHullToMeshDataflowNode",
	Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::PropPointers),
	sizeof(FConvexHullToMeshDataflowNode),
	alignof(FConvexHullToMeshDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ConvexHullToMeshDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConvexHullToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConvexHullToMeshDataflowNode.InnerSingleton;
}
// End ScriptStruct FConvexHullToMeshDataflowNode

// Begin ScriptStruct FSphereCoveringToMeshDataflowNode
static_assert(std::is_polymorphic<FSphereCoveringToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSphereCoveringToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphereCoveringToMeshDataflowNode;
class UScriptStruct* FSphereCoveringToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphereCoveringToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphereCoveringToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SphereCoveringToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SphereCoveringToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSphereCoveringToMeshDataflowNode>()
{
	return FSphereCoveringToMeshDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Convert a sphere covering, as generated by the 'protect negative space' option on the \"Generate Cluster Convex Hull\" nodes, to a dynamic mesh\n" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Convert a sphere covering, as generated by the 'protect negative space' option on the \"Generate Cluster Convex Hull\" nodes, to a dynamic mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCovering_MetaData[] = {
		{ "Comment", "// The sphere covering to convert to a mesh\n" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "The sphere covering to convert to a mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticesAlongEachSide_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "2" },
		{ "Comment", "// Number of vertices to use along each axis when creating a mesh for each sphere\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Number of vertices to use along each axis when creating a mesh for each sphere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCovering;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticesAlongEachSide;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphereCoveringToMeshDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::NewProp_SphereCovering = { "SphereCovering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphereCoveringToMeshDataflowNode, SphereCovering), Z_Construct_UScriptStruct_FDataflowSphereCovering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCovering_MetaData), NewProp_SphereCovering_MetaData) }; // 995249109
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::NewProp_VerticesAlongEachSide = { "VerticesAlongEachSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphereCoveringToMeshDataflowNode, VerticesAlongEachSide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticesAlongEachSide_MetaData), NewProp_VerticesAlongEachSide_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphereCoveringToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::NewProp_SphereCovering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::NewProp_VerticesAlongEachSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SphereCoveringToMeshDataflowNode",
	Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::PropPointers),
	sizeof(FSphereCoveringToMeshDataflowNode),
	alignof(FSphereCoveringToMeshDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SphereCoveringToMeshDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphereCoveringToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SphereCoveringToMeshDataflowNode.InnerSingleton;
}
// End ScriptStruct FSphereCoveringToMeshDataflowNode

// Begin ScriptStruct FSphereCoveringCountSpheresNode
static_assert(std::is_polymorphic<FSphereCoveringCountSpheresNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSphereCoveringCountSpheresNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphereCoveringCountSpheresNode;
class UScriptStruct* FSphereCoveringCountSpheresNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphereCoveringCountSpheresNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphereCoveringCountSpheresNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SphereCoveringCountSpheresNode"));
	}
	return Z_Registration_Info_UScriptStruct_SphereCoveringCountSpheresNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSphereCoveringCountSpheresNode>()
{
	return FSphereCoveringCountSpheresNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Report the number of spheres in a sphere covering\n" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Report the number of spheres in a sphere covering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCovering_MetaData[] = {
		{ "Comment", "// The sphere covering to evaluate\n" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "The sphere covering to evaluate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSpheres_MetaData[] = {
		{ "Comment", "// Number of spheres in the sphere covering\n" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Number of spheres in the sphere covering" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCovering;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSpheres;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphereCoveringCountSpheresNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::NewProp_SphereCovering = { "SphereCovering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphereCoveringCountSpheresNode, SphereCovering), Z_Construct_UScriptStruct_FDataflowSphereCovering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCovering_MetaData), NewProp_SphereCovering_MetaData) }; // 995249109
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::NewProp_NumSpheres = { "NumSpheres", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphereCoveringCountSpheresNode, NumSpheres), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSpheres_MetaData), NewProp_NumSpheres_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::NewProp_SphereCovering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::NewProp_NumSpheres,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SphereCoveringCountSpheresNode",
	Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::PropPointers),
	sizeof(FSphereCoveringCountSpheresNode),
	alignof(FSphereCoveringCountSpheresNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode()
{
	if (!Z_Registration_Info_UScriptStruct_SphereCoveringCountSpheresNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphereCoveringCountSpheresNode.InnerSingleton, Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SphereCoveringCountSpheresNode.InnerSingleton;
}
// End ScriptStruct FSphereCoveringCountSpheresNode

// Begin ScriptStruct FMeshToOBJStringDebugDataflowNode
static_assert(std::is_polymorphic<FMeshToOBJStringDebugDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshToOBJStringDebugDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshToOBJStringDebugDataflowNode;
class UScriptStruct* FMeshToOBJStringDebugDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshToOBJStringDebugDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshToOBJStringDebugDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshToOBJStringDebugDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshToOBJStringDebugDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshToOBJStringDebugDataflowNode>()
{
	return FMeshToOBJStringDebugDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Convert a mesh to a string formatted as an OBJ file, which can be read by many external mesh viewers\n" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Convert a mesh to a string formatted as an OBJ file, which can be read by many external mesh viewers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertFaces_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Whether to flip the orientation of the triangles in the OBJ output\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Whether to flip the orientation of the triangles in the OBJ output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringOBJ_MetaData[] = {
		{ "Comment", "// A string representing the input mesh in the OBJ file format\n" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "A string representing the input mesh in the OBJ file format" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static void NewProp_bInvertFaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertFaces;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringOBJ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshToOBJStringDebugDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshToOBJStringDebugDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
void Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::NewProp_bInvertFaces_SetBit(void* Obj)
{
	((FMeshToOBJStringDebugDataflowNode*)Obj)->bInvertFaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::NewProp_bInvertFaces = { "bInvertFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshToOBJStringDebugDataflowNode), &Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::NewProp_bInvertFaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertFaces_MetaData), NewProp_bInvertFaces_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::NewProp_StringOBJ = { "StringOBJ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshToOBJStringDebugDataflowNode, StringOBJ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringOBJ_MetaData), NewProp_StringOBJ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::NewProp_bInvertFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::NewProp_StringOBJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MeshToOBJStringDebugDataflowNode",
	Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::PropPointers),
	sizeof(FMeshToOBJStringDebugDataflowNode),
	alignof(FMeshToOBJStringDebugDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MeshToOBJStringDebugDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshToOBJStringDebugDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshToOBJStringDebugDataflowNode.InnerSingleton;
}
// End ScriptStruct FMeshToOBJStringDebugDataflowNode

// Begin ScriptStruct FWriteStringToFile
static_assert(std::is_polymorphic<FWriteStringToFile>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FWriteStringToFile cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WriteStringToFile;
class UScriptStruct* FWriteStringToFile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WriteStringToFile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WriteStringToFile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWriteStringToFile, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("WriteStringToFile"));
	}
	return Z_Registration_Info_UScriptStruct_WriteStringToFile.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FWriteStringToFile>()
{
	return FWriteStringToFile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWriteStringToFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Write a string to a file\n" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Write a string to a file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Where file should be written on disk\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Where file should be written on disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileContents_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Contents of the file to write\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionDebugNodes.h" },
		{ "ToolTip", "Contents of the file to write" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileContents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWriteStringToFile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWriteStringToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWriteStringToFile, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWriteStringToFile_Statics::NewProp_FileContents = { "FileContents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWriteStringToFile, FileContents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileContents_MetaData), NewProp_FileContents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWriteStringToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWriteStringToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWriteStringToFile_Statics::NewProp_FileContents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWriteStringToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWriteStringToFile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"WriteStringToFile",
	Z_Construct_UScriptStruct_FWriteStringToFile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWriteStringToFile_Statics::PropPointers),
	sizeof(FWriteStringToFile),
	alignof(FWriteStringToFile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWriteStringToFile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWriteStringToFile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWriteStringToFile()
{
	if (!Z_Registration_Info_UScriptStruct_WriteStringToFile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WriteStringToFile.InnerSingleton, Z_Construct_UScriptStruct_FWriteStringToFile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WriteStringToFile.InnerSingleton;
}
// End ScriptStruct FWriteStringToFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionDebugNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConvexHullToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode_Statics::NewStructOps, TEXT("ConvexHullToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_ConvexHullToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConvexHullToMeshDataflowNode), 3595974474U) },
		{ FSphereCoveringToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSphereCoveringToMeshDataflowNode_Statics::NewStructOps, TEXT("SphereCoveringToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_SphereCoveringToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphereCoveringToMeshDataflowNode), 2647431783U) },
		{ FSphereCoveringCountSpheresNode::StaticStruct, Z_Construct_UScriptStruct_FSphereCoveringCountSpheresNode_Statics::NewStructOps, TEXT("SphereCoveringCountSpheresNode"), &Z_Registration_Info_UScriptStruct_SphereCoveringCountSpheresNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphereCoveringCountSpheresNode), 4271358497U) },
		{ FMeshToOBJStringDebugDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode_Statics::NewStructOps, TEXT("MeshToOBJStringDebugDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshToOBJStringDebugDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshToOBJStringDebugDataflowNode), 844616482U) },
		{ FWriteStringToFile::StaticStruct, Z_Construct_UScriptStruct_FWriteStringToFile_Statics::NewStructOps, TEXT("WriteStringToFile"), &Z_Registration_Info_UScriptStruct_WriteStringToFile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWriteStringToFile), 3924252443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionDebugNodes_h_1938670698(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionDebugNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionDebugNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
