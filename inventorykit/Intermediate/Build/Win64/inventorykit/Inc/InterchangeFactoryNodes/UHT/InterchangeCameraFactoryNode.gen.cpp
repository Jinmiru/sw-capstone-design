// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeCameraFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeCameraFactoryNode() {}

// Begin Cross Module References
CINEMATICCAMERA_API UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStandardCameraFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangePhysicalCameraFactoryNode Function GetCustomFocalLength
struct Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics
{
	struct InterchangePhysicalCameraFactoryNode_eventGetCustomFocalLength_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraFactoryNode_eventGetCustomFocalLength_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventGetCustomFocalLength_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventGetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode, nullptr, "GetCustomFocalLength", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::InterchangePhysicalCameraFactoryNode_eventGetCustomFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::InterchangePhysicalCameraFactoryNode_eventGetCustomFocalLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePhysicalCameraFactoryNode::execGetCustomFocalLength)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomFocalLength(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangePhysicalCameraFactoryNode Function GetCustomFocalLength

// Begin Class UInterchangePhysicalCameraFactoryNode Function GetCustomFocusMethod
struct Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics
{
	struct InterchangePhysicalCameraFactoryNode_eventGetCustomFocusMethod_Parms
	{
		ECameraFocusMethod AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraFactoryNode_eventGetCustomFocusMethod_Parms, AttributeValue), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(0, nullptr) }; // 1406648363
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventGetCustomFocusMethod_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventGetCustomFocusMethod_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode, nullptr, "GetCustomFocusMethod", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::InterchangePhysicalCameraFactoryNode_eventGetCustomFocusMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::InterchangePhysicalCameraFactoryNode_eventGetCustomFocusMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePhysicalCameraFactoryNode::execGetCustomFocusMethod)
{
	P_GET_ENUM_REF(ECameraFocusMethod,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomFocusMethod((ECameraFocusMethod&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangePhysicalCameraFactoryNode Function GetCustomFocusMethod

// Begin Class UInterchangePhysicalCameraFactoryNode Function GetCustomSensorHeight
struct Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics
{
	struct InterchangePhysicalCameraFactoryNode_eventGetCustomSensorHeight_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraFactoryNode_eventGetCustomSensorHeight_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventGetCustomSensorHeight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventGetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode, nullptr, "GetCustomSensorHeight", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::InterchangePhysicalCameraFactoryNode_eventGetCustomSensorHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::InterchangePhysicalCameraFactoryNode_eventGetCustomSensorHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePhysicalCameraFactoryNode::execGetCustomSensorHeight)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSensorHeight(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangePhysicalCameraFactoryNode Function GetCustomSensorHeight

// Begin Class UInterchangePhysicalCameraFactoryNode Function GetCustomSensorWidth
struct Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics
{
	struct InterchangePhysicalCameraFactoryNode_eventGetCustomSensorWidth_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraFactoryNode_eventGetCustomSensorWidth_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventGetCustomSensorWidth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventGetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode, nullptr, "GetCustomSensorWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::InterchangePhysicalCameraFactoryNode_eventGetCustomSensorWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::InterchangePhysicalCameraFactoryNode_eventGetCustomSensorWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePhysicalCameraFactoryNode::execGetCustomSensorWidth)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSensorWidth(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangePhysicalCameraFactoryNode Function GetCustomSensorWidth

// Begin Class UInterchangePhysicalCameraFactoryNode Function SetCustomFocalLength
struct Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics
{
	struct InterchangePhysicalCameraFactoryNode_eventSetCustomFocalLength_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraFactoryNode_eventSetCustomFocalLength_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventSetCustomFocalLength_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventSetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventSetCustomFocalLength_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventSetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode, nullptr, "SetCustomFocalLength", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::InterchangePhysicalCameraFactoryNode_eventSetCustomFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::InterchangePhysicalCameraFactoryNode_eventSetCustomFocalLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePhysicalCameraFactoryNode::execSetCustomFocalLength)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomFocalLength(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangePhysicalCameraFactoryNode Function SetCustomFocalLength

// Begin Class UInterchangePhysicalCameraFactoryNode Function SetCustomFocusMethod
struct Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics
{
	struct InterchangePhysicalCameraFactoryNode_eventSetCustomFocusMethod_Parms
	{
		ECameraFocusMethod AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraFactoryNode_eventSetCustomFocusMethod_Parms, AttributeValue), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 1406648363
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventSetCustomFocusMethod_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventSetCustomFocusMethod_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventSetCustomFocusMethod_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventSetCustomFocusMethod_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode, nullptr, "SetCustomFocusMethod", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::InterchangePhysicalCameraFactoryNode_eventSetCustomFocusMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::InterchangePhysicalCameraFactoryNode_eventSetCustomFocusMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePhysicalCameraFactoryNode::execSetCustomFocusMethod)
{
	P_GET_ENUM_REF(ECameraFocusMethod,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomFocusMethod((ECameraFocusMethod&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangePhysicalCameraFactoryNode Function SetCustomFocusMethod

// Begin Class UInterchangePhysicalCameraFactoryNode Function SetCustomSensorHeight
struct Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics
{
	struct InterchangePhysicalCameraFactoryNode_eventSetCustomSensorHeight_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraFactoryNode_eventSetCustomSensorHeight_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventSetCustomSensorHeight_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventSetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventSetCustomSensorHeight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventSetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode, nullptr, "SetCustomSensorHeight", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::InterchangePhysicalCameraFactoryNode_eventSetCustomSensorHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::InterchangePhysicalCameraFactoryNode_eventSetCustomSensorHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePhysicalCameraFactoryNode::execSetCustomSensorHeight)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSensorHeight(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangePhysicalCameraFactoryNode Function SetCustomSensorHeight

// Begin Class UInterchangePhysicalCameraFactoryNode Function SetCustomSensorWidth
struct Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics
{
	struct InterchangePhysicalCameraFactoryNode_eventSetCustomSensorWidth_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePhysicalCameraFactoryNode_eventSetCustomSensorWidth_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventSetCustomSensorWidth_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventSetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePhysicalCameraFactoryNode_eventSetCustomSensorWidth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePhysicalCameraFactoryNode_eventSetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode, nullptr, "SetCustomSensorWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::InterchangePhysicalCameraFactoryNode_eventSetCustomSensorWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::InterchangePhysicalCameraFactoryNode_eventSetCustomSensorWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePhysicalCameraFactoryNode::execSetCustomSensorWidth)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSensorWidth(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangePhysicalCameraFactoryNode Function SetCustomSensorWidth

// Begin Class UInterchangePhysicalCameraFactoryNode
void UInterchangePhysicalCameraFactoryNode::StaticRegisterNativesUInterchangePhysicalCameraFactoryNode()
{
	UClass* Class = UInterchangePhysicalCameraFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomFocalLength", &UInterchangePhysicalCameraFactoryNode::execGetCustomFocalLength },
		{ "GetCustomFocusMethod", &UInterchangePhysicalCameraFactoryNode::execGetCustomFocusMethod },
		{ "GetCustomSensorHeight", &UInterchangePhysicalCameraFactoryNode::execGetCustomSensorHeight },
		{ "GetCustomSensorWidth", &UInterchangePhysicalCameraFactoryNode::execGetCustomSensorWidth },
		{ "SetCustomFocalLength", &UInterchangePhysicalCameraFactoryNode::execSetCustomFocalLength },
		{ "SetCustomFocusMethod", &UInterchangePhysicalCameraFactoryNode::execSetCustomFocusMethod },
		{ "SetCustomSensorHeight", &UInterchangePhysicalCameraFactoryNode::execSetCustomSensorHeight },
		{ "SetCustomSensorWidth", &UInterchangePhysicalCameraFactoryNode::execSetCustomSensorWidth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePhysicalCameraFactoryNode);
UClass* Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_NoRegister()
{
	return UInterchangePhysicalCameraFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeCameraFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength, "GetCustomFocalLength" }, // 2980483771
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod, "GetCustomFocusMethod" }, // 389160709
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight, "GetCustomSensorHeight" }, // 1070789519
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth, "GetCustomSensorWidth" }, // 3387911432
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength, "SetCustomFocalLength" }, // 67333733
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod, "SetCustomFocusMethod" }, // 1418712562
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight, "SetCustomSensorHeight" }, // 4152176306
		{ &Z_Construct_UFunction_UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth, "SetCustomSensorWidth" }, // 4242849852
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePhysicalCameraFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics::ClassParams = {
	&UInterchangePhysicalCameraFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangePhysicalCameraFactoryNode>()
{
	return UInterchangePhysicalCameraFactoryNode::StaticClass();
}
UInterchangePhysicalCameraFactoryNode::UInterchangePhysicalCameraFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePhysicalCameraFactoryNode);
UInterchangePhysicalCameraFactoryNode::~UInterchangePhysicalCameraFactoryNode() {}
// End Class UInterchangePhysicalCameraFactoryNode

// Begin Class UInterchangeStandardCameraFactoryNode Function GetCustomAspectRatio
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventGetCustomAspectRatio_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventGetCustomAspectRatio_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventGetCustomAspectRatio_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventGetCustomAspectRatio_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "GetCustomAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execGetCustomAspectRatio)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAspectRatio(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function GetCustomAspectRatio

// Begin Class UInterchangeStandardCameraFactoryNode Function GetCustomFarClipPlane
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventGetCustomFarClipPlane_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventGetCustomFarClipPlane_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventGetCustomFarClipPlane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventGetCustomFarClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "GetCustomFarClipPlane", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomFarClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomFarClipPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execGetCustomFarClipPlane)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomFarClipPlane(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function GetCustomFarClipPlane

// Begin Class UInterchangeStandardCameraFactoryNode Function GetCustomFieldOfView
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventGetCustomFieldOfView_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventGetCustomFieldOfView_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventGetCustomFieldOfView_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventGetCustomFieldOfView_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "GetCustomFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execGetCustomFieldOfView)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomFieldOfView(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function GetCustomFieldOfView

// Begin Class UInterchangeStandardCameraFactoryNode Function GetCustomNearClipPlane
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventGetCustomNearClipPlane_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventGetCustomNearClipPlane_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventGetCustomNearClipPlane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventGetCustomNearClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "GetCustomNearClipPlane", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomNearClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomNearClipPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execGetCustomNearClipPlane)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomNearClipPlane(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function GetCustomNearClipPlane

// Begin Class UInterchangeStandardCameraFactoryNode Function GetCustomProjectionMode
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventGetCustomProjectionMode_Parms
	{
		TEnumAsByte<ECameraProjectionMode::Type> AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventGetCustomProjectionMode_Parms, AttributeValue), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(0, nullptr) }; // 785982369
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventGetCustomProjectionMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventGetCustomProjectionMode_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "GetCustomProjectionMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomProjectionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomProjectionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execGetCustomProjectionMode)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomProjectionMode((TEnumAsByte<ECameraProjectionMode::Type>&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function GetCustomProjectionMode

// Begin Class UInterchangeStandardCameraFactoryNode Function GetCustomWidth
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventGetCustomWidth_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventGetCustomWidth_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventGetCustomWidth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventGetCustomWidth_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "GetCustomWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::InterchangeStandardCameraFactoryNode_eventGetCustomWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execGetCustomWidth)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomWidth(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function GetCustomWidth

// Begin Class UInterchangeStandardCameraFactoryNode Function SetCustomAspectRatio
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventSetCustomAspectRatio_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventSetCustomAspectRatio_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomAspectRatio_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomAspectRatio_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomAspectRatio_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomAspectRatio_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "SetCustomAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execSetCustomAspectRatio)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAspectRatio(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function SetCustomAspectRatio

// Begin Class UInterchangeStandardCameraFactoryNode Function SetCustomFarClipPlane
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventSetCustomFarClipPlane_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventSetCustomFarClipPlane_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomFarClipPlane_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomFarClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomFarClipPlane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomFarClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "SetCustomFarClipPlane", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomFarClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomFarClipPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execSetCustomFarClipPlane)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomFarClipPlane(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function SetCustomFarClipPlane

// Begin Class UInterchangeStandardCameraFactoryNode Function SetCustomFieldOfView
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventSetCustomFieldOfView_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventSetCustomFieldOfView_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomFieldOfView_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomFieldOfView_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomFieldOfView_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomFieldOfView_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "SetCustomFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execSetCustomFieldOfView)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomFieldOfView(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function SetCustomFieldOfView

// Begin Class UInterchangeStandardCameraFactoryNode Function SetCustomNearClipPlane
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventSetCustomNearClipPlane_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventSetCustomNearClipPlane_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomNearClipPlane_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomNearClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomNearClipPlane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomNearClipPlane_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "SetCustomNearClipPlane", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomNearClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomNearClipPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execSetCustomNearClipPlane)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomNearClipPlane(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function SetCustomNearClipPlane

// Begin Class UInterchangeStandardCameraFactoryNode Function SetCustomProjectionMode
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventSetCustomProjectionMode_Parms
	{
		TEnumAsByte<ECameraProjectionMode::Type> AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventSetCustomProjectionMode_Parms, AttributeValue), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 785982369
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomProjectionMode_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomProjectionMode_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomProjectionMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomProjectionMode_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "SetCustomProjectionMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomProjectionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomProjectionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execSetCustomProjectionMode)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomProjectionMode((TEnumAsByte<ECameraProjectionMode::Type>&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function SetCustomProjectionMode

// Begin Class UInterchangeStandardCameraFactoryNode Function SetCustomWidth
struct Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics
{
	struct InterchangeStandardCameraFactoryNode_eventSetCustomWidth_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStandardCameraFactoryNode_eventSetCustomWidth_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomWidth_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomWidth_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStandardCameraFactoryNode_eventSetCustomWidth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStandardCameraFactoryNode_eventSetCustomWidth_Parms), &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, nullptr, "SetCustomWidth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::InterchangeStandardCameraFactoryNode_eventSetCustomWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStandardCameraFactoryNode::execSetCustomWidth)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomWidth(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStandardCameraFactoryNode Function SetCustomWidth

// Begin Class UInterchangeStandardCameraFactoryNode
void UInterchangeStandardCameraFactoryNode::StaticRegisterNativesUInterchangeStandardCameraFactoryNode()
{
	UClass* Class = UInterchangeStandardCameraFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomAspectRatio", &UInterchangeStandardCameraFactoryNode::execGetCustomAspectRatio },
		{ "GetCustomFarClipPlane", &UInterchangeStandardCameraFactoryNode::execGetCustomFarClipPlane },
		{ "GetCustomFieldOfView", &UInterchangeStandardCameraFactoryNode::execGetCustomFieldOfView },
		{ "GetCustomNearClipPlane", &UInterchangeStandardCameraFactoryNode::execGetCustomNearClipPlane },
		{ "GetCustomProjectionMode", &UInterchangeStandardCameraFactoryNode::execGetCustomProjectionMode },
		{ "GetCustomWidth", &UInterchangeStandardCameraFactoryNode::execGetCustomWidth },
		{ "SetCustomAspectRatio", &UInterchangeStandardCameraFactoryNode::execSetCustomAspectRatio },
		{ "SetCustomFarClipPlane", &UInterchangeStandardCameraFactoryNode::execSetCustomFarClipPlane },
		{ "SetCustomFieldOfView", &UInterchangeStandardCameraFactoryNode::execSetCustomFieldOfView },
		{ "SetCustomNearClipPlane", &UInterchangeStandardCameraFactoryNode::execSetCustomNearClipPlane },
		{ "SetCustomProjectionMode", &UInterchangeStandardCameraFactoryNode::execSetCustomProjectionMode },
		{ "SetCustomWidth", &UInterchangeStandardCameraFactoryNode::execSetCustomWidth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStandardCameraFactoryNode);
UClass* Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_NoRegister()
{
	return UInterchangeStandardCameraFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Used for common non-physical camera with orthographic or perspective projection.\n*/" },
		{ "IncludePath", "InterchangeCameraFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeCameraFactoryNode.h" },
		{ "ToolTip", "* Used for common non-physical camera with orthographic or perspective projection." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio, "GetCustomAspectRatio" }, // 518938468
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane, "GetCustomFarClipPlane" }, // 2511885582
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView, "GetCustomFieldOfView" }, // 3530417735
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane, "GetCustomNearClipPlane" }, // 250629697
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode, "GetCustomProjectionMode" }, // 136569399
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_GetCustomWidth, "GetCustomWidth" }, // 3369608979
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio, "SetCustomAspectRatio" }, // 1159915955
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane, "SetCustomFarClipPlane" }, // 2366865689
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView, "SetCustomFieldOfView" }, // 3496438620
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane, "SetCustomNearClipPlane" }, // 1999521624
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode, "SetCustomProjectionMode" }, // 389237157
		{ &Z_Construct_UFunction_UInterchangeStandardCameraFactoryNode_SetCustomWidth, "SetCustomWidth" }, // 412910118
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeStandardCameraFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics::ClassParams = {
	&UInterchangeStandardCameraFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeStandardCameraFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeStandardCameraFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStandardCameraFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeStandardCameraFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeStandardCameraFactoryNode>()
{
	return UInterchangeStandardCameraFactoryNode::StaticClass();
}
UInterchangeStandardCameraFactoryNode::UInterchangeStandardCameraFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStandardCameraFactoryNode);
UInterchangeStandardCameraFactoryNode::~UInterchangeStandardCameraFactoryNode() {}
// End Class UInterchangeStandardCameraFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode, UInterchangePhysicalCameraFactoryNode::StaticClass, TEXT("UInterchangePhysicalCameraFactoryNode"), &Z_Registration_Info_UClass_UInterchangePhysicalCameraFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePhysicalCameraFactoryNode), 1928404614U) },
		{ Z_Construct_UClass_UInterchangeStandardCameraFactoryNode, UInterchangeStandardCameraFactoryNode::StaticClass, TEXT("UInterchangeStandardCameraFactoryNode"), &Z_Registration_Info_UClass_UInterchangeStandardCameraFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStandardCameraFactoryNode), 2935517831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_1202488799(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
