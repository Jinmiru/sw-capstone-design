// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeLightFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLightFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeBaseLightFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeBaseLightFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLightFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLightFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePointLightFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeRectLightFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSpotLightFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeBaseLightFactoryNode Function GetCustomIntensity
struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics
{
	struct InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "GetCustomIntensity", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execGetCustomIntensity)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIntensity(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightFactoryNode Function GetCustomIntensity

// Begin Class UInterchangeBaseLightFactoryNode Function GetCustomLightColor
struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics
{
	struct InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms
	{
		FColor AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "GetCustomLightColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execGetCustomLightColor)
{
	P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomLightColor(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightFactoryNode Function GetCustomLightColor

// Begin Class UInterchangeBaseLightFactoryNode Function GetCustomTemperature
struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics
{
	struct InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "GetCustomTemperature", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execGetCustomTemperature)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTemperature(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightFactoryNode Function GetCustomTemperature

// Begin Class UInterchangeBaseLightFactoryNode Function GetCustomUseTemperature
struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics
{
	struct InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "GetCustomUseTemperature", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execGetCustomUseTemperature)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseTemperature(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightFactoryNode Function GetCustomUseTemperature

// Begin Class UInterchangeBaseLightFactoryNode Function SetCustomIntensity
struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics
{
	struct InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "SetCustomIntensity", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execSetCustomIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIntensity(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightFactoryNode Function SetCustomIntensity

// Begin Class UInterchangeBaseLightFactoryNode Function SetCustomLightColor
struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics
{
	struct InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms
	{
		FColor AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "SetCustomLightColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execSetCustomLightColor)
{
	P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomLightColor(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightFactoryNode Function SetCustomLightColor

// Begin Class UInterchangeBaseLightFactoryNode Function SetCustomTemperature
struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics
{
	struct InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "SetCustomTemperature", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execSetCustomTemperature)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTemperature(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightFactoryNode Function SetCustomTemperature

// Begin Class UInterchangeBaseLightFactoryNode Function SetCustomUseTemperature
struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics
{
	struct InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "SetCustomUseTemperature", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execSetCustomUseTemperature)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseTemperature(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeBaseLightFactoryNode Function SetCustomUseTemperature

// Begin Class UInterchangeBaseLightFactoryNode
void UInterchangeBaseLightFactoryNode::StaticRegisterNativesUInterchangeBaseLightFactoryNode()
{
	UClass* Class = UInterchangeBaseLightFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomIntensity", &UInterchangeBaseLightFactoryNode::execGetCustomIntensity },
		{ "GetCustomLightColor", &UInterchangeBaseLightFactoryNode::execGetCustomLightColor },
		{ "GetCustomTemperature", &UInterchangeBaseLightFactoryNode::execGetCustomTemperature },
		{ "GetCustomUseTemperature", &UInterchangeBaseLightFactoryNode::execGetCustomUseTemperature },
		{ "SetCustomIntensity", &UInterchangeBaseLightFactoryNode::execSetCustomIntensity },
		{ "SetCustomLightColor", &UInterchangeBaseLightFactoryNode::execSetCustomLightColor },
		{ "SetCustomTemperature", &UInterchangeBaseLightFactoryNode::execSetCustomTemperature },
		{ "SetCustomUseTemperature", &UInterchangeBaseLightFactoryNode::execSetCustomUseTemperature },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBaseLightFactoryNode);
UClass* Z_Construct_UClass_UInterchangeBaseLightFactoryNode_NoRegister()
{
	return UInterchangeBaseLightFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity, "GetCustomIntensity" }, // 1168140328
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor, "GetCustomLightColor" }, // 3502933544
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature, "GetCustomTemperature" }, // 863308727
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature, "GetCustomUseTemperature" }, // 537830572
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity, "SetCustomIntensity" }, // 3535419036
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor, "SetCustomLightColor" }, // 2362339640
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature, "SetCustomTemperature" }, // 3383924563
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature, "SetCustomUseTemperature" }, // 3772652938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeBaseLightFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::ClassParams = {
	&UInterchangeBaseLightFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeBaseLightFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeBaseLightFactoryNode>()
{
	return UInterchangeBaseLightFactoryNode::StaticClass();
}
UInterchangeBaseLightFactoryNode::UInterchangeBaseLightFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBaseLightFactoryNode);
UInterchangeBaseLightFactoryNode::~UInterchangeBaseLightFactoryNode() {}
// End Class UInterchangeBaseLightFactoryNode

// Begin Class UInterchangeDirectionalLightFactoryNode
void UInterchangeDirectionalLightFactoryNode::StaticRegisterNativesUInterchangeDirectionalLightFactoryNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDirectionalLightFactoryNode);
UClass* Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_NoRegister()
{
	return UInterchangeDirectionalLightFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDirectionalLightFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::ClassParams = {
	&UInterchangeDirectionalLightFactoryNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeDirectionalLightFactoryNode>()
{
	return UInterchangeDirectionalLightFactoryNode::StaticClass();
}
UInterchangeDirectionalLightFactoryNode::UInterchangeDirectionalLightFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDirectionalLightFactoryNode);
UInterchangeDirectionalLightFactoryNode::~UInterchangeDirectionalLightFactoryNode() {}
// End Class UInterchangeDirectionalLightFactoryNode

// Begin Class UInterchangeLightFactoryNode Function GetCustomAttenuationRadius
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics
{
	struct InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "GetCustomAttenuationRadius", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execGetCustomAttenuationRadius)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAttenuationRadius(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function GetCustomAttenuationRadius

// Begin Class UInterchangeLightFactoryNode Function GetCustomIESBrightnessScale
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics
{
	struct InterchangeLightFactoryNode_eventGetCustomIESBrightnessScale_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventGetCustomIESBrightnessScale_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventGetCustomIESBrightnessScale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "GetCustomIESBrightnessScale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::InterchangeLightFactoryNode_eventGetCustomIESBrightnessScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::InterchangeLightFactoryNode_eventGetCustomIESBrightnessScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execGetCustomIESBrightnessScale)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIESBrightnessScale(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function GetCustomIESBrightnessScale

// Begin Class UInterchangeLightFactoryNode Function GetCustomIESTexture
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics
{
	struct InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "GetCustomIESTexture", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execGetCustomIESTexture)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIESTexture(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function GetCustomIESTexture

// Begin Class UInterchangeLightFactoryNode Function GetCustomIntensityUnits
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics
{
	struct InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms
	{
		ELightUnits AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms, AttributeValue), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(0, nullptr) }; // 3885668745
void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "GetCustomIntensityUnits", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execGetCustomIntensityUnits)
{
	P_GET_ENUM_REF(ELightUnits,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIntensityUnits((ELightUnits&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function GetCustomIntensityUnits

// Begin Class UInterchangeLightFactoryNode Function GetCustomRotation
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics
{
	struct InterchangeLightFactoryNode_eventGetCustomRotation_Parms
	{
		FRotator AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventGetCustomRotation_Parms, AttributeValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventGetCustomRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "GetCustomRotation", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::InterchangeLightFactoryNode_eventGetCustomRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::InterchangeLightFactoryNode_eventGetCustomRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execGetCustomRotation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRotation(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function GetCustomRotation

// Begin Class UInterchangeLightFactoryNode Function GetCustomUseIESBrightness
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics
{
	struct InterchangeLightFactoryNode_eventGetCustomUseIESBrightness_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventGetCustomUseIESBrightness_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventGetCustomUseIESBrightness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "GetCustomUseIESBrightness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::InterchangeLightFactoryNode_eventGetCustomUseIESBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::InterchangeLightFactoryNode_eventGetCustomUseIESBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execGetCustomUseIESBrightness)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseIESBrightness(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function GetCustomUseIESBrightness

// Begin Class UInterchangeLightFactoryNode Function SetCustomAttenuationRadius
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics
{
	struct InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "SetCustomAttenuationRadius", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execSetCustomAttenuationRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAttenuationRadius(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function SetCustomAttenuationRadius

// Begin Class UInterchangeLightFactoryNode Function SetCustomIESBrightnessScale
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics
{
	struct InterchangeLightFactoryNode_eventSetCustomIESBrightnessScale_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventSetCustomIESBrightnessScale_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomIESBrightnessScale_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomIESBrightnessScale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "SetCustomIESBrightnessScale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::InterchangeLightFactoryNode_eventSetCustomIESBrightnessScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::InterchangeLightFactoryNode_eventSetCustomIESBrightnessScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execSetCustomIESBrightnessScale)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIESBrightnessScale(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function SetCustomIESBrightnessScale

// Begin Class UInterchangeLightFactoryNode Function SetCustomIESTexture
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics
{
	struct InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "SetCustomIESTexture", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execSetCustomIESTexture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIESTexture(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function SetCustomIESTexture

// Begin Class UInterchangeLightFactoryNode Function SetCustomIntensityUnits
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics
{
	struct InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms
	{
		ELightUnits AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms, AttributeValue), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(0, nullptr) }; // 3885668745
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "SetCustomIntensityUnits", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execSetCustomIntensityUnits)
{
	P_GET_ENUM(ELightUnits,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIntensityUnits(ELightUnits(Z_Param_AttributeValue),Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function SetCustomIntensityUnits

// Begin Class UInterchangeLightFactoryNode Function SetCustomRotation
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics
{
	struct InterchangeLightFactoryNode_eventSetCustomRotation_Parms
	{
		FRotator AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLightFactoryNode_eventSetCustomRotation_Parms, AttributeValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomRotation_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "SetCustomRotation", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::InterchangeLightFactoryNode_eventSetCustomRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::InterchangeLightFactoryNode_eventSetCustomRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execSetCustomRotation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRotation(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function SetCustomRotation

// Begin Class UInterchangeLightFactoryNode Function SetCustomUseIESBrightness
struct Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics
{
	struct InterchangeLightFactoryNode_eventSetCustomUseIESBrightness_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomUseIESBrightness_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomUseIESBrightness_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLightFactoryNode_eventSetCustomUseIESBrightness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "SetCustomUseIESBrightness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::InterchangeLightFactoryNode_eventSetCustomUseIESBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::InterchangeLightFactoryNode_eventSetCustomUseIESBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLightFactoryNode::execSetCustomUseIESBrightness)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseIESBrightness(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeLightFactoryNode Function SetCustomUseIESBrightness

// Begin Class UInterchangeLightFactoryNode
void UInterchangeLightFactoryNode::StaticRegisterNativesUInterchangeLightFactoryNode()
{
	UClass* Class = UInterchangeLightFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomAttenuationRadius", &UInterchangeLightFactoryNode::execGetCustomAttenuationRadius },
		{ "GetCustomIESBrightnessScale", &UInterchangeLightFactoryNode::execGetCustomIESBrightnessScale },
		{ "GetCustomIESTexture", &UInterchangeLightFactoryNode::execGetCustomIESTexture },
		{ "GetCustomIntensityUnits", &UInterchangeLightFactoryNode::execGetCustomIntensityUnits },
		{ "GetCustomRotation", &UInterchangeLightFactoryNode::execGetCustomRotation },
		{ "GetCustomUseIESBrightness", &UInterchangeLightFactoryNode::execGetCustomUseIESBrightness },
		{ "SetCustomAttenuationRadius", &UInterchangeLightFactoryNode::execSetCustomAttenuationRadius },
		{ "SetCustomIESBrightnessScale", &UInterchangeLightFactoryNode::execSetCustomIESBrightnessScale },
		{ "SetCustomIESTexture", &UInterchangeLightFactoryNode::execSetCustomIESTexture },
		{ "SetCustomIntensityUnits", &UInterchangeLightFactoryNode::execSetCustomIntensityUnits },
		{ "SetCustomRotation", &UInterchangeLightFactoryNode::execSetCustomRotation },
		{ "SetCustomUseIESBrightness", &UInterchangeLightFactoryNode::execSetCustomUseIESBrightness },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLightFactoryNode);
UClass* Z_Construct_UClass_UInterchangeLightFactoryNode_NoRegister()
{
	return UInterchangeLightFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeLightFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius, "GetCustomAttenuationRadius" }, // 1076130744
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESBrightnessScale, "GetCustomIESBrightnessScale" }, // 3479844869
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture, "GetCustomIESTexture" }, // 3107022475
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits, "GetCustomIntensityUnits" }, // 92194116
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomRotation, "GetCustomRotation" }, // 367025969
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomUseIESBrightness, "GetCustomUseIESBrightness" }, // 3353023868
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius, "SetCustomAttenuationRadius" }, // 2954638083
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESBrightnessScale, "SetCustomIESBrightnessScale" }, // 1844118951
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture, "SetCustomIESTexture" }, // 3965866173
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits, "SetCustomIntensityUnits" }, // 3913932437
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomRotation, "SetCustomRotation" }, // 246118
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomUseIESBrightness, "SetCustomUseIESBrightness" }, // 4284140279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLightFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::ClassParams = {
	&UInterchangeLightFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeLightFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeLightFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeLightFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeLightFactoryNode>()
{
	return UInterchangeLightFactoryNode::StaticClass();
}
UInterchangeLightFactoryNode::UInterchangeLightFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLightFactoryNode);
UInterchangeLightFactoryNode::~UInterchangeLightFactoryNode() {}
// End Class UInterchangeLightFactoryNode

// Begin Class UInterchangeRectLightFactoryNode Function GetCustomSourceHeight
struct Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics
{
	struct InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightFactoryNode, nullptr, "GetCustomSourceHeight", nullptr, nullptr, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeRectLightFactoryNode::execGetCustomSourceHeight)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSourceHeight(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeRectLightFactoryNode Function GetCustomSourceHeight

// Begin Class UInterchangeRectLightFactoryNode Function GetCustomSourceWidth
struct Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics
{
	struct InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightFactoryNode, nullptr, "GetCustomSourceWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeRectLightFactoryNode::execGetCustomSourceWidth)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSourceWidth(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeRectLightFactoryNode Function GetCustomSourceWidth

// Begin Class UInterchangeRectLightFactoryNode Function SetCustomSourceHeight
struct Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics
{
	struct InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightFactoryNode, nullptr, "SetCustomSourceHeight", nullptr, nullptr, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeRectLightFactoryNode::execSetCustomSourceHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSourceHeight(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeRectLightFactoryNode Function SetCustomSourceHeight

// Begin Class UInterchangeRectLightFactoryNode Function SetCustomSourceWidth
struct Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics
{
	struct InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightFactoryNode, nullptr, "SetCustomSourceWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeRectLightFactoryNode::execSetCustomSourceWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSourceWidth(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeRectLightFactoryNode Function SetCustomSourceWidth

// Begin Class UInterchangeRectLightFactoryNode
void UInterchangeRectLightFactoryNode::StaticRegisterNativesUInterchangeRectLightFactoryNode()
{
	UClass* Class = UInterchangeRectLightFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomSourceHeight", &UInterchangeRectLightFactoryNode::execGetCustomSourceHeight },
		{ "GetCustomSourceWidth", &UInterchangeRectLightFactoryNode::execGetCustomSourceWidth },
		{ "SetCustomSourceHeight", &UInterchangeRectLightFactoryNode::execSetCustomSourceHeight },
		{ "SetCustomSourceWidth", &UInterchangeRectLightFactoryNode::execSetCustomSourceWidth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeRectLightFactoryNode);
UClass* Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister()
{
	return UInterchangeRectLightFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight, "GetCustomSourceHeight" }, // 3610836331
		{ &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth, "GetCustomSourceWidth" }, // 3215458619
		{ &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight, "SetCustomSourceHeight" }, // 1501725734
		{ &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth, "SetCustomSourceWidth" }, // 3753549291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeRectLightFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeLightFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::ClassParams = {
	&UInterchangeRectLightFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeRectLightFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeRectLightFactoryNode>()
{
	return UInterchangeRectLightFactoryNode::StaticClass();
}
UInterchangeRectLightFactoryNode::UInterchangeRectLightFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeRectLightFactoryNode);
UInterchangeRectLightFactoryNode::~UInterchangeRectLightFactoryNode() {}
// End Class UInterchangeRectLightFactoryNode

// Begin Class UInterchangePointLightFactoryNode Function GetCustomLightFalloffExponent
struct Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics
{
	struct InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightFactoryNode, nullptr, "GetCustomLightFalloffExponent", nullptr, nullptr, Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePointLightFactoryNode::execGetCustomLightFalloffExponent)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomLightFalloffExponent(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangePointLightFactoryNode Function GetCustomLightFalloffExponent

// Begin Class UInterchangePointLightFactoryNode Function GetCustomUseInverseSquaredFalloff
struct Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics
{
	struct InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightFactoryNode, nullptr, "GetCustomUseInverseSquaredFalloff", nullptr, nullptr, Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePointLightFactoryNode::execGetCustomUseInverseSquaredFalloff)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseInverseSquaredFalloff(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangePointLightFactoryNode Function GetCustomUseInverseSquaredFalloff

// Begin Class UInterchangePointLightFactoryNode Function SetCustomLightFalloffExponent
struct Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics
{
	struct InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightFactoryNode, nullptr, "SetCustomLightFalloffExponent", nullptr, nullptr, Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePointLightFactoryNode::execSetCustomLightFalloffExponent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomLightFalloffExponent(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangePointLightFactoryNode Function SetCustomLightFalloffExponent

// Begin Class UInterchangePointLightFactoryNode Function SetCustomUseInverseSquaredFalloff
struct Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics
{
	struct InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightFactoryNode, nullptr, "SetCustomUseInverseSquaredFalloff", nullptr, nullptr, Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePointLightFactoryNode::execSetCustomUseInverseSquaredFalloff)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseInverseSquaredFalloff(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangePointLightFactoryNode Function SetCustomUseInverseSquaredFalloff

// Begin Class UInterchangePointLightFactoryNode
void UInterchangePointLightFactoryNode::StaticRegisterNativesUInterchangePointLightFactoryNode()
{
	UClass* Class = UInterchangePointLightFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomLightFalloffExponent", &UInterchangePointLightFactoryNode::execGetCustomLightFalloffExponent },
		{ "GetCustomUseInverseSquaredFalloff", &UInterchangePointLightFactoryNode::execGetCustomUseInverseSquaredFalloff },
		{ "SetCustomLightFalloffExponent", &UInterchangePointLightFactoryNode::execSetCustomLightFalloffExponent },
		{ "SetCustomUseInverseSquaredFalloff", &UInterchangePointLightFactoryNode::execSetCustomUseInverseSquaredFalloff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePointLightFactoryNode);
UClass* Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister()
{
	return UInterchangePointLightFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent, "GetCustomLightFalloffExponent" }, // 597765793
		{ &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff, "GetCustomUseInverseSquaredFalloff" }, // 489746118
		{ &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent, "SetCustomLightFalloffExponent" }, // 3309885853
		{ &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff, "SetCustomUseInverseSquaredFalloff" }, // 674203282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePointLightFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeLightFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::ClassParams = {
	&UInterchangePointLightFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePointLightFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangePointLightFactoryNode>()
{
	return UInterchangePointLightFactoryNode::StaticClass();
}
UInterchangePointLightFactoryNode::UInterchangePointLightFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePointLightFactoryNode);
UInterchangePointLightFactoryNode::~UInterchangePointLightFactoryNode() {}
// End Class UInterchangePointLightFactoryNode

// Begin Class UInterchangeSpotLightFactoryNode Function GetCustomInnerConeAngle
struct Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics
{
	struct InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightFactoryNode, nullptr, "GetCustomInnerConeAngle", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSpotLightFactoryNode::execGetCustomInnerConeAngle)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomInnerConeAngle(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSpotLightFactoryNode Function GetCustomInnerConeAngle

// Begin Class UInterchangeSpotLightFactoryNode Function GetCustomOuterConeAngle
struct Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics
{
	struct InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightFactoryNode, nullptr, "GetCustomOuterConeAngle", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSpotLightFactoryNode::execGetCustomOuterConeAngle)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomOuterConeAngle(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSpotLightFactoryNode Function GetCustomOuterConeAngle

// Begin Class UInterchangeSpotLightFactoryNode Function SetCustomInnerConeAngle
struct Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics
{
	struct InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightFactoryNode, nullptr, "SetCustomInnerConeAngle", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSpotLightFactoryNode::execSetCustomInnerConeAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomInnerConeAngle(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeSpotLightFactoryNode Function SetCustomInnerConeAngle

// Begin Class UInterchangeSpotLightFactoryNode Function SetCustomOuterConeAngle
struct Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics
{
	struct InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightFactoryNode, nullptr, "SetCustomOuterConeAngle", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSpotLightFactoryNode::execSetCustomOuterConeAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomOuterConeAngle(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeSpotLightFactoryNode Function SetCustomOuterConeAngle

// Begin Class UInterchangeSpotLightFactoryNode
void UInterchangeSpotLightFactoryNode::StaticRegisterNativesUInterchangeSpotLightFactoryNode()
{
	UClass* Class = UInterchangeSpotLightFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomInnerConeAngle", &UInterchangeSpotLightFactoryNode::execGetCustomInnerConeAngle },
		{ "GetCustomOuterConeAngle", &UInterchangeSpotLightFactoryNode::execGetCustomOuterConeAngle },
		{ "SetCustomInnerConeAngle", &UInterchangeSpotLightFactoryNode::execSetCustomInnerConeAngle },
		{ "SetCustomOuterConeAngle", &UInterchangeSpotLightFactoryNode::execSetCustomOuterConeAngle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSpotLightFactoryNode);
UClass* Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister()
{
	return UInterchangeSpotLightFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle, "GetCustomInnerConeAngle" }, // 3298181735
		{ &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle, "GetCustomOuterConeAngle" }, // 3555644038
		{ &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle, "SetCustomInnerConeAngle" }, // 1555866813
		{ &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle, "SetCustomOuterConeAngle" }, // 1397833634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSpotLightFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePointLightFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::ClassParams = {
	&UInterchangeSpotLightFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSpotLightFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSpotLightFactoryNode>()
{
	return UInterchangeSpotLightFactoryNode::StaticClass();
}
UInterchangeSpotLightFactoryNode::UInterchangeSpotLightFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSpotLightFactoryNode);
UInterchangeSpotLightFactoryNode::~UInterchangeSpotLightFactoryNode() {}
// End Class UInterchangeSpotLightFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBaseLightFactoryNode, UInterchangeBaseLightFactoryNode::StaticClass, TEXT("UInterchangeBaseLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBaseLightFactoryNode), 1771176635U) },
		{ Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode, UInterchangeDirectionalLightFactoryNode::StaticClass, TEXT("UInterchangeDirectionalLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDirectionalLightFactoryNode), 717089404U) },
		{ Z_Construct_UClass_UInterchangeLightFactoryNode, UInterchangeLightFactoryNode::StaticClass, TEXT("UInterchangeLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLightFactoryNode), 1303497088U) },
		{ Z_Construct_UClass_UInterchangeRectLightFactoryNode, UInterchangeRectLightFactoryNode::StaticClass, TEXT("UInterchangeRectLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeRectLightFactoryNode), 2942678670U) },
		{ Z_Construct_UClass_UInterchangePointLightFactoryNode, UInterchangePointLightFactoryNode::StaticClass, TEXT("UInterchangePointLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangePointLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePointLightFactoryNode), 3649825214U) },
		{ Z_Construct_UClass_UInterchangeSpotLightFactoryNode, UInterchangeSpotLightFactoryNode::StaticClass, TEXT("UInterchangeSpotLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSpotLightFactoryNode), 2897274527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_4038821097(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
