// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDescriptionBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBase();
MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBase_NoRegister();
MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeID();
MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID();
MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonID();
MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FTriangleID();
MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexID();
MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID();
UPackage* Z_Construct_UPackage__Script_MeshDescription();
// End Cross Module References

// Begin Class UMeshDescriptionBase Function ComputePolygonTriangulation
struct Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics
{
	struct MeshDescriptionBase_eventComputePolygonTriangulation_Parms
	{
		FPolygonID PolygonID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Generates triangles and internal edges for the given polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Generates triangles and internal edges for the given polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventComputePolygonTriangulation_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::NewProp_PolygonID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ComputePolygonTriangulation", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::MeshDescriptionBase_eventComputePolygonTriangulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::MeshDescriptionBase_eventComputePolygonTriangulation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execComputePolygonTriangulation)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputePolygonTriangulation(Z_Param_PolygonID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function ComputePolygonTriangulation

// Begin Class UMeshDescriptionBase Function CreateEdge
struct Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics
{
	struct MeshDescriptionBase_eventCreateEdge_Parms
	{
		FVertexID VertexID0;
		FVertexID VertexID1;
		FEdgeID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new edge to the mesh and returns its ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new edge to the mesh and returns its ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_VertexID0 = { "VertexID0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdge_Parms, VertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_VertexID1 = { "VertexID1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdge_Parms, VertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdge_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_VertexID0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_VertexID1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateEdge", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::MeshDescriptionBase_eventCreateEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::MeshDescriptionBase_eventCreateEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreateEdge)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID0);
	P_GET_STRUCT(FVertexID,Z_Param_VertexID1);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEdgeID*)Z_Param__Result=P_THIS->CreateEdge(Z_Param_VertexID0,Z_Param_VertexID1);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreateEdge

// Begin Class UMeshDescriptionBase Function CreateEdgeWithID
struct Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics
{
	struct MeshDescriptionBase_eventCreateEdgeWithID_Parms
	{
		FEdgeID EdgeID;
		FVertexID VertexID0;
		FVertexID VertexID1;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new edge to the mesh with the given ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new edge to the mesh with the given ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdgeWithID_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_VertexID0 = { "VertexID0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdgeWithID_Parms, VertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_VertexID1 = { "VertexID1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateEdgeWithID_Parms, VertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_VertexID0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::NewProp_VertexID1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateEdgeWithID", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::MeshDescriptionBase_eventCreateEdgeWithID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::MeshDescriptionBase_eventCreateEdgeWithID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreateEdgeWithID)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_GET_STRUCT(FVertexID,Z_Param_VertexID0);
	P_GET_STRUCT(FVertexID,Z_Param_VertexID1);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateEdgeWithID(Z_Param_EdgeID,Z_Param_VertexID0,Z_Param_VertexID1);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreateEdgeWithID

// Begin Class UMeshDescriptionBase Function CreatePolygon
struct Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics
{
	struct MeshDescriptionBase_eventCreatePolygon_Parms
	{
		FPolygonGroupID PolygonGroupID;
		TArray<FVertexInstanceID> VertexInstanceIDs;
		TArray<FEdgeID> NewEdgeIDs;
		FPolygonID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new polygon to the mesh and returns its ID. This will also make any missing edges, and all constituent triangles. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new polygon to the mesh and returns its ID. This will also make any missing edges, and all constituent triangles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewEdgeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewEdgeIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygon_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_VertexInstanceIDs_Inner = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_VertexInstanceIDs = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygon_Parms, VertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_NewEdgeIDs_Inner = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_NewEdgeIDs = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygon_Parms, NewEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_PolygonGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_VertexInstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_VertexInstanceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_NewEdgeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_NewEdgeIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreatePolygon", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::MeshDescriptionBase_eventCreatePolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::MeshDescriptionBase_eventCreatePolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreatePolygon)
{
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDs);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_NewEdgeIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPolygonID*)Z_Param__Result=P_THIS->CreatePolygon(Z_Param_PolygonGroupID,Z_Param_Out_VertexInstanceIDs,Z_Param_Out_NewEdgeIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreatePolygon

// Begin Class UMeshDescriptionBase Function CreatePolygonGroup
struct Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics
{
	struct MeshDescriptionBase_eventCreatePolygonGroup_Parms
	{
		FPolygonGroupID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new polygon group to the mesh and returns its ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new polygon group to the mesh and returns its ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreatePolygonGroup", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::MeshDescriptionBase_eventCreatePolygonGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::MeshDescriptionBase_eventCreatePolygonGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreatePolygonGroup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPolygonGroupID*)Z_Param__Result=P_THIS->CreatePolygonGroup();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreatePolygonGroup

// Begin Class UMeshDescriptionBase Function CreatePolygonGroupWithID
struct Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics
{
	struct MeshDescriptionBase_eventCreatePolygonGroupWithID_Parms
	{
		FPolygonGroupID PolygonGroupID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new polygon group to the mesh with the given ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new polygon group to the mesh with the given ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonGroupWithID_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::NewProp_PolygonGroupID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreatePolygonGroupWithID", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::MeshDescriptionBase_eventCreatePolygonGroupWithID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::MeshDescriptionBase_eventCreatePolygonGroupWithID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreatePolygonGroupWithID)
{
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreatePolygonGroupWithID(Z_Param_PolygonGroupID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreatePolygonGroupWithID

// Begin Class UMeshDescriptionBase Function CreatePolygonWithID
struct Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics
{
	struct MeshDescriptionBase_eventCreatePolygonWithID_Parms
	{
		FPolygonID PolygonID;
		FPolygonGroupID PolygonGroupID;
		TArray<FVertexInstanceID> VertexInstanceIDs;
		TArray<FEdgeID> NewEdgeIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new polygon to the mesh with the given ID. This will also make any missing edges, and all constituent triangles. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new polygon to the mesh with the given ID. This will also make any missing edges, and all constituent triangles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewEdgeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewEdgeIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonWithID_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonWithID_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_VertexInstanceIDs_Inner = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_VertexInstanceIDs = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonWithID_Parms, VertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_NewEdgeIDs_Inner = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_NewEdgeIDs = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreatePolygonWithID_Parms, NewEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_PolygonGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_VertexInstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_VertexInstanceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_NewEdgeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::NewProp_NewEdgeIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreatePolygonWithID", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::MeshDescriptionBase_eventCreatePolygonWithID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::MeshDescriptionBase_eventCreatePolygonWithID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreatePolygonWithID)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDs);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_NewEdgeIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreatePolygonWithID(Z_Param_PolygonID,Z_Param_PolygonGroupID,Z_Param_Out_VertexInstanceIDs,Z_Param_Out_NewEdgeIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreatePolygonWithID

// Begin Class UMeshDescriptionBase Function CreateTriangle
struct Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics
{
	struct MeshDescriptionBase_eventCreateTriangle_Parms
	{
		FPolygonGroupID PolygonGroupID;
		TArray<FVertexInstanceID> VertexInstanceIDs;
		TArray<FEdgeID> NewEdgeIDs;
		FTriangleID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new triangle to the mesh and returns its ID. This will also make an encapsulating polygon, and any missing edges. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new triangle to the mesh and returns its ID. This will also make an encapsulating polygon, and any missing edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewEdgeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewEdgeIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangle_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs_Inner = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangle_Parms, VertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexInstanceIDs_MetaData), NewProp_VertexInstanceIDs_MetaData) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_NewEdgeIDs_Inner = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_NewEdgeIDs = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangle_Parms, NewEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_PolygonGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_VertexInstanceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_NewEdgeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_NewEdgeIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateTriangle", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::MeshDescriptionBase_eventCreateTriangle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::MeshDescriptionBase_eventCreateTriangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreateTriangle)
{
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDs);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_NewEdgeIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTriangleID*)Z_Param__Result=P_THIS->CreateTriangle(Z_Param_PolygonGroupID,Z_Param_Out_VertexInstanceIDs,Z_Param_Out_NewEdgeIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreateTriangle

// Begin Class UMeshDescriptionBase Function CreateTriangleWithID
struct Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics
{
	struct MeshDescriptionBase_eventCreateTriangleWithID_Parms
	{
		FTriangleID TriangleID;
		FPolygonGroupID PolygonGroupID;
		TArray<FVertexInstanceID> VertexInstanceIDs;
		TArray<FEdgeID> NewEdgeIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new triangle to the mesh with the given ID. This will also make an encapsulating polygon, and any missing edges. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new triangle to the mesh with the given ID. This will also make an encapsulating polygon, and any missing edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewEdgeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewEdgeIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangleWithID_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangleWithID_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs_Inner = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangleWithID_Parms, VertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexInstanceIDs_MetaData), NewProp_VertexInstanceIDs_MetaData) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_NewEdgeIDs_Inner = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_NewEdgeIDs = { "NewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateTriangleWithID_Parms, NewEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_PolygonGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_VertexInstanceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_NewEdgeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::NewProp_NewEdgeIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateTriangleWithID", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::MeshDescriptionBase_eventCreateTriangleWithID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::MeshDescriptionBase_eventCreateTriangleWithID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreateTriangleWithID)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDs);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_NewEdgeIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateTriangleWithID(Z_Param_TriangleID,Z_Param_PolygonGroupID,Z_Param_Out_VertexInstanceIDs,Z_Param_Out_NewEdgeIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreateTriangleWithID

// Begin Class UMeshDescriptionBase Function CreateVertex
struct Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics
{
	struct MeshDescriptionBase_eventCreateVertex_Parms
	{
		FVertexID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new vertex to the mesh and returns its ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new vertex to the mesh and returns its ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateVertex", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::MeshDescriptionBase_eventCreateVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::MeshDescriptionBase_eventCreateVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreateVertex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVertexID*)Z_Param__Result=P_THIS->CreateVertex();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreateVertex

// Begin Class UMeshDescriptionBase Function CreateVertexInstance
struct Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics
{
	struct MeshDescriptionBase_eventCreateVertexInstance_Parms
	{
		FVertexID VertexID;
		FVertexInstanceID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new vertex instance to the mesh and returns its ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new vertex instance to the mesh and returns its ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexInstance_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateVertexInstance", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::MeshDescriptionBase_eventCreateVertexInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::MeshDescriptionBase_eventCreateVertexInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreateVertexInstance)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVertexInstanceID*)Z_Param__Result=P_THIS->CreateVertexInstance(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreateVertexInstance

// Begin Class UMeshDescriptionBase Function CreateVertexInstanceWithID
struct Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics
{
	struct MeshDescriptionBase_eventCreateVertexInstanceWithID_Parms
	{
		FVertexInstanceID VertexInstanceID;
		FVertexID VertexID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new vertex instance to the mesh with the given ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new vertex instance to the mesh with the given ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexInstanceWithID_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexInstanceWithID_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::NewProp_VertexInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::NewProp_VertexID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateVertexInstanceWithID", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::MeshDescriptionBase_eventCreateVertexInstanceWithID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::MeshDescriptionBase_eventCreateVertexInstanceWithID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreateVertexInstanceWithID)
{
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateVertexInstanceWithID(Z_Param_VertexInstanceID,Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreateVertexInstanceWithID

// Begin Class UMeshDescriptionBase Function CreateVertexWithID
struct Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics
{
	struct MeshDescriptionBase_eventCreateVertexWithID_Parms
	{
		FVertexID VertexID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Adds a new vertex to the mesh with the given ID */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Adds a new vertex to the mesh with the given ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventCreateVertexWithID_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::NewProp_VertexID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "CreateVertexWithID", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::MeshDescriptionBase_eventCreateVertexWithID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::MeshDescriptionBase_eventCreateVertexWithID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execCreateVertexWithID)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateVertexWithID(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function CreateVertexWithID

// Begin Class UMeshDescriptionBase Function DeleteEdge
struct Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics
{
	struct MeshDescriptionBase_eventDeleteEdge_Parms
	{
		FEdgeID EdgeID;
		TArray<FVertexID> OrphanedVertices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes an edge from a mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes an edge from a mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrphanedVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrphanedVertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteEdge_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_OrphanedVertices_Inner = { "OrphanedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_OrphanedVertices = { "OrphanedVertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteEdge_Parms, OrphanedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_OrphanedVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::NewProp_OrphanedVertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeleteEdge", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::MeshDescriptionBase_eventDeleteEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::MeshDescriptionBase_eventDeleteEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execDeleteEdge)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OrphanedVertices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteEdge(Z_Param_EdgeID,Z_Param_Out_OrphanedVertices);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function DeleteEdge

// Begin Class UMeshDescriptionBase Function DeletePolygon
struct Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics
{
	struct MeshDescriptionBase_eventDeletePolygon_Parms
	{
		FPolygonID PolygonID;
		TArray<FEdgeID> OrphanedEdges;
		TArray<FVertexInstanceID> OrphanedVertexInstances;
		TArray<FPolygonGroupID> OrphanedPolygonGroups;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a polygon from the mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a polygon from the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrphanedEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrphanedEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrphanedVertexInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrphanedVertexInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrphanedPolygonGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrphanedPolygonGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygon_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedEdges_Inner = { "OrphanedEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedEdges = { "OrphanedEdges", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygon_Parms, OrphanedEdges), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedVertexInstances_Inner = { "OrphanedVertexInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedVertexInstances = { "OrphanedVertexInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygon_Parms, OrphanedVertexInstances), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedPolygonGroups_Inner = { "OrphanedPolygonGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedPolygonGroups = { "OrphanedPolygonGroups", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygon_Parms, OrphanedPolygonGroups), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedVertexInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedVertexInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedPolygonGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::NewProp_OrphanedPolygonGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeletePolygon", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::MeshDescriptionBase_eventDeletePolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::MeshDescriptionBase_eventDeletePolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execDeletePolygon)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OrphanedEdges);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OrphanedVertexInstances);
	P_GET_TARRAY_REF(FPolygonGroupID,Z_Param_Out_OrphanedPolygonGroups);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeletePolygon(Z_Param_PolygonID,Z_Param_Out_OrphanedEdges,Z_Param_Out_OrphanedVertexInstances,Z_Param_Out_OrphanedPolygonGroups);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function DeletePolygon

// Begin Class UMeshDescriptionBase Function DeletePolygonGroup
struct Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics
{
	struct MeshDescriptionBase_eventDeletePolygonGroup_Parms
	{
		FPolygonGroupID PolygonGroupID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a polygon group from the mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a polygon group from the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeletePolygonGroup_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::NewProp_PolygonGroupID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeletePolygonGroup", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::MeshDescriptionBase_eventDeletePolygonGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::MeshDescriptionBase_eventDeletePolygonGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execDeletePolygonGroup)
{
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeletePolygonGroup(Z_Param_PolygonGroupID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function DeletePolygonGroup

// Begin Class UMeshDescriptionBase Function DeleteTriangle
struct Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics
{
	struct MeshDescriptionBase_eventDeleteTriangle_Parms
	{
		FTriangleID TriangleID;
		TArray<FEdgeID> OrphanedEdges;
		TArray<FVertexInstanceID> OrphanedVertexInstances;
		TArray<FPolygonGroupID> OrphanedPolygonGroupsPtr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a triangle from the mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a triangle from the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrphanedEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrphanedEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrphanedVertexInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrphanedVertexInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrphanedPolygonGroupsPtr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrphanedPolygonGroupsPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteTriangle_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedEdges_Inner = { "OrphanedEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedEdges = { "OrphanedEdges", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteTriangle_Parms, OrphanedEdges), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedVertexInstances_Inner = { "OrphanedVertexInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedVertexInstances = { "OrphanedVertexInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteTriangle_Parms, OrphanedVertexInstances), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedPolygonGroupsPtr_Inner = { "OrphanedPolygonGroupsPtr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedPolygonGroupsPtr = { "OrphanedPolygonGroupsPtr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteTriangle_Parms, OrphanedPolygonGroupsPtr), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedVertexInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedVertexInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedPolygonGroupsPtr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::NewProp_OrphanedPolygonGroupsPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeleteTriangle", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::MeshDescriptionBase_eventDeleteTriangle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::MeshDescriptionBase_eventDeleteTriangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execDeleteTriangle)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OrphanedEdges);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OrphanedVertexInstances);
	P_GET_TARRAY_REF(FPolygonGroupID,Z_Param_Out_OrphanedPolygonGroupsPtr);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteTriangle(Z_Param_TriangleID,Z_Param_Out_OrphanedEdges,Z_Param_Out_OrphanedVertexInstances,Z_Param_Out_OrphanedPolygonGroupsPtr);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function DeleteTriangle

// Begin Class UMeshDescriptionBase Function DeleteVertex
struct Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics
{
	struct MeshDescriptionBase_eventDeleteVertex_Parms
	{
		FVertexID VertexID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a vertex from the mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a vertex from the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::NewProp_VertexID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeleteVertex", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::MeshDescriptionBase_eventDeleteVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::MeshDescriptionBase_eventDeleteVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execDeleteVertex)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteVertex(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function DeleteVertex

// Begin Class UMeshDescriptionBase Function DeleteVertexInstance
struct Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics
{
	struct MeshDescriptionBase_eventDeleteVertexInstance_Parms
	{
		FVertexInstanceID VertexInstanceID;
		TArray<FVertexID> OrphanedVertices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Deletes a vertex instance from a mesh */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Deletes a vertex instance from a mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrphanedVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrphanedVertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteVertexInstance_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_OrphanedVertices_Inner = { "OrphanedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_OrphanedVertices = { "OrphanedVertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventDeleteVertexInstance_Parms, OrphanedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_VertexInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_OrphanedVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::NewProp_OrphanedVertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "DeleteVertexInstance", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::MeshDescriptionBase_eventDeleteVertexInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::MeshDescriptionBase_eventDeleteVertexInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execDeleteVertexInstance)
{
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
	P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OrphanedVertices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteVertexInstance(Z_Param_VertexInstanceID,Z_Param_Out_OrphanedVertices);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function DeleteVertexInstance

// Begin Class UMeshDescriptionBase Function Empty
struct Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Empty the mesh description */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Empty the mesh description" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "Empty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function Empty

// Begin Class UMeshDescriptionBase Function GetEdgeConnectedPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics
{
	struct MeshDescriptionBase_eventGetEdgeConnectedPolygons_Parms
	{
		FEdgeID EdgeID;
		TArray<FPolygonID> OutConnectedPolygonIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the polygons connected to this edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the polygons connected to this edge" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutConnectedPolygonIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConnectedPolygonIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeConnectedPolygons_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeConnectedPolygons_Parms, OutConnectedPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetEdgeConnectedPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::MeshDescriptionBase_eventGetEdgeConnectedPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::MeshDescriptionBase_eventGetEdgeConnectedPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetEdgeConnectedPolygons)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetEdgeConnectedPolygons(Z_Param_EdgeID,Z_Param_Out_OutConnectedPolygonIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetEdgeConnectedPolygons

// Begin Class UMeshDescriptionBase Function GetEdgeConnectedTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics
{
	struct MeshDescriptionBase_eventGetEdgeConnectedTriangles_Parms
	{
		FEdgeID EdgeID;
		TArray<FTriangleID> OutConnectedTriangleIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of triangle IDs connected to this edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of triangle IDs connected to this edge" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutConnectedTriangleIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConnectedTriangleIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeConnectedTriangles_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeConnectedTriangles_Parms, OutConnectedTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetEdgeConnectedTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::MeshDescriptionBase_eventGetEdgeConnectedTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::MeshDescriptionBase_eventGetEdgeConnectedTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetEdgeConnectedTriangles)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutConnectedTriangleIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetEdgeConnectedTriangles(Z_Param_EdgeID,Z_Param_Out_OutConnectedTriangleIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetEdgeConnectedTriangles

// Begin Class UMeshDescriptionBase Function GetEdgeCount
struct Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics
{
	struct MeshDescriptionBase_eventGetEdgeCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of edges */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of edges" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetEdgeCount", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::MeshDescriptionBase_eventGetEdgeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::MeshDescriptionBase_eventGetEdgeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetEdgeCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetEdgeCount();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetEdgeCount

// Begin Class UMeshDescriptionBase Function GetEdgeVertex
struct Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics
{
	struct MeshDescriptionBase_eventGetEdgeVertex_Parms
	{
		FEdgeID EdgeID;
		int32 VertexNumber;
		FVertexID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertex ID corresponding to one of the edge endpoints */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertex ID corresponding to one of the edge endpoints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertex_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_VertexNumber = { "VertexNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertex_Parms, VertexNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_VertexNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetEdgeVertex", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::MeshDescriptionBase_eventGetEdgeVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::MeshDescriptionBase_eventGetEdgeVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetEdgeVertex)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_GET_PROPERTY(FIntProperty,Z_Param_VertexNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVertexID*)Z_Param__Result=P_THIS->GetEdgeVertex(Z_Param_EdgeID,Z_Param_VertexNumber);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetEdgeVertex

// Begin Class UMeshDescriptionBase Function GetEdgeVertices
struct Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics
{
	struct MeshDescriptionBase_eventGetEdgeVertices_Parms
	{
		FEdgeID EdgeID;
		TArray<FVertexID> OutVertexIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns a pair of vertex IDs defining the edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns a pair of vertex IDs defining the edge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutVertexIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVertexIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertices_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeID_MetaData), NewProp_EdgeID_MetaData) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_OutVertexIDs_Inner = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_OutVertexIDs = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetEdgeVertices_Parms, OutVertexIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_OutVertexIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::NewProp_OutVertexIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetEdgeVertices", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::MeshDescriptionBase_eventGetEdgeVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::MeshDescriptionBase_eventGetEdgeVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetEdgeVertices)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutVertexIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetEdgeVertices(Z_Param_EdgeID,Z_Param_Out_OutVertexIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetEdgeVertices

// Begin Class UMeshDescriptionBase Function GetNumEdgeConnectedPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics
{
	struct MeshDescriptionBase_eventGetNumEdgeConnectedPolygons_Parms
	{
		FEdgeID EdgeID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygons connected to this edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygons connected to this edge" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumEdgeConnectedPolygons_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumEdgeConnectedPolygons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumEdgeConnectedPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::MeshDescriptionBase_eventGetNumEdgeConnectedPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::MeshDescriptionBase_eventGetNumEdgeConnectedPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumEdgeConnectedPolygons)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumEdgeConnectedPolygons(Z_Param_EdgeID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumEdgeConnectedPolygons

// Begin Class UMeshDescriptionBase Function GetNumEdgeConnectedTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics
{
	struct MeshDescriptionBase_eventGetNumEdgeConnectedTriangles_Parms
	{
		FEdgeID EdgeID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of triangles connected to this edge */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of triangles connected to this edge" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumEdgeConnectedTriangles_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumEdgeConnectedTriangles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumEdgeConnectedTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::MeshDescriptionBase_eventGetNumEdgeConnectedTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::MeshDescriptionBase_eventGetNumEdgeConnectedTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumEdgeConnectedTriangles)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumEdgeConnectedTriangles(Z_Param_EdgeID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumEdgeConnectedTriangles

// Begin Class UMeshDescriptionBase Function GetNumPolygonGroupPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics
{
	struct MeshDescriptionBase_eventGetNumPolygonGroupPolygons_Parms
	{
		FPolygonGroupID PolygonGroupID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygons in this polygon group */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygons in this polygon group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonGroupPolygons_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonGroupPolygons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::NewProp_PolygonGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumPolygonGroupPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::MeshDescriptionBase_eventGetNumPolygonGroupPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::MeshDescriptionBase_eventGetNumPolygonGroupPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumPolygonGroupPolygons)
{
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumPolygonGroupPolygons(Z_Param_PolygonGroupID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumPolygonGroupPolygons

// Begin Class UMeshDescriptionBase Function GetNumPolygonInternalEdges
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics
{
	struct MeshDescriptionBase_eventGetNumPolygonInternalEdges_Parms
	{
		FPolygonID PolygonID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the number of internal edges in this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the number of internal edges in this polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonInternalEdges_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonInternalEdges_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumPolygonInternalEdges", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::MeshDescriptionBase_eventGetNumPolygonInternalEdges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::MeshDescriptionBase_eventGetNumPolygonInternalEdges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumPolygonInternalEdges)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumPolygonInternalEdges(Z_Param_PolygonID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumPolygonInternalEdges

// Begin Class UMeshDescriptionBase Function GetNumPolygonTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics
{
	struct MeshDescriptionBase_eventGetNumPolygonTriangles_Parms
	{
		FPolygonID PolygonID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the number of triangles which comprise this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the number of triangles which comprise this polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonTriangles_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonTriangles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumPolygonTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::MeshDescriptionBase_eventGetNumPolygonTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::MeshDescriptionBase_eventGetNumPolygonTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumPolygonTriangles)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumPolygonTriangles(Z_Param_PolygonID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumPolygonTriangles

// Begin Class UMeshDescriptionBase Function GetNumPolygonVertices
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics
{
	struct MeshDescriptionBase_eventGetNumPolygonVertices_Parms
	{
		FPolygonID PolygonID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of vertices this polygon has */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of vertices this polygon has" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonVertices_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumPolygonVertices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumPolygonVertices", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::MeshDescriptionBase_eventGetNumPolygonVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::MeshDescriptionBase_eventGetNumPolygonVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumPolygonVertices)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumPolygonVertices(Z_Param_PolygonID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumPolygonVertices

// Begin Class UMeshDescriptionBase Function GetNumVertexConnectedEdges
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics
{
	struct MeshDescriptionBase_eventGetNumVertexConnectedEdges_Parms
	{
		FVertexID VertexID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns number of edges connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns number of edges connected to this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedEdges_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedEdges_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexConnectedEdges", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::MeshDescriptionBase_eventGetNumVertexConnectedEdges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::MeshDescriptionBase_eventGetNumVertexConnectedEdges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexConnectedEdges)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumVertexConnectedEdges(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumVertexConnectedEdges

// Begin Class UMeshDescriptionBase Function GetNumVertexConnectedPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics
{
	struct MeshDescriptionBase_eventGetNumVertexConnectedPolygons_Parms
	{
		FVertexID VertexID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygons connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygons connected to this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedPolygons_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedPolygons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexConnectedPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::MeshDescriptionBase_eventGetNumVertexConnectedPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::MeshDescriptionBase_eventGetNumVertexConnectedPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexConnectedPolygons)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumVertexConnectedPolygons(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumVertexConnectedPolygons

// Begin Class UMeshDescriptionBase Function GetNumVertexConnectedTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics
{
	struct MeshDescriptionBase_eventGetNumVertexConnectedTriangles_Parms
	{
		FVertexID VertexID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns number of triangles connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns number of triangles connected to this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedTriangles_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexConnectedTriangles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexConnectedTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::MeshDescriptionBase_eventGetNumVertexConnectedTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::MeshDescriptionBase_eventGetNumVertexConnectedTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexConnectedTriangles)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumVertexConnectedTriangles(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumVertexConnectedTriangles

// Begin Class UMeshDescriptionBase Function GetNumVertexInstanceConnectedPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics
{
	struct MeshDescriptionBase_eventGetNumVertexInstanceConnectedPolygons_Parms
	{
		FVertexInstanceID VertexInstanceID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygons connected to this vertex instance. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygons connected to this vertex instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexInstanceConnectedPolygons_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexInstanceConnectedPolygons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexInstanceConnectedPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::MeshDescriptionBase_eventGetNumVertexInstanceConnectedPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::MeshDescriptionBase_eventGetNumVertexInstanceConnectedPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexInstanceConnectedPolygons)
{
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumVertexInstanceConnectedPolygons(Z_Param_VertexInstanceID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumVertexInstanceConnectedPolygons

// Begin Class UMeshDescriptionBase Function GetNumVertexInstanceConnectedTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics
{
	struct MeshDescriptionBase_eventGetNumVertexInstanceConnectedTriangles_Parms
	{
		FVertexInstanceID VertexInstanceID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of triangles connected to this vertex instance */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of triangles connected to this vertex instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexInstanceConnectedTriangles_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexInstanceConnectedTriangles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::NewProp_VertexInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexInstanceConnectedTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::MeshDescriptionBase_eventGetNumVertexInstanceConnectedTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::MeshDescriptionBase_eventGetNumVertexInstanceConnectedTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexInstanceConnectedTriangles)
{
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumVertexInstanceConnectedTriangles(Z_Param_VertexInstanceID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumVertexInstanceConnectedTriangles

// Begin Class UMeshDescriptionBase Function GetNumVertexVertexInstances
struct Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics
{
	struct MeshDescriptionBase_eventGetNumVertexVertexInstances_Parms
	{
		FVertexID VertexID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns number of vertex instances created from this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns number of vertex instances created from this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexVertexInstances_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetNumVertexVertexInstances_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetNumVertexVertexInstances", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::MeshDescriptionBase_eventGetNumVertexVertexInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::MeshDescriptionBase_eventGetNumVertexVertexInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetNumVertexVertexInstances)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumVertexVertexInstances(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetNumVertexVertexInstances

// Begin Class UMeshDescriptionBase Function GetPolygonAdjacentPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics
{
	struct MeshDescriptionBase_eventGetPolygonAdjacentPolygons_Parms
	{
		FPolygonID PolygonID;
		TArray<FPolygonID> OutPolygonIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Populates the passed array with adjacent polygons */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Populates the passed array with adjacent polygons" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPolygonIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPolygonIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonAdjacentPolygons_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_OutPolygonIDs_Inner = { "OutPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_OutPolygonIDs = { "OutPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonAdjacentPolygons_Parms, OutPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_OutPolygonIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::NewProp_OutPolygonIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonAdjacentPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::MeshDescriptionBase_eventGetPolygonAdjacentPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::MeshDescriptionBase_eventGetPolygonAdjacentPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonAdjacentPolygons)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygonIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPolygonAdjacentPolygons(Z_Param_PolygonID,Z_Param_Out_OutPolygonIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonAdjacentPolygons

// Begin Class UMeshDescriptionBase Function GetPolygonCount
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics
{
	struct MeshDescriptionBase_eventGetPolygonCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygons */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygons" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonCount", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::MeshDescriptionBase_eventGetPolygonCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::MeshDescriptionBase_eventGetPolygonCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPolygonCount();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonCount

// Begin Class UMeshDescriptionBase Function GetPolygonGroupCount
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics
{
	struct MeshDescriptionBase_eventGetPolygonGroupCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of polygon groups */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of polygon groups" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonGroupCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonGroupCount", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::MeshDescriptionBase_eventGetPolygonGroupCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::MeshDescriptionBase_eventGetPolygonGroupCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonGroupCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPolygonGroupCount();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonGroupCount

// Begin Class UMeshDescriptionBase Function GetPolygonGroupPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics
{
	struct MeshDescriptionBase_eventGetPolygonGroupPolygons_Parms
	{
		FPolygonGroupID PolygonGroupID;
		TArray<FPolygonID> OutPolygonIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the polygons associated with the given polygon group */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the polygons associated with the given polygon group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPolygonIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPolygonIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonGroupPolygons_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_OutPolygonIDs_Inner = { "OutPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_OutPolygonIDs = { "OutPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonGroupPolygons_Parms, OutPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_PolygonGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_OutPolygonIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::NewProp_OutPolygonIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonGroupPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::MeshDescriptionBase_eventGetPolygonGroupPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::MeshDescriptionBase_eventGetPolygonGroupPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonGroupPolygons)
{
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygonIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPolygonGroupPolygons(Z_Param_PolygonGroupID,Z_Param_Out_OutPolygonIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonGroupPolygons

// Begin Class UMeshDescriptionBase Function GetPolygonInternalEdges
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics
{
	struct MeshDescriptionBase_eventGetPolygonInternalEdges_Parms
	{
		FPolygonID PolygonID;
		TArray<FEdgeID> OutEdgeIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Populate the provided array with a list of edges which are internal to the polygon, i.e. those which separate\n\x09    constituent triangles. */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Populate the provided array with a list of edges which are internal to the polygon, i.e. those which separate\n          constituent triangles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEdgeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutEdgeIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonInternalEdges_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_OutEdgeIDs_Inner = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_OutEdgeIDs = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonInternalEdges_Parms, OutEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_OutEdgeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::NewProp_OutEdgeIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonInternalEdges", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::MeshDescriptionBase_eventGetPolygonInternalEdges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::MeshDescriptionBase_eventGetPolygonInternalEdges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonInternalEdges)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPolygonInternalEdges(Z_Param_PolygonID,Z_Param_Out_OutEdgeIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonInternalEdges

// Begin Class UMeshDescriptionBase Function GetPolygonPerimeterEdges
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics
{
	struct MeshDescriptionBase_eventGetPolygonPerimeterEdges_Parms
	{
		FPolygonID PolygonID;
		TArray<FEdgeID> OutEdgeIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the edges which form the polygon perimeter */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the edges which form the polygon perimeter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEdgeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutEdgeIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonPerimeterEdges_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_OutEdgeIDs_Inner = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_OutEdgeIDs = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonPerimeterEdges_Parms, OutEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_OutEdgeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::NewProp_OutEdgeIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonPerimeterEdges", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::MeshDescriptionBase_eventGetPolygonPerimeterEdges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::MeshDescriptionBase_eventGetPolygonPerimeterEdges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonPerimeterEdges)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPolygonPerimeterEdges(Z_Param_PolygonID,Z_Param_Out_OutEdgeIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonPerimeterEdges

// Begin Class UMeshDescriptionBase Function GetPolygonPolygonGroup
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics
{
	struct MeshDescriptionBase_eventGetPolygonPolygonGroup_Parms
	{
		FPolygonID PolygonID;
		FPolygonGroupID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the polygon group associated with a polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the polygon group associated with a polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonPolygonGroup_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonPolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonPolygonGroup", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::MeshDescriptionBase_eventGetPolygonPolygonGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::MeshDescriptionBase_eventGetPolygonPolygonGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonPolygonGroup)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPolygonGroupID*)Z_Param__Result=P_THIS->GetPolygonPolygonGroup(Z_Param_PolygonID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonPolygonGroup

// Begin Class UMeshDescriptionBase Function GetPolygonTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics
{
	struct MeshDescriptionBase_eventGetPolygonTriangles_Parms
	{
		FPolygonID PolygonID;
		TArray<FTriangleID> OutTriangleIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return reference to an array of triangle IDs which comprise this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return reference to an array of triangle IDs which comprise this polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTriangleIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTriangleIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonTriangles_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_OutTriangleIDs_Inner = { "OutTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_OutTriangleIDs = { "OutTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonTriangles_Parms, OutTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_OutTriangleIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::NewProp_OutTriangleIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::MeshDescriptionBase_eventGetPolygonTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::MeshDescriptionBase_eventGetPolygonTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonTriangles)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutTriangleIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPolygonTriangles(Z_Param_PolygonID,Z_Param_Out_OutTriangleIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonTriangles

// Begin Class UMeshDescriptionBase Function GetPolygonVertexInstances
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics
{
	struct MeshDescriptionBase_eventGetPolygonVertexInstances_Parms
	{
		FPolygonID PolygonID;
		TArray<FVertexInstanceID> OutVertexInstanceIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of VertexInstance IDs forming the perimeter of this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of VertexInstance IDs forming the perimeter of this polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutVertexInstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVertexInstanceIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonVertexInstances_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_OutVertexInstanceIDs = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonVertexInstances_Parms, OutVertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::NewProp_OutVertexInstanceIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonVertexInstances", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::MeshDescriptionBase_eventGetPolygonVertexInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::MeshDescriptionBase_eventGetPolygonVertexInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonVertexInstances)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutVertexInstanceIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPolygonVertexInstances(Z_Param_PolygonID,Z_Param_Out_OutVertexInstanceIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonVertexInstances

// Begin Class UMeshDescriptionBase Function GetPolygonVertices
struct Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics
{
	struct MeshDescriptionBase_eventGetPolygonVertices_Parms
	{
		FPolygonID PolygonID;
		TArray<FVertexID> OutVertexIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertices which form the polygon perimeter */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertices which form the polygon perimeter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutVertexIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVertexIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonVertices_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_OutVertexIDs_Inner = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_OutVertexIDs = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetPolygonVertices_Parms, OutVertexIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_OutVertexIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::NewProp_OutVertexIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetPolygonVertices", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::MeshDescriptionBase_eventGetPolygonVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::MeshDescriptionBase_eventGetPolygonVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetPolygonVertices)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutVertexIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPolygonVertices(Z_Param_PolygonID,Z_Param_Out_OutVertexIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetPolygonVertices

// Begin Class UMeshDescriptionBase Function GetTriangleAdjacentTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics
{
	struct MeshDescriptionBase_eventGetTriangleAdjacentTriangles_Parms
	{
		FTriangleID TriangleID;
		TArray<FTriangleID> OutTriangleIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the adjacent triangles to this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the adjacent triangles to this triangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTriangleIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTriangleIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleAdjacentTriangles_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_OutTriangleIDs_Inner = { "OutTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_OutTriangleIDs = { "OutTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleAdjacentTriangles_Parms, OutTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_OutTriangleIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::NewProp_OutTriangleIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleAdjacentTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::MeshDescriptionBase_eventGetTriangleAdjacentTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::MeshDescriptionBase_eventGetTriangleAdjacentTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleAdjacentTriangles)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutTriangleIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTriangleAdjacentTriangles(Z_Param_TriangleID,Z_Param_Out_OutTriangleIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetTriangleAdjacentTriangles

// Begin Class UMeshDescriptionBase Function GetTriangleCount
struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics
{
	struct MeshDescriptionBase_eventGetTriangleCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of triangles */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleCount", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::MeshDescriptionBase_eventGetTriangleCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::MeshDescriptionBase_eventGetTriangleCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTriangleCount();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetTriangleCount

// Begin Class UMeshDescriptionBase Function GetTriangleEdges
struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics
{
	struct MeshDescriptionBase_eventGetTriangleEdges_Parms
	{
		FTriangleID TriangleID;
		TArray<FEdgeID> OutEdgeIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the edges which define this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the edges which define this triangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEdgeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutEdgeIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleEdges_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_OutEdgeIDs_Inner = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_OutEdgeIDs = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleEdges_Parms, OutEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_OutEdgeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::NewProp_OutEdgeIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleEdges", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::MeshDescriptionBase_eventGetTriangleEdges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::MeshDescriptionBase_eventGetTriangleEdges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleEdges)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTriangleEdges(Z_Param_TriangleID,Z_Param_Out_OutEdgeIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetTriangleEdges

// Begin Class UMeshDescriptionBase Function GetTrianglePolygon
struct Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics
{
	struct MeshDescriptionBase_eventGetTrianglePolygon_Parms
	{
		FTriangleID TriangleID;
		FPolygonID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Get the polygon which contains this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Get the polygon which contains this triangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTrianglePolygon_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTrianglePolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTrianglePolygon", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::MeshDescriptionBase_eventGetTrianglePolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::MeshDescriptionBase_eventGetTrianglePolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetTrianglePolygon)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPolygonID*)Z_Param__Result=P_THIS->GetTrianglePolygon(Z_Param_TriangleID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetTrianglePolygon

// Begin Class UMeshDescriptionBase Function GetTrianglePolygonGroup
struct Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics
{
	struct MeshDescriptionBase_eventGetTrianglePolygonGroup_Parms
	{
		FTriangleID TriangleID;
		FPolygonGroupID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Get the polygon group which contains this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Get the polygon group which contains this triangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTrianglePolygonGroup_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTrianglePolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTrianglePolygonGroup", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::MeshDescriptionBase_eventGetTrianglePolygonGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::MeshDescriptionBase_eventGetTrianglePolygonGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetTrianglePolygonGroup)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPolygonGroupID*)Z_Param__Result=P_THIS->GetTrianglePolygonGroup(Z_Param_TriangleID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetTrianglePolygonGroup

// Begin Class UMeshDescriptionBase Function GetTriangleVertexInstance
struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics
{
	struct MeshDescriptionBase_eventGetTriangleVertexInstance_Parms
	{
		FTriangleID TriangleID;
		int32 Index;
		FVertexInstanceID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Get the specified vertex instance by index */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Get the specified vertex instance by index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstance_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstance_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleVertexInstance", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::MeshDescriptionBase_eventGetTriangleVertexInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::MeshDescriptionBase_eventGetTriangleVertexInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleVertexInstance)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVertexInstanceID*)Z_Param__Result=P_THIS->GetTriangleVertexInstance(Z_Param_TriangleID,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetTriangleVertexInstance

// Begin Class UMeshDescriptionBase Function GetTriangleVertexInstances
struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics
{
	struct MeshDescriptionBase_eventGetTriangleVertexInstances_Parms
	{
		FTriangleID TriangleID;
		TArray<FVertexInstanceID> OutVertexInstanceIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Get the vertex instances which define this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Get the vertex instances which define this triangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutVertexInstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVertexInstanceIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstances_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_OutVertexInstanceIDs = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertexInstances_Parms, OutVertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::NewProp_OutVertexInstanceIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleVertexInstances", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::MeshDescriptionBase_eventGetTriangleVertexInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::MeshDescriptionBase_eventGetTriangleVertexInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleVertexInstances)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutVertexInstanceIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTriangleVertexInstances(Z_Param_TriangleID,Z_Param_Out_OutVertexInstanceIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetTriangleVertexInstances

// Begin Class UMeshDescriptionBase Function GetTriangleVertices
struct Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics
{
	struct MeshDescriptionBase_eventGetTriangleVertices_Parms
	{
		FTriangleID TriangleID;
		TArray<FVertexID> OutVertexIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertices which define this triangle */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertices which define this triangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutVertexIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVertexIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertices_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_OutVertexIDs_Inner = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_OutVertexIDs = { "OutVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetTriangleVertices_Parms, OutVertexIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_OutVertexIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::NewProp_OutVertexIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetTriangleVertices", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::MeshDescriptionBase_eventGetTriangleVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::MeshDescriptionBase_eventGetTriangleVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetTriangleVertices)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutVertexIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTriangleVertices(Z_Param_TriangleID,Z_Param_Out_OutVertexIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetTriangleVertices

// Begin Class UMeshDescriptionBase Function GetVertexAdjacentVertices
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics
{
	struct MeshDescriptionBase_eventGetVertexAdjacentVertices_Parms
	{
		FVertexID VertexID;
		TArray<FVertexID> OutAdjacentVertexIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertices adjacent to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertices adjacent to this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAdjacentVertexIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAdjacentVertexIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexAdjacentVertices_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs_Inner = { "OutAdjacentVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs = { "OutAdjacentVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexAdjacentVertices_Parms, OutAdjacentVertexIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexAdjacentVertices", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::MeshDescriptionBase_eventGetVertexAdjacentVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::MeshDescriptionBase_eventGetVertexAdjacentVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexAdjacentVertices)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutAdjacentVertexIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVertexAdjacentVertices(Z_Param_VertexID,Z_Param_Out_OutAdjacentVertexIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexAdjacentVertices

// Begin Class UMeshDescriptionBase Function GetVertexConnectedEdges
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics
{
	struct MeshDescriptionBase_eventGetVertexConnectedEdges_Parms
	{
		FVertexID VertexID;
		TArray<FEdgeID> OutEdgeIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of Edge IDs connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of Edge IDs connected to this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEdgeIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutEdgeIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedEdges_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_OutEdgeIDs_Inner = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_OutEdgeIDs = { "OutEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedEdges_Parms, OutEdgeIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_OutEdgeIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::NewProp_OutEdgeIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexConnectedEdges", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::MeshDescriptionBase_eventGetVertexConnectedEdges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::MeshDescriptionBase_eventGetVertexConnectedEdges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexConnectedEdges)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVertexConnectedEdges(Z_Param_VertexID,Z_Param_Out_OutEdgeIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexConnectedEdges

// Begin Class UMeshDescriptionBase Function GetVertexConnectedPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics
{
	struct MeshDescriptionBase_eventGetVertexConnectedPolygons_Parms
	{
		FVertexID VertexID;
		TArray<FPolygonID> OutConnectedPolygonIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the polygons connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the polygons connected to this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutConnectedPolygonIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConnectedPolygonIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedPolygons_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedPolygons_Parms, OutConnectedPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexConnectedPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::MeshDescriptionBase_eventGetVertexConnectedPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::MeshDescriptionBase_eventGetVertexConnectedPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexConnectedPolygons)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVertexConnectedPolygons(Z_Param_VertexID,Z_Param_Out_OutConnectedPolygonIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexConnectedPolygons

// Begin Class UMeshDescriptionBase Function GetVertexConnectedTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics
{
	struct MeshDescriptionBase_eventGetVertexConnectedTriangles_Parms
	{
		FVertexID VertexID;
		TArray<FTriangleID> OutConnectedTriangleIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the triangles connected to this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the triangles connected to this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutConnectedTriangleIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConnectedTriangleIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedTriangles_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexConnectedTriangles_Parms, OutConnectedTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexConnectedTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::MeshDescriptionBase_eventGetVertexConnectedTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::MeshDescriptionBase_eventGetVertexConnectedTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexConnectedTriangles)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutConnectedTriangleIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVertexConnectedTriangles(Z_Param_VertexID,Z_Param_Out_OutConnectedTriangleIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexConnectedTriangles

// Begin Class UMeshDescriptionBase Function GetVertexCount
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics
{
	struct MeshDescriptionBase_eventGetVertexCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of vertices */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of vertices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexCount", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::MeshDescriptionBase_eventGetVertexCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::MeshDescriptionBase_eventGetVertexCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetVertexCount();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexCount

// Begin Class UMeshDescriptionBase Function GetVertexInstanceConnectedPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics
{
	struct MeshDescriptionBase_eventGetVertexInstanceConnectedPolygons_Parms
	{
		FVertexInstanceID VertexInstanceID;
		TArray<FPolygonID> OutConnectedPolygonIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the polygons connected to this vertex instance */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the polygons connected to this vertex instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutConnectedPolygonIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConnectedPolygonIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceConnectedPolygons_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceConnectedPolygons_Parms, OutConnectedPolygonIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceConnectedPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::MeshDescriptionBase_eventGetVertexInstanceConnectedPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::MeshDescriptionBase_eventGetVertexInstanceConnectedPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceConnectedPolygons)
{
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
	P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVertexInstanceConnectedPolygons(Z_Param_VertexInstanceID,Z_Param_Out_OutConnectedPolygonIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexInstanceConnectedPolygons

// Begin Class UMeshDescriptionBase Function GetVertexInstanceConnectedTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics
{
	struct MeshDescriptionBase_eventGetVertexInstanceConnectedTriangles_Parms
	{
		FVertexInstanceID VertexInstanceID;
		TArray<FTriangleID> OutConnectedTriangleIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of Triangle IDs connected to this vertex instance */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of Triangle IDs connected to this vertex instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutConnectedTriangleIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConnectedTriangleIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceConnectedTriangles_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs = { "OutConnectedTriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceConnectedTriangles_Parms, OutConnectedTriangleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_VertexInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::NewProp_OutConnectedTriangleIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceConnectedTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::MeshDescriptionBase_eventGetVertexInstanceConnectedTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::MeshDescriptionBase_eventGetVertexInstanceConnectedTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceConnectedTriangles)
{
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
	P_GET_TARRAY_REF(FTriangleID,Z_Param_Out_OutConnectedTriangleIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVertexInstanceConnectedTriangles(Z_Param_VertexInstanceID,Z_Param_Out_OutConnectedTriangleIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexInstanceConnectedTriangles

// Begin Class UMeshDescriptionBase Function GetVertexInstanceCount
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics
{
	struct MeshDescriptionBase_eventGetVertexInstanceCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the number of vertex instances */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the number of vertex instances" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceCount", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::MeshDescriptionBase_eventGetVertexInstanceCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::MeshDescriptionBase_eventGetVertexInstanceCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetVertexInstanceCount();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexInstanceCount

// Begin Class UMeshDescriptionBase Function GetVertexInstanceForPolygonVertex
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics
{
	struct MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms
	{
		FPolygonID PolygonID;
		FVertexID VertexID;
		FVertexInstanceID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the vertex instance which corresponds to the given vertex on the given polygon, or INDEX_NONE */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the vertex instance which corresponds to the given vertex on the given polygon, or INDEX_NONE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceForPolygonVertex", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::MeshDescriptionBase_eventGetVertexInstanceForPolygonVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceForPolygonVertex)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVertexInstanceID*)Z_Param__Result=P_THIS->GetVertexInstanceForPolygonVertex(Z_Param_PolygonID,Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexInstanceForPolygonVertex

// Begin Class UMeshDescriptionBase Function GetVertexInstanceForTriangleVertex
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics
{
	struct MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms
	{
		FTriangleID TriangleID;
		FVertexID VertexID;
		FVertexInstanceID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return the vertex instance which corresponds to the given vertex on the given triangle, or INDEX_NONE */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return the vertex instance which corresponds to the given vertex on the given triangle, or INDEX_NONE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceForTriangleVertex", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::MeshDescriptionBase_eventGetVertexInstanceForTriangleVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceForTriangleVertex)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVertexInstanceID*)Z_Param__Result=P_THIS->GetVertexInstanceForTriangleVertex(Z_Param_TriangleID,Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexInstanceForTriangleVertex

// Begin Class UMeshDescriptionBase Function GetVertexInstancePairEdge
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics
{
	struct MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms
	{
		FVertexInstanceID VertexInstanceID0;
		FVertexInstanceID VertexInstanceID1;
		FEdgeID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the edge ID defined by the two given vertex instance IDs, if there is one; otherwise INDEX_NONE */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the edge ID defined by the two given vertex instance IDs, if there is one; otherwise INDEX_NONE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_VertexInstanceID0 = { "VertexInstanceID0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms, VertexInstanceID0), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_VertexInstanceID1 = { "VertexInstanceID1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms, VertexInstanceID1), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_VertexInstanceID0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_VertexInstanceID1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstancePairEdge", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::MeshDescriptionBase_eventGetVertexInstancePairEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstancePairEdge)
{
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID0);
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID1);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEdgeID*)Z_Param__Result=P_THIS->GetVertexInstancePairEdge(Z_Param_VertexInstanceID0,Z_Param_VertexInstanceID1);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexInstancePairEdge

// Begin Class UMeshDescriptionBase Function GetVertexInstanceVertex
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics
{
	struct MeshDescriptionBase_eventGetVertexInstanceVertex_Parms
	{
		FVertexInstanceID VertexInstanceID;
		FVertexID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the vertex ID associated with the given vertex instance */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the vertex ID associated with the given vertex instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceVertex_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexInstanceVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::NewProp_VertexInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexInstanceVertex", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::MeshDescriptionBase_eventGetVertexInstanceVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::MeshDescriptionBase_eventGetVertexInstanceVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexInstanceVertex)
{
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVertexID*)Z_Param__Result=P_THIS->GetVertexInstanceVertex(Z_Param_VertexInstanceID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexInstanceVertex

// Begin Class UMeshDescriptionBase Function GetVertexPairEdge
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics
{
	struct MeshDescriptionBase_eventGetVertexPairEdge_Parms
	{
		FVertexID VertexID0;
		FVertexID VertexID1;
		FEdgeID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns the edge ID defined by the two given vertex IDs, if there is one; otherwise INDEX_NONE */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns the edge ID defined by the two given vertex IDs, if there is one; otherwise INDEX_NONE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_VertexID0 = { "VertexID0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPairEdge_Parms, VertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_VertexID1 = { "VertexID1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPairEdge_Parms, VertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPairEdge_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_VertexID0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_VertexID1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexPairEdge", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::MeshDescriptionBase_eventGetVertexPairEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::MeshDescriptionBase_eventGetVertexPairEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexPairEdge)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID0);
	P_GET_STRUCT(FVertexID,Z_Param_VertexID1);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEdgeID*)Z_Param__Result=P_THIS->GetVertexPairEdge(Z_Param_VertexID0,Z_Param_VertexID1);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexPairEdge

// Begin Class UMeshDescriptionBase Function GetVertexPosition
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics
{
	struct MeshDescriptionBase_eventGetVertexPosition_Parms
	{
		FVertexID VertexID;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Gets a vertex position */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Gets a vertex position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPosition_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexPosition", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::MeshDescriptionBase_eventGetVertexPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::MeshDescriptionBase_eventGetVertexPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexPosition)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVertexPosition(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexPosition

// Begin Class UMeshDescriptionBase Function GetVertexVertexInstances
struct Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics
{
	struct MeshDescriptionBase_eventGetVertexVertexInstances_Parms
	{
		FVertexID VertexID;
		TArray<FVertexInstanceID> OutVertexInstanceIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns reference to an array of VertexInstance IDs instanced from this vertex */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns reference to an array of VertexInstance IDs instanced from this vertex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutVertexInstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVertexInstanceIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexVertexInstances_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_OutVertexInstanceIDs = { "OutVertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventGetVertexVertexInstances_Parms, OutVertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_OutVertexInstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::NewProp_OutVertexInstanceIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "GetVertexVertexInstances", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::MeshDescriptionBase_eventGetVertexVertexInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::MeshDescriptionBase_eventGetVertexVertexInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execGetVertexVertexInstances)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutVertexInstanceIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVertexVertexInstances(Z_Param_VertexID,Z_Param_Out_OutVertexInstanceIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function GetVertexVertexInstances

// Begin Class UMeshDescriptionBase Function IsEdgeInternal
struct Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics
{
	struct MeshDescriptionBase_eventIsEdgeInternal_Parms
	{
		FEdgeID EdgeID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Determine whether a given edge is an internal edge between triangles of a polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Determine whether a given edge is an internal edge between triangles of a polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsEdgeInternal_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
void Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsEdgeInternal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsEdgeInternal_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsEdgeInternal", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::MeshDescriptionBase_eventIsEdgeInternal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::MeshDescriptionBase_eventIsEdgeInternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsEdgeInternal)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEdgeInternal(Z_Param_EdgeID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsEdgeInternal

// Begin Class UMeshDescriptionBase Function IsEdgeInternalToPolygon
struct Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics
{
	struct MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms
	{
		FEdgeID EdgeID;
		FPolygonID PolygonID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Determine whether a given edge is an internal edge between triangles of a specific polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Determine whether a given edge is an internal edge between triangles of a specific polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
void Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsEdgeInternalToPolygon", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::MeshDescriptionBase_eventIsEdgeInternalToPolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsEdgeInternalToPolygon)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEdgeInternalToPolygon(Z_Param_EdgeID,Z_Param_PolygonID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsEdgeInternalToPolygon

// Begin Class UMeshDescriptionBase Function IsEdgeValid
struct Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics
{
	struct MeshDescriptionBase_eventIsEdgeValid_Parms
	{
		FEdgeID EdgeID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed edge ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed edge ID is valid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsEdgeValid_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(0, nullptr) }; // 3616845231
void Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsEdgeValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsEdgeValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_EdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsEdgeValid", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::MeshDescriptionBase_eventIsEdgeValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::MeshDescriptionBase_eventIsEdgeValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsEdgeValid)
{
	P_GET_STRUCT(FEdgeID,Z_Param_EdgeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEdgeValid(Z_Param_EdgeID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsEdgeValid

// Begin Class UMeshDescriptionBase Function IsEmpty
struct Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics
{
	struct MeshDescriptionBase_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Return whether the mesh description is empty */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Return whether the mesh description is empty" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsEmpty_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsEmpty", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::MeshDescriptionBase_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::MeshDescriptionBase_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsEmpty

// Begin Class UMeshDescriptionBase Function IsPolygonGroupValid
struct Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics
{
	struct MeshDescriptionBase_eventIsPolygonGroupValid_Parms
	{
		FPolygonGroupID PolygonGroupID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed polygon group ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed polygon group ID is valid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsPolygonGroupValid_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
void Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsPolygonGroupValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsPolygonGroupValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_PolygonGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsPolygonGroupValid", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::MeshDescriptionBase_eventIsPolygonGroupValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::MeshDescriptionBase_eventIsPolygonGroupValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsPolygonGroupValid)
{
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPolygonGroupValid(Z_Param_PolygonGroupID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsPolygonGroupValid

// Begin Class UMeshDescriptionBase Function IsPolygonValid
struct Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics
{
	struct MeshDescriptionBase_eventIsPolygonValid_Parms
	{
		FPolygonID PolygonID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed polygon ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed polygon ID is valid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsPolygonValid_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
void Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsPolygonValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsPolygonValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsPolygonValid", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::MeshDescriptionBase_eventIsPolygonValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::MeshDescriptionBase_eventIsPolygonValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsPolygonValid)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPolygonValid(Z_Param_PolygonID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsPolygonValid

// Begin Class UMeshDescriptionBase Function IsTrianglePartOfNgon
struct Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics
{
	struct MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms
	{
		FTriangleID TriangleID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Determines if this triangle is part of an n-gon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Determines if this triangle is part of an n-gon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(0, nullptr) }; // 435746139
void Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsTrianglePartOfNgon", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::MeshDescriptionBase_eventIsTrianglePartOfNgon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsTrianglePartOfNgon)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTrianglePartOfNgon(Z_Param_TriangleID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsTrianglePartOfNgon

// Begin Class UMeshDescriptionBase Function IsTriangleValid
struct Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics
{
	struct MeshDescriptionBase_eventIsTriangleValid_Parms
	{
		FTriangleID TriangleID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed triangle ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed triangle ID is valid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsTriangleValid_Parms, TriangleID), Z_Construct_UScriptStruct_FTriangleID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleID_MetaData), NewProp_TriangleID_MetaData) }; // 435746139
void Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsTriangleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsTriangleValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_TriangleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsTriangleValid", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::MeshDescriptionBase_eventIsTriangleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::MeshDescriptionBase_eventIsTriangleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsTriangleValid)
{
	P_GET_STRUCT(FTriangleID,Z_Param_TriangleID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTriangleValid(Z_Param_TriangleID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsTriangleValid

// Begin Class UMeshDescriptionBase Function IsVertexInstanceValid
struct Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics
{
	struct MeshDescriptionBase_eventIsVertexInstanceValid_Parms
	{
		FVertexInstanceID VertexInstanceID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed vertex instance ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed vertex instance ID is valid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsVertexInstanceValid_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
void Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsVertexInstanceValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsVertexInstanceValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_VertexInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsVertexInstanceValid", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::MeshDescriptionBase_eventIsVertexInstanceValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::MeshDescriptionBase_eventIsVertexInstanceValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsVertexInstanceValid)
{
	P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVertexInstanceValid(Z_Param_VertexInstanceID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsVertexInstanceValid

// Begin Class UMeshDescriptionBase Function IsVertexOrphaned
struct Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics
{
	struct MeshDescriptionBase_eventIsVertexOrphaned_Parms
	{
		FVertexID VertexID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether a given vertex is orphaned, i.e. it doesn't form part of any polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether a given vertex is orphaned, i.e. it doesn't form part of any polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsVertexOrphaned_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
void Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsVertexOrphaned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsVertexOrphaned_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsVertexOrphaned", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::MeshDescriptionBase_eventIsVertexOrphaned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::MeshDescriptionBase_eventIsVertexOrphaned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsVertexOrphaned)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVertexOrphaned(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsVertexOrphaned

// Begin Class UMeshDescriptionBase Function IsVertexValid
struct Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics
{
	struct MeshDescriptionBase_eventIsVertexValid_Parms
	{
		FVertexID VertexID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Returns whether the passed vertex ID is valid */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Returns whether the passed vertex ID is valid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventIsVertexValid_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
void Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshDescriptionBase_eventIsVertexValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshDescriptionBase_eventIsVertexValid_Parms), &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "IsVertexValid", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::MeshDescriptionBase_eventIsVertexValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::MeshDescriptionBase_eventIsVertexValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execIsVertexValid)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVertexValid(Z_Param_VertexID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function IsVertexValid

// Begin Class UMeshDescriptionBase Function ReserveNewEdges
struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics
{
	struct MeshDescriptionBase_eventReserveNewEdges_Parms
	{
		int32 NumberOfNewEdges;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new edges */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new edges" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfNewEdges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::NewProp_NumberOfNewEdges = { "NumberOfNewEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewEdges_Parms, NumberOfNewEdges), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::NewProp_NumberOfNewEdges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewEdges", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::MeshDescriptionBase_eventReserveNewEdges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::MeshDescriptionBase_eventReserveNewEdges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewEdges)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewEdges);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReserveNewEdges(Z_Param_NumberOfNewEdges);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function ReserveNewEdges

// Begin Class UMeshDescriptionBase Function ReserveNewPolygonGroups
struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics
{
	struct MeshDescriptionBase_eventReserveNewPolygonGroups_Parms
	{
		int32 NumberOfNewPolygonGroups;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new polygon groups */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new polygon groups" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfNewPolygonGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::NewProp_NumberOfNewPolygonGroups = { "NumberOfNewPolygonGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewPolygonGroups_Parms, NumberOfNewPolygonGroups), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::NewProp_NumberOfNewPolygonGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewPolygonGroups", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::MeshDescriptionBase_eventReserveNewPolygonGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::MeshDescriptionBase_eventReserveNewPolygonGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewPolygonGroups)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewPolygonGroups);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReserveNewPolygonGroups(Z_Param_NumberOfNewPolygonGroups);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function ReserveNewPolygonGroups

// Begin Class UMeshDescriptionBase Function ReserveNewPolygons
struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics
{
	struct MeshDescriptionBase_eventReserveNewPolygons_Parms
	{
		int32 NumberOfNewPolygons;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new polygons */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new polygons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfNewPolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfNewPolygons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::NewProp_NumberOfNewPolygons = { "NumberOfNewPolygons", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewPolygons_Parms, NumberOfNewPolygons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfNewPolygons_MetaData), NewProp_NumberOfNewPolygons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::NewProp_NumberOfNewPolygons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewPolygons", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::MeshDescriptionBase_eventReserveNewPolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::MeshDescriptionBase_eventReserveNewPolygons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewPolygons)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewPolygons);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReserveNewPolygons(Z_Param_NumberOfNewPolygons);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function ReserveNewPolygons

// Begin Class UMeshDescriptionBase Function ReserveNewTriangles
struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics
{
	struct MeshDescriptionBase_eventReserveNewTriangles_Parms
	{
		int32 NumberOfNewTriangles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new triangles */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfNewTriangles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::NewProp_NumberOfNewTriangles = { "NumberOfNewTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewTriangles_Parms, NumberOfNewTriangles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::NewProp_NumberOfNewTriangles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewTriangles", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::MeshDescriptionBase_eventReserveNewTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::MeshDescriptionBase_eventReserveNewTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewTriangles)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewTriangles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReserveNewTriangles(Z_Param_NumberOfNewTriangles);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function ReserveNewTriangles

// Begin Class UMeshDescriptionBase Function ReserveNewVertexInstances
struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics
{
	struct MeshDescriptionBase_eventReserveNewVertexInstances_Parms
	{
		int32 NumberOfNewVertexInstances;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new vertex instances */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new vertex instances" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfNewVertexInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::NewProp_NumberOfNewVertexInstances = { "NumberOfNewVertexInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewVertexInstances_Parms, NumberOfNewVertexInstances), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::NewProp_NumberOfNewVertexInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewVertexInstances", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::MeshDescriptionBase_eventReserveNewVertexInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::MeshDescriptionBase_eventReserveNewVertexInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewVertexInstances)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewVertexInstances);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReserveNewVertexInstances(Z_Param_NumberOfNewVertexInstances);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function ReserveNewVertexInstances

// Begin Class UMeshDescriptionBase Function ReserveNewVertices
struct Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics
{
	struct MeshDescriptionBase_eventReserveNewVertices_Parms
	{
		int32 NumberOfNewVertices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reserves space for this number of new vertices */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reserves space for this number of new vertices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfNewVertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::NewProp_NumberOfNewVertices = { "NumberOfNewVertices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReserveNewVertices_Parms, NumberOfNewVertices), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::NewProp_NumberOfNewVertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReserveNewVertices", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::MeshDescriptionBase_eventReserveNewVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::MeshDescriptionBase_eventReserveNewVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execReserveNewVertices)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfNewVertices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReserveNewVertices(Z_Param_NumberOfNewVertices);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function ReserveNewVertices

// Begin Class UMeshDescriptionBase Function ReversePolygonFacing
struct Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics
{
	struct MeshDescriptionBase_eventReversePolygonFacing_Parms
	{
		FPolygonID PolygonID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Reverse the winding order of the vertices of this polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Reverse the winding order of the vertices of this polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventReversePolygonFacing_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::NewProp_PolygonID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "ReversePolygonFacing", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::MeshDescriptionBase_eventReversePolygonFacing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::MeshDescriptionBase_eventReversePolygonFacing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execReversePolygonFacing)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReversePolygonFacing(Z_Param_PolygonID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function ReversePolygonFacing

// Begin Class UMeshDescriptionBase Function SetPolygonPolygonGroup
struct Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics
{
	struct MeshDescriptionBase_eventSetPolygonPolygonGroup_Parms
	{
		FPolygonID PolygonID;
		FPolygonGroupID PolygonGroupID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Sets the polygon group associated with a polygon */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Sets the polygon group associated with a polygon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetPolygonPolygonGroup_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetPolygonPolygonGroup_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(0, nullptr) }; // 3008853001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::NewProp_PolygonGroupID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "SetPolygonPolygonGroup", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::MeshDescriptionBase_eventSetPolygonPolygonGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::MeshDescriptionBase_eventSetPolygonPolygonGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execSetPolygonPolygonGroup)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPolygonPolygonGroup(Z_Param_PolygonID,Z_Param_PolygonGroupID);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function SetPolygonPolygonGroup

// Begin Class UMeshDescriptionBase Function SetPolygonVertexInstances
struct Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics
{
	struct MeshDescriptionBase_eventSetPolygonVertexInstances_Parms
	{
		FPolygonID PolygonID;
		TArray<FVertexInstanceID> VertexInstanceIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Set the vertex instance at the given index around the polygon to the new value */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Set the vertex instance at the given index around the polygon to the new value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetPolygonVertexInstances_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(0, nullptr) }; // 310659000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::NewProp_VertexInstanceIDs_Inner = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(0, nullptr) }; // 3165662219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::NewProp_VertexInstanceIDs = { "VertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetPolygonVertexInstances_Parms, VertexInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexInstanceIDs_MetaData), NewProp_VertexInstanceIDs_MetaData) }; // 3165662219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::NewProp_PolygonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::NewProp_VertexInstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::NewProp_VertexInstanceIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "SetPolygonVertexInstances", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::MeshDescriptionBase_eventSetPolygonVertexInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::MeshDescriptionBase_eventSetPolygonVertexInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execSetPolygonVertexInstances)
{
	P_GET_STRUCT(FPolygonID,Z_Param_PolygonID);
	P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPolygonVertexInstances(Z_Param_PolygonID,Z_Param_Out_VertexInstanceIDs);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function SetPolygonVertexInstances

// Begin Class UMeshDescriptionBase Function SetVertexPosition
struct Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics
{
	struct MeshDescriptionBase_eventSetVertexPosition_Parms
	{
		FVertexID VertexID;
		FVector Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshDescription" },
		{ "Comment", "/** Sets a vertex position */" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
		{ "ToolTip", "Sets a vertex position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetVertexPosition_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(0, nullptr) }; // 4185502256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDescriptionBase_eventSetVertexPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_VertexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDescriptionBase, nullptr, "SetVertexPosition", nullptr, nullptr, Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::MeshDescriptionBase_eventSetVertexPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::MeshDescriptionBase_eventSetVertexPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDescriptionBase::execSetVertexPosition)
{
	P_GET_STRUCT(FVertexID,Z_Param_VertexID);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVertexPosition(Z_Param_VertexID,Z_Param_Out_Position);
	P_NATIVE_END;
}
// End Class UMeshDescriptionBase Function SetVertexPosition

// Begin Class UMeshDescriptionBase
void UMeshDescriptionBase::StaticRegisterNativesUMeshDescriptionBase()
{
	UClass* Class = UMeshDescriptionBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputePolygonTriangulation", &UMeshDescriptionBase::execComputePolygonTriangulation },
		{ "CreateEdge", &UMeshDescriptionBase::execCreateEdge },
		{ "CreateEdgeWithID", &UMeshDescriptionBase::execCreateEdgeWithID },
		{ "CreatePolygon", &UMeshDescriptionBase::execCreatePolygon },
		{ "CreatePolygonGroup", &UMeshDescriptionBase::execCreatePolygonGroup },
		{ "CreatePolygonGroupWithID", &UMeshDescriptionBase::execCreatePolygonGroupWithID },
		{ "CreatePolygonWithID", &UMeshDescriptionBase::execCreatePolygonWithID },
		{ "CreateTriangle", &UMeshDescriptionBase::execCreateTriangle },
		{ "CreateTriangleWithID", &UMeshDescriptionBase::execCreateTriangleWithID },
		{ "CreateVertex", &UMeshDescriptionBase::execCreateVertex },
		{ "CreateVertexInstance", &UMeshDescriptionBase::execCreateVertexInstance },
		{ "CreateVertexInstanceWithID", &UMeshDescriptionBase::execCreateVertexInstanceWithID },
		{ "CreateVertexWithID", &UMeshDescriptionBase::execCreateVertexWithID },
		{ "DeleteEdge", &UMeshDescriptionBase::execDeleteEdge },
		{ "DeletePolygon", &UMeshDescriptionBase::execDeletePolygon },
		{ "DeletePolygonGroup", &UMeshDescriptionBase::execDeletePolygonGroup },
		{ "DeleteTriangle", &UMeshDescriptionBase::execDeleteTriangle },
		{ "DeleteVertex", &UMeshDescriptionBase::execDeleteVertex },
		{ "DeleteVertexInstance", &UMeshDescriptionBase::execDeleteVertexInstance },
		{ "Empty", &UMeshDescriptionBase::execEmpty },
		{ "GetEdgeConnectedPolygons", &UMeshDescriptionBase::execGetEdgeConnectedPolygons },
		{ "GetEdgeConnectedTriangles", &UMeshDescriptionBase::execGetEdgeConnectedTriangles },
		{ "GetEdgeCount", &UMeshDescriptionBase::execGetEdgeCount },
		{ "GetEdgeVertex", &UMeshDescriptionBase::execGetEdgeVertex },
		{ "GetEdgeVertices", &UMeshDescriptionBase::execGetEdgeVertices },
		{ "GetNumEdgeConnectedPolygons", &UMeshDescriptionBase::execGetNumEdgeConnectedPolygons },
		{ "GetNumEdgeConnectedTriangles", &UMeshDescriptionBase::execGetNumEdgeConnectedTriangles },
		{ "GetNumPolygonGroupPolygons", &UMeshDescriptionBase::execGetNumPolygonGroupPolygons },
		{ "GetNumPolygonInternalEdges", &UMeshDescriptionBase::execGetNumPolygonInternalEdges },
		{ "GetNumPolygonTriangles", &UMeshDescriptionBase::execGetNumPolygonTriangles },
		{ "GetNumPolygonVertices", &UMeshDescriptionBase::execGetNumPolygonVertices },
		{ "GetNumVertexConnectedEdges", &UMeshDescriptionBase::execGetNumVertexConnectedEdges },
		{ "GetNumVertexConnectedPolygons", &UMeshDescriptionBase::execGetNumVertexConnectedPolygons },
		{ "GetNumVertexConnectedTriangles", &UMeshDescriptionBase::execGetNumVertexConnectedTriangles },
		{ "GetNumVertexInstanceConnectedPolygons", &UMeshDescriptionBase::execGetNumVertexInstanceConnectedPolygons },
		{ "GetNumVertexInstanceConnectedTriangles", &UMeshDescriptionBase::execGetNumVertexInstanceConnectedTriangles },
		{ "GetNumVertexVertexInstances", &UMeshDescriptionBase::execGetNumVertexVertexInstances },
		{ "GetPolygonAdjacentPolygons", &UMeshDescriptionBase::execGetPolygonAdjacentPolygons },
		{ "GetPolygonCount", &UMeshDescriptionBase::execGetPolygonCount },
		{ "GetPolygonGroupCount", &UMeshDescriptionBase::execGetPolygonGroupCount },
		{ "GetPolygonGroupPolygons", &UMeshDescriptionBase::execGetPolygonGroupPolygons },
		{ "GetPolygonInternalEdges", &UMeshDescriptionBase::execGetPolygonInternalEdges },
		{ "GetPolygonPerimeterEdges", &UMeshDescriptionBase::execGetPolygonPerimeterEdges },
		{ "GetPolygonPolygonGroup", &UMeshDescriptionBase::execGetPolygonPolygonGroup },
		{ "GetPolygonTriangles", &UMeshDescriptionBase::execGetPolygonTriangles },
		{ "GetPolygonVertexInstances", &UMeshDescriptionBase::execGetPolygonVertexInstances },
		{ "GetPolygonVertices", &UMeshDescriptionBase::execGetPolygonVertices },
		{ "GetTriangleAdjacentTriangles", &UMeshDescriptionBase::execGetTriangleAdjacentTriangles },
		{ "GetTriangleCount", &UMeshDescriptionBase::execGetTriangleCount },
		{ "GetTriangleEdges", &UMeshDescriptionBase::execGetTriangleEdges },
		{ "GetTrianglePolygon", &UMeshDescriptionBase::execGetTrianglePolygon },
		{ "GetTrianglePolygonGroup", &UMeshDescriptionBase::execGetTrianglePolygonGroup },
		{ "GetTriangleVertexInstance", &UMeshDescriptionBase::execGetTriangleVertexInstance },
		{ "GetTriangleVertexInstances", &UMeshDescriptionBase::execGetTriangleVertexInstances },
		{ "GetTriangleVertices", &UMeshDescriptionBase::execGetTriangleVertices },
		{ "GetVertexAdjacentVertices", &UMeshDescriptionBase::execGetVertexAdjacentVertices },
		{ "GetVertexConnectedEdges", &UMeshDescriptionBase::execGetVertexConnectedEdges },
		{ "GetVertexConnectedPolygons", &UMeshDescriptionBase::execGetVertexConnectedPolygons },
		{ "GetVertexConnectedTriangles", &UMeshDescriptionBase::execGetVertexConnectedTriangles },
		{ "GetVertexCount", &UMeshDescriptionBase::execGetVertexCount },
		{ "GetVertexInstanceConnectedPolygons", &UMeshDescriptionBase::execGetVertexInstanceConnectedPolygons },
		{ "GetVertexInstanceConnectedTriangles", &UMeshDescriptionBase::execGetVertexInstanceConnectedTriangles },
		{ "GetVertexInstanceCount", &UMeshDescriptionBase::execGetVertexInstanceCount },
		{ "GetVertexInstanceForPolygonVertex", &UMeshDescriptionBase::execGetVertexInstanceForPolygonVertex },
		{ "GetVertexInstanceForTriangleVertex", &UMeshDescriptionBase::execGetVertexInstanceForTriangleVertex },
		{ "GetVertexInstancePairEdge", &UMeshDescriptionBase::execGetVertexInstancePairEdge },
		{ "GetVertexInstanceVertex", &UMeshDescriptionBase::execGetVertexInstanceVertex },
		{ "GetVertexPairEdge", &UMeshDescriptionBase::execGetVertexPairEdge },
		{ "GetVertexPosition", &UMeshDescriptionBase::execGetVertexPosition },
		{ "GetVertexVertexInstances", &UMeshDescriptionBase::execGetVertexVertexInstances },
		{ "IsEdgeInternal", &UMeshDescriptionBase::execIsEdgeInternal },
		{ "IsEdgeInternalToPolygon", &UMeshDescriptionBase::execIsEdgeInternalToPolygon },
		{ "IsEdgeValid", &UMeshDescriptionBase::execIsEdgeValid },
		{ "IsEmpty", &UMeshDescriptionBase::execIsEmpty },
		{ "IsPolygonGroupValid", &UMeshDescriptionBase::execIsPolygonGroupValid },
		{ "IsPolygonValid", &UMeshDescriptionBase::execIsPolygonValid },
		{ "IsTrianglePartOfNgon", &UMeshDescriptionBase::execIsTrianglePartOfNgon },
		{ "IsTriangleValid", &UMeshDescriptionBase::execIsTriangleValid },
		{ "IsVertexInstanceValid", &UMeshDescriptionBase::execIsVertexInstanceValid },
		{ "IsVertexOrphaned", &UMeshDescriptionBase::execIsVertexOrphaned },
		{ "IsVertexValid", &UMeshDescriptionBase::execIsVertexValid },
		{ "ReserveNewEdges", &UMeshDescriptionBase::execReserveNewEdges },
		{ "ReserveNewPolygonGroups", &UMeshDescriptionBase::execReserveNewPolygonGroups },
		{ "ReserveNewPolygons", &UMeshDescriptionBase::execReserveNewPolygons },
		{ "ReserveNewTriangles", &UMeshDescriptionBase::execReserveNewTriangles },
		{ "ReserveNewVertexInstances", &UMeshDescriptionBase::execReserveNewVertexInstances },
		{ "ReserveNewVertices", &UMeshDescriptionBase::execReserveNewVertices },
		{ "ReversePolygonFacing", &UMeshDescriptionBase::execReversePolygonFacing },
		{ "SetPolygonPolygonGroup", &UMeshDescriptionBase::execSetPolygonPolygonGroup },
		{ "SetPolygonVertexInstances", &UMeshDescriptionBase::execSetPolygonVertexInstances },
		{ "SetVertexPosition", &UMeshDescriptionBase::execSetVertexPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshDescriptionBase);
UClass* Z_Construct_UClass_UMeshDescriptionBase_NoRegister()
{
	return UMeshDescriptionBase::StaticClass();
}
struct Z_Construct_UClass_UMeshDescriptionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshDescriptionBase.h" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation, "ComputePolygonTriangulation" }, // 1415738787
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge, "CreateEdge" }, // 4149619463
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID, "CreateEdgeWithID" }, // 1154744253
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon, "CreatePolygon" }, // 772735498
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup, "CreatePolygonGroup" }, // 1220537369
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID, "CreatePolygonGroupWithID" }, // 3668467569
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID, "CreatePolygonWithID" }, // 2802476604
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle, "CreateTriangle" }, // 2412357171
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID, "CreateTriangleWithID" }, // 1748294999
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex, "CreateVertex" }, // 661187580
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance, "CreateVertexInstance" }, // 3009225047
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID, "CreateVertexInstanceWithID" }, // 2739774498
		{ &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID, "CreateVertexWithID" }, // 2997182109
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge, "DeleteEdge" }, // 427034837
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon, "DeletePolygon" }, // 3676481796
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup, "DeletePolygonGroup" }, // 1993758183
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle, "DeleteTriangle" }, // 3395357794
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex, "DeleteVertex" }, // 2355888512
		{ &Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance, "DeleteVertexInstance" }, // 3943537654
		{ &Z_Construct_UFunction_UMeshDescriptionBase_Empty, "Empty" }, // 388225879
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons, "GetEdgeConnectedPolygons" }, // 833300536
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles, "GetEdgeConnectedTriangles" }, // 4081744457
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount, "GetEdgeCount" }, // 2138622089
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex, "GetEdgeVertex" }, // 1356615005
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices, "GetEdgeVertices" }, // 2461926526
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons, "GetNumEdgeConnectedPolygons" }, // 2066305446
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles, "GetNumEdgeConnectedTriangles" }, // 1864845342
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons, "GetNumPolygonGroupPolygons" }, // 1641992774
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges, "GetNumPolygonInternalEdges" }, // 1547386553
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles, "GetNumPolygonTriangles" }, // 2687357518
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices, "GetNumPolygonVertices" }, // 1007423980
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges, "GetNumVertexConnectedEdges" }, // 2676732733
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons, "GetNumVertexConnectedPolygons" }, // 1343446466
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles, "GetNumVertexConnectedTriangles" }, // 1489301873
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons, "GetNumVertexInstanceConnectedPolygons" }, // 2620243521
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles, "GetNumVertexInstanceConnectedTriangles" }, // 3595567532
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances, "GetNumVertexVertexInstances" }, // 1901329240
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons, "GetPolygonAdjacentPolygons" }, // 3454430949
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount, "GetPolygonCount" }, // 888649137
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount, "GetPolygonGroupCount" }, // 1214344167
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons, "GetPolygonGroupPolygons" }, // 61226496
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges, "GetPolygonInternalEdges" }, // 2600191020
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges, "GetPolygonPerimeterEdges" }, // 1860696243
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup, "GetPolygonPolygonGroup" }, // 4099062173
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles, "GetPolygonTriangles" }, // 3350762776
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances, "GetPolygonVertexInstances" }, // 2226361228
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices, "GetPolygonVertices" }, // 3501108143
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles, "GetTriangleAdjacentTriangles" }, // 273139521
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount, "GetTriangleCount" }, // 3031984357
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges, "GetTriangleEdges" }, // 3370037356
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon, "GetTrianglePolygon" }, // 2980696866
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup, "GetTrianglePolygonGroup" }, // 69039400
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance, "GetTriangleVertexInstance" }, // 2913614460
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances, "GetTriangleVertexInstances" }, // 2805503604
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices, "GetTriangleVertices" }, // 4231620573
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices, "GetVertexAdjacentVertices" }, // 2801694064
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges, "GetVertexConnectedEdges" }, // 2983293750
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons, "GetVertexConnectedPolygons" }, // 2427562886
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles, "GetVertexConnectedTriangles" }, // 864438191
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount, "GetVertexCount" }, // 278666824
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons, "GetVertexInstanceConnectedPolygons" }, // 1529732060
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles, "GetVertexInstanceConnectedTriangles" }, // 3582123036
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount, "GetVertexInstanceCount" }, // 3543371923
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex, "GetVertexInstanceForPolygonVertex" }, // 1459453159
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex, "GetVertexInstanceForTriangleVertex" }, // 747405930
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge, "GetVertexInstancePairEdge" }, // 2992906149
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex, "GetVertexInstanceVertex" }, // 892609303
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge, "GetVertexPairEdge" }, // 1908401459
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition, "GetVertexPosition" }, // 1941388524
		{ &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances, "GetVertexVertexInstances" }, // 3347209768
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal, "IsEdgeInternal" }, // 547054546
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon, "IsEdgeInternalToPolygon" }, // 1379796286
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid, "IsEdgeValid" }, // 2675145217
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty, "IsEmpty" }, // 2351960158
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid, "IsPolygonGroupValid" }, // 844505129
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid, "IsPolygonValid" }, // 4078722919
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon, "IsTrianglePartOfNgon" }, // 3924637872
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid, "IsTriangleValid" }, // 395194758
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid, "IsVertexInstanceValid" }, // 1574476114
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned, "IsVertexOrphaned" }, // 1316882821
		{ &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid, "IsVertexValid" }, // 3740547892
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges, "ReserveNewEdges" }, // 2764327388
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups, "ReserveNewPolygonGroups" }, // 3237939988
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons, "ReserveNewPolygons" }, // 3076103597
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles, "ReserveNewTriangles" }, // 916146701
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances, "ReserveNewVertexInstances" }, // 184122712
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices, "ReserveNewVertices" }, // 2931107398
		{ &Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing, "ReversePolygonFacing" }, // 3817343117
		{ &Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup, "SetPolygonPolygonGroup" }, // 3943036756
		{ &Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances, "SetPolygonVertexInstances" }, // 2852038367
		{ &Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition, "SetVertexPosition" }, // 3191892198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshDescriptionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshDescriptionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDescriptionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshDescriptionBase_Statics::ClassParams = {
	&UMeshDescriptionBase::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDescriptionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshDescriptionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshDescriptionBase()
{
	if (!Z_Registration_Info_UClass_UMeshDescriptionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshDescriptionBase.OuterSingleton, Z_Construct_UClass_UMeshDescriptionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshDescriptionBase.OuterSingleton;
}
template<> MESHDESCRIPTION_API UClass* StaticClass<UMeshDescriptionBase>()
{
	return UMeshDescriptionBase::StaticClass();
}
UMeshDescriptionBase::UMeshDescriptionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDescriptionBase);
UMeshDescriptionBase::~UMeshDescriptionBase() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMeshDescriptionBase)
// End Class UMeshDescriptionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshDescriptionBase, UMeshDescriptionBase::StaticClass, TEXT("UMeshDescriptionBase"), &Z_Registration_Info_UClass_UMeshDescriptionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshDescriptionBase), 4061547353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_1123618592(TEXT("/Script/MeshDescription"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
