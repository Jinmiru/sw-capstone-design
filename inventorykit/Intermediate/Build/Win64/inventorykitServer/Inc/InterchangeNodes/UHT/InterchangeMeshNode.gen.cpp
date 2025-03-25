// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeMeshNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMeshNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMeshNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType();
INTERCHANGENODES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Enum EInterchangeMeshPayLoadType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMeshPayLoadType;
static UEnum* EInterchangeMeshPayLoadType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMeshPayLoadType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeMeshPayLoadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeMeshPayLoadType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeMeshPayLoadType.OuterSingleton;
}
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeMeshPayLoadType>()
{
	return EInterchangeMeshPayLoadType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//ns UE\n" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "MORPHTARGET.Name", "EInterchangeMeshPayLoadType::MORPHTARGET" },
		{ "NONE.Name", "EInterchangeMeshPayLoadType::NONE" },
		{ "SKELETAL.Name", "EInterchangeMeshPayLoadType::SKELETAL" },
		{ "STATIC.Name", "EInterchangeMeshPayLoadType::STATIC" },
		{ "ToolTip", "ns UE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeMeshPayLoadType::NONE", (int64)EInterchangeMeshPayLoadType::NONE },
		{ "EInterchangeMeshPayLoadType::STATIC", (int64)EInterchangeMeshPayLoadType::STATIC },
		{ "EInterchangeMeshPayLoadType::SKELETAL", (int64)EInterchangeMeshPayLoadType::SKELETAL },
		{ "EInterchangeMeshPayLoadType::MORPHTARGET", (int64)EInterchangeMeshPayLoadType::MORPHTARGET },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	"EInterchangeMeshPayLoadType",
	"EInterchangeMeshPayLoadType",
	Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMeshPayLoadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMeshPayLoadType.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeMeshPayLoadType.InnerSingleton;
}
// End Enum EInterchangeMeshPayLoadType

// Begin ScriptStruct FInterchangeMeshPayLoadKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeMeshPayLoadKey;
class UScriptStruct* FInterchangeMeshPayLoadKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshPayLoadKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeMeshPayLoadKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("InterchangeMeshPayLoadKey"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshPayLoadKey.OuterSingleton;
}
template<> INTERCHANGENODES_API UScriptStruct* StaticStruct<FInterchangeMeshPayLoadKey>()
{
	return FInterchangeMeshPayLoadKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[] = {
		{ "Category", "Interchange | Mesh" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Interchange | Mesh" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeMeshPayLoadKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshPayLoadKey, UniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueId_MetaData), NewProp_UniqueId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshPayLoadKey, Type), Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1857106809
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::NewProp_UniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	nullptr,
	&NewStructOps,
	"InterchangeMeshPayLoadKey",
	Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::PropPointers),
	sizeof(FInterchangeMeshPayLoadKey),
	alignof(FInterchangeMeshPayLoadKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshPayLoadKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeMeshPayLoadKey.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshPayLoadKey.InnerSingleton;
}
// End ScriptStruct FInterchangeMeshPayLoadKey

// Begin Class UInterchangeMeshNode Function GetCustomBoundingBox
struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics
{
	struct InterchangeMeshNode_eventGetCustomBoundingBox_Parms
	{
		FBox AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query the bounding box of this mesh. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query the bounding box of this mesh. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetCustomBoundingBox_Parms, AttributeValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomBoundingBox_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomBoundingBox_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomBoundingBox", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::InterchangeMeshNode_eventGetCustomBoundingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::InterchangeMeshNode_eventGetCustomBoundingBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomBoundingBox)
{
	P_GET_STRUCT_REF(FBox,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomBoundingBox(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetCustomBoundingBox

// Begin Class UInterchangeMeshNode Function GetCustomHasSmoothGroup
struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics
{
	struct InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query whether this mesh has smoothing groups. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query whether this mesh has smoothing groups. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasSmoothGroup", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasSmoothGroup)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomHasSmoothGroup(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetCustomHasSmoothGroup

// Begin Class UInterchangeMeshNode Function GetCustomHasVertexBinormal
struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics
{
	struct InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query whether this mesh has vertex bi-normals. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query whether this mesh has vertex bi-normals. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasVertexBinormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasVertexBinormal)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomHasVertexBinormal(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetCustomHasVertexBinormal

// Begin Class UInterchangeMeshNode Function GetCustomHasVertexColor
struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics
{
	struct InterchangeMeshNode_eventGetCustomHasVertexColor_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query whether this mesh has vertex colors. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query whether this mesh has vertex colors. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasVertexColor_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexColor_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasVertexColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexColor_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasVertexColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::InterchangeMeshNode_eventGetCustomHasVertexColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::InterchangeMeshNode_eventGetCustomHasVertexColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasVertexColor)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomHasVertexColor(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetCustomHasVertexColor

// Begin Class UInterchangeMeshNode Function GetCustomHasVertexNormal
struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics
{
	struct InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query whether this mesh has vertex normals. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query whether this mesh has vertex normals. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasVertexNormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasVertexNormal)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomHasVertexNormal(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetCustomHasVertexNormal

// Begin Class UInterchangeMeshNode Function GetCustomHasVertexTangent
struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics
{
	struct InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query whether this mesh has vertex tangents. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query whether this mesh has vertex tangents. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasVertexTangent", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasVertexTangent)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomHasVertexTangent(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetCustomHasVertexTangent

// Begin Class UInterchangeMeshNode Function GetCustomPolygonCount
struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics
{
	struct InterchangeMeshNode_eventGetCustomPolygonCount_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query the polygon count of this mesh. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query the polygon count of this mesh. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetCustomPolygonCount_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomPolygonCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomPolygonCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomPolygonCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::InterchangeMeshNode_eventGetCustomPolygonCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::InterchangeMeshNode_eventGetCustomPolygonCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomPolygonCount)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomPolygonCount(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetCustomPolygonCount

// Begin Class UInterchangeMeshNode Function GetCustomUVCount
struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics
{
	struct InterchangeMeshNode_eventGetCustomUVCount_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query the UV count of this mesh. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query the UV count of this mesh. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetCustomUVCount_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomUVCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomUVCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomUVCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::InterchangeMeshNode_eventGetCustomUVCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::InterchangeMeshNode_eventGetCustomUVCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomUVCount)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUVCount(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetCustomUVCount

// Begin Class UInterchangeMeshNode Function GetCustomVertexCount
struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics
{
	struct InterchangeMeshNode_eventGetCustomVertexCount_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query the vertex count of this mesh. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query the vertex count of this mesh. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetCustomVertexCount_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetCustomVertexCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomVertexCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomVertexCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::InterchangeMeshNode_eventGetCustomVertexCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::InterchangeMeshNode_eventGetCustomVertexCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomVertexCount)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomVertexCount(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetCustomVertexCount

// Begin Class UInterchangeMeshNode Function GetMorphTargetDependeciesCount
struct Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics
{
	struct InterchangeMeshNode_eventGetMorphTargetDependeciesCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Retrieve the number of morph target dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the number of morph target dependencies for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetDependeciesCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetMorphTargetDependeciesCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::InterchangeMeshNode_eventGetMorphTargetDependeciesCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::InterchangeMeshNode_eventGetMorphTargetDependeciesCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetMorphTargetDependeciesCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMorphTargetDependeciesCount();
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetMorphTargetDependeciesCount

// Begin Class UInterchangeMeshNode Function GetMorphTargetDependencies
struct Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics
{
	struct InterchangeMeshNode_eventGetMorphTargetDependencies_Parms
	{
		TArray<FString> OutDependencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Retrieve all morph target dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve all morph target dependencies for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetDependencies_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::NewProp_OutDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::NewProp_OutDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetMorphTargetDependencies", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::InterchangeMeshNode_eventGetMorphTargetDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::InterchangeMeshNode_eventGetMorphTargetDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetMorphTargetDependencies)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMorphTargetDependencies(Z_Param_Out_OutDependencies);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetMorphTargetDependencies

// Begin Class UInterchangeMeshNode Function GetMorphTargetDependency
struct Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics
{
	struct InterchangeMeshNode_eventGetMorphTargetDependency_Parms
	{
		int32 Index;
		FString OutDependency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Retrieve the specified morph target dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the specified morph target dependency for this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetDependency_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_OutDependency = { "OutDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetDependency_Parms, OutDependency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_OutDependency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetMorphTargetDependency", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::InterchangeMeshNode_eventGetMorphTargetDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::InterchangeMeshNode_eventGetMorphTargetDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetMorphTargetDependency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMorphTargetDependency(Z_Param_Index,Z_Param_Out_OutDependency);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetMorphTargetDependency

// Begin Class UInterchangeMeshNode Function GetMorphTargetName
struct Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics
{
	struct InterchangeMeshNode_eventGetMorphTargetName_Parms
	{
		FString OutMorphTargetName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Get the morph target name.\n\x09 * Return true if we successfully retrieved the MorphTargetName attribute.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Get the morph target name.\nReturn true if we successfully retrieved the MorphTargetName attribute." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMorphTargetName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_OutMorphTargetName = { "OutMorphTargetName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetName_Parms, OutMorphTargetName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetMorphTargetName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetMorphTargetName_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_OutMorphTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetMorphTargetName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::InterchangeMeshNode_eventGetMorphTargetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::InterchangeMeshNode_eventGetMorphTargetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetMorphTargetName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMorphTargetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMorphTargetName(Z_Param_Out_OutMorphTargetName);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetMorphTargetName

// Begin Class UInterchangeMeshNode Function GetSceneInstanceUid
struct Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics
{
	struct InterchangeMeshNode_eventGetSceneInstanceUid_Parms
	{
		int32 Index;
		FString OutDependency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Retrieve the asset instance this scene node refers to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the asset instance this scene node refers to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSceneInstanceUid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_OutDependency = { "OutDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSceneInstanceUid_Parms, OutDependency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_OutDependency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSceneInstanceUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::InterchangeMeshNode_eventGetSceneInstanceUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::InterchangeMeshNode_eventGetSceneInstanceUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetSceneInstanceUid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSceneInstanceUid(Z_Param_Index,Z_Param_Out_OutDependency);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetSceneInstanceUid

// Begin Class UInterchangeMeshNode Function GetSceneInstanceUids
struct Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics
{
	struct InterchangeMeshNode_eventGetSceneInstanceUids_Parms
	{
		TArray<FString> OutDependencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Retrieve the asset instances this scene node refers to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the asset instances this scene node refers to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSceneInstanceUids_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::NewProp_OutDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::NewProp_OutDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSceneInstanceUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::InterchangeMeshNode_eventGetSceneInstanceUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::InterchangeMeshNode_eventGetSceneInstanceUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetSceneInstanceUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSceneInstanceUids(Z_Param_Out_OutDependencies);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetSceneInstanceUids

// Begin Class UInterchangeMeshNode Function GetSceneInstanceUidsCount
struct Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics
{
	struct InterchangeMeshNode_eventGetSceneInstanceUidsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Retrieve the number of scene nodes instancing this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the number of scene nodes instancing this mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSceneInstanceUidsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSceneInstanceUidsCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::InterchangeMeshNode_eventGetSceneInstanceUidsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::InterchangeMeshNode_eventGetSceneInstanceUidsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetSceneInstanceUidsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSceneInstanceUidsCount();
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetSceneInstanceUidsCount

// Begin Class UInterchangeMeshNode Function GetSkeletonDependeciesCount
struct Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics
{
	struct InterchangeMeshNode_eventGetSkeletonDependeciesCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Retrieve the number of skeleton dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the number of skeleton dependencies for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSkeletonDependeciesCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSkeletonDependeciesCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::InterchangeMeshNode_eventGetSkeletonDependeciesCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::InterchangeMeshNode_eventGetSkeletonDependeciesCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetSkeletonDependeciesCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSkeletonDependeciesCount();
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetSkeletonDependeciesCount

// Begin Class UInterchangeMeshNode Function GetSkeletonDependencies
struct Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics
{
	struct InterchangeMeshNode_eventGetSkeletonDependencies_Parms
	{
		TArray<FString> OutDependencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Retrieve the skeleton dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the skeleton dependency for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSkeletonDependencies_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::NewProp_OutDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::NewProp_OutDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSkeletonDependencies", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::InterchangeMeshNode_eventGetSkeletonDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::InterchangeMeshNode_eventGetSkeletonDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetSkeletonDependencies)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSkeletonDependencies(Z_Param_Out_OutDependencies);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetSkeletonDependencies

// Begin Class UInterchangeMeshNode Function GetSkeletonDependency
struct Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics
{
	struct InterchangeMeshNode_eventGetSkeletonDependency_Parms
	{
		int32 Index;
		FString OutDependency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Retrieve the specified skeleton dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the specified skeleton dependency for this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSkeletonDependency_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_OutDependency = { "OutDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSkeletonDependency_Parms, OutDependency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_OutDependency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSkeletonDependency", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::InterchangeMeshNode_eventGetSkeletonDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::InterchangeMeshNode_eventGetSkeletonDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetSkeletonDependency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSkeletonDependency(Z_Param_Index,Z_Param_Out_OutDependency);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetSkeletonDependency

// Begin Class UInterchangeMeshNode Function GetSlotMaterialDependencies
struct Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics
{
	struct InterchangeMeshNode_eventGetSlotMaterialDependencies_Parms
	{
		TMap<FString,FString> OutMaterialDependencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Retrieve the correspondence table between slot names and assigned materials for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the correspondence table between slot names and assigned materials for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependencies_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependencies_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMaterialDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp = { "OutMaterialDependencies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSlotMaterialDependencies_Parms, OutMaterialDependencies), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSlotMaterialDependencies", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::InterchangeMeshNode_eventGetSlotMaterialDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::InterchangeMeshNode_eventGetSlotMaterialDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetSlotMaterialDependencies)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMaterialDependencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSlotMaterialDependencies(Z_Param_Out_OutMaterialDependencies);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetSlotMaterialDependencies

// Begin Class UInterchangeMeshNode Function GetSlotMaterialDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics
{
	struct InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms
	{
		FString SlotName;
		FString OutMaterialDependency;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Retrieve the specified Material dependency for a given slot of this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Retrieve the specified Material dependency for a given slot of this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependency;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency = { "OutMaterialDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms, OutMaterialDependency), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSlotMaterialDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execGetSlotMaterialDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMaterialDependency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_Out_OutMaterialDependency);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function GetSlotMaterialDependencyUid

// Begin Class UInterchangeMeshNode Function IsMorphTarget
struct Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics
{
	struct InterchangeMeshNode_eventIsMorphTarget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Return true if this node represents a morph target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Return true if this node represents a morph target." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventIsMorphTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventIsMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "IsMorphTarget", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::InterchangeMeshNode_eventIsMorphTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::InterchangeMeshNode_eventIsMorphTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execIsMorphTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMorphTarget();
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function IsMorphTarget

// Begin Class UInterchangeMeshNode Function IsSkinnedMesh
struct Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics
{
	struct InterchangeMeshNode_eventIsSkinnedMesh_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Return true if this node represents a skinned mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Return true if this node represents a skinned mesh." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventIsSkinnedMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventIsSkinnedMesh_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "IsSkinnedMesh", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::InterchangeMeshNode_eventIsSkinnedMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::InterchangeMeshNode_eventIsSkinnedMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execIsSkinnedMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSkinnedMesh();
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function IsSkinnedMesh

// Begin Class UInterchangeMeshNode Function RemoveMorphTargetDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics
{
	struct InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Remove the specified morph target dependency from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Remove the specified morph target dependency from this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "RemoveMorphTargetDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execRemoveMorphTargetDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveMorphTargetDependencyUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function RemoveMorphTargetDependencyUid

// Begin Class UInterchangeMeshNode Function RemoveSceneInstanceUid
struct Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics
{
	struct InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Remove the specified asset instance this scene node refers to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Remove the specified asset instance this scene node refers to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "RemoveSceneInstanceUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execRemoveSceneInstanceUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSceneInstanceUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function RemoveSceneInstanceUid

// Begin Class UInterchangeMeshNode Function RemoveSkeletonDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics
{
	struct InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Remove the specified skeleton dependency from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Remove the specified skeleton dependency from this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "RemoveSkeletonDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execRemoveSkeletonDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSkeletonDependencyUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function RemoveSkeletonDependencyUid

// Begin Class UInterchangeMeshNode Function RemoveSlotMaterialDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics
{
	struct InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms
	{
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Remove the Material dependency associated with the given slot name from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Remove the Material dependency associated with the given slot name from this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "RemoveSlotMaterialDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execRemoveSlotMaterialDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSlotMaterialDependencyUid(Z_Param_SlotName);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function RemoveSlotMaterialDependencyUid

// Begin Class UInterchangeMeshNode Function SetCustomBoundingBox
struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics
{
	struct InterchangeMeshNode_eventSetCustomBoundingBox_Parms
	{
		FBox AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set the bounding box of this mesh. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the bounding box of this mesh. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetCustomBoundingBox_Parms, AttributeValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomBoundingBox_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomBoundingBox_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomBoundingBox", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::InterchangeMeshNode_eventSetCustomBoundingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::InterchangeMeshNode_eventSetCustomBoundingBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomBoundingBox)
{
	P_GET_STRUCT_REF(FBox,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomBoundingBox(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetCustomBoundingBox

// Begin Class UInterchangeMeshNode Function SetCustomHasSmoothGroup
struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics
{
	struct InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set the smoothing group attribute of this mesh. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the smoothing group attribute of this mesh. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasSmoothGroup", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasSmoothGroup)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomHasSmoothGroup(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetCustomHasSmoothGroup

// Begin Class UInterchangeMeshNode Function SetCustomHasVertexBinormal
struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics
{
	struct InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set the vertex bi-normal attribute of this mesh. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the vertex bi-normal attribute of this mesh. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasVertexBinormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasVertexBinormal)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomHasVertexBinormal(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetCustomHasVertexBinormal

// Begin Class UInterchangeMeshNode Function SetCustomHasVertexColor
struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics
{
	struct InterchangeMeshNode_eventSetCustomHasVertexColor_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set the vertex color attribute of this mesh. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the vertex color attribute of this mesh. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasVertexColor_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexColor_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasVertexColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexColor_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasVertexColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::InterchangeMeshNode_eventSetCustomHasVertexColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::InterchangeMeshNode_eventSetCustomHasVertexColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasVertexColor)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomHasVertexColor(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetCustomHasVertexColor

// Begin Class UInterchangeMeshNode Function SetCustomHasVertexNormal
struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics
{
	struct InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set the vertex normal attribute of this mesh. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the vertex normal attribute of this mesh. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasVertexNormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasVertexNormal)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomHasVertexNormal(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetCustomHasVertexNormal

// Begin Class UInterchangeMeshNode Function SetCustomHasVertexTangent
struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics
{
	struct InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set the vertex tangent attribute of this mesh. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the vertex tangent attribute of this mesh. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasVertexTangent", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasVertexTangent)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomHasVertexTangent(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetCustomHasVertexTangent

// Begin Class UInterchangeMeshNode Function SetCustomPolygonCount
struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics
{
	struct InterchangeMeshNode_eventSetCustomPolygonCount_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set the polygon count of this mesh. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the polygon count of this mesh. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetCustomPolygonCount_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomPolygonCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomPolygonCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomPolygonCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::InterchangeMeshNode_eventSetCustomPolygonCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::InterchangeMeshNode_eventSetCustomPolygonCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomPolygonCount)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomPolygonCount(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetCustomPolygonCount

// Begin Class UInterchangeMeshNode Function SetCustomUVCount
struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics
{
	struct InterchangeMeshNode_eventSetCustomUVCount_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set the UV count attribute of this mesh. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the UV count attribute of this mesh. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetCustomUVCount_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomUVCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomUVCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomUVCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::InterchangeMeshNode_eventSetCustomUVCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::InterchangeMeshNode_eventSetCustomUVCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomUVCount)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUVCount(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetCustomUVCount

// Begin Class UInterchangeMeshNode Function SetCustomVertexCount
struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics
{
	struct InterchangeMeshNode_eventSetCustomVertexCount_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set the vertex count of this mesh. Return false if the attribute could not be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the vertex count of this mesh. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetCustomVertexCount_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetCustomVertexCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomVertexCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomVertexCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::InterchangeMeshNode_eventSetCustomVertexCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::InterchangeMeshNode_eventSetCustomVertexCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomVertexCount)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomVertexCount(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetCustomVertexCount

// Begin Class UInterchangeMeshNode Function SetMorphTarget
struct Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics
{
	struct InterchangeMeshNode_eventSetMorphTarget_Parms
	{
		bool bIsMorphTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Set the IsMorphTarget attribute to determine whether this node represents a morph target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the IsMorphTarget attribute to determine whether this node represents a morph target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMorphTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsMorphTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMorphTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetMorphTarget_Parms*)Obj)->bIsMorphTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget = { "bIsMorphTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMorphTarget_MetaData), NewProp_bIsMorphTarget_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetMorphTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetMorphTarget", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::InterchangeMeshNode_eventSetMorphTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::InterchangeMeshNode_eventSetMorphTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetMorphTarget)
{
	P_GET_UBOOL(Z_Param_bIsMorphTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMorphTarget(Z_Param_bIsMorphTarget);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetMorphTarget

// Begin Class UInterchangeMeshNode Function SetMorphTargetDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics
{
	struct InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Add the specified morph target dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Add the specified morph target dependency to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetMorphTargetDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetMorphTargetDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMorphTargetDependencyUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetMorphTargetDependencyUid

// Begin Class UInterchangeMeshNode Function SetMorphTargetName
struct Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics
{
	struct InterchangeMeshNode_eventSetMorphTargetName_Parms
	{
		FString MorphTargetName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Set the MorphTargetName attribute to determine the name of the morph target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the MorphTargetName attribute to determine the name of the morph target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_MorphTargetName = { "MorphTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetMorphTargetName_Parms, MorphTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetName_MetaData), NewProp_MorphTargetName_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetMorphTargetName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetMorphTargetName_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_MorphTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetMorphTargetName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::InterchangeMeshNode_eventSetMorphTargetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::InterchangeMeshNode_eventSetMorphTargetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetMorphTargetName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MorphTargetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMorphTargetName(Z_Param_MorphTargetName);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetMorphTargetName

// Begin Class UInterchangeMeshNode Function SetPayLoadKey
struct Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics
{
	struct InterchangeMeshNode_eventSetPayLoadKey_Parms
	{
		FString PayLoadKey;
		EInterchangeMeshPayLoadType PayLoadType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayLoadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayLoadType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PayLoadKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PayLoadType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PayLoadType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayLoadKey = { "PayLoadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetPayLoadKey_Parms, PayLoadKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayLoadKey_MetaData), NewProp_PayLoadKey_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayLoadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayLoadType = { "PayLoadType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetPayLoadKey_Parms, PayLoadType), Z_Construct_UEnum_InterchangeNodes_EInterchangeMeshPayLoadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayLoadType_MetaData), NewProp_PayLoadType_MetaData) }; // 1857106809
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayLoadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayLoadType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayLoadType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetPayLoadKey", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::InterchangeMeshNode_eventSetPayLoadKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::InterchangeMeshNode_eventSetPayLoadKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetPayLoadKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PayLoadKey);
	P_GET_ENUM_REF(EInterchangeMeshPayLoadType,Z_Param_Out_PayLoadType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPayLoadKey(Z_Param_PayLoadKey,(EInterchangeMeshPayLoadType&)(Z_Param_Out_PayLoadType));
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetPayLoadKey

// Begin Class UInterchangeMeshNode Function SetSceneInstanceUid
struct Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics
{
	struct InterchangeMeshNode_eventSetSceneInstanceUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Add the specified asset instance this scene node refers to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Add the specified asset instance this scene node refers to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetSceneInstanceUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetSceneInstanceUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSceneInstanceUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetSceneInstanceUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::InterchangeMeshNode_eventSetSceneInstanceUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::InterchangeMeshNode_eventSetSceneInstanceUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetSceneInstanceUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSceneInstanceUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetSceneInstanceUid

// Begin Class UInterchangeMeshNode Function SetSkeletonDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics
{
	struct InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Add the specified skeleton dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Add the specified skeleton dependency to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetSkeletonDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetSkeletonDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSkeletonDependencyUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetSkeletonDependencyUid

// Begin Class UInterchangeMeshNode Function SetSkinnedMesh
struct Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics
{
	struct InterchangeMeshNode_eventSetSkinnedMesh_Parms
	{
		bool bIsSkinnedMesh;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Set the IsSkinnedMesh attribute to determine whether this node represents a skinned mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the IsSkinnedMesh attribute to determine whether this node represents a skinned mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSkinnedMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSkinnedMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSkinnedMesh;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetSkinnedMesh_Parms*)Obj)->bIsSkinnedMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh = { "bIsSkinnedMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSkinnedMesh_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSkinnedMesh_MetaData), NewProp_bIsSkinnedMesh_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetSkinnedMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSkinnedMesh_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetSkinnedMesh", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::InterchangeMeshNode_eventSetSkinnedMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::InterchangeMeshNode_eventSetSkinnedMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetSkinnedMesh)
{
	P_GET_UBOOL(Z_Param_bIsSkinnedMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSkinnedMesh(Z_Param_bIsSkinnedMesh);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetSkinnedMesh

// Begin Class UInterchangeMeshNode Function SetSlotMaterialDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics
{
	struct InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms
	{
		FString SlotName;
		FString MaterialDependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Add the specified Material dependency to a specific slot name of this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Add the specified Material dependency to a specific slot name of this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialDependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid = { "MaterialDependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms, MaterialDependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDependencyUid_MetaData), NewProp_MaterialDependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetSlotMaterialDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshNode::execSetSlotMaterialDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FStrProperty,Z_Param_MaterialDependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_MaterialDependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeMeshNode Function SetSlotMaterialDependencyUid

// Begin Class UInterchangeMeshNode
void UInterchangeMeshNode::StaticRegisterNativesUInterchangeMeshNode()
{
	UClass* Class = UInterchangeMeshNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomBoundingBox", &UInterchangeMeshNode::execGetCustomBoundingBox },
		{ "GetCustomHasSmoothGroup", &UInterchangeMeshNode::execGetCustomHasSmoothGroup },
		{ "GetCustomHasVertexBinormal", &UInterchangeMeshNode::execGetCustomHasVertexBinormal },
		{ "GetCustomHasVertexColor", &UInterchangeMeshNode::execGetCustomHasVertexColor },
		{ "GetCustomHasVertexNormal", &UInterchangeMeshNode::execGetCustomHasVertexNormal },
		{ "GetCustomHasVertexTangent", &UInterchangeMeshNode::execGetCustomHasVertexTangent },
		{ "GetCustomPolygonCount", &UInterchangeMeshNode::execGetCustomPolygonCount },
		{ "GetCustomUVCount", &UInterchangeMeshNode::execGetCustomUVCount },
		{ "GetCustomVertexCount", &UInterchangeMeshNode::execGetCustomVertexCount },
		{ "GetMorphTargetDependeciesCount", &UInterchangeMeshNode::execGetMorphTargetDependeciesCount },
		{ "GetMorphTargetDependencies", &UInterchangeMeshNode::execGetMorphTargetDependencies },
		{ "GetMorphTargetDependency", &UInterchangeMeshNode::execGetMorphTargetDependency },
		{ "GetMorphTargetName", &UInterchangeMeshNode::execGetMorphTargetName },
		{ "GetSceneInstanceUid", &UInterchangeMeshNode::execGetSceneInstanceUid },
		{ "GetSceneInstanceUids", &UInterchangeMeshNode::execGetSceneInstanceUids },
		{ "GetSceneInstanceUidsCount", &UInterchangeMeshNode::execGetSceneInstanceUidsCount },
		{ "GetSkeletonDependeciesCount", &UInterchangeMeshNode::execGetSkeletonDependeciesCount },
		{ "GetSkeletonDependencies", &UInterchangeMeshNode::execGetSkeletonDependencies },
		{ "GetSkeletonDependency", &UInterchangeMeshNode::execGetSkeletonDependency },
		{ "GetSlotMaterialDependencies", &UInterchangeMeshNode::execGetSlotMaterialDependencies },
		{ "GetSlotMaterialDependencyUid", &UInterchangeMeshNode::execGetSlotMaterialDependencyUid },
		{ "IsMorphTarget", &UInterchangeMeshNode::execIsMorphTarget },
		{ "IsSkinnedMesh", &UInterchangeMeshNode::execIsSkinnedMesh },
		{ "RemoveMorphTargetDependencyUid", &UInterchangeMeshNode::execRemoveMorphTargetDependencyUid },
		{ "RemoveSceneInstanceUid", &UInterchangeMeshNode::execRemoveSceneInstanceUid },
		{ "RemoveSkeletonDependencyUid", &UInterchangeMeshNode::execRemoveSkeletonDependencyUid },
		{ "RemoveSlotMaterialDependencyUid", &UInterchangeMeshNode::execRemoveSlotMaterialDependencyUid },
		{ "SetCustomBoundingBox", &UInterchangeMeshNode::execSetCustomBoundingBox },
		{ "SetCustomHasSmoothGroup", &UInterchangeMeshNode::execSetCustomHasSmoothGroup },
		{ "SetCustomHasVertexBinormal", &UInterchangeMeshNode::execSetCustomHasVertexBinormal },
		{ "SetCustomHasVertexColor", &UInterchangeMeshNode::execSetCustomHasVertexColor },
		{ "SetCustomHasVertexNormal", &UInterchangeMeshNode::execSetCustomHasVertexNormal },
		{ "SetCustomHasVertexTangent", &UInterchangeMeshNode::execSetCustomHasVertexTangent },
		{ "SetCustomPolygonCount", &UInterchangeMeshNode::execSetCustomPolygonCount },
		{ "SetCustomUVCount", &UInterchangeMeshNode::execSetCustomUVCount },
		{ "SetCustomVertexCount", &UInterchangeMeshNode::execSetCustomVertexCount },
		{ "SetMorphTarget", &UInterchangeMeshNode::execSetMorphTarget },
		{ "SetMorphTargetDependencyUid", &UInterchangeMeshNode::execSetMorphTargetDependencyUid },
		{ "SetMorphTargetName", &UInterchangeMeshNode::execSetMorphTargetName },
		{ "SetPayLoadKey", &UInterchangeMeshNode::execSetPayLoadKey },
		{ "SetSceneInstanceUid", &UInterchangeMeshNode::execSetSceneInstanceUid },
		{ "SetSkeletonDependencyUid", &UInterchangeMeshNode::execSetSkeletonDependencyUid },
		{ "SetSkinnedMesh", &UInterchangeMeshNode::execSetSkinnedMesh },
		{ "SetSlotMaterialDependencyUid", &UInterchangeMeshNode::execSetSlotMaterialDependencyUid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMeshNode);
UClass* Z_Construct_UClass_UInterchangeMeshNode_NoRegister()
{
	return UInterchangeMeshNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMeshNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMeshNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox, "GetCustomBoundingBox" }, // 678032801
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup, "GetCustomHasSmoothGroup" }, // 4288609662
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal, "GetCustomHasVertexBinormal" }, // 4163429730
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor, "GetCustomHasVertexColor" }, // 1222191777
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal, "GetCustomHasVertexNormal" }, // 598506263
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent, "GetCustomHasVertexTangent" }, // 1609963230
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount, "GetCustomPolygonCount" }, // 1715871798
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount, "GetCustomUVCount" }, // 844064818
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount, "GetCustomVertexCount" }, // 2676851557
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount, "GetMorphTargetDependeciesCount" }, // 3381874837
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies, "GetMorphTargetDependencies" }, // 57015312
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency, "GetMorphTargetDependency" }, // 353381045
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName, "GetMorphTargetName" }, // 2240527277
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid, "GetSceneInstanceUid" }, // 4161886423
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids, "GetSceneInstanceUids" }, // 3583439527
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount, "GetSceneInstanceUidsCount" }, // 4003373459
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount, "GetSkeletonDependeciesCount" }, // 4033779493
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies, "GetSkeletonDependencies" }, // 2304108388
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency, "GetSkeletonDependency" }, // 3511619159
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies, "GetSlotMaterialDependencies" }, // 920790446
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid, "GetSlotMaterialDependencyUid" }, // 1757735185
		{ &Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget, "IsMorphTarget" }, // 502835180
		{ &Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh, "IsSkinnedMesh" }, // 1419506587
		{ &Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid, "RemoveMorphTargetDependencyUid" }, // 1030233895
		{ &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid, "RemoveSceneInstanceUid" }, // 1797407676
		{ &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid, "RemoveSkeletonDependencyUid" }, // 24308184
		{ &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid, "RemoveSlotMaterialDependencyUid" }, // 3065571012
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox, "SetCustomBoundingBox" }, // 4026041038
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup, "SetCustomHasSmoothGroup" }, // 4221010654
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal, "SetCustomHasVertexBinormal" }, // 4123149403
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor, "SetCustomHasVertexColor" }, // 347605260
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal, "SetCustomHasVertexNormal" }, // 1177904481
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent, "SetCustomHasVertexTangent" }, // 2775687009
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount, "SetCustomPolygonCount" }, // 3863097626
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount, "SetCustomUVCount" }, // 153949643
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount, "SetCustomVertexCount" }, // 4250359063
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget, "SetMorphTarget" }, // 1387565023
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid, "SetMorphTargetDependencyUid" }, // 4122174919
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName, "SetMorphTargetName" }, // 3208647114
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey, "SetPayLoadKey" }, // 140216609
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid, "SetSceneInstanceUid" }, // 229871554
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid, "SetSkeletonDependencyUid" }, // 2740249921
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh, "SetSkinnedMesh" }, // 3018240966
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid, "SetSlotMaterialDependencyUid" }, // 4030562156
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMeshNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMeshNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMeshNode_Statics::ClassParams = {
	&UInterchangeMeshNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMeshNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMeshNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeMeshNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMeshNode.OuterSingleton, Z_Construct_UClass_UInterchangeMeshNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMeshNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeMeshNode>()
{
	return UInterchangeMeshNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMeshNode);
UInterchangeMeshNode::~UInterchangeMeshNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeMeshNode)
// End Class UInterchangeMeshNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeMeshPayLoadType_StaticEnum, TEXT("EInterchangeMeshPayLoadType"), &Z_Registration_Info_UEnum_EInterchangeMeshPayLoadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1857106809U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInterchangeMeshPayLoadKey::StaticStruct, Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics::NewStructOps, TEXT("InterchangeMeshPayLoadKey"), &Z_Registration_Info_UScriptStruct_InterchangeMeshPayLoadKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeMeshPayLoadKey), 2957586320U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMeshNode, UInterchangeMeshNode::StaticClass, TEXT("UInterchangeMeshNode"), &Z_Registration_Info_UClass_UInterchangeMeshNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMeshNode), 3670310681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_1057339794(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
