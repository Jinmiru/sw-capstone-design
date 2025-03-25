// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionClusteringNodes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionClusteringNodes() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FAutoClusterDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterFlattenDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterMagnetDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterMergeDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin Enum EClusterSizeMethodEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterSizeMethodEnum;
static UEnum* EClusterSizeMethodEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClusterSizeMethodEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClusterSizeMethodEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EClusterSizeMethodEnum"));
	}
	return Z_Registration_Info_UEnum_EClusterSizeMethodEnum.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EClusterSizeMethodEnum>()
{
	return EClusterSizeMethodEnum_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_ClusterSizeMethod_ByFractionOfInput.DisplayName", "By Fraction Of Input" },
		{ "Dataflow_ClusterSizeMethod_ByFractionOfInput.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput" },
		{ "Dataflow_ClusterSizeMethod_ByGrid.DisplayName", "By Grid" },
		{ "Dataflow_ClusterSizeMethod_ByGrid.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "Dataflow_ClusterSizeMethod_ByNumber.DisplayName", "By Number" },
		{ "Dataflow_ClusterSizeMethod_ByNumber.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber" },
		{ "Dataflow_ClusterSizeMethod_BySize.DisplayName", "By Size" },
		{ "Dataflow_ClusterSizeMethod_BySize.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EClusterSizeMethodEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber },
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput },
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize },
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid },
		{ "EClusterSizeMethodEnum::Dataflow_Max", (int64)EClusterSizeMethodEnum::Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"EClusterSizeMethodEnum",
	"EClusterSizeMethodEnum",
	Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum()
{
	if (!Z_Registration_Info_UEnum_EClusterSizeMethodEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterSizeMethodEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClusterSizeMethodEnum.InnerSingleton;
}
// End Enum EClusterSizeMethodEnum

// Begin ScriptStruct FAutoClusterDataflowNode
static_assert(std::is_polymorphic<FAutoClusterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FAutoClusterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode;
class UScriptStruct* FAutoClusterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoClusterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("AutoClusterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FAutoClusterDataflowNode>()
{
	return FAutoClusterDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Automatically group pieces of a fractured Collection into a specified number of clusters\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Automatically group pieces of a fractured Collection into a specified number of clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterSizeMethod_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "Comment", "/** How to choose the size of the clusters to create */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "How to choose the size of the clusters to create" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterSites_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "Comment", "/** Use a Voronoi diagram with this many Voronoi sites as a guide for deciding cluster boundaries */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Use a Voronoi diagram with this many Voronoi sites as a guide for deciding cluster boundaries" },
		{ "UIMax", "5000" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterFraction_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "Comment", "/** Choose the number of Voronoi sites used for clustering as a fraction of the number of child bones to process */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the number of Voronoi sites used for clustering as a fraction of the number of child bones to process" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SiteSize_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMax", "10000" },
		{ "ClampMin", ".0001" },
		{ "Comment", "/** Choose the Edge-Size of the cube used to groups bones under a cluster (in cm). */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Cluster Size" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the Edge-Size of the cube used to groups bones under a cluster (in cm)." },
		{ "UIMax", "100" },
		{ "UIMin", ".01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGridWidth_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Choose the number of cluster sites to distribute along the X axis */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the number of cluster sites to distribute along the X axis" },
		{ "UIMax", "20" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGridDepth_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Choose the number of cluster sites to distribute along the Y axis */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the number of cluster sites to distribute along the Y axis" },
		{ "UIMax", "20" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGridHeight_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Choose the number of cluster sites to distribute along the Z axis */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the number of cluster sites to distribute along the Z axis" },
		{ "UIMax", "20" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftIterations_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "0" },
		{ "Comment", "/** For a grid distribution, optionally iteratively recenter the grid points to the center of the cluster geometry (technically: applying K-Means iterations) to balance the shape and distribution of the clusters */" },
		{ "DisplayName", "Grid Drift Iterations" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "For a grid distribution, optionally iteratively recenter the grid points to the center of the cluster geometry (technically: applying K-Means iterations) to balance the shape and distribution of the clusters" },
		{ "UIMax", "5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumSize_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If a cluster has volume less than this value (in cm) cubed, then the auto-cluster process will attempt to merge it into a neighboring cluster. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If a cluster has volume less than this value (in cm) cubed, then the auto-cluster process will attempt to merge it into a neighboring cluster." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferConvexity_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** Whether to favor clusters that have a convex shape. (Note: Does not support ByGrid clustering.)  */" },
		{ "EditCondition", "ClusterSizeMethod != EClusterSizeMethod::ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Whether to favor clusters that have a convex shape. (Note: Does not support ByGrid clustering.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConcavityTolerance_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** If > 0, cube root of maximum concave volume to add per cluster (ignoring concavity of individual parts) */" },
		{ "EditCondition", "bPreferConvexity && ClusterSizeMethod != EClusterSizeMethod::ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If > 0, cube root of maximum concave volume to add per cluster (ignoring concavity of individual parts)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCluster_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** If true, bones will only be added to the same cluster if they are physically connected (either directly, or via other bones in the same cluster) */" },
		{ "DisplayName", "Enforce Cluster Connectivity" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If true, bones will only be added to the same cluster if they are physically connected (either directly, or via other bones in the same cluster)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnforceSiteParameters_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** If true, make sure the site parameters are matched as close as possible ( bEnforceConnectivity can make the number of site larger than the requested input may produce without it ) */" },
		{ "EditCondition", "bEnforceConnectivity == true" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If true, make sure the site parameters are matched as close as possible ( bEnforceConnectivity can make the number of site larger than the requested input may produce without it )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidIsolated_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** If true, prevent the creation of clusters with only a single child. Either by merging into a neighboring cluster, or not creating the cluster. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If true, prevent the creation of clusters with only a single child. Either by merging into a neighboring cluster, or not creating the cluster." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to cluster */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection for the clustering */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection for the clustering" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterSizeMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterSizeMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterSites;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SiteSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGridDepth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGridHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DriftIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumSize;
	static void NewProp_bPreferConvexity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferConvexity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConcavityTolerance;
	static void NewProp_AutoCluster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoCluster;
	static void NewProp_EnforceSiteParameters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnforceSiteParameters;
	static void NewProp_AvoidIsolated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AvoidIsolated;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoClusterDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod = { "ClusterSizeMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterSizeMethod), Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterSizeMethod_MetaData), NewProp_ClusterSizeMethod_MetaData) }; // 1933828689
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites = { "ClusterSites", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterSites), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterSites_MetaData), NewProp_ClusterSites_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction = { "ClusterFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterFraction_MetaData), NewProp_ClusterFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize = { "SiteSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, SiteSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SiteSize_MetaData), NewProp_SiteSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridWidth = { "ClusterGridWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterGridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterGridWidth_MetaData), NewProp_ClusterGridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridDepth = { "ClusterGridDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterGridDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterGridDepth_MetaData), NewProp_ClusterGridDepth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridHeight = { "ClusterGridHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterGridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterGridHeight_MetaData), NewProp_ClusterGridHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_DriftIterations = { "DriftIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, DriftIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftIterations_MetaData), NewProp_DriftIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_MinimumSize = { "MinimumSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, MinimumSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumSize_MetaData), NewProp_MinimumSize_MetaData) };
void Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_bPreferConvexity_SetBit(void* Obj)
{
	((FAutoClusterDataflowNode*)Obj)->bPreferConvexity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_bPreferConvexity = { "bPreferConvexity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoClusterDataflowNode), &Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_bPreferConvexity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferConvexity_MetaData), NewProp_bPreferConvexity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ConcavityTolerance = { "ConcavityTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ConcavityTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConcavityTolerance_MetaData), NewProp_ConcavityTolerance_MetaData) };
void Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_SetBit(void* Obj)
{
	((FAutoClusterDataflowNode*)Obj)->AutoCluster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster = { "AutoCluster", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoClusterDataflowNode), &Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCluster_MetaData), NewProp_AutoCluster_MetaData) };
void Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters_SetBit(void* Obj)
{
	((FAutoClusterDataflowNode*)Obj)->EnforceSiteParameters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters = { "EnforceSiteParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoClusterDataflowNode), &Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnforceSiteParameters_MetaData), NewProp_EnforceSiteParameters_MetaData) };
void Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_SetBit(void* Obj)
{
	((FAutoClusterDataflowNode*)Obj)->AvoidIsolated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated = { "AvoidIsolated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoClusterDataflowNode), &Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidIsolated_MetaData), NewProp_AvoidIsolated_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_DriftIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_MinimumSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_bPreferConvexity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ConcavityTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"AutoClusterDataflowNode",
	Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers),
	sizeof(FAutoClusterDataflowNode),
	alignof(FAutoClusterDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutoClusterDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.InnerSingleton;
}
// End ScriptStruct FAutoClusterDataflowNode

// Begin ScriptStruct FClusterFlattenDataflowNode
static_assert(std::is_polymorphic<FClusterFlattenDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterFlattenDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode;
class UScriptStruct* FClusterFlattenDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterFlattenDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterFlattenDataflowNode>()
{
	return FClusterFlattenDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Flattens selected bones. If no selection is provided, flattens all bones to level 1\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Flattens selected bones. If no selection is provided, flattens all bones to level 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to flatten */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to flatten" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalTransformSelection_MetaData[] = {
		{ "Comment", "/** If connected, clusters under the selected bones will be flattened. If no selection is provided, all bones will be flattened to level 1. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If connected, clusters under the selected bones will be flattened. If no selection is provided, all bones will be flattened to level 1." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalTransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterFlattenDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterFlattenDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_OptionalTransformSelection = { "OptionalTransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterFlattenDataflowNode, OptionalTransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalTransformSelection_MetaData), NewProp_OptionalTransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_OptionalTransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ClusterFlattenDataflowNode",
	Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers),
	sizeof(FClusterFlattenDataflowNode),
	alignof(FClusterFlattenDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterFlattenDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.InnerSingleton;
}
// End ScriptStruct FClusterFlattenDataflowNode

// Begin ScriptStruct FClusterUnclusterDataflowNode
static_assert(std::is_polymorphic<FClusterUnclusterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterUnclusterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode;
class UScriptStruct* FClusterUnclusterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterUnclusterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterUnclusterDataflowNode>()
{
	return FClusterUnclusterDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Uncluster selected nodes\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Uncluster selected nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to uncluster */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to uncluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterUnclusterDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterUnclusterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterUnclusterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_TransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ClusterUnclusterDataflowNode",
	Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::PropPointers),
	sizeof(FClusterUnclusterDataflowNode),
	alignof(FClusterUnclusterDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.InnerSingleton;
}
// End ScriptStruct FClusterUnclusterDataflowNode

// Begin ScriptStruct FClusterDataflowNode
static_assert(std::is_polymorphic<FClusterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterDataflowNode;
class UScriptStruct* FClusterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterDataflowNode>()
{
	return FClusterDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cluster selected nodes under a new parent\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Cluster selected nodes under a new parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection on which to cluster nodes */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Collection on which to cluster nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_TransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ClusterDataflowNode",
	Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::PropPointers),
	sizeof(FClusterDataflowNode),
	alignof(FClusterDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterDataflowNode.InnerSingleton;
}
// End ScriptStruct FClusterDataflowNode

// Begin Enum EClusterNeighborSelectionMethodEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterNeighborSelectionMethodEnum;
static UEnum* EClusterNeighborSelectionMethodEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClusterNeighborSelectionMethodEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClusterNeighborSelectionMethodEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EClusterNeighborSelectionMethodEnum"));
	}
	return Z_Registration_Info_UEnum_EClusterNeighborSelectionMethodEnum.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EClusterNeighborSelectionMethodEnum>()
{
	return EClusterNeighborSelectionMethodEnum_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor.DisplayName", "Largest Neighbor" },
		{ "Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor.Name", "EClusterNeighborSelectionMethodEnum::Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor" },
		{ "Dataflow_ClusterNeighborSelectionMethod_NearestCenter.DisplayName", "Nearest Center" },
		{ "Dataflow_ClusterNeighborSelectionMethod_NearestCenter.Name", "EClusterNeighborSelectionMethodEnum::Dataflow_ClusterNeighborSelectionMethod_NearestCenter" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClusterNeighborSelectionMethodEnum::Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor", (int64)EClusterNeighborSelectionMethodEnum::Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor },
		{ "EClusterNeighborSelectionMethodEnum::Dataflow_ClusterNeighborSelectionMethod_NearestCenter", (int64)EClusterNeighborSelectionMethodEnum::Dataflow_ClusterNeighborSelectionMethod_NearestCenter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"EClusterNeighborSelectionMethodEnum",
	"EClusterNeighborSelectionMethodEnum",
	Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum()
{
	if (!Z_Registration_Info_UEnum_EClusterNeighborSelectionMethodEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterNeighborSelectionMethodEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClusterNeighborSelectionMethodEnum.InnerSingleton;
}
// End Enum EClusterNeighborSelectionMethodEnum

// Begin ScriptStruct FClusterMergeToNeighborsDataflowNode
static_assert(std::is_polymorphic<FClusterMergeToNeighborsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterMergeToNeighborsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterMergeToNeighborsDataflowNode;
class UScriptStruct* FClusterMergeToNeighborsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterMergeToNeighborsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterMergeToNeighborsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterMergeToNeighborsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterMergeToNeighborsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterMergeToNeighborsDataflowNode>()
{
	return FClusterMergeToNeighborsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Merge selected bones to their neighbors\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Merge selected bones to their neighbors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection on which to merge bones into a neighboring cluster */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Collection on which to merge bones into a neighboring cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighborSelectionMethod_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Method to choose which neighbor to merge */" },
		{ "DisplayName", "Merge To" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Method to choose which neighbor to merge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVolumeCubeRoot_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Size (cube root of volume) of minimum desired post-merge clusters; if > 0, selected clusters may be merged multiple times until the cluster size is above this value */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Min Cluster Size" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Size (cube root of volume) of minimum desired post-merge clusters; if > 0, selected clusters may be merged multiple times until the cluster size is above this value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyToConnected_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to only allow clusters to merge if their bones are connected in the proximity graph */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Whether to only allow clusters to merge if their bones are connected in the proximity graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySameParent_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to only allow clusters to merge if they have the same parent bone */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Whether to only allow clusters to merge if they have the same parent bone" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NeighborSelectionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NeighborSelectionMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolumeCubeRoot;
	static void NewProp_bOnlyToConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyToConnected;
	static void NewProp_bOnlySameParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySameParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterMergeToNeighborsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMergeToNeighborsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMergeToNeighborsDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_NeighborSelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_NeighborSelectionMethod = { "NeighborSelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMergeToNeighborsDataflowNode, NeighborSelectionMethod), Z_Construct_UEnum_GeometryCollectionNodes_EClusterNeighborSelectionMethodEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighborSelectionMethod_MetaData), NewProp_NeighborSelectionMethod_MetaData) }; // 2902361579
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_MinVolumeCubeRoot = { "MinVolumeCubeRoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMergeToNeighborsDataflowNode, MinVolumeCubeRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVolumeCubeRoot_MetaData), NewProp_MinVolumeCubeRoot_MetaData) };
void Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_bOnlyToConnected_SetBit(void* Obj)
{
	((FClusterMergeToNeighborsDataflowNode*)Obj)->bOnlyToConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_bOnlyToConnected = { "bOnlyToConnected", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClusterMergeToNeighborsDataflowNode), &Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_bOnlyToConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyToConnected_MetaData), NewProp_bOnlyToConnected_MetaData) };
void Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_bOnlySameParent_SetBit(void* Obj)
{
	((FClusterMergeToNeighborsDataflowNode*)Obj)->bOnlySameParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_bOnlySameParent = { "bOnlySameParent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClusterMergeToNeighborsDataflowNode), &Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_bOnlySameParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlySameParent_MetaData), NewProp_bOnlySameParent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_NeighborSelectionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_NeighborSelectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_MinVolumeCubeRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_bOnlyToConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewProp_bOnlySameParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ClusterMergeToNeighborsDataflowNode",
	Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::PropPointers),
	sizeof(FClusterMergeToNeighborsDataflowNode),
	alignof(FClusterMergeToNeighborsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterMergeToNeighborsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterMergeToNeighborsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterMergeToNeighborsDataflowNode.InnerSingleton;
}
// End ScriptStruct FClusterMergeToNeighborsDataflowNode

// Begin ScriptStruct FClusterMergeDataflowNode
static_assert(std::is_polymorphic<FClusterMergeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterMergeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode;
class UScriptStruct* FClusterMergeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterMergeDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterMergeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterMergeDataflowNode>()
{
	return FClusterMergeDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Merge selected bones under a new parent cluster\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Merge selected bones under a new parent cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection on which to merge bones into a cluster */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Collection on which to merge bones into a cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterMergeDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMergeDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMergeDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_TransformSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ClusterMergeDataflowNode",
	Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::PropPointers),
	sizeof(FClusterMergeDataflowNode),
	alignof(FClusterMergeDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterMergeDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.InnerSingleton;
}
// End ScriptStruct FClusterMergeDataflowNode

// Begin ScriptStruct FClusterIsolatedRootsDataflowNode
static_assert(std::is_polymorphic<FClusterIsolatedRootsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterIsolatedRootsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterIsolatedRootsDataflowNode;
class UScriptStruct* FClusterIsolatedRootsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterIsolatedRootsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterIsolatedRootsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterIsolatedRootsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterIsolatedRootsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterIsolatedRootsDataflowNode>()
{
	return FClusterIsolatedRootsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Add a single cluster to the Geometry Collection if it only has a single transform with no clusters\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Add a single cluster to the Geometry Collection if it only has a single transform with no clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to modify */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Collection to modify" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterIsolatedRootsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterIsolatedRootsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ClusterIsolatedRootsDataflowNode",
	Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::PropPointers),
	sizeof(FClusterIsolatedRootsDataflowNode),
	alignof(FClusterIsolatedRootsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterIsolatedRootsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterIsolatedRootsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterIsolatedRootsDataflowNode.InnerSingleton;
}
// End ScriptStruct FClusterIsolatedRootsDataflowNode

// Begin ScriptStruct FClusterMagnetDataflowNode
static_assert(std::is_polymorphic<FClusterMagnetDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterMagnetDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterMagnetDataflowNode;
class UScriptStruct* FClusterMagnetDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterMagnetDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterMagnetDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterMagnetDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterMagnetDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterMagnetDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterMagnetDataflowNode>()
{
	return FClusterMagnetDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cluster by grouping the selected bones with their adjacent, neighboring bones.\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Cluster by grouping the selected bones with their adjacent, neighboring bones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection on which to merge bones into a cluster */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Collection on which to merge bones into a cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "Category", "Cluster Magnet" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many layers of neighbors to include in the clusters -- i.e. if 1, only direct neighbors are clustered; if 2, neighbors of neighbors are included, etc. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Iterations" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "How many layers of neighbors to include in the clusters -- i.e. if 1, only direct neighbors are clustered; if 2, neighbors of neighbors are included, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterMagnetDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMagnetDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMagnetDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSelection_MetaData), NewProp_TransformSelection_MetaData) }; // 2980507218
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMagnetDataflowNode, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::NewProp_TransformSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::NewProp_Iterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ClusterMagnetDataflowNode",
	Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::PropPointers),
	sizeof(FClusterMagnetDataflowNode),
	alignof(FClusterMagnetDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterMagnetDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterMagnetDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterMagnetDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterMagnetDataflowNode.InnerSingleton;
}
// End ScriptStruct FClusterMagnetDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClusterSizeMethodEnum_StaticEnum, TEXT("EClusterSizeMethodEnum"), &Z_Registration_Info_UEnum_EClusterSizeMethodEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1933828689U) },
		{ EClusterNeighborSelectionMethodEnum_StaticEnum, TEXT("EClusterNeighborSelectionMethodEnum"), &Z_Registration_Info_UEnum_EClusterNeighborSelectionMethodEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2902361579U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutoClusterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewStructOps, TEXT("AutoClusterDataflowNode"), &Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoClusterDataflowNode), 90150770U) },
		{ FClusterFlattenDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewStructOps, TEXT("ClusterFlattenDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterFlattenDataflowNode), 3832789547U) },
		{ FClusterUnclusterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewStructOps, TEXT("ClusterUnclusterDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterUnclusterDataflowNode), 4278879251U) },
		{ FClusterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewStructOps, TEXT("ClusterDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterDataflowNode), 3176371564U) },
		{ FClusterMergeToNeighborsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics::NewStructOps, TEXT("ClusterMergeToNeighborsDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterMergeToNeighborsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterMergeToNeighborsDataflowNode), 1847322793U) },
		{ FClusterMergeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewStructOps, TEXT("ClusterMergeDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterMergeDataflowNode), 3893225281U) },
		{ FClusterIsolatedRootsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics::NewStructOps, TEXT("ClusterIsolatedRootsDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterIsolatedRootsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterIsolatedRootsDataflowNode), 1588905270U) },
		{ FClusterMagnetDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics::NewStructOps, TEXT("ClusterMagnetDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterMagnetDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterMagnetDataflowNode), 3242643632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_2019916202(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
