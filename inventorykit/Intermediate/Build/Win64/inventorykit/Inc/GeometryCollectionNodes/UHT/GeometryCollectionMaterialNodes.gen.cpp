// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionMaterialNodes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionMaterialNodes() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowFaceSelection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeMaterialDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FAddMaterialToCollectionDataflowNode
static_assert(std::is_polymorphic<FAddMaterialToCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FAddMaterialToCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode;
class UScriptStruct* FAddMaterialToCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("AddMaterialToCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FAddMaterialToCollectionDataflowNode>()
{
	return FAddMaterialToCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Adds Outside/Inside Materials to Outside/Inside faces\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Adds Outside/Inside Materials to Outside/Inside faces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to add material(s) to */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Collection to add material(s) to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelection_MetaData[] = {
		{ "Comment", "/** Face selection, the material(s) will be added to the selected faces */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "FaceSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Face selection, the material(s) will be added to the selected faces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Outside material to assign to the outside faces from the face selection */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Outside material to assign to the outside faces from the face selection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Inside material to assign to the inside faces from the face selection */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Inside material to assign to the inside faces from the face selection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssignOutsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, the outside material will be assigned to the outside faces from the face selection */" },
		{ "DisplayName", "Assign Outside Material to Outside Faces" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "If true, the outside material will be assigned to the outside faces from the face selection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssignInsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, the inside material will be assigned to the inside faces from the face selection */" },
		{ "DisplayName", "Assign Inside Material to Inside Faces" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "If true, the inside material will be assigned to the inside faces from the face selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceSelection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutsideMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InsideMaterial;
	static void NewProp_bAssignOutsideMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignOutsideMaterial;
	static void NewProp_bAssignInsideMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignInsideMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddMaterialToCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_FaceSelection = { "FaceSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, FaceSelection), Z_Construct_UScriptStruct_FDataflowFaceSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceSelection_MetaData), NewProp_FaceSelection_MetaData) }; // 625145595
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_OutsideMaterial = { "OutsideMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, OutsideMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutsideMaterial_MetaData), NewProp_OutsideMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_InsideMaterial = { "InsideMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, InsideMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsideMaterial_MetaData), NewProp_InsideMaterial_MetaData) };
void Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_SetBit(void* Obj)
{
	((FAddMaterialToCollectionDataflowNode*)Obj)->bAssignOutsideMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial = { "bAssignOutsideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAddMaterialToCollectionDataflowNode), &Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssignOutsideMaterial_MetaData), NewProp_bAssignOutsideMaterial_MetaData) };
void Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_SetBit(void* Obj)
{
	((FAddMaterialToCollectionDataflowNode*)Obj)->bAssignInsideMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial = { "bAssignInsideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAddMaterialToCollectionDataflowNode), &Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssignInsideMaterial_MetaData), NewProp_bAssignInsideMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_FaceSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_OutsideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_InsideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"AddMaterialToCollectionDataflowNode",
	Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::PropPointers),
	sizeof(FAddMaterialToCollectionDataflowNode),
	alignof(FAddMaterialToCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FAddMaterialToCollectionDataflowNode

// Begin ScriptStruct FReAssignMaterialInCollectionDataflowNode
static_assert(std::is_polymorphic<FReAssignMaterialInCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FReAssignMaterialInCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode;
class UScriptStruct* FReAssignMaterialInCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ReAssignMaterialInCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FReAssignMaterialInCollectionDataflowNode>()
{
	return FReAssignMaterialInCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Reassign existing material(s) to Outside/Inside faces\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Reassign existing material(s) to Outside/Inside faces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection for reassign the material(s) */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Collection for reassign the material(s)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelection_MetaData[] = {
		{ "Comment", "/** Face selection, the material(s) will be assigned to the selected faces */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "FaceSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Face selection, the material(s) will be assigned to the selected faces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutsideMaterialIdx_MetaData[] = {
		{ "ArrayClamp", "Materials" },
		{ "Category", "Material" },
		{ "Comment", "/** Index of the material in the Materials array to assign to the outside faces from the face selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Outside Material Index" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Index of the material in the Materials array to assign to the outside faces from the face selection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsideMaterialIdx_MetaData[] = {
		{ "ArrayClamp", "Materials" },
		{ "Category", "Material" },
		{ "Comment", "/** Index of the material in the Materials array to assign to the inside faces from the face selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Inside Material Index" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Index of the material in the Materials array to assign to the inside faces from the face selection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssignOutsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, the selected material from the Materials array will be assigned to the outside faces from the face selection */" },
		{ "DisplayName", "Assign Outside Material to Outside Faces" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "If true, the selected material from the Materials array will be assigned to the outside faces from the face selection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssignInsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, the selected material from the Materials array will be assigned to the inside faces from the face selection */" },
		{ "DisplayName", "Assign Inside Material to Inside Faces" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "If true, the selected material from the Materials array will be assigned to the inside faces from the face selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceSelection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutsideMaterialIdx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InsideMaterialIdx;
	static void NewProp_bAssignOutsideMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignOutsideMaterial;
	static void NewProp_bAssignInsideMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignInsideMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReAssignMaterialInCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_FaceSelection = { "FaceSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, FaceSelection), Z_Construct_UScriptStruct_FDataflowFaceSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceSelection_MetaData), NewProp_FaceSelection_MetaData) }; // 625145595
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_OutsideMaterialIdx = { "OutsideMaterialIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, OutsideMaterialIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutsideMaterialIdx_MetaData), NewProp_OutsideMaterialIdx_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_InsideMaterialIdx = { "InsideMaterialIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, InsideMaterialIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsideMaterialIdx_MetaData), NewProp_InsideMaterialIdx_MetaData) };
void Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_SetBit(void* Obj)
{
	((FReAssignMaterialInCollectionDataflowNode*)Obj)->bAssignOutsideMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial = { "bAssignOutsideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FReAssignMaterialInCollectionDataflowNode), &Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssignOutsideMaterial_MetaData), NewProp_bAssignOutsideMaterial_MetaData) };
void Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_SetBit(void* Obj)
{
	((FReAssignMaterialInCollectionDataflowNode*)Obj)->bAssignInsideMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial = { "bAssignInsideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FReAssignMaterialInCollectionDataflowNode), &Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssignInsideMaterial_MetaData), NewProp_bAssignInsideMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_FaceSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_OutsideMaterialIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_InsideMaterialIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"ReAssignMaterialInCollectionDataflowNode",
	Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::PropPointers),
	sizeof(FReAssignMaterialInCollectionDataflowNode),
	alignof(FReAssignMaterialInCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FReAssignMaterialInCollectionDataflowNode

// Begin ScriptStruct FMaterialsInfoDataflowNode
static_assert(std::is_polymorphic<FMaterialsInfoDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMaterialsInfoDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode;
class UScriptStruct* FMaterialsInfoDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MaterialsInfoDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMaterialsInfoDataflowNode>()
{
	return FMaterialsInfoDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates a formatted string of materials from the Materials array\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Generates a formatted string of materials from the Materials array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "Comment", "/** Formatted string of the materials */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Formatted string of the materials" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialsInfoDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialsInfoDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialsInfoDataflowNode, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MaterialsInfoDataflowNode",
	Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::PropPointers),
	sizeof(FMaterialsInfoDataflowNode),
	alignof(FMaterialsInfoDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.InnerSingleton;
}
// End ScriptStruct FMaterialsInfoDataflowNode

// Begin ScriptStruct FGetMaterialFromMaterialsArrayDataflowNode
static_assert(std::is_polymorphic<FGetMaterialFromMaterialsArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetMaterialFromMaterialsArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode;
class UScriptStruct* FGetMaterialFromMaterialsArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetMaterialFromMaterialsArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetMaterialFromMaterialsArrayDataflowNode>()
{
	return FGetMaterialFromMaterialsArrayDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Get a Material from a Materials array\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Get a Material from a Materials array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Comment", "/** Selected material from the Materials array */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Selected material from the Materials array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIdx_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Index in the Materials array for the selected material */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Material Index" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Index in the Materials array for the selected material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIdx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetMaterialFromMaterialsArrayDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetMaterialFromMaterialsArrayDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetMaterialFromMaterialsArrayDataflowNode, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx = { "MaterialIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetMaterialFromMaterialsArrayDataflowNode, MaterialIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIdx_MetaData), NewProp_MaterialIdx_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GetMaterialFromMaterialsArrayDataflowNode",
	Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::PropPointers),
	sizeof(FGetMaterialFromMaterialsArrayDataflowNode),
	alignof(FGetMaterialFromMaterialsArrayDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetMaterialFromMaterialsArrayDataflowNode

// Begin Enum ESetMaterialOperationTypeEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum;
static UEnum* ESetMaterialOperationTypeEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ESetMaterialOperationTypeEnum"));
	}
	return Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<ESetMaterialOperationTypeEnum>()
{
	return ESetMaterialOperationTypeEnum_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "ESetMaterialOperationTypeEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_SetMaterialOperationType_Add.DisplayName", "Add" },
		{ "Dataflow_SetMaterialOperationType_Add.Name", "ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Add" },
		{ "Dataflow_SetMaterialOperationType_Insert.DisplayName", "Insert" },
		{ "Dataflow_SetMaterialOperationType_Insert.Name", "ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Add", (int64)ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Add },
		{ "ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert", (int64)ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert },
		{ "ESetMaterialOperationTypeEnum::Dataflow_Max", (int64)ESetMaterialOperationTypeEnum::Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"ESetMaterialOperationTypeEnum",
	"ESetMaterialOperationTypeEnum",
	Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum()
{
	if (!Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.InnerSingleton;
}
// End Enum ESetMaterialOperationTypeEnum

// Begin ScriptStruct FSetMaterialInMaterialsArrayDataflowNode
static_assert(std::is_polymorphic<FSetMaterialInMaterialsArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetMaterialInMaterialsArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode;
class UScriptStruct* FSetMaterialInMaterialsArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SetMaterialInMaterialsArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSetMaterialInMaterialsArrayDataflowNode>()
{
	return FSetMaterialInMaterialsArrayDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Set a Material in a Materials array\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Set a Material in a Materials array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Material to add/insert to/in Materials array */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Material to add/insert to/in Materials array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Operation type for setting the material, add will add the new material to the end off Materials array, insert will insert the\n\x09new material into Materials array at the index specified by MaterialIdx\x09*/" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Operation type for setting the material, add will add the new material to the end off Materials array, insert will insert the\n      new material into Materials array at the index specified by MaterialIdx" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIdx_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Index for inserting a nem material into the Materials array */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Material Index" },
		{ "EditCondition", "Operation == ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Index for inserting a nem material into the Materials array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIdx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetMaterialInMaterialsArrayDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetMaterialInMaterialsArrayDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetMaterialInMaterialsArrayDataflowNode, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetMaterialInMaterialsArrayDataflowNode, Operation), Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 157091942
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx = { "MaterialIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetMaterialInMaterialsArrayDataflowNode, MaterialIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIdx_MetaData), NewProp_MaterialIdx_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SetMaterialInMaterialsArrayDataflowNode",
	Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::PropPointers),
	sizeof(FSetMaterialInMaterialsArrayDataflowNode),
	alignof(FSetMaterialInMaterialsArrayDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.InnerSingleton;
}
// End ScriptStruct FSetMaterialInMaterialsArrayDataflowNode

// Begin ScriptStruct FMakeMaterialDataflowNode
static_assert(std::is_polymorphic<FMakeMaterialDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeMaterialDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode;
class UScriptStruct* FMakeMaterialDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeMaterialDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeMaterialDataflowNode>()
{
	return FMakeMaterialDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Makes a material\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Makes a material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Material which will be outputed */" },
		{ "DisplayName", "Material" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Material which will be outputed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Comment", "/** Output material */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Output material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeMaterialDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeMaterialDataflowNode, InMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMaterial_MetaData), NewProp_InMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeMaterialDataflowNode, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_InMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeMaterialDataflowNode",
	Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::PropPointers),
	sizeof(FMakeMaterialDataflowNode),
	alignof(FMakeMaterialDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeMaterialDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeMaterialDataflowNode

// Begin ScriptStruct FMakeMaterialsArrayDataflowNode
static_assert(std::is_polymorphic<FMakeMaterialsArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeMaterialsArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode;
class UScriptStruct* FMakeMaterialsArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeMaterialsArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeMaterialsArrayDataflowNode>()
{
	return FMakeMaterialsArrayDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Makes an empty Materials array\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Makes an empty Materials array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Output Matarials array */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Output Matarials array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeMaterialsArrayDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeMaterialsArrayDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeMaterialsArrayDataflowNode",
	Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::PropPointers),
	sizeof(FMakeMaterialsArrayDataflowNode),
	alignof(FMakeMaterialsArrayDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeMaterialsArrayDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESetMaterialOperationTypeEnum_StaticEnum, TEXT("ESetMaterialOperationTypeEnum"), &Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 157091942U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAddMaterialToCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewStructOps, TEXT("AddMaterialToCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddMaterialToCollectionDataflowNode), 289761990U) },
		{ FReAssignMaterialInCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewStructOps, TEXT("ReAssignMaterialInCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReAssignMaterialInCollectionDataflowNode), 1651512428U) },
		{ FMaterialsInfoDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewStructOps, TEXT("MaterialsInfoDataflowNode"), &Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialsInfoDataflowNode), 4119299429U) },
		{ FGetMaterialFromMaterialsArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewStructOps, TEXT("GetMaterialFromMaterialsArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetMaterialFromMaterialsArrayDataflowNode), 3169632599U) },
		{ FSetMaterialInMaterialsArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewStructOps, TEXT("SetMaterialInMaterialsArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetMaterialInMaterialsArrayDataflowNode), 2450432535U) },
		{ FMakeMaterialDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewStructOps, TEXT("MakeMaterialDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeMaterialDataflowNode), 1907493697U) },
		{ FMakeMaterialsArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewStructOps, TEXT("MakeMaterialsArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeMaterialsArrayDataflowNode), 4099091324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_713125411(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
