// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionConversionNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionConversionNodes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FBoolToIntDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FBoolToStringDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatToIntDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatToStringDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FIntToBoolDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FIntToDoubleDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FIntToFloatDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FIntToStringDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FVectorToStringDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FVectorToStringDataflowNode
static_assert(std::is_polymorphic<FVectorToStringDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FVectorToStringDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorToStringDataflowNode;
class UScriptStruct* FVectorToStringDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorToStringDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorToStringDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorToStringDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("VectorToStringDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_VectorToStringDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FVectorToStringDataflowNode>()
{
	return FVectorToStringDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Vector" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorToStringDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorToStringDataflowNode, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorToStringDataflowNode, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"VectorToStringDataflowNode",
	Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::PropPointers),
	sizeof(FVectorToStringDataflowNode),
	alignof(FVectorToStringDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVectorToStringDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_VectorToStringDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorToStringDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VectorToStringDataflowNode.InnerSingleton;
}
// End ScriptStruct FVectorToStringDataflowNode

// Begin ScriptStruct FFloatToStringDataflowNode
static_assert(std::is_polymorphic<FFloatToStringDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFloatToStringDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatToStringDataflowNode;
class UScriptStruct* FFloatToStringDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatToStringDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatToStringDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatToStringDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("FloatToStringDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FloatToStringDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FFloatToStringDataflowNode>()
{
	return FFloatToStringDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "Category", "Float" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatToStringDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatToStringDataflowNode, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatToStringDataflowNode, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"FloatToStringDataflowNode",
	Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::PropPointers),
	sizeof(FFloatToStringDataflowNode),
	alignof(FFloatToStringDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatToStringDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_FloatToStringDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatToStringDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatToStringDataflowNode.InnerSingleton;
}
// End ScriptStruct FFloatToStringDataflowNode

// Begin ScriptStruct FIntToStringDataflowNode
static_assert(std::is_polymorphic<FIntToStringDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FIntToStringDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntToStringDataflowNode;
class UScriptStruct* FIntToStringDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntToStringDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntToStringDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntToStringDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("IntToStringDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_IntToStringDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FIntToStringDataflowNode>()
{
	return FIntToStringDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts an Int to a String\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Converts an Int to a String" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[] = {
		{ "Category", "Int" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntToStringDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntToStringDataflowNode, Int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int_MetaData), NewProp_Int_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntToStringDataflowNode, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::NewProp_Int,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"IntToStringDataflowNode",
	Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::PropPointers),
	sizeof(FIntToStringDataflowNode),
	alignof(FIntToStringDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntToStringDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_IntToStringDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntToStringDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntToStringDataflowNode.InnerSingleton;
}
// End ScriptStruct FIntToStringDataflowNode

// Begin ScriptStruct FBoolToStringDataflowNode
static_assert(std::is_polymorphic<FBoolToStringDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FBoolToStringDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolToStringDataflowNode;
class UScriptStruct* FBoolToStringDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolToStringDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolToStringDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolToStringDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("BoolToStringDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_BoolToStringDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FBoolToStringDataflowNode>()
{
	return FBoolToStringDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a Bool to a String in a form of (\"true\", \"false\")\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Converts a Bool to a String in a form of (\"true\", \"false\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[] = {
		{ "Category", "Bool" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolToStringDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((FBoolToStringDataflowNode*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoolToStringDataflowNode), &Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bool_MetaData), NewProp_Bool_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolToStringDataflowNode, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::NewProp_Bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"BoolToStringDataflowNode",
	Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::PropPointers),
	sizeof(FBoolToStringDataflowNode),
	alignof(FBoolToStringDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoolToStringDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_BoolToStringDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolToStringDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoolToStringDataflowNode.InnerSingleton;
}
// End ScriptStruct FBoolToStringDataflowNode

// Begin ScriptStruct FIntToFloatDataflowNode
static_assert(std::is_polymorphic<FIntToFloatDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FIntToFloatDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntToFloatDataflowNode;
class UScriptStruct* FIntToFloatDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntToFloatDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntToFloatDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntToFloatDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("IntToFloatDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_IntToFloatDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FIntToFloatDataflowNode>()
{
	return FIntToFloatDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts an Int to a Float\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Converts an Int to a Float" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[] = {
		{ "Category", "Int" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntToFloatDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntToFloatDataflowNode, Int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int_MetaData), NewProp_Int_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntToFloatDataflowNode, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::NewProp_Int,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::NewProp_Float,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"IntToFloatDataflowNode",
	Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::PropPointers),
	sizeof(FIntToFloatDataflowNode),
	alignof(FIntToFloatDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntToFloatDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_IntToFloatDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntToFloatDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntToFloatDataflowNode.InnerSingleton;
}
// End ScriptStruct FIntToFloatDataflowNode

// Begin ScriptStruct FIntToDoubleDataflowNode
static_assert(std::is_polymorphic<FIntToDoubleDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FIntToDoubleDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntToDoubleDataflowNode;
class UScriptStruct* FIntToDoubleDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntToDoubleDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntToDoubleDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntToDoubleDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("IntToDoubleDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_IntToDoubleDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FIntToDoubleDataflowNode>()
{
	return FIntToDoubleDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts an Int to a Double\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Converts an Int to a Double" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[] = {
		{ "Category", "Int" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Double;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntToDoubleDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntToDoubleDataflowNode, Int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int_MetaData), NewProp_Int_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::NewProp_Double = { "Double", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntToDoubleDataflowNode, Double), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Double_MetaData), NewProp_Double_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::NewProp_Int,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::NewProp_Double,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"IntToDoubleDataflowNode",
	Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::PropPointers),
	sizeof(FIntToDoubleDataflowNode),
	alignof(FIntToDoubleDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntToDoubleDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_IntToDoubleDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntToDoubleDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntToDoubleDataflowNode.InnerSingleton;
}
// End ScriptStruct FIntToDoubleDataflowNode

// Begin ScriptStruct FFloatToDoubleDataflowNode
static_assert(std::is_polymorphic<FFloatToDoubleDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFloatToDoubleDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatToDoubleDataflowNode;
class UScriptStruct* FFloatToDoubleDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatToDoubleDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatToDoubleDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("FloatToDoubleDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FloatToDoubleDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FFloatToDoubleDataflowNode>()
{
	return FFloatToDoubleDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts an Float to a Double\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Converts an Float to a Double" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "Category", "Int" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Double;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatToDoubleDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatToDoubleDataflowNode, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::NewProp_Double = { "Double", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatToDoubleDataflowNode, Double), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Double_MetaData), NewProp_Double_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::NewProp_Double,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"FloatToDoubleDataflowNode",
	Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::PropPointers),
	sizeof(FFloatToDoubleDataflowNode),
	alignof(FFloatToDoubleDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_FloatToDoubleDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatToDoubleDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatToDoubleDataflowNode.InnerSingleton;
}
// End ScriptStruct FFloatToDoubleDataflowNode

// Begin Enum EFloatToIntFunctionEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFloatToIntFunctionEnum;
static UEnum* EFloatToIntFunctionEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFloatToIntFunctionEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFloatToIntFunctionEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EFloatToIntFunctionEnum"));
	}
	return Z_Registration_Info_UEnum_EFloatToIntFunctionEnum.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EFloatToIntFunctionEnum>()
{
	return EFloatToIntFunctionEnum_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_FloatToInt_Function_Ceil.DisplayName", "Ceil()" },
		{ "Dataflow_FloatToInt_Function_Ceil.Name", "EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Ceil" },
		{ "Dataflow_FloatToInt_Function_Floor.DisplayName", "Floor()" },
		{ "Dataflow_FloatToInt_Function_Floor.Name", "EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Floor" },
		{ "Dataflow_FloatToInt_Function_Round.DisplayName", "Round()" },
		{ "Dataflow_FloatToInt_Function_Round.Name", "EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Round" },
		{ "Dataflow_FloatToInt_Function_Truncate.DisplayName", "Truncate()" },
		{ "Dataflow_FloatToInt_Function_Truncate.Name", "EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Truncate" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EFloatToIntFunctionEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Floor", (int64)EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Floor },
		{ "EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Ceil", (int64)EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Ceil },
		{ "EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Round", (int64)EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Round },
		{ "EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Truncate", (int64)EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Truncate },
		{ "EFloatToIntFunctionEnum::Dataflow_Max", (int64)EFloatToIntFunctionEnum::Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"EFloatToIntFunctionEnum",
	"EFloatToIntFunctionEnum",
	Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum()
{
	if (!Z_Registration_Info_UEnum_EFloatToIntFunctionEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFloatToIntFunctionEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFloatToIntFunctionEnum.InnerSingleton;
}
// End Enum EFloatToIntFunctionEnum

// Begin ScriptStruct FFloatToIntDataflowNode
static_assert(std::is_polymorphic<FFloatToIntDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFloatToIntDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatToIntDataflowNode;
class UScriptStruct* FFloatToIntDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatToIntDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatToIntDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatToIntDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("FloatToIntDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FloatToIntDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FFloatToIntDataflowNode>()
{
	return FFloatToIntDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a Float to Int using the specified method\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Converts a Float to Int using the specified method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "Category", "Float" },
		{ "Comment", "/** Method to convert */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Method to convert" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "Category", "Float" },
		{ "Comment", "/** Float value to convert */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Float value to convert" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[] = {
		{ "Comment", "/** Int output */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Int output" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Function_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Function;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatToIntDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::NewProp_Function_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatToIntDataflowNode, Function), Z_Construct_UEnum_GeometryCollectionNodes_EFloatToIntFunctionEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) }; // 1530512768
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatToIntDataflowNode, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatToIntDataflowNode, Int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int_MetaData), NewProp_Int_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::NewProp_Function_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::NewProp_Int,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"FloatToIntDataflowNode",
	Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::PropPointers),
	sizeof(FFloatToIntDataflowNode),
	alignof(FFloatToIntDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatToIntDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_FloatToIntDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatToIntDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatToIntDataflowNode.InnerSingleton;
}
// End ScriptStruct FFloatToIntDataflowNode

// Begin ScriptStruct FIntToBoolDataflowNode
static_assert(std::is_polymorphic<FIntToBoolDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FIntToBoolDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntToBoolDataflowNode;
class UScriptStruct* FIntToBoolDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntToBoolDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntToBoolDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntToBoolDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("IntToBoolDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_IntToBoolDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FIntToBoolDataflowNode>()
{
	return FIntToBoolDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts an Int to a Bool\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Converts an Int to a Bool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[] = {
		{ "Category", "Int" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntToBoolDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntToBoolDataflowNode, Int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int_MetaData), NewProp_Int_MetaData) };
void Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((FIntToBoolDataflowNode*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIntToBoolDataflowNode), &Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bool_MetaData), NewProp_Bool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::NewProp_Int,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::NewProp_Bool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"IntToBoolDataflowNode",
	Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::PropPointers),
	sizeof(FIntToBoolDataflowNode),
	alignof(FIntToBoolDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntToBoolDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_IntToBoolDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntToBoolDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntToBoolDataflowNode.InnerSingleton;
}
// End ScriptStruct FIntToBoolDataflowNode

// Begin ScriptStruct FBoolToIntDataflowNode
static_assert(std::is_polymorphic<FBoolToIntDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FBoolToIntDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolToIntDataflowNode;
class UScriptStruct* FBoolToIntDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolToIntDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolToIntDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolToIntDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("BoolToIntDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_BoolToIntDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FBoolToIntDataflowNode>()
{
	return FBoolToIntDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a Bool to an Int\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
		{ "ToolTip", "Converts a Bool to an Int" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[] = {
		{ "Category", "Bool" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionConversionNodes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolToIntDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((FBoolToIntDataflowNode*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoolToIntDataflowNode), &Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bool_MetaData), NewProp_Bool_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolToIntDataflowNode, Int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int_MetaData), NewProp_Int_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::NewProp_Bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::NewProp_Int,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"BoolToIntDataflowNode",
	Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::PropPointers),
	sizeof(FBoolToIntDataflowNode),
	alignof(FBoolToIntDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoolToIntDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_BoolToIntDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolToIntDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoolToIntDataflowNode.InnerSingleton;
}
// End ScriptStruct FBoolToIntDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFloatToIntFunctionEnum_StaticEnum, TEXT("EFloatToIntFunctionEnum"), &Z_Registration_Info_UEnum_EFloatToIntFunctionEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1530512768U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVectorToStringDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FVectorToStringDataflowNode_Statics::NewStructOps, TEXT("VectorToStringDataflowNode"), &Z_Registration_Info_UScriptStruct_VectorToStringDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorToStringDataflowNode), 1147343358U) },
		{ FFloatToStringDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFloatToStringDataflowNode_Statics::NewStructOps, TEXT("FloatToStringDataflowNode"), &Z_Registration_Info_UScriptStruct_FloatToStringDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatToStringDataflowNode), 3498917167U) },
		{ FIntToStringDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FIntToStringDataflowNode_Statics::NewStructOps, TEXT("IntToStringDataflowNode"), &Z_Registration_Info_UScriptStruct_IntToStringDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntToStringDataflowNode), 3105368085U) },
		{ FBoolToStringDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FBoolToStringDataflowNode_Statics::NewStructOps, TEXT("BoolToStringDataflowNode"), &Z_Registration_Info_UScriptStruct_BoolToStringDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolToStringDataflowNode), 3167334827U) },
		{ FIntToFloatDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FIntToFloatDataflowNode_Statics::NewStructOps, TEXT("IntToFloatDataflowNode"), &Z_Registration_Info_UScriptStruct_IntToFloatDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntToFloatDataflowNode), 3687748827U) },
		{ FIntToDoubleDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FIntToDoubleDataflowNode_Statics::NewStructOps, TEXT("IntToDoubleDataflowNode"), &Z_Registration_Info_UScriptStruct_IntToDoubleDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntToDoubleDataflowNode), 1541973494U) },
		{ FFloatToDoubleDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFloatToDoubleDataflowNode_Statics::NewStructOps, TEXT("FloatToDoubleDataflowNode"), &Z_Registration_Info_UScriptStruct_FloatToDoubleDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatToDoubleDataflowNode), 3840801566U) },
		{ FFloatToIntDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFloatToIntDataflowNode_Statics::NewStructOps, TEXT("FloatToIntDataflowNode"), &Z_Registration_Info_UScriptStruct_FloatToIntDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatToIntDataflowNode), 1245982130U) },
		{ FIntToBoolDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FIntToBoolDataflowNode_Statics::NewStructOps, TEXT("IntToBoolDataflowNode"), &Z_Registration_Info_UScriptStruct_IntToBoolDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntToBoolDataflowNode), 3173919559U) },
		{ FBoolToIntDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FBoolToIntDataflowNode_Statics::NewStructOps, TEXT("BoolToIntDataflowNode"), &Z_Registration_Info_UScriptStruct_BoolToIntDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolToIntDataflowNode), 3188608158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_2745004883(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionConversionNodes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
