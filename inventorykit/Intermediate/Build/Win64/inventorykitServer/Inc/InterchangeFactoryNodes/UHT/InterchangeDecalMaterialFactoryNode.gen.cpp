// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeDecalMaterialFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDecalMaterialFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeDecalMaterialFactoryNode Function GetCustomDiffuseTexturePath
struct Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics
{
	struct InterchangeDecalMaterialFactoryNode_eventGetCustomDiffuseTexturePath_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalMaterialFactoryNode_eventGetCustomDiffuseTexturePath_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalMaterialFactoryNode_eventGetCustomDiffuseTexturePath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalMaterialFactoryNode_eventGetCustomDiffuseTexturePath_Parms), &Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode, nullptr, "GetCustomDiffuseTexturePath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::InterchangeDecalMaterialFactoryNode_eventGetCustomDiffuseTexturePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::InterchangeDecalMaterialFactoryNode_eventGetCustomDiffuseTexturePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalMaterialFactoryNode::execGetCustomDiffuseTexturePath)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDiffuseTexturePath(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalMaterialFactoryNode Function GetCustomDiffuseTexturePath

// Begin Class UInterchangeDecalMaterialFactoryNode Function GetCustomNormalTexturePath
struct Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics
{
	struct InterchangeDecalMaterialFactoryNode_eventGetCustomNormalTexturePath_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalMaterialFactoryNode_eventGetCustomNormalTexturePath_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalMaterialFactoryNode_eventGetCustomNormalTexturePath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalMaterialFactoryNode_eventGetCustomNormalTexturePath_Parms), &Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode, nullptr, "GetCustomNormalTexturePath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::InterchangeDecalMaterialFactoryNode_eventGetCustomNormalTexturePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::InterchangeDecalMaterialFactoryNode_eventGetCustomNormalTexturePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalMaterialFactoryNode::execGetCustomNormalTexturePath)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomNormalTexturePath(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalMaterialFactoryNode Function GetCustomNormalTexturePath

// Begin Class UInterchangeDecalMaterialFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics
{
	struct InterchangeDecalMaterialFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalMaterialFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::InterchangeDecalMaterialFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::InterchangeDecalMaterialFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalMaterialFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeDecalMaterialFactoryNode Function GetObjectClass

// Begin Class UInterchangeDecalMaterialFactoryNode Function SetCustomDiffuseTexturePath
struct Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics
{
	struct InterchangeDecalMaterialFactoryNode_eventSetCustomDiffuseTexturePath_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalMaterialFactoryNode.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalMaterialFactoryNode_eventSetCustomDiffuseTexturePath_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalMaterialFactoryNode_eventSetCustomDiffuseTexturePath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalMaterialFactoryNode_eventSetCustomDiffuseTexturePath_Parms), &Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode, nullptr, "SetCustomDiffuseTexturePath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::InterchangeDecalMaterialFactoryNode_eventSetCustomDiffuseTexturePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::InterchangeDecalMaterialFactoryNode_eventSetCustomDiffuseTexturePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalMaterialFactoryNode::execSetCustomDiffuseTexturePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDiffuseTexturePath(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalMaterialFactoryNode Function SetCustomDiffuseTexturePath

// Begin Class UInterchangeDecalMaterialFactoryNode Function SetCustomNormalTexturePath
struct Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics
{
	struct InterchangeDecalMaterialFactoryNode_eventSetCustomNormalTexturePath_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Decal" },
		{ "ModuleRelativePath", "Public/InterchangeDecalMaterialFactoryNode.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeDecalMaterialFactoryNode_eventSetCustomNormalTexturePath_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeDecalMaterialFactoryNode_eventSetCustomNormalTexturePath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeDecalMaterialFactoryNode_eventSetCustomNormalTexturePath_Parms), &Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode, nullptr, "SetCustomNormalTexturePath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::InterchangeDecalMaterialFactoryNode_eventSetCustomNormalTexturePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::InterchangeDecalMaterialFactoryNode_eventSetCustomNormalTexturePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeDecalMaterialFactoryNode::execSetCustomNormalTexturePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomNormalTexturePath(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeDecalMaterialFactoryNode Function SetCustomNormalTexturePath

// Begin Class UInterchangeDecalMaterialFactoryNode
void UInterchangeDecalMaterialFactoryNode::StaticRegisterNativesUInterchangeDecalMaterialFactoryNode()
{
	UClass* Class = UInterchangeDecalMaterialFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomDiffuseTexturePath", &UInterchangeDecalMaterialFactoryNode::execGetCustomDiffuseTexturePath },
		{ "GetCustomNormalTexturePath", &UInterchangeDecalMaterialFactoryNode::execGetCustomNormalTexturePath },
		{ "GetObjectClass", &UInterchangeDecalMaterialFactoryNode::execGetObjectClass },
		{ "SetCustomDiffuseTexturePath", &UInterchangeDecalMaterialFactoryNode::execSetCustomDiffuseTexturePath },
		{ "SetCustomNormalTexturePath", &UInterchangeDecalMaterialFactoryNode::execSetCustomNormalTexturePath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDecalMaterialFactoryNode);
UClass* Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_NoRegister()
{
	return UInterchangeDecalMaterialFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeDecalMaterialFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeDecalMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomDiffuseTexturePath, "GetCustomDiffuseTexturePath" }, // 1909945823
		{ &Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetCustomNormalTexturePath, "GetCustomNormalTexturePath" }, // 3535576661
		{ &Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_GetObjectClass, "GetObjectClass" }, // 551540997
		{ &Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomDiffuseTexturePath, "SetCustomDiffuseTexturePath" }, // 3142394943
		{ &Z_Construct_UFunction_UInterchangeDecalMaterialFactoryNode_SetCustomNormalTexturePath, "SetCustomNormalTexturePath" }, // 2233463698
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDecalMaterialFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics::ClassParams = {
	&UInterchangeDecalMaterialFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeDecalMaterialFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDecalMaterialFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeDecalMaterialFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeDecalMaterialFactoryNode>()
{
	return UInterchangeDecalMaterialFactoryNode::StaticClass();
}
UInterchangeDecalMaterialFactoryNode::UInterchangeDecalMaterialFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDecalMaterialFactoryNode);
UInterchangeDecalMaterialFactoryNode::~UInterchangeDecalMaterialFactoryNode() {}
// End Class UInterchangeDecalMaterialFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode, UInterchangeDecalMaterialFactoryNode::StaticClass, TEXT("UInterchangeDecalMaterialFactoryNode"), &Z_Registration_Info_UClass_UInterchangeDecalMaterialFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDecalMaterialFactoryNode), 3714870737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_213114569(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
