// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavMesh/RecastNavMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastNavMesh() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode();
NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode();
NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ERecastPartitioning();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavMeshResolutionParam();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Enum ERecastPartitioning
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERecastPartitioning;
static UEnum* ERecastPartitioning_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERecastPartitioning.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERecastPartitioning.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ERecastPartitioning"));
	}
	return Z_Registration_Info_UEnum_ERecastPartitioning.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ERecastPartitioning::Type>()
{
	return ERecastPartitioning_StaticEnum();
}
struct Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ChunkyMonotone.Name", "ERecastPartitioning::ChunkyMonotone" },
		{ "Comment", "// keep in sync with rcRegionPartitioning enum!\n" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "Monotone.Name", "ERecastPartitioning::Monotone" },
		{ "ToolTip", "keep in sync with rcRegionPartitioning enum!" },
		{ "Watershed.Name", "ERecastPartitioning::Watershed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERecastPartitioning::Monotone", (int64)ERecastPartitioning::Monotone },
		{ "ERecastPartitioning::Watershed", (int64)ERecastPartitioning::Watershed },
		{ "ERecastPartitioning::ChunkyMonotone", (int64)ERecastPartitioning::ChunkyMonotone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	"ERecastPartitioning",
	"ERecastPartitioning::Type",
	Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NavigationSystem_ERecastPartitioning()
{
	if (!Z_Registration_Info_UEnum_ERecastPartitioning.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERecastPartitioning.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ERecastPartitioning_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERecastPartitioning.InnerSingleton;
}
// End Enum ERecastPartitioning

// Begin Enum ENavigationLedgeSlopeFilterMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode;
static UEnum* ENavigationLedgeSlopeFilterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ENavigationLedgeSlopeFilterMode"));
	}
	return Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavigationLedgeSlopeFilterMode>()
{
	return ENavigationLedgeSlopeFilterMode_StaticEnum();
}
struct Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "None.Comment", "// Use walkableClimb value to filter\n" },
		{ "None.Name", "ENavigationLedgeSlopeFilterMode::None" },
		{ "None.ToolTip", "Use walkableClimb value to filter" },
		{ "Recast.Name", "ENavigationLedgeSlopeFilterMode::Recast" },
		{ "UseStepHeightFromAgentMaxSlope.Comment", "// Skip slope filtering\n" },
		{ "UseStepHeightFromAgentMaxSlope.Name", "ENavigationLedgeSlopeFilterMode::UseStepHeightFromAgentMaxSlope" },
		{ "UseStepHeightFromAgentMaxSlope.ToolTip", "Skip slope filtering" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavigationLedgeSlopeFilterMode::Recast", (int64)ENavigationLedgeSlopeFilterMode::Recast },
		{ "ENavigationLedgeSlopeFilterMode::None", (int64)ENavigationLedgeSlopeFilterMode::None },
		{ "ENavigationLedgeSlopeFilterMode::UseStepHeightFromAgentMaxSlope", (int64)ENavigationLedgeSlopeFilterMode::UseStepHeightFromAgentMaxSlope },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	"ENavigationLedgeSlopeFilterMode",
	"ENavigationLedgeSlopeFilterMode",
	Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode()
{
	if (!Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode.InnerSingleton;
}
// End Enum ENavigationLedgeSlopeFilterMode

// Begin ScriptStruct FRecastNavMeshGenerationProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecastNavMeshGenerationProperties;
class UScriptStruct* FRecastNavMeshGenerationProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecastNavMeshGenerationProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecastNavMeshGenerationProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("RecastNavMeshGenerationProperties"));
	}
	return Z_Registration_Info_UScriptStruct_RecastNavMeshGenerationProperties.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FRecastNavMeshGenerationProperties>()
{
	return FRecastNavMeshGenerationProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "5.2" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** maximum number of tiles NavMesh can hold */" },
		{ "editcondition", "bFixedTilePoolSize" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "maximum number of tiles NavMesh can hold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeUU_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "300.0" },
		{ "Comment", "/** size of single tile, expressed in uu */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "size of single tile, expressed in uu" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** horizontal size of voxelization cell */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "horizontal size of voxelization cell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** vertical size of voxelization cell */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "vertical size of voxelization cell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius of largest agent that can freely traverse the generated navmesh */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Radius of largest agent that can freely traverse the generated navmesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Size of the tallest agent that will path with this navmesh. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Size of the tallest agent that will path with this navmesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentMaxSlope_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "89.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The maximum slope (angle) that the agent can move on. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The maximum slope (angle) that the agent can move on." },
		{ "UIMax", "89.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentMaxStepHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Largest vertical step the agent can perform */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Largest vertical step the agent can perform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRegionArea_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The minimum dimension of area. Areas smaller than this will be discarded */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The minimum dimension of area. Areas smaller than this will be discarded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeRegionSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The size limit of regions to be merged with bigger regions (watershed partitioning only) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The size limit of regions to be merged with bigger regions (watershed partitioning only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimplificationError_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much navigable shapes can get simplified - the higher the value the more freedom */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "How much navigable shapes can get simplified - the higher the value the more freedom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileNumberHardLimit_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n\x09*\x09having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n\x09*\x09""allocated up front (subject to change, but that's where it's at now)\n\x09*\x09@note TileNumberHardLimit is always rounded up to the closest power of 2 */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n     having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n     allocated up front (subject to change, but that's where it's at now)\n     @note TileNumberHardLimit is always rounded up to the closest power of 2" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** partitioning method for creating navmesh polys */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating navmesh polys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** partitioning method for creating tile layers */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating tile layers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortNavigationAreasByCost_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** Controls whether Navigation Areas will be sorted by cost before application\n\x09 *\x09to navmesh during navmesh generation. This is relevant when there are\n\x09 *\x09""areas overlapping and we want to have area cost express area relevancy\n\x09 *\x09""as well. Setting it to true will result in having area sorted by cost,\n\x09 *\x09""but it will also increase navmesh generation cost a bit */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Controls whether Navigation Areas will be sorted by cost before application\n    to navmesh during navmesh generation. This is relevant when there are\n    areas overlapping and we want to have area cost express area relevancy\n    as well. Setting it to true will result in having area sorted by cost,\n    but it will also increase navmesh generation cost a bit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformVoxelFiltering_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** controls whether voxel filtering will be applied (via FRecastTileGenerator::ApplyVoxelFilter).\n\x09 *\x09Results in generated navmesh better fitting navigation bounds, but hits (a bit) generation performance */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "controls whether voxel filtering will be applied (via FRecastTileGenerator::ApplyVoxelFilter).\n    Results in generated navmesh better fitting navigation bounds, but hits (a bit) generation performance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkLowHeightAreas_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExtraTopCellWhenMarkingAreas_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** Expand the top of the area nav modifier's bounds by one cell height when applying to the navmesh. \n\x09    If unset, navmesh on top of surfaces might not be marked by marking bounds flush with top surfaces (since navmesh is generated slightly above collision, depending on cell height). */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Expand the top of the area nav modifier's bounds by one cell height when applying to the navmesh.\n          If unset, navmesh on top of surfaces might not be marked by marking bounds flush with top surfaces (since navmesh is generated slightly above collision, depending on cell height)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanSequences_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if set, only single low height span will be allowed under valid one */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only single low height span will be allowed under valid one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanFromTileCache_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixedTilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldPartitioned_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/* In a world partitioned map, is this navmesh using world partitioning */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "In a world partitioned map, is this navmesh using world partitioning" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TilePoolSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSizeUU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentMaxSlope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentMaxStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRegionArea;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MergeRegionSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSimplificationError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileNumberHardLimit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RegionPartitioning;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayerPartitioning;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegionChunkSplits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerChunkSplits;
	static void NewProp_bSortNavigationAreasByCost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortNavigationAreasByCost;
	static void NewProp_bPerformVoxelFiltering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformVoxelFiltering;
	static void NewProp_bMarkLowHeightAreas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkLowHeightAreas;
	static void NewProp_bUseExtraTopCellWhenMarkingAreas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExtraTopCellWhenMarkingAreas;
	static void NewProp_bFilterLowSpanSequences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanSequences;
	static void NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanFromTileCache;
	static void NewProp_bFixedTilePoolSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedTilePoolSize;
	static void NewProp_bIsWorldPartitioned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldPartitioned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecastNavMeshGenerationProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TilePoolSize = { "TilePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, TilePoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilePoolSize_MetaData), NewProp_TilePoolSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileSizeUU = { "TileSizeUU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, TileSizeUU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSizeUU_MetaData), NewProp_TileSizeUU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, CellHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellHeight_MetaData), NewProp_CellHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, AgentRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentRadius_MetaData), NewProp_AgentRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentHeight = { "AgentHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, AgentHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentHeight_MetaData), NewProp_AgentHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxSlope = { "AgentMaxSlope", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, AgentMaxSlope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentMaxSlope_MetaData), NewProp_AgentMaxSlope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxStepHeight = { "AgentMaxStepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, AgentMaxStepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentMaxStepHeight_MetaData), NewProp_AgentMaxStepHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MinRegionArea = { "MinRegionArea", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, MinRegionArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRegionArea_MetaData), NewProp_MinRegionArea_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MergeRegionSize = { "MergeRegionSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, MergeRegionSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeRegionSize_MetaData), NewProp_MergeRegionSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MaxSimplificationError = { "MaxSimplificationError", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, MaxSimplificationError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimplificationError_MetaData), NewProp_MaxSimplificationError_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileNumberHardLimit = { "TileNumberHardLimit", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, TileNumberHardLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileNumberHardLimit_MetaData), NewProp_TileNumberHardLimit_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionPartitioning = { "RegionPartitioning", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, RegionPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionPartitioning_MetaData), NewProp_RegionPartitioning_MetaData) }; // 459725418
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerPartitioning = { "LayerPartitioning", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, LayerPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerPartitioning_MetaData), NewProp_LayerPartitioning_MetaData) }; // 459725418
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionChunkSplits = { "RegionChunkSplits", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, RegionChunkSplits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionChunkSplits_MetaData), NewProp_RegionChunkSplits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerChunkSplits = { "LayerChunkSplits", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshGenerationProperties, LayerChunkSplits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerChunkSplits_MetaData), NewProp_LayerChunkSplits_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost_SetBit(void* Obj)
{
	((FRecastNavMeshGenerationProperties*)Obj)->bSortNavigationAreasByCost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost = { "bSortNavigationAreasByCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortNavigationAreasByCost_MetaData), NewProp_bSortNavigationAreasByCost_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering_SetBit(void* Obj)
{
	((FRecastNavMeshGenerationProperties*)Obj)->bPerformVoxelFiltering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering = { "bPerformVoxelFiltering", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformVoxelFiltering_MetaData), NewProp_bPerformVoxelFiltering_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas_SetBit(void* Obj)
{
	((FRecastNavMeshGenerationProperties*)Obj)->bMarkLowHeightAreas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas = { "bMarkLowHeightAreas", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkLowHeightAreas_MetaData), NewProp_bMarkLowHeightAreas_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bUseExtraTopCellWhenMarkingAreas_SetBit(void* Obj)
{
	((FRecastNavMeshGenerationProperties*)Obj)->bUseExtraTopCellWhenMarkingAreas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bUseExtraTopCellWhenMarkingAreas = { "bUseExtraTopCellWhenMarkingAreas", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bUseExtraTopCellWhenMarkingAreas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExtraTopCellWhenMarkingAreas_MetaData), NewProp_bUseExtraTopCellWhenMarkingAreas_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences_SetBit(void* Obj)
{
	((FRecastNavMeshGenerationProperties*)Obj)->bFilterLowSpanSequences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences = { "bFilterLowSpanSequences", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterLowSpanSequences_MetaData), NewProp_bFilterLowSpanSequences_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj)
{
	((FRecastNavMeshGenerationProperties*)Obj)->bFilterLowSpanFromTileCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache = { "bFilterLowSpanFromTileCache", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterLowSpanFromTileCache_MetaData), NewProp_bFilterLowSpanFromTileCache_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize_SetBit(void* Obj)
{
	((FRecastNavMeshGenerationProperties*)Obj)->bFixedTilePoolSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize = { "bFixedTilePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixedTilePoolSize_MetaData), NewProp_bFixedTilePoolSize_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bIsWorldPartitioned_SetBit(void* Obj)
{
	((FRecastNavMeshGenerationProperties*)Obj)->bIsWorldPartitioned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bIsWorldPartitioned = { "bIsWorldPartitioned", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshGenerationProperties), &Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bIsWorldPartitioned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWorldPartitioned_MetaData), NewProp_bIsWorldPartitioned_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TilePoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileSizeUU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_CellHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_AgentMaxStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MinRegionArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MergeRegionSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_MaxSimplificationError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_TileNumberHardLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionPartitioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerPartitioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_RegionChunkSplits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_LayerChunkSplits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bSortNavigationAreasByCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bPerformVoxelFiltering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bMarkLowHeightAreas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bUseExtraTopCellWhenMarkingAreas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFilterLowSpanFromTileCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bFixedTilePoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewProp_bIsWorldPartitioned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"RecastNavMeshGenerationProperties",
	Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::PropPointers),
	sizeof(FRecastNavMeshGenerationProperties),
	alignof(FRecastNavMeshGenerationProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties()
{
	if (!Z_Registration_Info_UScriptStruct_RecastNavMeshGenerationProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecastNavMeshGenerationProperties.InnerSingleton, Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecastNavMeshGenerationProperties.InnerSingleton;
}
// End ScriptStruct FRecastNavMeshGenerationProperties

// Begin Enum EHeightFieldRenderMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeightFieldRenderMode;
static UEnum* EHeightFieldRenderMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHeightFieldRenderMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHeightFieldRenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("EHeightFieldRenderMode"));
	}
	return Z_Registration_Info_UEnum_EHeightFieldRenderMode.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<EHeightFieldRenderMode>()
{
	return EHeightFieldRenderMode_StaticEnum();
}
struct Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "Solid.Name", "EHeightFieldRenderMode::Solid" },
		{ "Walkable.Name", "EHeightFieldRenderMode::Walkable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHeightFieldRenderMode::Solid", (int64)EHeightFieldRenderMode::Solid },
		{ "EHeightFieldRenderMode::Walkable", (int64)EHeightFieldRenderMode::Walkable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	"EHeightFieldRenderMode",
	"EHeightFieldRenderMode",
	Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode()
{
	if (!Z_Registration_Info_UEnum_EHeightFieldRenderMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeightFieldRenderMode.InnerSingleton, Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHeightFieldRenderMode.InnerSingleton;
}
// End Enum EHeightFieldRenderMode

// Begin ScriptStruct FRecastNavMeshTileGenerationDebug
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecastNavMeshTileGenerationDebug;
class UScriptStruct* FRecastNavMeshTileGenerationDebug::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecastNavMeshTileGenerationDebug.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecastNavMeshTileGenerationDebug.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("RecastNavMeshTileGenerationDebug"));
	}
	return Z_Registration_Info_UScriptStruct_RecastNavMeshTileGenerationDebug.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FRecastNavMeshTileGenerationDebug>()
{
	return FRecastNavMeshTileGenerationDebug::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If set, the selected internal debug data will be kept during tile generation to be displayed with the navmesh. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If set, the selected internal debug data will be kept during tile generation to be displayed with the navmesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCoordinate_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Selected tile coordinate, only this tile will have it's internal data kept.\n\x09 *  Tip: displaying the navmesh using 'Draw Tile Labels' show tile coordinates. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Selected tile coordinate, only this tile will have it's internal data kept.\nTip: displaying the navmesh using 'Draw Tile Labels' show tile coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateDebugTileOnly_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If set, the generator will only generate the tile selected to debug (set in TileCoordinate).*/" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If set, the generator will only generate the tile selected to debug (set in TileCoordinate)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollisionGeometry_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Display the collision used for the navmesh rasterization.\n\x09 * Note: The visualization is affected by the DrawOffset of the RecastNavmesh owner*/" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Display the collision used for the navmesh rasterization.\nNote: The visualization is affected by the DrawOffset of the RecastNavmesh owner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightFieldRenderMode_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeightfieldFromRasterization_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeightfieldPostInclusionBoundsFiltering_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeightfieldPostHeightFiltering_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeightfieldBounds_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompactHeightfield_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompactHeightfieldEroded_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompactHeightfieldRegions_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompactHeightfieldDistances_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileCacheLayerAreas_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileCacheLayerRegions_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipContourSimplification_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If set, the contour simplification step will be skipped. Beware that enabling this changes the way navmesh will generate when Tile Generation Debug is enabled. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If set, the contour simplification step will be skipped. Beware that enabling this changes the way navmesh will generate when Tile Generation Debug is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileCacheContours_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileCachePolyMesh_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileCacheDetailMesh_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoordinate;
	static void NewProp_bGenerateDebugTileOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateDebugTileOnly;
	static void NewProp_bCollisionGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollisionGeometry;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeightFieldRenderMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HeightFieldRenderMode;
	static void NewProp_bHeightfieldFromRasterization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeightfieldFromRasterization;
	static void NewProp_bHeightfieldPostInclusionBoundsFiltering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeightfieldPostInclusionBoundsFiltering;
	static void NewProp_bHeightfieldPostHeightFiltering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeightfieldPostHeightFiltering;
	static void NewProp_bHeightfieldBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeightfieldBounds;
	static void NewProp_bCompactHeightfield_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompactHeightfield;
	static void NewProp_bCompactHeightfieldEroded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompactHeightfieldEroded;
	static void NewProp_bCompactHeightfieldRegions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompactHeightfieldRegions;
	static void NewProp_bCompactHeightfieldDistances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompactHeightfieldDistances;
	static void NewProp_bTileCacheLayerAreas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileCacheLayerAreas;
	static void NewProp_bTileCacheLayerRegions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileCacheLayerRegions;
	static void NewProp_bSkipContourSimplification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipContourSimplification;
	static void NewProp_bTileCacheContours_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileCacheContours;
	static void NewProp_bTileCachePolyMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileCachePolyMesh;
	static void NewProp_bTileCacheDetailMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileCacheDetailMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecastNavMeshTileGenerationDebug>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_TileCoordinate = { "TileCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshTileGenerationDebug, TileCoordinate), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCoordinate_MetaData), NewProp_TileCoordinate_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bGenerateDebugTileOnly_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bGenerateDebugTileOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bGenerateDebugTileOnly = { "bGenerateDebugTileOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bGenerateDebugTileOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateDebugTileOnly_MetaData), NewProp_bGenerateDebugTileOnly_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCollisionGeometry_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bCollisionGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCollisionGeometry = { "bCollisionGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCollisionGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollisionGeometry_MetaData), NewProp_bCollisionGeometry_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_HeightFieldRenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_HeightFieldRenderMode = { "HeightFieldRenderMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastNavMeshTileGenerationDebug, HeightFieldRenderMode), Z_Construct_UEnum_NavigationSystem_EHeightFieldRenderMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightFieldRenderMode_MetaData), NewProp_HeightFieldRenderMode_MetaData) }; // 2515965569
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldFromRasterization_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bHeightfieldFromRasterization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldFromRasterization = { "bHeightfieldFromRasterization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldFromRasterization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeightfieldFromRasterization_MetaData), NewProp_bHeightfieldFromRasterization_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldPostInclusionBoundsFiltering_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bHeightfieldPostInclusionBoundsFiltering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldPostInclusionBoundsFiltering = { "bHeightfieldPostInclusionBoundsFiltering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldPostInclusionBoundsFiltering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeightfieldPostInclusionBoundsFiltering_MetaData), NewProp_bHeightfieldPostInclusionBoundsFiltering_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldPostHeightFiltering_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bHeightfieldPostHeightFiltering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldPostHeightFiltering = { "bHeightfieldPostHeightFiltering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldPostHeightFiltering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeightfieldPostHeightFiltering_MetaData), NewProp_bHeightfieldPostHeightFiltering_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldBounds_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bHeightfieldBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldBounds = { "bHeightfieldBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeightfieldBounds_MetaData), NewProp_bHeightfieldBounds_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfield_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bCompactHeightfield = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfield = { "bCompactHeightfield", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfield_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompactHeightfield_MetaData), NewProp_bCompactHeightfield_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldEroded_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bCompactHeightfieldEroded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldEroded = { "bCompactHeightfieldEroded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldEroded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompactHeightfieldEroded_MetaData), NewProp_bCompactHeightfieldEroded_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldRegions_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bCompactHeightfieldRegions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldRegions = { "bCompactHeightfieldRegions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldRegions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompactHeightfieldRegions_MetaData), NewProp_bCompactHeightfieldRegions_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldDistances_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bCompactHeightfieldDistances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldDistances = { "bCompactHeightfieldDistances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldDistances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompactHeightfieldDistances_MetaData), NewProp_bCompactHeightfieldDistances_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheLayerAreas_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bTileCacheLayerAreas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheLayerAreas = { "bTileCacheLayerAreas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheLayerAreas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileCacheLayerAreas_MetaData), NewProp_bTileCacheLayerAreas_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheLayerRegions_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bTileCacheLayerRegions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheLayerRegions = { "bTileCacheLayerRegions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheLayerRegions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileCacheLayerRegions_MetaData), NewProp_bTileCacheLayerRegions_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bSkipContourSimplification_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bSkipContourSimplification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bSkipContourSimplification = { "bSkipContourSimplification", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bSkipContourSimplification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipContourSimplification_MetaData), NewProp_bSkipContourSimplification_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheContours_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bTileCacheContours = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheContours = { "bTileCacheContours", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheContours_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileCacheContours_MetaData), NewProp_bTileCacheContours_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCachePolyMesh_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bTileCachePolyMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCachePolyMesh = { "bTileCachePolyMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCachePolyMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileCachePolyMesh_MetaData), NewProp_bTileCachePolyMesh_MetaData) };
void Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheDetailMesh_SetBit(void* Obj)
{
	((FRecastNavMeshTileGenerationDebug*)Obj)->bTileCacheDetailMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheDetailMesh = { "bTileCacheDetailMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRecastNavMeshTileGenerationDebug), &Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheDetailMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileCacheDetailMesh_MetaData), NewProp_bTileCacheDetailMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_TileCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bGenerateDebugTileOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCollisionGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_HeightFieldRenderMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_HeightFieldRenderMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldFromRasterization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldPostInclusionBoundsFiltering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldPostHeightFiltering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bHeightfieldBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldEroded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldRegions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bCompactHeightfieldDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheLayerAreas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheLayerRegions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bSkipContourSimplification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheContours,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCachePolyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewProp_bTileCacheDetailMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"RecastNavMeshTileGenerationDebug",
	Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::PropPointers),
	sizeof(FRecastNavMeshTileGenerationDebug),
	alignof(FRecastNavMeshTileGenerationDebug),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug()
{
	if (!Z_Registration_Info_UScriptStruct_RecastNavMeshTileGenerationDebug.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecastNavMeshTileGenerationDebug.InnerSingleton, Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecastNavMeshTileGenerationDebug.InnerSingleton;
}
// End ScriptStruct FRecastNavMeshTileGenerationDebug

// Begin ScriptStruct FNavMeshResolutionParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavMeshResolutionParam;
class UScriptStruct* FNavMeshResolutionParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavMeshResolutionParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavMeshResolutionParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavMeshResolutionParam, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavMeshResolutionParam"));
	}
	return Z_Registration_Info_UScriptStruct_NavMeshResolutionParam.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavMeshResolutionParam>()
{
	return FNavMeshResolutionParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Horizontal size of voxelization cell */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Horizontal size of voxelization cell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "1024.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Vertical size of voxelization cell */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Vertical size of voxelization cell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentMaxStepHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Largest vertical step the agent can perform */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Largest vertical step the agent can perform" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentMaxStepHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavMeshResolutionParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavMeshResolutionParam, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavMeshResolutionParam, CellHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellHeight_MetaData), NewProp_CellHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::NewProp_AgentMaxStepHeight = { "AgentMaxStepHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavMeshResolutionParam, AgentMaxStepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentMaxStepHeight_MetaData), NewProp_AgentMaxStepHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::NewProp_CellHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::NewProp_AgentMaxStepHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"NavMeshResolutionParam",
	Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::PropPointers),
	sizeof(FNavMeshResolutionParam),
	alignof(FNavMeshResolutionParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavMeshResolutionParam()
{
	if (!Z_Registration_Info_UScriptStruct_NavMeshResolutionParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavMeshResolutionParam.InnerSingleton, Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavMeshResolutionParam.InnerSingleton;
}
// End ScriptStruct FNavMeshResolutionParam

// Begin Class ARecastNavMesh Function K2_ReplaceAreaInTileBounds
struct Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics
{
	struct RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms
	{
		FBox Bounds;
		TSubclassOf<UNavArea> OldArea;
		TSubclassOf<UNavArea> NewArea;
		bool ReplaceLinks;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NavMesh" },
		{ "Comment", "/** @return true if any polygon/link has been touched */" },
		{ "CPP_Default_ReplaceLinks", "true" },
		{ "DisplayName", "ReplaceAreaInTileBounds" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "@return true if any polygon/link has been touched" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OldArea;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewArea;
	static void NewProp_ReplaceLinks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplaceLinks;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_OldArea = { "OldArea", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms, OldArea), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_NewArea = { "NewArea", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms, NewArea), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReplaceLinks_SetBit(void* Obj)
{
	((RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms*)Obj)->ReplaceLinks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReplaceLinks = { "ReplaceLinks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms), &Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReplaceLinks_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms), &Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_OldArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_NewArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReplaceLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecastNavMesh, nullptr, "K2_ReplaceAreaInTileBounds", nullptr, nullptr, Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::RecastNavMesh_eventK2_ReplaceAreaInTileBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARecastNavMesh::execK2_ReplaceAreaInTileBounds)
{
	P_GET_STRUCT(FBox,Z_Param_Bounds);
	P_GET_OBJECT(UClass,Z_Param_OldArea);
	P_GET_OBJECT(UClass,Z_Param_NewArea);
	P_GET_UBOOL(Z_Param_ReplaceLinks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_ReplaceAreaInTileBounds(Z_Param_Bounds,Z_Param_OldArea,Z_Param_NewArea,Z_Param_ReplaceLinks);
	P_NATIVE_END;
}
// End Class ARecastNavMesh Function K2_ReplaceAreaInTileBounds

// Begin Class ARecastNavMesh
void ARecastNavMesh::StaticRegisterNativesARecastNavMesh()
{
	UClass* Class = ARecastNavMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_ReplaceAreaInTileBounds", &ARecastNavMesh::execK2_ReplaceAreaInTileBounds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARecastNavMesh);
UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister()
{
	return ARecastNavMesh::StaticClass();
}
struct Z_Construct_UClass_ARecastNavMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering Tags Transformation Actor Layers Replication" },
		{ "IncludePath", "NavMesh/RecastNavMesh.h" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawTriangleEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw edges of every navmesh's triangle */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw edges of every navmesh's triangle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPolyEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw edges of every poly (i.e. not only border-edges)  */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw edges of every poly (i.e. not only border-edges)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFilledPolys_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** if disabled skips filling drawn navmesh polygons */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if disabled skips filling drawn navmesh polygons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawNavMeshEdges_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw border-edges */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw border-edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawTileBounds_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw the tile boundaries */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw the tile boundaries" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawTileResolutions_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw the tile resolutions */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw the tile resolutions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPathCollidingGeometry_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw input geometry passed to the navmesh generator.  Recommend disabling other geometry rendering via viewport showflags in editor. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw input geometry passed to the navmesh generator.  Recommend disabling other geometry rendering via viewport showflags in editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawTileLabels_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawTileBuildTimes_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawTileBuildTimesHeatMap_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPolygonLabels_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw a label for every poly that indicates its poly and tile indices */" },
		{ "DisplayName", "Draw Polygon Indices" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw a label for every poly that indicates its poly and tile indices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDefaultPolygonCost_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw a label for every poly that indicates its default and fixed costs */" },
		{ "DisplayName", "Draw Polygon Costs" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw a label for every poly that indicates its default and fixed costs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPolygonFlags_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw a label for every poly that indicates its poly and area flags */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw a label for every poly that indicates its poly and area flags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLabelsOnPathNodes_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawNavLinks_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFailedNavLinks_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawClusters_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw navmesh's clusters and cluster links. (Requires WITH_NAVMESH_CLUSTER_LINKS=1) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw navmesh's clusters and cluster links. (Requires WITH_NAVMESH_CLUSTER_LINKS=1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawOctree_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw octree used to store navigation relevant actors */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw octree used to store navigation relevant actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawOctreeDetails_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Draw octree used to store navigation relevant actors with the elements bounds */" },
		{ "editcondition", "bDrawOctree" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Draw octree used to store navigation relevant actors with the elements bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMarkedForbiddenPolys_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData[] = {
		{ "Comment", "/** if true, show currently rebuilding tiles differently when visualizing */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if true, show currently rebuilding tiles differently when visualizing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawOffset_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** vertical offset added to navmesh's debug representation for better readability */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "vertical offset added to navmesh's debug representation for better readability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileGenerationDebug_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixedTilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilePoolSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** maximum number of tiles NavMesh can hold */" },
		{ "editcondition", "bFixedTilePoolSize" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "maximum number of tiles NavMesh can hold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeUU_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "300.0" },
		{ "Comment", "/** size of single tile, expressed in uu */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "size of single tile, expressed in uu" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshResolutionParams_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.ENavigationDataResolution" },
		{ "Category", "Generation" },
		{ "Comment", "/** Resolution params \n\x09 * If using multiple resolutions, it's recommended to chose the highest resolution first and \n\x09 * set it according to the highest desired precision and then the other resolutions. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Resolution params\nIf using multiple resolutions, it's recommended to chose the highest resolution first and\nset it according to the highest desired precision and then the other resolutions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius of smallest agent to traverse this navmesh */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Radius of smallest agent to traverse this navmesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Size of the tallest agent that will path with this navmesh. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Size of the tallest agent that will path with this navmesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentMaxSlope_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMax", "89.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The maximum slope (angle) that the agent can move on. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The maximum slope (angle) that the agent can move on." },
		{ "UIMax", "89.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentMaxStepHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRegionArea_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The minimum dimension of area. Areas smaller than this will be discarded */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The minimum dimension of area. Areas smaller than this will be discarded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeRegionSize_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The size limit of regions to be merged with bigger regions (watershed partitioning only) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The size limit of regions to be merged with bigger regions (watershed partitioning only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerticalMergeError_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum vertical deviation between raw contour points to allowing merging (in voxel).\n\x09 * Use a low value (2-5) depending on CellHeight, AgentMaxStepHeight and AgentMaxSlope, to allow more precise contours (also see SimplificationElevationRatio).\n\x09 * Use very high value to deactivate (Recast behavior). */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Maximum vertical deviation between raw contour points to allowing merging (in voxel).\nUse a low value (2-5) depending on CellHeight, AgentMaxStepHeight and AgentMaxSlope, to allow more precise contours (also see SimplificationElevationRatio).\nUse very high value to deactivate (Recast behavior)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimplificationError_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much navigable shapes can get simplified - the higher the value the more freedom */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "How much navigable shapes can get simplified - the higher the value the more freedom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationElevationRatio_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** When simplifying contours, how much is the vertical error taken into account when comparing with MaxSimplificationError.\n\x09 * Use 0 to deactivate (Recast behavior), use 1 as a typical value. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "When simplifying contours, how much is the vertical error taken into account when comparing with MaxSimplificationError.\nUse 0 to deactivate (Recast behavior), use 1 as a typical value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sets the limit for number of asynchronous tile generators running at one time, also used for some synchronous tasks */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Sets the limit for number of asynchronous tile generators running at one time, also used for some synchronous tasks" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileNumberHardLimit_MetaData[] = {
		{ "Category", "Generation" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n\x09 *\x09having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n\x09 *\x09""allocated up front (subject to change, but that's where it's at now)\n\x09 *\x09@note TileNumberHardLimit is always rounded up to the closest power of 2 */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while\n    having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are\n    allocated up front (subject to change, but that's where it's at now)\n    @note TileNumberHardLimit is always rounded up to the closest power of 2" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolyRefTileBits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolyRefNavPolyBits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolyRefSaltBits_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshOriginOffset_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** Use this if you don't want your tiles to start at (0,0,0) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Use this if you don't want your tiles to start at (0,0,0)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDrawDistance_MetaData[] = {
		{ "Comment", "/** navmesh draw distance in game (always visible in editor) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "navmesh draw distance in game (always visible in editor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxSearchNodes_MetaData[] = {
		{ "Comment", "/** specifies default limit to A* nodes used when performing navigation queries. \n\x09 *\x09""Can be overridden by passing custom FNavigationQueryFilter */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "specifies default limit to A* nodes used when performing navigation queries.\n    Can be overridden by passing custom FNavigationQueryFilter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxHierarchicalSearchNodes_MetaData[] = {
		{ "Comment", "/** specifies default limit to A* nodes used when performing hierarchical navigation queries. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "specifies default limit to A* nodes used when performing hierarchical navigation queries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeSlopeFilterMode_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** filtering methode used for filtering ledge slopes */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "filtering methode used for filtering ledge slopes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** partitioning method for creating navmesh polys */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating navmesh polys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerPartitioning_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** partitioning method for creating tile layers */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "partitioning method for creating tile layers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerChunkSplits_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortNavigationAreasByCost_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** Controls whether Navigation Areas will be sorted by cost before application \n\x09 *\x09to navmesh during navmesh generation. This is relevant when there are\n\x09 *\x09""areas overlapping and we want to have area cost express area relevancy\n\x09 *\x09""as well. Setting it to true will result in having area sorted by cost,\n\x09 *\x09""but it will also increase navmesh generation cost a bit */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Controls whether Navigation Areas will be sorted by cost before application\n    to navmesh during navmesh generation. This is relevant when there are\n    areas overlapping and we want to have area cost express area relevancy\n    as well. Setting it to true will result in having area sorted by cost,\n    but it will also increase navmesh generation cost a bit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldPartitioned_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/* In a world partitioned map, is this navmesh using world partitioning */" },
		{ "DisplayName", "IsWorldPartitionedNavMesh" },
		{ "EditCondition", "bAllowWorldPartitionedNavMesh" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "In a world partitioned map, is this navmesh using world partitioning" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformVoxelFiltering_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** controls whether voxel filtering will be applied (via FRecastTileGenerator::ApplyVoxelFilter). \n\x09 *\x09Results in generated navmesh better fitting navigation bounds, but hits (a bit) generation performance */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "controls whether voxel filtering will be applied (via FRecastTileGenerator::ApplyVoxelFilter).\n    Results in generated navmesh better fitting navigation bounds, but hits (a bit) generation performance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkLowHeightAreas_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExtraTopCellWhenMarkingAreas_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** Expand the top of the area nav modifier's bounds by one cell height when applying to the navmesh.\n\x09\x09If unset, navmesh on top of surfaces might not be marked by marking bounds flush with top surfaces (since navmesh is generated slightly above collision, depending on cell height). */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Expand the top of the area nav modifier's bounds by one cell height when applying to the navmesh.\n              If unset, navmesh on top of surfaces might not be marked by marking bounds flush with top surfaces (since navmesh is generated slightly above collision, depending on cell height)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanSequences_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if set, only single low height span will be allowed under valid one */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only single low height span will be allowed under valid one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterLowSpanFromTileCache_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoFullyAsyncNavDataGathering_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** if set, navmesh data gathering will never happen on the game thread and will only be done on background threads */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "if set, navmesh data gathering will never happen on the game thread and will only be done on background threads" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBetterOffsetsFromCorners_MetaData[] = {
		{ "Comment", "/** TODO: switch to disable new code from OffsetFromCorners if necessary - remove it later */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "TODO: switch to disable new code from OffsetFromCorners if necessary - remove it later" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStoreEmptyTileLayers_MetaData[] = {
		{ "Comment", "/** If set, tiles generated without any navmesh data will be marked to distinguish them from not generated / streamed out ones. Defaults to false. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If set, tiles generated without any navmesh data will be marked to distinguish them from not generated / streamed out ones. Defaults to false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVirtualFilters_MetaData[] = {
		{ "Comment", "/** Indicates whether default navigation filters will use virtual functions. Defaults to true. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Indicates whether default navigation filters will use virtual functions. Defaults to true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVirtualGeometryFilteringAndDirtying_MetaData[] = {
		{ "Comment", "/** Indicates whether use the virtual methods to check if an object should generate geometry or if we should call the normal method directly (i.e. FNavigationOctreeElement::ShouldUseGeometry).\n\x09 *  If enabled, will also check if an object requesting an update on the navmesh is excluded to avoid dirtying the areas unnecessarily.\n\x09 *  Defaults to false. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Indicates whether use the virtual methods to check if an object should generate geometry or if we should call the normal method directly (i.e. FNavigationOctreeElement::ShouldUseGeometry).\nIf enabled, will also check if an object requesting an update on the navmesh is excluded to avoid dirtying the areas unnecessarily.\nDefaults to false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNavLinkAsPathEnd_MetaData[] = {
		{ "Comment", "/** If set, paths can end at navlink poly (not the ground one!) */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If set, paths can end at navlink poly (not the ground one!)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSliceFilterLedgeSpansMaxYProcess_MetaData[] = {
		{ "Category", "TimeSlicing" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The maximum number of y coords to process when time slicing filter ledge spans during navmesh regeneration. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "The maximum number of y coords to process when time slicing filter ledge spans during navmesh regeneration." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSliceLongDurationDebug_MetaData[] = {
		{ "Category", "TimeSlicing" },
		{ "Comment", "/** If a single time sliced section of navmesh regen code exceeds this duration then it will trigger debug logging */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If a single time sliced section of navmesh regen code exceeds this duration then it will trigger debug logging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvokerTilePriorityBumpDistanceThresholdInTileUnits_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** If >= 1, when sorting pending tiles by priority, tiles near invokers (within the distance threshold) will have their priority increased. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "If >= 1, when sorting pending tiles by priority, tiles near invokers (within the distance threshold) will have their priority increased." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvokerTilePriorityBumpIncrease_MetaData[] = {
		{ "Category", "Generation" },
		{ "Comment", "/** Priority increase steps for tiles that are withing near distance. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Priority increase steps for tiles that are withing near distance." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowWorldPartitionedNavMesh_MetaData[] = {
		{ "Comment", "/** World partitioned navmesh are only allowed in partitioned worlds. */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "World partitioned navmesh are only allowed in partitioned worlds." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVoxelCache_MetaData[] = {
		{ "Comment", "/** Cache rasterized voxels instead of just collision vertices/indices in navigation octree */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Cache rasterized voxels instead of just collision vertices/indices in navigation octree" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSetUpdateInterval_MetaData[] = {
		{ "Comment", "/** indicates how often we will sort navigation tiles to mach players position */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "indicates how often we will sort navigation tiles to mach players position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeuristicScale_MetaData[] = {
		{ "Category", "Query" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Euclidean distance heuristic scale used while pathfinding */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Euclidean distance heuristic scale used while pathfinding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalDeviationFromGroundCompensation_MetaData[] = {
		{ "Category", "Query" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Value added to each search height to compensate for error between navmesh polys and walkable geometry  */" },
		{ "ModuleRelativePath", "Public/NavMesh/RecastNavMesh.h" },
		{ "ToolTip", "Value added to each search height to compensate for error between navmesh polys and walkable geometry" },
	};
#endif // WITH_METADATA
	static void NewProp_bDrawTriangleEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawTriangleEdges;
	static void NewProp_bDrawPolyEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPolyEdges;
	static void NewProp_bDrawFilledPolys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFilledPolys;
	static void NewProp_bDrawNavMeshEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNavMeshEdges;
	static void NewProp_bDrawTileBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawTileBounds;
	static void NewProp_bDrawTileResolutions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawTileResolutions;
	static void NewProp_bDrawPathCollidingGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPathCollidingGeometry;
	static void NewProp_bDrawTileLabels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawTileLabels;
	static void NewProp_bDrawTileBuildTimes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawTileBuildTimes;
	static void NewProp_bDrawTileBuildTimesHeatMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawTileBuildTimesHeatMap;
	static void NewProp_bDrawPolygonLabels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPolygonLabels;
	static void NewProp_bDrawDefaultPolygonCost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDefaultPolygonCost;
	static void NewProp_bDrawPolygonFlags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPolygonFlags;
	static void NewProp_bDrawLabelsOnPathNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLabelsOnPathNodes;
	static void NewProp_bDrawNavLinks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNavLinks;
	static void NewProp_bDrawFailedNavLinks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFailedNavLinks;
	static void NewProp_bDrawClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawClusters;
	static void NewProp_bDrawOctree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawOctree;
	static void NewProp_bDrawOctreeDetails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawOctreeDetails;
	static void NewProp_bDrawMarkedForbiddenPolys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMarkedForbiddenPolys;
	static void NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDistinctlyDrawTilesBeingBuilt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileGenerationDebug;
	static void NewProp_bFixedTilePoolSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedTilePoolSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TilePoolSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSizeUU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavMeshResolutionParams;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentMaxSlope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentMaxStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRegionArea;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MergeRegionSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxVerticalMergeError;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSimplificationError;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationElevationRatio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSimultaneousTileGenerationJobsCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileNumberHardLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolyRefTileBits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolyRefNavPolyBits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolyRefSaltBits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavMeshOriginOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDrawDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxSearchNodes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxHierarchicalSearchNodes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LedgeSlopeFilterMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LedgeSlopeFilterMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RegionPartitioning;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayerPartitioning;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegionChunkSplits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerChunkSplits;
	static void NewProp_bSortNavigationAreasByCost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortNavigationAreasByCost;
	static void NewProp_bIsWorldPartitioned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldPartitioned;
	static void NewProp_bPerformVoxelFiltering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformVoxelFiltering;
	static void NewProp_bMarkLowHeightAreas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkLowHeightAreas;
	static void NewProp_bUseExtraTopCellWhenMarkingAreas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExtraTopCellWhenMarkingAreas;
	static void NewProp_bFilterLowSpanSequences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanSequences;
	static void NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterLowSpanFromTileCache;
	static void NewProp_bDoFullyAsyncNavDataGathering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoFullyAsyncNavDataGathering;
	static void NewProp_bUseBetterOffsetsFromCorners_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBetterOffsetsFromCorners;
	static void NewProp_bStoreEmptyTileLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreEmptyTileLayers;
	static void NewProp_bUseVirtualFilters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVirtualFilters;
	static void NewProp_bUseVirtualGeometryFilteringAndDirtying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVirtualGeometryFilteringAndDirtying;
	static void NewProp_bAllowNavLinkAsPathEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNavLinkAsPathEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeSliceFilterLedgeSpansMaxYProcess;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeSliceLongDurationDebug;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_InvokerTilePriorityBumpDistanceThresholdInTileUnits;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InvokerTilePriorityBumpIncrease;
#if WITH_EDITORONLY_DATA
	static void NewProp_bAllowWorldPartitionedNavMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWorldPartitionedNavMesh;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bUseVoxelCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVoxelCache;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSetUpdateInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeuristicScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalDeviationFromGroundCompensation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARecastNavMesh_K2_ReplaceAreaInTileBounds, "K2_ReplaceAreaInTileBounds" }, // 775381624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecastNavMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawTriangleEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges = { "bDrawTriangleEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawTriangleEdges_MetaData), NewProp_bDrawTriangleEdges_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawPolyEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges = { "bDrawPolyEdges", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawPolyEdges_MetaData), NewProp_bDrawPolyEdges_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawFilledPolys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys = { "bDrawFilledPolys", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawFilledPolys_MetaData), NewProp_bDrawFilledPolys_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawNavMeshEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges = { "bDrawNavMeshEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawNavMeshEdges_MetaData), NewProp_bDrawNavMeshEdges_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawTileBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds = { "bDrawTileBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawTileBounds_MetaData), NewProp_bDrawTileBounds_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileResolutions_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawTileResolutions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileResolutions = { "bDrawTileResolutions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileResolutions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawTileResolutions_MetaData), NewProp_bDrawTileResolutions_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawPathCollidingGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry = { "bDrawPathCollidingGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawPathCollidingGeometry_MetaData), NewProp_bDrawPathCollidingGeometry_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawTileLabels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels = { "bDrawTileLabels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawTileLabels_MetaData), NewProp_bDrawTileLabels_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimes_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawTileBuildTimes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimes = { "bDrawTileBuildTimes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawTileBuildTimes_MetaData), NewProp_bDrawTileBuildTimes_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimesHeatMap_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawTileBuildTimesHeatMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimesHeatMap = { "bDrawTileBuildTimesHeatMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimesHeatMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawTileBuildTimesHeatMap_MetaData), NewProp_bDrawTileBuildTimesHeatMap_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawPolygonLabels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels = { "bDrawPolygonLabels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawPolygonLabels_MetaData), NewProp_bDrawPolygonLabels_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawDefaultPolygonCost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost = { "bDrawDefaultPolygonCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDefaultPolygonCost_MetaData), NewProp_bDrawDefaultPolygonCost_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonFlags_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawPolygonFlags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonFlags = { "bDrawPolygonFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonFlags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawPolygonFlags_MetaData), NewProp_bDrawPolygonFlags_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawLabelsOnPathNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes = { "bDrawLabelsOnPathNodes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawLabelsOnPathNodes_MetaData), NewProp_bDrawLabelsOnPathNodes_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawNavLinks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks = { "bDrawNavLinks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawNavLinks_MetaData), NewProp_bDrawNavLinks_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawFailedNavLinks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks = { "bDrawFailedNavLinks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawFailedNavLinks_MetaData), NewProp_bDrawFailedNavLinks_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters = { "bDrawClusters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawClusters_MetaData), NewProp_bDrawClusters_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawOctree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree = { "bDrawOctree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawOctree_MetaData), NewProp_bDrawOctree_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawOctreeDetails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails = { "bDrawOctreeDetails", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawOctreeDetails_MetaData), NewProp_bDrawOctreeDetails_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDrawMarkedForbiddenPolys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys = { "bDrawMarkedForbiddenPolys", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawMarkedForbiddenPolys_MetaData), NewProp_bDrawMarkedForbiddenPolys_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDistinctlyDrawTilesBeingBuilt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt = { "bDistinctlyDrawTilesBeingBuilt", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData), NewProp_bDistinctlyDrawTilesBeingBuilt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset = { "DrawOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, DrawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawOffset_MetaData), NewProp_DrawOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileGenerationDebug = { "TileGenerationDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, TileGenerationDebug), Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileGenerationDebug_MetaData), NewProp_TileGenerationDebug_MetaData) }; // 1990360997
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bFixedTilePoolSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize = { "bFixedTilePoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixedTilePoolSize_MetaData), NewProp_bFixedTilePoolSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize = { "TilePoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, TilePoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilePoolSize_MetaData), NewProp_TilePoolSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU = { "TileSizeUU", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, TileSizeUU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSizeUU_MetaData), NewProp_TileSizeUU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, CellHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellHeight_MetaData), NewProp_CellHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshResolutionParams = { "NavMeshResolutionParams", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NavMeshResolutionParams, ARecastNavMesh), STRUCT_OFFSET(ARecastNavMesh, NavMeshResolutionParams), Z_Construct_UScriptStruct_FNavMeshResolutionParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshResolutionParams_MetaData), NewProp_NavMeshResolutionParams_MetaData) }; // 2421306093
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, AgentRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentRadius_MetaData), NewProp_AgentRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight = { "AgentHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, AgentHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentHeight_MetaData), NewProp_AgentHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope = { "AgentMaxSlope", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, AgentMaxSlope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentMaxSlope_MetaData), NewProp_AgentMaxSlope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight = { "AgentMaxStepHeight", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, AgentMaxStepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentMaxStepHeight_MetaData), NewProp_AgentMaxStepHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea = { "MinRegionArea", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, MinRegionArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRegionArea_MetaData), NewProp_MinRegionArea_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize = { "MergeRegionSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, MergeRegionSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeRegionSize_MetaData), NewProp_MergeRegionSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxVerticalMergeError = { "MaxVerticalMergeError", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, MaxVerticalMergeError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVerticalMergeError_MetaData), NewProp_MaxVerticalMergeError_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError = { "MaxSimplificationError", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, MaxSimplificationError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimplificationError_MetaData), NewProp_MaxSimplificationError_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_SimplificationElevationRatio = { "SimplificationElevationRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, SimplificationElevationRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplificationElevationRatio_MetaData), NewProp_SimplificationElevationRatio_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount = { "MaxSimultaneousTileGenerationJobsCount", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, MaxSimultaneousTileGenerationJobsCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData), NewProp_MaxSimultaneousTileGenerationJobsCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit = { "TileNumberHardLimit", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, TileNumberHardLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileNumberHardLimit_MetaData), NewProp_TileNumberHardLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits = { "PolyRefTileBits", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, PolyRefTileBits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolyRefTileBits_MetaData), NewProp_PolyRefTileBits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits = { "PolyRefNavPolyBits", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, PolyRefNavPolyBits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolyRefNavPolyBits_MetaData), NewProp_PolyRefNavPolyBits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits = { "PolyRefSaltBits", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, PolyRefSaltBits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolyRefSaltBits_MetaData), NewProp_PolyRefSaltBits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset = { "NavMeshOriginOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, NavMeshOriginOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshOriginOffset_MetaData), NewProp_NavMeshOriginOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance = { "DefaultDrawDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, DefaultDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDrawDistance_MetaData), NewProp_DefaultDrawDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes = { "DefaultMaxSearchNodes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, DefaultMaxSearchNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaxSearchNodes_MetaData), NewProp_DefaultMaxSearchNodes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes = { "DefaultMaxHierarchicalSearchNodes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, DefaultMaxHierarchicalSearchNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaxHierarchicalSearchNodes_MetaData), NewProp_DefaultMaxHierarchicalSearchNodes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LedgeSlopeFilterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LedgeSlopeFilterMode = { "LedgeSlopeFilterMode", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, LedgeSlopeFilterMode), Z_Construct_UEnum_NavigationSystem_ENavigationLedgeSlopeFilterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeSlopeFilterMode_MetaData), NewProp_LedgeSlopeFilterMode_MetaData) }; // 3240801069
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning = { "RegionPartitioning", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, RegionPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionPartitioning_MetaData), NewProp_RegionPartitioning_MetaData) }; // 459725418
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning = { "LayerPartitioning", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, LayerPartitioning), Z_Construct_UEnum_NavigationSystem_ERecastPartitioning, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerPartitioning_MetaData), NewProp_LayerPartitioning_MetaData) }; // 459725418
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits = { "RegionChunkSplits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, RegionChunkSplits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionChunkSplits_MetaData), NewProp_RegionChunkSplits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits = { "LayerChunkSplits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, LayerChunkSplits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerChunkSplits_MetaData), NewProp_LayerChunkSplits_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bSortNavigationAreasByCost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost = { "bSortNavigationAreasByCost", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortNavigationAreasByCost_MetaData), NewProp_bSortNavigationAreasByCost_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bIsWorldPartitioned_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bIsWorldPartitioned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bIsWorldPartitioned = { "bIsWorldPartitioned", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bIsWorldPartitioned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWorldPartitioned_MetaData), NewProp_bIsWorldPartitioned_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bPerformVoxelFiltering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering = { "bPerformVoxelFiltering", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformVoxelFiltering_MetaData), NewProp_bPerformVoxelFiltering_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bMarkLowHeightAreas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas = { "bMarkLowHeightAreas", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkLowHeightAreas_MetaData), NewProp_bMarkLowHeightAreas_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseExtraTopCellWhenMarkingAreas_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bUseExtraTopCellWhenMarkingAreas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseExtraTopCellWhenMarkingAreas = { "bUseExtraTopCellWhenMarkingAreas", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseExtraTopCellWhenMarkingAreas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExtraTopCellWhenMarkingAreas_MetaData), NewProp_bUseExtraTopCellWhenMarkingAreas_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bFilterLowSpanSequences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences = { "bFilterLowSpanSequences", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterLowSpanSequences_MetaData), NewProp_bFilterLowSpanSequences_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bFilterLowSpanFromTileCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache = { "bFilterLowSpanFromTileCache", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterLowSpanFromTileCache_MetaData), NewProp_bFilterLowSpanFromTileCache_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bDoFullyAsyncNavDataGathering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering = { "bDoFullyAsyncNavDataGathering", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoFullyAsyncNavDataGathering_MetaData), NewProp_bDoFullyAsyncNavDataGathering_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bUseBetterOffsetsFromCorners = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners = { "bUseBetterOffsetsFromCorners", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBetterOffsetsFromCorners_MetaData), NewProp_bUseBetterOffsetsFromCorners_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bStoreEmptyTileLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers = { "bStoreEmptyTileLayers", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStoreEmptyTileLayers_MetaData), NewProp_bStoreEmptyTileLayers_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bUseVirtualFilters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters = { "bUseVirtualFilters", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVirtualFilters_MetaData), NewProp_bUseVirtualFilters_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualGeometryFilteringAndDirtying_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bUseVirtualGeometryFilteringAndDirtying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualGeometryFilteringAndDirtying = { "bUseVirtualGeometryFilteringAndDirtying", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualGeometryFilteringAndDirtying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVirtualGeometryFilteringAndDirtying_MetaData), NewProp_bUseVirtualGeometryFilteringAndDirtying_MetaData) };
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bAllowNavLinkAsPathEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd = { "bAllowNavLinkAsPathEnd", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNavLinkAsPathEnd_MetaData), NewProp_bAllowNavLinkAsPathEnd_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TimeSliceFilterLedgeSpansMaxYProcess = { "TimeSliceFilterLedgeSpansMaxYProcess", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, TimeSliceFilterLedgeSpansMaxYProcess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSliceFilterLedgeSpansMaxYProcess_MetaData), NewProp_TimeSliceFilterLedgeSpansMaxYProcess_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TimeSliceLongDurationDebug = { "TimeSliceLongDurationDebug", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, TimeSliceLongDurationDebug), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSliceLongDurationDebug_MetaData), NewProp_TimeSliceLongDurationDebug_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_InvokerTilePriorityBumpDistanceThresholdInTileUnits = { "InvokerTilePriorityBumpDistanceThresholdInTileUnits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, InvokerTilePriorityBumpDistanceThresholdInTileUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvokerTilePriorityBumpDistanceThresholdInTileUnits_MetaData), NewProp_InvokerTilePriorityBumpDistanceThresholdInTileUnits_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_InvokerTilePriorityBumpIncrease = { "InvokerTilePriorityBumpIncrease", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, InvokerTilePriorityBumpIncrease), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvokerTilePriorityBumpIncrease_MetaData), NewProp_InvokerTilePriorityBumpIncrease_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowWorldPartitionedNavMesh_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bAllowWorldPartitionedNavMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowWorldPartitionedNavMesh = { "bAllowWorldPartitionedNavMesh", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowWorldPartitionedNavMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowWorldPartitionedNavMesh_MetaData), NewProp_bAllowWorldPartitionedNavMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_SetBit(void* Obj)
{
	((ARecastNavMesh*)Obj)->bUseVoxelCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache = { "bUseVoxelCache", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ARecastNavMesh), &Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVoxelCache_MetaData), NewProp_bUseVoxelCache_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval = { "TileSetUpdateInterval", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, TileSetUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSetUpdateInterval_MetaData), NewProp_TileSetUpdateInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale = { "HeuristicScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, HeuristicScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeuristicScale_MetaData), NewProp_HeuristicScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation = { "VerticalDeviationFromGroundCompensation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARecastNavMesh, VerticalDeviationFromGroundCompensation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalDeviationFromGroundCompensation_MetaData), NewProp_VerticalDeviationFromGroundCompensation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTriangleEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolyEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFilledPolys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavMeshEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileResolutions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPathCollidingGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawTileBuildTimesHeatMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawDefaultPolygonCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawPolygonFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawLabelsOnPathNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawNavLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawFailedNavLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawOctreeDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDrawMarkedForbiddenPolys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDistinctlyDrawTilesBeingBuilt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DrawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileGenerationDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFixedTilePoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TilePoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSizeUU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_CellHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshResolutionParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_AgentMaxStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MinRegionArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MergeRegionSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxVerticalMergeError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimplificationError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_SimplificationElevationRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_MaxSimultaneousTileGenerationJobsCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileNumberHardLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefTileBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefNavPolyBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_PolyRefSaltBits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_NavMeshOriginOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxSearchNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_DefaultMaxHierarchicalSearchNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LedgeSlopeFilterMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LedgeSlopeFilterMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionPartitioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerPartitioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_RegionChunkSplits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_LayerChunkSplits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bSortNavigationAreasByCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bIsWorldPartitioned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bPerformVoxelFiltering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bMarkLowHeightAreas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseExtraTopCellWhenMarkingAreas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bFilterLowSpanFromTileCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bDoFullyAsyncNavDataGathering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseBetterOffsetsFromCorners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bStoreEmptyTileLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVirtualGeometryFilteringAndDirtying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowNavLinkAsPathEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TimeSliceFilterLedgeSpansMaxYProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TimeSliceLongDurationDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_InvokerTilePriorityBumpDistanceThresholdInTileUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_InvokerTilePriorityBumpIncrease,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bAllowWorldPartitionedNavMesh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_bUseVoxelCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_TileSetUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_HeuristicScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecastNavMesh_Statics::NewProp_VerticalDeviationFromGroundCompensation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARecastNavMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANavigationData,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARecastNavMesh_Statics::ClassParams = {
	&ARecastNavMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::PropPointers),
	0,
	0x008802A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARecastNavMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_ARecastNavMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARecastNavMesh()
{
	if (!Z_Registration_Info_UClass_ARecastNavMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARecastNavMesh.OuterSingleton, Z_Construct_UClass_ARecastNavMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARecastNavMesh.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ARecastNavMesh>()
{
	return ARecastNavMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARecastNavMesh);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ARecastNavMesh)
// End Class ARecastNavMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERecastPartitioning_StaticEnum, TEXT("ERecastPartitioning"), &Z_Registration_Info_UEnum_ERecastPartitioning, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 459725418U) },
		{ ENavigationLedgeSlopeFilterMode_StaticEnum, TEXT("ENavigationLedgeSlopeFilterMode"), &Z_Registration_Info_UEnum_ENavigationLedgeSlopeFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3240801069U) },
		{ EHeightFieldRenderMode_StaticEnum, TEXT("EHeightFieldRenderMode"), &Z_Registration_Info_UEnum_EHeightFieldRenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2515965569U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecastNavMeshGenerationProperties::StaticStruct, Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics::NewStructOps, TEXT("RecastNavMeshGenerationProperties"), &Z_Registration_Info_UScriptStruct_RecastNavMeshGenerationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecastNavMeshGenerationProperties), 2626503971U) },
		{ FRecastNavMeshTileGenerationDebug::StaticStruct, Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics::NewStructOps, TEXT("RecastNavMeshTileGenerationDebug"), &Z_Registration_Info_UScriptStruct_RecastNavMeshTileGenerationDebug, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecastNavMeshTileGenerationDebug), 1990360997U) },
		{ FNavMeshResolutionParam::StaticStruct, Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics::NewStructOps, TEXT("NavMeshResolutionParam"), &Z_Registration_Info_UScriptStruct_NavMeshResolutionParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavMeshResolutionParam), 2421306093U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARecastNavMesh, ARecastNavMesh::StaticClass, TEXT("ARecastNavMesh"), &Z_Registration_Info_UClass_ARecastNavMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARecastNavMesh), 2899584998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_127933195(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
