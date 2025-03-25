// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionAssetNodes() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTerminalNode();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSource();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FGeometryCollectionTerminalDataflowNode
static_assert(std::is_polymorphic<FGeometryCollectionTerminalDataflowNode>() == std::is_polymorphic<FDataflowTerminalNode>(), "USTRUCT FGeometryCollectionTerminalDataflowNode cannot be polymorphic unless super FDataflowTerminalNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode;
class UScriptStruct* FGeometryCollectionTerminalDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GeometryCollectionTerminalDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGeometryCollectionTerminalDataflowNode>()
{
	return FGeometryCollectionTerminalDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "DataflowTerminal", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array to use for this asset */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Materials" },
		{ "DisplayName", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Materials array to use for this asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshes_MetaData[] = {
		{ "Comment", "/** array of instanced meshes*/" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "InstancedMeshes" },
		{ "DisplayName", "InstancedMeshes" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "array of instanced meshes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionTerminalDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTerminalDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTerminalDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes_Inner = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, METADATA_PARAMS(0, nullptr) }; // 472253674
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionTerminalDataflowNode, InstancedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshes_MetaData), NewProp_InstancedMeshes_MetaData) }; // 472253674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowTerminalNode,
	&NewStructOps,
	"GeometryCollectionTerminalDataflowNode",
	Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::PropPointers),
	sizeof(FGeometryCollectionTerminalDataflowNode),
	alignof(FGeometryCollectionTerminalDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionTerminalDataflowNode

// Begin ScriptStruct FGetGeometryCollectionAssetDataflowNode
static_assert(std::is_polymorphic<FGetGeometryCollectionAssetDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetGeometryCollectionAssetDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode;
class UScriptStruct* FGetGeometryCollectionAssetDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetGeometryCollectionAssetDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetGeometryCollectionAssetDataflowNode>()
{
	return FGetGeometryCollectionAssetDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Current geometry collection asset \n * Note : Use with caution as this may get replaced in a near future for a more generic getAsset node\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Get Current geometry collection asset\nNote : Use with caution as this may get replaced in a near future for a more generic getAsset node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Comment", "/** Asset this data flow graph instance is assigned to */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Asset" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Asset this data flow graph instance is assigned to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetGeometryCollectionAssetDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetGeometryCollectionAssetDataflowNode, Asset), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GetGeometryCollectionAssetDataflowNode",
	Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::PropPointers),
	sizeof(FGetGeometryCollectionAssetDataflowNode),
	alignof(FGetGeometryCollectionAssetDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetGeometryCollectionAssetDataflowNode

// Begin ScriptStruct FGetGeometryCollectionSourcesDataflowNode
static_assert(std::is_polymorphic<FGetGeometryCollectionSourcesDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetGeometryCollectionSourcesDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode;
class UScriptStruct* FGetGeometryCollectionSourcesDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetGeometryCollectionSourcesDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetGeometryCollectionSourcesDataflowNode>()
{
	return FGetGeometryCollectionSourcesDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get the list of the original mesh information used to create a specific geometryc collection asset\n * each entry contains a mesh, a transform and a list of override materials\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Get the list of the original mesh information used to create a specific geometryc collection asset\neach entry contains a mesh, a transform and a list of override materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Comment", "/** Asset to get geometry sources from */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Asset" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Asset to get geometry sources from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[] = {
		{ "Comment", "/** array of geometry sources */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Sources" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "array of geometry sources" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetGeometryCollectionSourcesDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetGeometryCollectionSourcesDataflowNode, Asset), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionSource, METADATA_PARAMS(0, nullptr) }; // 189315013
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetGeometryCollectionSourcesDataflowNode, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sources_MetaData), NewProp_Sources_MetaData) }; // 189315013
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GetGeometryCollectionSourcesDataflowNode",
	Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::PropPointers),
	sizeof(FGetGeometryCollectionSourcesDataflowNode),
	alignof(FGetGeometryCollectionSourcesDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetGeometryCollectionSourcesDataflowNode

// Begin ScriptStruct FCreateGeometryCollectionFromSourcesDataflowNode
static_assert(std::is_polymorphic<FCreateGeometryCollectionFromSourcesDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCreateGeometryCollectionFromSourcesDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode;
class UScriptStruct* FCreateGeometryCollectionFromSourcesDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CreateGeometryCollectionFromSourcesDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCreateGeometryCollectionFromSourcesDataflowNode>()
{
	return FCreateGeometryCollectionFromSourcesDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * create a geometry collection from a set of geometry sources    \n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "create a geometry collection from a set of geometry sources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[] = {
		{ "Comment", "/** array of geometry sources */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Sources" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "array of geometry sources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Geometry collection newly created */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Geometry collection newly created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array to use for this asset */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Materials array to use for this asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshes_MetaData[] = {
		{ "Comment", "/** array of instanced meshes*/" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "InstancedMeshes" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "array of instanced meshes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateGeometryCollectionFromSourcesDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionSource, METADATA_PARAMS(0, nullptr) }; // 189315013
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateGeometryCollectionFromSourcesDataflowNode, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sources_MetaData), NewProp_Sources_MetaData) }; // 189315013
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateGeometryCollectionFromSourcesDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateGeometryCollectionFromSourcesDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes_Inner = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, METADATA_PARAMS(0, nullptr) }; // 472253674
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateGeometryCollectionFromSourcesDataflowNode, InstancedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshes_MetaData), NewProp_InstancedMeshes_MetaData) }; // 472253674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"CreateGeometryCollectionFromSourcesDataflowNode",
	Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::PropPointers),
	sizeof(FCreateGeometryCollectionFromSourcesDataflowNode),
	alignof(FCreateGeometryCollectionFromSourcesDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.InnerSingleton;
}
// End ScriptStruct FCreateGeometryCollectionFromSourcesDataflowNode

// Begin ScriptStruct FStaticMeshToCollectionDataflowNode
static_assert(std::is_polymorphic<FStaticMeshToCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FStaticMeshToCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode;
class UScriptStruct* FStaticMeshToCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("StaticMeshToCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FStaticMeshToCollectionDataflowNode>()
{
	return FStaticMeshToCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Create a geometry collection from a UStaticMesh\n */" },
		{ "DataflowContext", "GeometryCollection" },
		{ "DataflowGeometryCollection", "" },
		{ "DataflowTerminal", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Create a geometry collection from a UStaticMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/** Asset input */" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Asset input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetInternalFromMaterialIndex_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/** Set the internal faces from material index */" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Set the internal faces from material index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitComponents_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/** Split components */" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Split components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Geometry collection newly created */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Geometry collection newly created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array to use for this asset */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Materials array to use for this asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshes_MetaData[] = {
		{ "Comment", "/** Array of instanced meshes*/" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "InstancedMeshes" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Array of instanced meshes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_bSetInternalFromMaterialIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetInternalFromMaterialIndex;
	static void NewProp_bSplitComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshToCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
void Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSetInternalFromMaterialIndex_SetBit(void* Obj)
{
	((FStaticMeshToCollectionDataflowNode*)Obj)->bSetInternalFromMaterialIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSetInternalFromMaterialIndex = { "bSetInternalFromMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticMeshToCollectionDataflowNode), &Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSetInternalFromMaterialIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetInternalFromMaterialIndex_MetaData), NewProp_bSetInternalFromMaterialIndex_MetaData) };
void Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSplitComponents_SetBit(void* Obj)
{
	((FStaticMeshToCollectionDataflowNode*)Obj)->bSplitComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSplitComponents = { "bSplitComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticMeshToCollectionDataflowNode), &Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSplitComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitComponents_MetaData), NewProp_bSplitComponents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_InstancedMeshes_Inner = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, METADATA_PARAMS(0, nullptr) }; // 472253674
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_InstancedMeshes = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshToCollectionDataflowNode, InstancedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshes_MetaData), NewProp_InstancedMeshes_MetaData) }; // 472253674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSetInternalFromMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_bSplitComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_InstancedMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewProp_InstancedMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"StaticMeshToCollectionDataflowNode",
	Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::PropPointers),
	sizeof(FStaticMeshToCollectionDataflowNode),
	alignof(FStaticMeshToCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FStaticMeshToCollectionDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_Nodes_GeometryCollectionAssetNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeometryCollectionTerminalDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewStructOps, TEXT("GeometryCollectionTerminalDataflowNode"), &Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionTerminalDataflowNode), 273883139U) },
		{ FGetGeometryCollectionAssetDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewStructOps, TEXT("GetGeometryCollectionAssetDataflowNode"), &Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetGeometryCollectionAssetDataflowNode), 4246695841U) },
		{ FGetGeometryCollectionSourcesDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewStructOps, TEXT("GetGeometryCollectionSourcesDataflowNode"), &Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetGeometryCollectionSourcesDataflowNode), 1886797013U) },
		{ FCreateGeometryCollectionFromSourcesDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewStructOps, TEXT("CreateGeometryCollectionFromSourcesDataflowNode"), &Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateGeometryCollectionFromSourcesDataflowNode), 285798190U) },
		{ FStaticMeshToCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_Statics::NewStructOps, TEXT("StaticMeshToCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_StaticMeshToCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshToCollectionDataflowNode), 2479856744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_Nodes_GeometryCollectionAssetNodes_h_896895281(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_Nodes_GeometryCollectionAssetNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_Nodes_GeometryCollectionAssetNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
