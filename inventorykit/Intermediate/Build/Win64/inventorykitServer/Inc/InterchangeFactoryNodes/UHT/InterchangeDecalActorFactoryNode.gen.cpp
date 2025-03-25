// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeDecalActorFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDecalActorFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDecalActorFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDecalActorFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeDecalActorFactoryNode Function GetCustomDecalMaterialPathName
struct Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics
{
	struct InterchangeDecalActorFactoryNode_eventGetCustomDecalMaterialPathName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalActorFactoryNode_eventGetCustomDecalMaterialPathName_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalActorFactoryNode_eventGetCustomDecalMaterialPathName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalActorFactoryNode_eventGetCustomDecalMaterialPathName_Parms), &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalActorFactoryNode, nullptr, "GetCustomDecalMaterialPathName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::InterchangeDecalActorFactoryNode_eventGetCustomDecalMaterialPathName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::InterchangeDecalActorFactoryNode_eventGetCustomDecalMaterialPathName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalActorFactoryNode::execGetCustomDecalMaterialPathName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDecalMaterialPathName(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalActorFactoryNode Function GetCustomDecalMaterialPathName

// Begin Class UInterchangeDecalActorFactoryNode Function GetCustomDecalSize
struct Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics
{
	struct InterchangeDecalActorFactoryNode_eventGetCustomDecalSize_Parms
	{
		FVector AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalActorFactoryNode_eventGetCustomDecalSize_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalActorFactoryNode_eventGetCustomDecalSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalActorFactoryNode_eventGetCustomDecalSize_Parms), &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalActorFactoryNode, nullptr, "GetCustomDecalSize", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::InterchangeDecalActorFactoryNode_eventGetCustomDecalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::InterchangeDecalActorFactoryNode_eventGetCustomDecalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalActorFactoryNode::execGetCustomDecalSize)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDecalSize(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalActorFactoryNode Function GetCustomDecalSize

// Begin Class UInterchangeDecalActorFactoryNode Function GetCustomSortOrder
struct Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics
{
	struct InterchangeDecalActorFactoryNode_eventGetCustomSortOrder_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalActorFactoryNode_eventGetCustomSortOrder_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalActorFactoryNode_eventGetCustomSortOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalActorFactoryNode_eventGetCustomSortOrder_Parms), &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalActorFactoryNode, nullptr, "GetCustomSortOrder", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::InterchangeDecalActorFactoryNode_eventGetCustomSortOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::InterchangeDecalActorFactoryNode_eventGetCustomSortOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalActorFactoryNode::execGetCustomSortOrder)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSortOrder(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalActorFactoryNode Function GetCustomSortOrder

// Begin Class UInterchangeDecalActorFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics
{
	struct InterchangeDecalActorFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalActorFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalActorFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::InterchangeDecalActorFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::InterchangeDecalActorFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalActorFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeDecalActorFactoryNode Function GetObjectClass

// Begin Class UInterchangeDecalActorFactoryNode Function SetCustomDecalMaterialPathName
struct Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics
{
	struct InterchangeDecalActorFactoryNode_eventSetCustomDecalMaterialPathName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalActorFactoryNode.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalActorFactoryNode_eventSetCustomDecalMaterialPathName_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalActorFactoryNode_eventSetCustomDecalMaterialPathName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalActorFactoryNode_eventSetCustomDecalMaterialPathName_Parms), &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalActorFactoryNode, nullptr, "SetCustomDecalMaterialPathName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::InterchangeDecalActorFactoryNode_eventSetCustomDecalMaterialPathName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::InterchangeDecalActorFactoryNode_eventSetCustomDecalMaterialPathName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalActorFactoryNode::execSetCustomDecalMaterialPathName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDecalMaterialPathName(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalActorFactoryNode Function SetCustomDecalMaterialPathName

// Begin Class UInterchangeDecalActorFactoryNode Function SetCustomDecalSize
struct Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics
{
	struct InterchangeDecalActorFactoryNode_eventSetCustomDecalSize_Parms
	{
		FVector AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDecalActorFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalActorFactoryNode_eventSetCustomDecalSize_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeDecalActorFactoryNode_eventSetCustomDecalSize_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalActorFactoryNode_eventSetCustomDecalSize_Parms), &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalActorFactoryNode_eventSetCustomDecalSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalActorFactoryNode_eventSetCustomDecalSize_Parms), &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalActorFactoryNode, nullptr, "SetCustomDecalSize", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::InterchangeDecalActorFactoryNode_eventSetCustomDecalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::InterchangeDecalActorFactoryNode_eventSetCustomDecalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalActorFactoryNode::execSetCustomDecalSize)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDecalSize(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeDecalActorFactoryNode Function SetCustomDecalSize

// Begin Class UInterchangeDecalActorFactoryNode Function SetCustomSortOrder
struct Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics
{
	struct InterchangeDecalActorFactoryNode_eventSetCustomSortOrder_Parms
	{
		int32 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDecalActorFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalActorFactoryNode_eventSetCustomSortOrder_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeDecalActorFactoryNode_eventSetCustomSortOrder_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalActorFactoryNode_eventSetCustomSortOrder_Parms), &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalActorFactoryNode_eventSetCustomSortOrder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalActorFactoryNode_eventSetCustomSortOrder_Parms), &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalActorFactoryNode, nullptr, "SetCustomSortOrder", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::InterchangeDecalActorFactoryNode_eventSetCustomSortOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::InterchangeDecalActorFactoryNode_eventSetCustomSortOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalActorFactoryNode::execSetCustomSortOrder)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSortOrder(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeDecalActorFactoryNode Function SetCustomSortOrder

// Begin Class UInterchangeDecalActorFactoryNode
void UInterchangeDecalActorFactoryNode::StaticRegisterNativesUInterchangeDecalActorFactoryNode()
{
	UClass* Class = UInterchangeDecalActorFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomDecalMaterialPathName", &UInterchangeDecalActorFactoryNode::execGetCustomDecalMaterialPathName },
		{ "GetCustomDecalSize", &UInterchangeDecalActorFactoryNode::execGetCustomDecalSize },
		{ "GetCustomSortOrder", &UInterchangeDecalActorFactoryNode::execGetCustomSortOrder },
		{ "GetObjectClass", &UInterchangeDecalActorFactoryNode::execGetObjectClass },
		{ "SetCustomDecalMaterialPathName", &UInterchangeDecalActorFactoryNode::execSetCustomDecalMaterialPathName },
		{ "SetCustomDecalSize", &UInterchangeDecalActorFactoryNode::execSetCustomDecalSize },
		{ "SetCustomSortOrder", &UInterchangeDecalActorFactoryNode::execSetCustomSortOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDecalActorFactoryNode);
UClass* Z_Construct_UClass_UInterchangeDecalActorFactoryNode_NoRegister()
{
	return UInterchangeDecalActorFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeDecalActorFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeDecalActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalMaterialPathName, "GetCustomDecalMaterialPathName" }, // 294376010
		{ &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomDecalSize, "GetCustomDecalSize" }, // 3595755819
		{ &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetCustomSortOrder, "GetCustomSortOrder" }, // 734902013
		{ &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_GetObjectClass, "GetObjectClass" }, // 482305772
		{ &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalMaterialPathName, "SetCustomDecalMaterialPathName" }, // 4178191779
		{ &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomDecalSize, "SetCustomDecalSize" }, // 3684820120
		{ &Z_Construct_UFunction_UInterchangeDecalActorFactoryNode_SetCustomSortOrder, "SetCustomSortOrder" }, // 2782127833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDecalActorFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics::ClassParams = {
	&UInterchangeDecalActorFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeDecalActorFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeDecalActorFactoryNode>()
{
	return UInterchangeDecalActorFactoryNode::StaticClass();
}
UInterchangeDecalActorFactoryNode::UInterchangeDecalActorFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDecalActorFactoryNode);
UInterchangeDecalActorFactoryNode::~UInterchangeDecalActorFactoryNode() {}
// End Class UInterchangeDecalActorFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDecalActorFactoryNode, UInterchangeDecalActorFactoryNode::StaticClass, TEXT("UInterchangeDecalActorFactoryNode"), &Z_Registration_Info_UClass_UInterchangeDecalActorFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDecalActorFactoryNode), 3123249756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_1101636565(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
