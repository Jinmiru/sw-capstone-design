// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionMakeNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionMakeNodes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSphere();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeBoxDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakePointsDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeSphereDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeTransformDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FMakeLiteralStringDataflowNode
static_assert(std::is_polymorphic<FMakeLiteralStringDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeLiteralStringDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeLiteralStringDataflowNode;
class UScriptStruct* FMakeLiteralStringDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralStringDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeLiteralStringDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeLiteralStringDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralStringDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeLiteralStringDataflowNode>()
{
	return FMakeLiteralStringDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "String" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeLiteralStringDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralStringDataflowNode, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralStringDataflowNode, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeLiteralStringDataflowNode",
	Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::PropPointers),
	sizeof(FMakeLiteralStringDataflowNode),
	alignof(FMakeLiteralStringDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralStringDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeLiteralStringDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralStringDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeLiteralStringDataflowNode

// Begin ScriptStruct FMakePointsDataflowNode
static_assert(std::is_polymorphic<FMakePointsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakePointsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakePointsDataflowNode;
class UScriptStruct* FMakePointsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakePointsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakePointsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakePointsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakePointsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakePointsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakePointsDataflowNode>()
{
	return FMakePointsDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakePointsDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::NewProp_Point_Inner = { "Point", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakePointsDataflowNode, Point), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakePointsDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::NewProp_Point_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakePointsDataflowNode",
	Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::PropPointers),
	sizeof(FMakePointsDataflowNode),
	alignof(FMakePointsDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakePointsDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakePointsDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakePointsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakePointsDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakePointsDataflowNode

// Begin Enum EMakeBoxDataTypeEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMakeBoxDataTypeEnum;
static UEnum* EMakeBoxDataTypeEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMakeBoxDataTypeEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMakeBoxDataTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EMakeBoxDataTypeEnum"));
	}
	return Z_Registration_Info_UEnum_EMakeBoxDataTypeEnum.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EMakeBoxDataTypeEnum>()
{
	return EMakeBoxDataTypeEnum_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_MakeBox_DataType_CenterSize.DisplayName", "Center/Size" },
		{ "Dataflow_MakeBox_DataType_CenterSize.Name", "EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_CenterSize" },
		{ "Dataflow_MakeBox_DataType_MinMax.DisplayName", "Min/Max" },
		{ "Dataflow_MakeBox_DataType_MinMax.Name", "EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_MinMax" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EMakeBoxDataTypeEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_MinMax", (int64)EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_MinMax },
		{ "EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_CenterSize", (int64)EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_CenterSize },
		{ "EMakeBoxDataTypeEnum::Dataflow_Max", (int64)EMakeBoxDataTypeEnum::Dataflow_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	nullptr,
	"EMakeBoxDataTypeEnum",
	"EMakeBoxDataTypeEnum",
	Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum()
{
	if (!Z_Registration_Info_UEnum_EMakeBoxDataTypeEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMakeBoxDataTypeEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMakeBoxDataTypeEnum.InnerSingleton;
}
// End Enum EMakeBoxDataTypeEnum

// Begin ScriptStruct FMakeBoxDataflowNode
static_assert(std::is_polymorphic<FMakeBoxDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeBoxDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeBoxDataflowNode;
class UScriptStruct* FMakeBoxDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeBoxDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeBoxDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeBoxDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeBoxDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeBoxDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeBoxDataflowNode>()
{
	return FMakeBoxDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "Category", "Box" },
		{ "DisplayName", "Input Data Type" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Box" },
		{ "DataflowInput", "" },
		{ "EditCondition", "DataType == EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_MinMax" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Box" },
		{ "DataflowInput", "" },
		{ "EditCondition", "DataType == EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_MinMax" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Box" },
		{ "DataflowInput", "" },
		{ "EditCondition", "DataType == EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_CenterSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Box" },
		{ "DataflowInput", "" },
		{ "EditCondition", "DataType == EMakeBoxDataTypeEnum::Dataflow_MakeBox_DataType_CenterSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeBoxDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeBoxDataflowNode, DataType), Z_Construct_UEnum_GeometryCollectionNodes_EMakeBoxDataTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 4115838251
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeBoxDataflowNode, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeBoxDataflowNode, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeBoxDataflowNode, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeBoxDataflowNode, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeBoxDataflowNode, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_DataType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewProp_Box,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeBoxDataflowNode",
	Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::PropPointers),
	sizeof(FMakeBoxDataflowNode),
	alignof(FMakeBoxDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeBoxDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeBoxDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeBoxDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeBoxDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeBoxDataflowNode

// Begin ScriptStruct FMakeSphereDataflowNode
static_assert(std::is_polymorphic<FMakeSphereDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeSphereDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeSphereDataflowNode;
class UScriptStruct* FMakeSphereDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeSphereDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeSphereDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeSphereDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeSphereDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeSphereDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeSphereDataflowNode>()
{
	return FMakeSphereDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Sphere" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Sphere" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeSphereDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeSphereDataflowNode, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeSphereDataflowNode, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeSphereDataflowNode, Sphere), Z_Construct_UScriptStruct_FSphere, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sphere_MetaData), NewProp_Sphere_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::NewProp_Sphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeSphereDataflowNode",
	Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::PropPointers),
	sizeof(FMakeSphereDataflowNode),
	alignof(FMakeSphereDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeSphereDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeSphereDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeSphereDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeSphereDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeSphereDataflowNode

// Begin ScriptStruct FMakeLiteralFloatDataflowNode
static_assert(std::is_polymorphic<FMakeLiteralFloatDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeLiteralFloatDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeLiteralFloatDataflowNode;
class UScriptStruct* FMakeLiteralFloatDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralFloatDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeLiteralFloatDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeLiteralFloatDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralFloatDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeLiteralFloatDataflowNode>()
{
	return FMakeLiteralFloatDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Float" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeLiteralFloatDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralFloatDataflowNode, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralFloatDataflowNode, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::NewProp_Float,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeLiteralFloatDataflowNode",
	Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::PropPointers),
	sizeof(FMakeLiteralFloatDataflowNode),
	alignof(FMakeLiteralFloatDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralFloatDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeLiteralFloatDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralFloatDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeLiteralFloatDataflowNode

// Begin ScriptStruct FMakeLiteralIntDataflowNode
static_assert(std::is_polymorphic<FMakeLiteralIntDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeLiteralIntDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeLiteralIntDataflowNode;
class UScriptStruct* FMakeLiteralIntDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralIntDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeLiteralIntDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeLiteralIntDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralIntDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeLiteralIntDataflowNode>()
{
	return FMakeLiteralIntDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Int" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Int" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeLiteralIntDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralIntDataflowNode, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralIntDataflowNode, Int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int_MetaData), NewProp_Int_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::NewProp_Int,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeLiteralIntDataflowNode",
	Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::PropPointers),
	sizeof(FMakeLiteralIntDataflowNode),
	alignof(FMakeLiteralIntDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralIntDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeLiteralIntDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralIntDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeLiteralIntDataflowNode

// Begin ScriptStruct FMakeLiteralBoolDataflowNode
static_assert(std::is_polymorphic<FMakeLiteralBoolDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeLiteralBoolDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeLiteralBoolDataflowNode;
class UScriptStruct* FMakeLiteralBoolDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralBoolDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeLiteralBoolDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeLiteralBoolDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralBoolDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeLiteralBoolDataflowNode>()
{
	return FMakeLiteralBoolDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Bool" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeLiteralBoolDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FMakeLiteralBoolDataflowNode*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMakeLiteralBoolDataflowNode), &Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((FMakeLiteralBoolDataflowNode*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMakeLiteralBoolDataflowNode), &Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bool_MetaData), NewProp_Bool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::NewProp_Bool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeLiteralBoolDataflowNode",
	Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::PropPointers),
	sizeof(FMakeLiteralBoolDataflowNode),
	alignof(FMakeLiteralBoolDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralBoolDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeLiteralBoolDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralBoolDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeLiteralBoolDataflowNode

// Begin ScriptStruct FMakeLiteralVectorDataflowNode
static_assert(std::is_polymorphic<FMakeLiteralVectorDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeLiteralVectorDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeLiteralVectorDataflowNode;
class UScriptStruct* FMakeLiteralVectorDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralVectorDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeLiteralVectorDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeLiteralVectorDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralVectorDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeLiteralVectorDataflowNode>()
{
	return FMakeLiteralVectorDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Vector" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Vector" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Vector" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Vector" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeLiteralVectorDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralVectorDataflowNode, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralVectorDataflowNode, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralVectorDataflowNode, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeLiteralVectorDataflowNode, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::NewProp_Vector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeLiteralVectorDataflowNode",
	Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::PropPointers),
	sizeof(FMakeLiteralVectorDataflowNode),
	alignof(FMakeLiteralVectorDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeLiteralVectorDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeLiteralVectorDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeLiteralVectorDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeLiteralVectorDataflowNode

// Begin ScriptStruct FMakeTransformDataflowNode
static_assert(std::is_polymorphic<FMakeTransformDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeTransformDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeTransformDataflowNode;
class UScriptStruct* FMakeTransformDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeTransformDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeTransformDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeTransformDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeTransformDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeTransformDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeTransformDataflowNode>()
{
	return FMakeTransformDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Description for this node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
		{ "ToolTip", "Description for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTranslation_MetaData[] = {
		{ "Category", "Transform" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Translation" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[] = {
		{ "Category", "Transform" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutTransform_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeTransformDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::NewProp_InTranslation = { "InTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeTransformDataflowNode, InTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTranslation_MetaData), NewProp_InTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeTransformDataflowNode, InRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRotation_MetaData), NewProp_InRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeTransformDataflowNode, InScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScale_MetaData), NewProp_InScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeTransformDataflowNode, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutTransform_MetaData), NewProp_OutTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::NewProp_InTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::NewProp_InScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::NewProp_OutTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeTransformDataflowNode",
	Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::PropPointers),
	sizeof(FMakeTransformDataflowNode),
	alignof(FMakeTransformDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeTransformDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeTransformDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeTransformDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeTransformDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeTransformDataflowNode

// Begin ScriptStruct FMakeQuaternionDataflowNode
static_assert(std::is_polymorphic<FMakeQuaternionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeQuaternionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeQuaternionDataflowNode;
class UScriptStruct* FMakeQuaternionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeQuaternionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeQuaternionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeQuaternionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeQuaternionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeQuaternionDataflowNode>()
{
	return FMakeQuaternionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Quaternion" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Quaternion" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Quaternion" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
		{ "Category", "Quaternion" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Quaternion" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMakeNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_W;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeQuaternionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeQuaternionDataflowNode, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeQuaternionDataflowNode, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeQuaternionDataflowNode, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeQuaternionDataflowNode, W), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W_MetaData), NewProp_W_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeQuaternionDataflowNode, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quaternion_MetaData), NewProp_Quaternion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_W,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewProp_Quaternion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"MakeQuaternionDataflowNode",
	Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::PropPointers),
	sizeof(FMakeQuaternionDataflowNode),
	alignof(FMakeQuaternionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_MakeQuaternionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeQuaternionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MakeQuaternionDataflowNode.InnerSingleton;
}
// End ScriptStruct FMakeQuaternionDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMakeNodes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMakeBoxDataTypeEnum_StaticEnum, TEXT("EMakeBoxDataTypeEnum"), &Z_Registration_Info_UEnum_EMakeBoxDataTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4115838251U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMakeLiteralStringDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeLiteralStringDataflowNode_Statics::NewStructOps, TEXT("MakeLiteralStringDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeLiteralStringDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeLiteralStringDataflowNode), 3206671983U) },
		{ FMakePointsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakePointsDataflowNode_Statics::NewStructOps, TEXT("MakePointsDataflowNode"), &Z_Registration_Info_UScriptStruct_MakePointsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakePointsDataflowNode), 4275508816U) },
		{ FMakeBoxDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeBoxDataflowNode_Statics::NewStructOps, TEXT("MakeBoxDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeBoxDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeBoxDataflowNode), 1667201758U) },
		{ FMakeSphereDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeSphereDataflowNode_Statics::NewStructOps, TEXT("MakeSphereDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeSphereDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeSphereDataflowNode), 3833546270U) },
		{ FMakeLiteralFloatDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeLiteralFloatDataflowNode_Statics::NewStructOps, TEXT("MakeLiteralFloatDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeLiteralFloatDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeLiteralFloatDataflowNode), 3883022463U) },
		{ FMakeLiteralIntDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeLiteralIntDataflowNode_Statics::NewStructOps, TEXT("MakeLiteralIntDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeLiteralIntDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeLiteralIntDataflowNode), 2373068423U) },
		{ FMakeLiteralBoolDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeLiteralBoolDataflowNode_Statics::NewStructOps, TEXT("MakeLiteralBoolDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeLiteralBoolDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeLiteralBoolDataflowNode), 926333356U) },
		{ FMakeLiteralVectorDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeLiteralVectorDataflowNode_Statics::NewStructOps, TEXT("MakeLiteralVectorDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeLiteralVectorDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeLiteralVectorDataflowNode), 3476683761U) },
		{ FMakeTransformDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeTransformDataflowNode_Statics::NewStructOps, TEXT("MakeTransformDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeTransformDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeTransformDataflowNode), 3442209102U) },
		{ FMakeQuaternionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeQuaternionDataflowNode_Statics::NewStructOps, TEXT("MakeQuaternionDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeQuaternionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeQuaternionDataflowNode), 2120765281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMakeNodes_h_828205624(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMakeNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMakeNodes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMakeNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMakeNodes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
