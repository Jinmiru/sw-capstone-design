// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeDecalNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDecalNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeDecalNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeDecalNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Class UInterchangeDecalNode Function GetCustomDecalMaterialPathName
struct Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics
{
	struct InterchangeDecalNode_eventGetCustomDecalMaterialPathName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalNode_eventGetCustomDecalMaterialPathName_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalNode_eventGetCustomDecalMaterialPathName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalNode_eventGetCustomDecalMaterialPathName_Parms), &Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalNode, nullptr, "GetCustomDecalMaterialPathName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::InterchangeDecalNode_eventGetCustomDecalMaterialPathName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::InterchangeDecalNode_eventGetCustomDecalMaterialPathName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalNode::execGetCustomDecalMaterialPathName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDecalMaterialPathName(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalNode Function GetCustomDecalMaterialPathName

// Begin Class UInterchangeDecalNode Function GetCustomDecalSize
struct Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics
{
	struct InterchangeDecalNode_eventGetCustomDecalSize_Parms
	{
		FVector AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalNode_eventGetCustomDecalSize_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalNode_eventGetCustomDecalSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalNode_eventGetCustomDecalSize_Parms), &Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalNode, nullptr, "GetCustomDecalSize", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::InterchangeDecalNode_eventGetCustomDecalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::InterchangeDecalNode_eventGetCustomDecalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalNode::execGetCustomDecalSize)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDecalSize(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalNode Function GetCustomDecalSize

// Begin Class UInterchangeDecalNode Function GetCustomSortOrder
struct Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics
{
	struct InterchangeDecalNode_eventGetCustomSortOrder_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalNode_eventGetCustomSortOrder_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalNode_eventGetCustomSortOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalNode_eventGetCustomSortOrder_Parms), &Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalNode, nullptr, "GetCustomSortOrder", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::InterchangeDecalNode_eventGetCustomSortOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::InterchangeDecalNode_eventGetCustomSortOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalNode::execGetCustomSortOrder)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSortOrder(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalNode Function GetCustomSortOrder

// Begin Class UInterchangeDecalNode Function SetCustomDecalMaterialPathName
struct Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics
{
	struct InterchangeDecalNode_eventSetCustomDecalMaterialPathName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalNode_eventSetCustomDecalMaterialPathName_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalNode_eventSetCustomDecalMaterialPathName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalNode_eventSetCustomDecalMaterialPathName_Parms), &Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalNode, nullptr, "SetCustomDecalMaterialPathName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::InterchangeDecalNode_eventSetCustomDecalMaterialPathName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::InterchangeDecalNode_eventSetCustomDecalMaterialPathName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalNode::execSetCustomDecalMaterialPathName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDecalMaterialPathName(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalNode Function SetCustomDecalMaterialPathName

// Begin Class UInterchangeDecalNode Function SetCustomDecalSize
struct Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics
{
	struct InterchangeDecalNode_eventSetCustomDecalSize_Parms
	{
		FVector AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalNode.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalNode_eventSetCustomDecalSize_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalNode_eventSetCustomDecalSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalNode_eventSetCustomDecalSize_Parms), &Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalNode, nullptr, "SetCustomDecalSize", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::InterchangeDecalNode_eventSetCustomDecalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::InterchangeDecalNode_eventSetCustomDecalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalNode::execSetCustomDecalSize)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDecalSize(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalNode Function SetCustomDecalSize

// Begin Class UInterchangeDecalNode Function SetCustomSortOrder
struct Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics
{
	struct InterchangeDecalNode_eventSetCustomSortOrder_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalNode.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalNode_eventSetCustomSortOrder_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalNode_eventSetCustomSortOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalNode_eventSetCustomSortOrder_Parms), &Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalNode, nullptr, "SetCustomSortOrder", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::InterchangeDecalNode_eventSetCustomSortOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::InterchangeDecalNode_eventSetCustomSortOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalNode::execSetCustomSortOrder)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSortOrder(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalNode Function SetCustomSortOrder

// Begin Class UInterchangeDecalNode
void UInterchangeDecalNode::StaticRegisterNativesUInterchangeDecalNode()
{
	UClass* Class = UInterchangeDecalNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomDecalMaterialPathName", &UInterchangeDecalNode::execGetCustomDecalMaterialPathName },
		{ "GetCustomDecalSize", &UInterchangeDecalNode::execGetCustomDecalSize },
		{ "GetCustomSortOrder", &UInterchangeDecalNode::execGetCustomSortOrder },
		{ "SetCustomDecalMaterialPathName", &UInterchangeDecalNode::execSetCustomDecalMaterialPathName },
		{ "SetCustomDecalSize", &UInterchangeDecalNode::execSetCustomDecalSize },
		{ "SetCustomSortOrder", &UInterchangeDecalNode::execSetCustomSortOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDecalNode);
UClass* Z_Construct_UClass_UInterchangeDecalNode_NoRegister()
{
	return UInterchangeDecalNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeDecalNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeDecalNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeDecalNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalMaterialPathName, "GetCustomDecalMaterialPathName" }, // 3791736279
		{ &Z_Construct_UFunction_UInterchangeDecalNode_GetCustomDecalSize, "GetCustomDecalSize" }, // 3752359288
		{ &Z_Construct_UFunction_UInterchangeDecalNode_GetCustomSortOrder, "GetCustomSortOrder" }, // 678788759
		{ &Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalMaterialPathName, "SetCustomDecalMaterialPathName" }, // 2634663287
		{ &Z_Construct_UFunction_UInterchangeDecalNode_SetCustomDecalSize, "SetCustomDecalSize" }, // 3098152739
		{ &Z_Construct_UFunction_UInterchangeDecalNode_SetCustomSortOrder, "SetCustomSortOrder" }, // 1049982782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDecalNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeDecalNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDecalNode_Statics::ClassParams = {
	&UInterchangeDecalNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeDecalNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeDecalNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeDecalNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDecalNode.OuterSingleton, Z_Construct_UClass_UInterchangeDecalNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeDecalNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeDecalNode>()
{
	return UInterchangeDecalNode::StaticClass();
}
UInterchangeDecalNode::UInterchangeDecalNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDecalNode);
UInterchangeDecalNode::~UInterchangeDecalNode() {}
// End Class UInterchangeDecalNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDecalNode, UInterchangeDecalNode::StaticClass, TEXT("UInterchangeDecalNode"), &Z_Registration_Info_UClass_UInterchangeDecalNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDecalNode), 2500712988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_1447160508(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
