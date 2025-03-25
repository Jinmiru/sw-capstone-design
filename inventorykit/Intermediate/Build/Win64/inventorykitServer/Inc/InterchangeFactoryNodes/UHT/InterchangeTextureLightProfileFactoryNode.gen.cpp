// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeTextureLightProfileFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureLightProfileFactoryNode() {}

// Begin Cross Module References
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeTextureLightProfileFactoryNode Function GetCustomBrightness
struct Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics
{
	struct InterchangeTextureLightProfileFactoryNode_eventGetCustomBrightness_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureLightProfileFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureLightProfileFactoryNode_eventGetCustomBrightness_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureLightProfileFactoryNode_eventGetCustomBrightness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureLightProfileFactoryNode_eventGetCustomBrightness_Parms), &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode, nullptr, "GetCustomBrightness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::InterchangeTextureLightProfileFactoryNode_eventGetCustomBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::InterchangeTextureLightProfileFactoryNode_eventGetCustomBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureLightProfileFactoryNode::execGetCustomBrightness)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomBrightness(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTextureLightProfileFactoryNode Function GetCustomBrightness

// Begin Class UInterchangeTextureLightProfileFactoryNode Function GetCustomTextureMultiplier
struct Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics
{
	struct InterchangeTextureLightProfileFactoryNode_eventGetCustomTextureMultiplier_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureLightProfileFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureLightProfileFactoryNode_eventGetCustomTextureMultiplier_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureLightProfileFactoryNode_eventGetCustomTextureMultiplier_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureLightProfileFactoryNode_eventGetCustomTextureMultiplier_Parms), &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode, nullptr, "GetCustomTextureMultiplier", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::InterchangeTextureLightProfileFactoryNode_eventGetCustomTextureMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::InterchangeTextureLightProfileFactoryNode_eventGetCustomTextureMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureLightProfileFactoryNode::execGetCustomTextureMultiplier)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTextureMultiplier(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTextureLightProfileFactoryNode Function GetCustomTextureMultiplier

// Begin Class UInterchangeTextureLightProfileFactoryNode Function SetCustomBrightness
struct Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics
{
	struct InterchangeTextureLightProfileFactoryNode_eventSetCustomBrightness_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureLightProfileFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureLightProfileFactoryNode_eventSetCustomBrightness_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeTextureLightProfileFactoryNode_eventSetCustomBrightness_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureLightProfileFactoryNode_eventSetCustomBrightness_Parms), &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureLightProfileFactoryNode_eventSetCustomBrightness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureLightProfileFactoryNode_eventSetCustomBrightness_Parms), &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode, nullptr, "SetCustomBrightness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::InterchangeTextureLightProfileFactoryNode_eventSetCustomBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::InterchangeTextureLightProfileFactoryNode_eventSetCustomBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureLightProfileFactoryNode::execSetCustomBrightness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomBrightness(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeTextureLightProfileFactoryNode Function SetCustomBrightness

// Begin Class UInterchangeTextureLightProfileFactoryNode Function SetCustomTextureMultiplier
struct Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics
{
	struct InterchangeTextureLightProfileFactoryNode_eventSetCustomTextureMultiplier_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureLightProfileFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureLightProfileFactoryNode_eventSetCustomTextureMultiplier_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeTextureLightProfileFactoryNode_eventSetCustomTextureMultiplier_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureLightProfileFactoryNode_eventSetCustomTextureMultiplier_Parms), &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTextureLightProfileFactoryNode_eventSetCustomTextureMultiplier_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureLightProfileFactoryNode_eventSetCustomTextureMultiplier_Parms), &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode, nullptr, "SetCustomTextureMultiplier", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::InterchangeTextureLightProfileFactoryNode_eventSetCustomTextureMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::InterchangeTextureLightProfileFactoryNode_eventSetCustomTextureMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTextureLightProfileFactoryNode::execSetCustomTextureMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTextureMultiplier(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeTextureLightProfileFactoryNode Function SetCustomTextureMultiplier

// Begin Class UInterchangeTextureLightProfileFactoryNode
void UInterchangeTextureLightProfileFactoryNode::StaticRegisterNativesUInterchangeTextureLightProfileFactoryNode()
{
	UClass* Class = UInterchangeTextureLightProfileFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomBrightness", &UInterchangeTextureLightProfileFactoryNode::execGetCustomBrightness },
		{ "GetCustomTextureMultiplier", &UInterchangeTextureLightProfileFactoryNode::execGetCustomTextureMultiplier },
		{ "SetCustomBrightness", &UInterchangeTextureLightProfileFactoryNode::execSetCustomBrightness },
		{ "SetCustomTextureMultiplier", &UInterchangeTextureLightProfileFactoryNode::execSetCustomTextureMultiplier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureLightProfileFactoryNode);
UClass* Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_NoRegister()
{
	return UInterchangeTextureLightProfileFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeTextureLightProfileFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureLightProfileFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness, "GetCustomBrightness" }, // 2556998332
		{ &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier, "GetCustomTextureMultiplier" }, // 1667951646
		{ &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness, "SetCustomBrightness" }, // 1840195882
		{ &Z_Construct_UFunction_UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier, "SetCustomTextureMultiplier" }, // 1087449956
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureLightProfileFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics::ClassParams = {
	&UInterchangeTextureLightProfileFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeTextureLightProfileFactoryNode>()
{
	return UInterchangeTextureLightProfileFactoryNode::StaticClass();
}
UInterchangeTextureLightProfileFactoryNode::UInterchangeTextureLightProfileFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureLightProfileFactoryNode);
UInterchangeTextureLightProfileFactoryNode::~UInterchangeTextureLightProfileFactoryNode() {}
// End Class UInterchangeTextureLightProfileFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode, UInterchangeTextureLightProfileFactoryNode::StaticClass, TEXT("UInterchangeTextureLightProfileFactoryNode"), &Z_Registration_Info_UClass_UInterchangeTextureLightProfileFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureLightProfileFactoryNode), 1467860405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_3408974167(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
