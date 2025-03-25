// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/ClothPhysicalMeshData.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/ClothTetherData.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/PointWeightMap.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothVertBoneData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshData() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothTetherData();
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References

// Begin ScriptStruct FClothPhysicalMeshData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothPhysicalMeshData;
class UScriptStruct* FClothPhysicalMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothPhysicalMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothPhysicalMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicalMeshData, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothPhysicalMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_ClothPhysicalMeshData.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothPhysicalMeshData>()
{
	return FClothPhysicalMeshData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Spatial simulation data for a mesh. */" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Spatial simulation data for a mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Positions of each simulation vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Positions of each simulation vertex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Normal at each vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Normal at each vertex" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Color at each vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Color at each vertex" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Indices of the simulation mesh triangles\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Indices of the simulation mesh triangles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMaps_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// The weight maps, or masks, used by this mesh, sorted by their target id\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "The weight maps, or masks, used by this mesh, sorted by their target id" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseMasses_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Inverse mass for each vertex in the physical mesh\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Inverse mass for each vertex in the physical mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Indices and weights for each vertex, used to skin the mesh to create the reference pose\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Indices and weights for each vertex, used to skin the mesh to create the reference pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionVertexSet_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Valid indices to use for self collisions (reduced set of Indices)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Valid indices to use for self collisions (reduced set of Indices)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EuclideanTethers_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Long range attachment tethers, using euclidean (beeline) distance to find the closest attachment\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Long range attachment tethers, using euclidean (beeline) distance to find the closest attachment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeodesicTethers_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Long range attachment tethers, using geodesic (surface) distance to find the closest attachment\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Long range attachment tethers, using geodesic (surface) distance to find the closest attachment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBoneWeights_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Maximum number of bone weights of any vetex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Maximum number of bone weights of any vetex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFixedVerts_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistances_MetaData[] = {
		{ "Comment", "// Deprecated. Use WeightMaps instead.\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
		{ "ToolTip", "Deprecated. Use WeightMaps instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackstopDistances_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackstopRadiuses_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveMultipliers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshData.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightMaps_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WeightMaps_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeightMaps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InverseMasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InverseMasses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelfCollisionVertexSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SelfCollisionVertexSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EuclideanTethers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeodesicTethers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBoneWeights;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFixedVerts;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SelfCollisionIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelfCollisionIndices;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxDistances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackstopDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackstopDistances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackstopRadiuses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackstopRadiuses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimDriveMultipliers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimDriveMultipliers;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPhysicalMeshData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColors_MetaData), NewProp_VertexColors_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_ValueProp = { "WeightMaps", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPointWeightMap, METADATA_PARAMS(0, nullptr) }; // 1302285900
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_Key_KeyProp = { "WeightMaps_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps = { "WeightMaps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, WeightMaps), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMaps_MetaData), NewProp_WeightMaps_MetaData) }; // 1302285900
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_Inner = { "InverseMasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses = { "InverseMasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, InverseMasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseMasses_MetaData), NewProp_InverseMasses_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_Inner = { "BoneData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothVertBoneData, METADATA_PARAMS(0, nullptr) }; // 3731446729
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, BoneData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneData_MetaData), NewProp_BoneData_MetaData) }; // 3731446729
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionVertexSet_ElementProp = { "SelfCollisionVertexSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionVertexSet = { "SelfCollisionVertexSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, SelfCollisionVertexSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionVertexSet_MetaData), NewProp_SelfCollisionVertexSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_EuclideanTethers = { "EuclideanTethers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, EuclideanTethers), Z_Construct_UScriptStruct_FClothTetherData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EuclideanTethers_MetaData), NewProp_EuclideanTethers_MetaData) }; // 2860113611
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_GeodesicTethers = { "GeodesicTethers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, GeodesicTethers), Z_Construct_UScriptStruct_FClothTetherData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeodesicTethers_MetaData), NewProp_GeodesicTethers_MetaData) }; // 2860113611
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights = { "MaxBoneWeights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, MaxBoneWeights), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBoneWeights_MetaData), NewProp_MaxBoneWeights_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts = { "NumFixedVerts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, NumFixedVerts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFixedVerts_MetaData), NewProp_NumFixedVerts_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_Inner = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, SelfCollisionIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionIndices_MetaData), NewProp_SelfCollisionIndices_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_Inner = { "MaxDistances", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances = { "MaxDistances", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, MaxDistances_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistances_MetaData), NewProp_MaxDistances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_Inner = { "BackstopDistances", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances = { "BackstopDistances", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, BackstopDistances_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackstopDistances_MetaData), NewProp_BackstopDistances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_Inner = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, BackstopRadiuses_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackstopRadiuses_MetaData), NewProp_BackstopRadiuses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_Inner = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothPhysicalMeshData, AnimDriveMultipliers_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimDriveMultipliers_MetaData), NewProp_AnimDriveMultipliers_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Normals,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_VertexColors,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_WeightMaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_InverseMasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BoneData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionVertexSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionVertexSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_EuclideanTethers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_GeodesicTethers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxBoneWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_NumFixedVerts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_SelfCollisionIndices,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_MaxDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_BackstopRadiuses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewProp_AnimDriveMultipliers,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	nullptr,
	&NewStructOps,
	"ClothPhysicalMeshData",
	Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::PropPointers),
	sizeof(FClothPhysicalMeshData),
	alignof(FClothPhysicalMeshData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData()
{
	if (!Z_Registration_Info_UScriptStruct_ClothPhysicalMeshData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothPhysicalMeshData.InnerSingleton, Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothPhysicalMeshData.InnerSingleton;
}
// End ScriptStruct FClothPhysicalMeshData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothPhysicalMeshData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClothPhysicalMeshData::StaticStruct, Z_Construct_UScriptStruct_FClothPhysicalMeshData_Statics::NewStructOps, TEXT("ClothPhysicalMeshData"), &Z_Registration_Info_UScriptStruct_ClothPhysicalMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothPhysicalMeshData), 2845799348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothPhysicalMeshData_h_1729730200(TEXT("/Script/ClothingSystemRuntimeCommon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothPhysicalMeshData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothPhysicalMeshData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
