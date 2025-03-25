// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeActorFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeActorFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeActorFactoryNode Function GetCustomActorClassName
struct Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics
{
	struct InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "GetCustomActorClassName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeActorFactoryNode::execGetCustomActorClassName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomActorClassName(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeActorFactoryNode Function GetCustomActorClassName

// Begin Class UInterchangeActorFactoryNode Function GetCustomGlobalTransform
struct Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics
{
	struct InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms
	{
		FTransform AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "GetCustomGlobalTransform", nullptr, nullptr, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeActorFactoryNode::execGetCustomGlobalTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomGlobalTransform(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeActorFactoryNode Function GetCustomGlobalTransform

// Begin Class UInterchangeActorFactoryNode Function GetCustomLocalTransform
struct Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics
{
	struct InterchangeActorFactoryNode_eventGetCustomLocalTransform_Parms
	{
		FTransform AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeActorFactoryNode_eventGetCustomLocalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventGetCustomLocalTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventGetCustomLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "GetCustomLocalTransform", nullptr, nullptr, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::InterchangeActorFactoryNode_eventGetCustomLocalTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::InterchangeActorFactoryNode_eventGetCustomLocalTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeActorFactoryNode::execGetCustomLocalTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomLocalTransform(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeActorFactoryNode Function GetCustomLocalTransform

// Begin Class UInterchangeActorFactoryNode Function GetCustomMobility
struct Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics
{
	struct InterchangeActorFactoryNode_eventGetCustomMobility_Parms
	{
		uint8 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeActorFactoryNode_eventGetCustomMobility_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventGetCustomMobility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventGetCustomMobility_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "GetCustomMobility", nullptr, nullptr, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::InterchangeActorFactoryNode_eventGetCustomMobility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::InterchangeActorFactoryNode_eventGetCustomMobility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeActorFactoryNode::execGetCustomMobility)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomMobility(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeActorFactoryNode Function GetCustomMobility

// Begin Class UInterchangeActorFactoryNode Function SetCustomActorClassName
struct Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics
{
	struct InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "SetCustomActorClassName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeActorFactoryNode::execSetCustomActorClassName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomActorClassName(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeActorFactoryNode Function SetCustomActorClassName

// Begin Class UInterchangeActorFactoryNode Function SetCustomGlobalTransform
struct Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics
{
	struct InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms
	{
		FTransform AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "SetCustomGlobalTransform", nullptr, nullptr, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeActorFactoryNode::execSetCustomGlobalTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomGlobalTransform(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeActorFactoryNode Function SetCustomGlobalTransform

// Begin Class UInterchangeActorFactoryNode Function SetCustomLocalTransform
struct Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics
{
	struct InterchangeActorFactoryNode_eventSetCustomLocalTransform_Parms
	{
		FTransform AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeActorFactoryNode_eventSetCustomLocalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventSetCustomLocalTransform_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventSetCustomLocalTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "SetCustomLocalTransform", nullptr, nullptr, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::InterchangeActorFactoryNode_eventSetCustomLocalTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::InterchangeActorFactoryNode_eventSetCustomLocalTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeActorFactoryNode::execSetCustomLocalTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomLocalTransform(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeActorFactoryNode Function SetCustomLocalTransform

// Begin Class UInterchangeActorFactoryNode Function SetCustomMobility
struct Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics
{
	struct InterchangeActorFactoryNode_eventSetCustomMobility_Parms
	{
		uint8 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeActorFactoryNode_eventSetCustomMobility_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventSetCustomMobility_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomMobility_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeActorFactoryNode_eventSetCustomMobility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomMobility_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "SetCustomMobility", nullptr, nullptr, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::InterchangeActorFactoryNode_eventSetCustomMobility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::InterchangeActorFactoryNode_eventSetCustomMobility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeActorFactoryNode::execSetCustomMobility)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomMobility(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeActorFactoryNode Function SetCustomMobility

// Begin Class UInterchangeActorFactoryNode
void UInterchangeActorFactoryNode::StaticRegisterNativesUInterchangeActorFactoryNode()
{
	UClass* Class = UInterchangeActorFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomActorClassName", &UInterchangeActorFactoryNode::execGetCustomActorClassName },
		{ "GetCustomGlobalTransform", &UInterchangeActorFactoryNode::execGetCustomGlobalTransform },
		{ "GetCustomLocalTransform", &UInterchangeActorFactoryNode::execGetCustomLocalTransform },
		{ "GetCustomMobility", &UInterchangeActorFactoryNode::execGetCustomMobility },
		{ "SetCustomActorClassName", &UInterchangeActorFactoryNode::execSetCustomActorClassName },
		{ "SetCustomGlobalTransform", &UInterchangeActorFactoryNode::execSetCustomGlobalTransform },
		{ "SetCustomLocalTransform", &UInterchangeActorFactoryNode::execSetCustomLocalTransform },
		{ "SetCustomMobility", &UInterchangeActorFactoryNode::execSetCustomMobility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeActorFactoryNode);
UClass* Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister()
{
	return UInterchangeActorFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeActorFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeActorFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName, "GetCustomActorClassName" }, // 3402804804
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform, "GetCustomGlobalTransform" }, // 3746322450
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomLocalTransform, "GetCustomLocalTransform" }, // 3991638248
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility, "GetCustomMobility" }, // 3773197316
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName, "SetCustomActorClassName" }, // 2807628462
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform, "SetCustomGlobalTransform" }, // 4199849918
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomLocalTransform, "SetCustomLocalTransform" }, // 162267077
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility, "SetCustomMobility" }, // 4292390852
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeActorFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::ClassParams = {
	&UInterchangeActorFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeActorFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeActorFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeActorFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeActorFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeActorFactoryNode>()
{
	return UInterchangeActorFactoryNode::StaticClass();
}
UInterchangeActorFactoryNode::UInterchangeActorFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeActorFactoryNode);
UInterchangeActorFactoryNode::~UInterchangeActorFactoryNode() {}
// End Class UInterchangeActorFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeActorFactoryNode, UInterchangeActorFactoryNode::StaticClass, TEXT("UInterchangeActorFactoryNode"), &Z_Registration_Info_UClass_UInterchangeActorFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeActorFactoryNode), 577709423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_800191603(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
