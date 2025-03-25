// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References

// Begin Class UMotionControllerComponent Function GetAngularVelocity
struct Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics
{
	struct MotionControllerComponent_eventGetAngularVelocity_Parms
	{
		FRotator OutAngularVelocity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "Comment", "/** If the motion tracking system provides angular velocity at this time OutAngularVelocity will be that velocity in deg/s in unreal world space and the function will return true. Note that it is not difficult to rotate a controller at more than 0.5 or 1 rotation per second briefly and some mathmatical operations(such as conversion to quaternion) lose rotations beyond 180 degrees or 360 degrees..  In some cases that is OK becuase the resulting final rotation is the same, but in some cases it would generate incorrect results.   If angular velocity is unavailable it will return false.*/" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "If the motion tracking system provides angular velocity at this time OutAngularVelocity will be that velocity in deg/s in unreal world space and the function will return true. Note that it is not difficult to rotate a controller at more than 0.5 or 1 rotation per second briefly and some mathmatical operations(such as conversion to quaternion) lose rotations beyond 180 degrees or 360 degrees..  In some cases that is OK becuase the resulting final rotation is the same, but in some cases it would generate incorrect results.   If angular velocity is unavailable it will return false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAngularVelocity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::NewProp_OutAngularVelocity = { "OutAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetAngularVelocity_Parms, OutAngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MotionControllerComponent_eventGetAngularVelocity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionControllerComponent_eventGetAngularVelocity_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::NewProp_OutAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetAngularVelocity", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::MotionControllerComponent_eventGetAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::MotionControllerComponent_eventGetAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execGetAngularVelocity)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutAngularVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAngularVelocity(Z_Param_Out_OutAngularVelocity);
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function GetAngularVelocity

// Begin Class UMotionControllerComponent Function GetHandJointPosition
struct Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics
{
	struct MotionControllerComponent_eventGetHandJointPosition_Parms
	{
		int32 jointIndex;
		bool bValueFound;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_jointIndex;
	static void NewProp_bValueFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValueFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_jointIndex = { "jointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetHandJointPosition_Parms, jointIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound_SetBit(void* Obj)
{
	((MotionControllerComponent_eventGetHandJointPosition_Parms*)Obj)->bValueFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound = { "bValueFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionControllerComponent_eventGetHandJointPosition_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetHandJointPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_jointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetHandJointPosition", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::MotionControllerComponent_eventGetHandJointPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::MotionControllerComponent_eventGetHandJointPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execGetHandJointPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_jointIndex);
	P_GET_UBOOL_REF(Z_Param_Out_bValueFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetHandJointPosition(Z_Param_jointIndex,Z_Param_Out_bValueFound);
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function GetHandJointPosition

// Begin Class UMotionControllerComponent Function GetLinearAcceleration
struct Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics
{
	struct MotionControllerComponent_eventGetLinearAcceleration_Parms
	{
		FVector OutLinearAcceleration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "Comment", "/** If the motion tracking system provides linear acceleration at this time the vector will be that acceleration in cm/(s^2) in unreal world space and the function will return true.  If acceleration is unavailable it will return false.  */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "If the motion tracking system provides linear acceleration at this time the vector will be that acceleration in cm/(s^2) in unreal world space and the function will return true.  If acceleration is unavailable it will return false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLinearAcceleration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::NewProp_OutLinearAcceleration = { "OutLinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetLinearAcceleration_Parms, OutLinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MotionControllerComponent_eventGetLinearAcceleration_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionControllerComponent_eventGetLinearAcceleration_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::NewProp_OutLinearAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetLinearAcceleration", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::MotionControllerComponent_eventGetLinearAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::MotionControllerComponent_eventGetLinearAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execGetLinearAcceleration)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLinearAcceleration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLinearAcceleration(Z_Param_Out_OutLinearAcceleration);
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function GetLinearAcceleration

// Begin Class UMotionControllerComponent Function GetLinearVelocity
struct Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics
{
	struct MotionControllerComponent_eventGetLinearVelocity_Parms
	{
		FVector OutLinearVelocity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "Comment", "/** If the motion tracking system provides linear velocity at this time the vector will be that velocity in cm/s in unreal world space and the function will return true.  If velocity is unavailable it will return false.  */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "If the motion tracking system provides linear velocity at this time the vector will be that velocity in cm/s in unreal world space and the function will return true.  If velocity is unavailable it will return false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLinearVelocity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::NewProp_OutLinearVelocity = { "OutLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetLinearVelocity_Parms, OutLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MotionControllerComponent_eventGetLinearVelocity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionControllerComponent_eventGetLinearVelocity_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::NewProp_OutLinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetLinearVelocity", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::MotionControllerComponent_eventGetLinearVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::MotionControllerComponent_eventGetLinearVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execGetLinearVelocity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLinearVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLinearVelocity(Z_Param_Out_OutLinearVelocity);
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function GetLinearVelocity

// Begin Class UMotionControllerComponent Function GetParameterValue
struct Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics
{
	struct MotionControllerComponent_eventGetParameterValue_Parms
	{
		FName InName;
		bool bValueFound;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "Comment", "// Returns the value of a custom parameter on the current in use Motion Controller (see member InUseMotionController). Only valid for the duration of OnMotionControllerUpdated \n" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Returns the value of a custom parameter on the current in use Motion Controller (see member InUseMotionController). Only valid for the duration of OnMotionControllerUpdated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static void NewProp_bValueFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValueFound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, InName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound_SetBit(void* Obj)
{
	((MotionControllerComponent_eventGetParameterValue_Parms*)Obj)->bValueFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound = { "bValueFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionControllerComponent_eventGetParameterValue_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::MotionControllerComponent_eventGetParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::MotionControllerComponent_eventGetParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execGetParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_UBOOL_REF(Z_Param_Out_bValueFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetParameterValue(Z_Param_InName,Z_Param_Out_bValueFound);
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function GetParameterValue

// Begin Class UMotionControllerComponent Function GetTrackingSource
struct Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics
{
	struct MotionControllerComponent_eventGetTrackingSource_Parms
	{
		EControllerHand ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventGetTrackingSource_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetTrackingSource", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::MotionControllerComponent_eventGetTrackingSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::MotionControllerComponent_eventGetTrackingSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execGetTrackingSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EControllerHand*)Z_Param__Result=P_THIS->GetTrackingSource();
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function GetTrackingSource

// Begin Class UMotionControllerComponent Function IsTracked
struct Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics
{
	struct MotionControllerComponent_eventIsTracked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MotionController" },
		{ "Comment", "/** Whether or not this component had a valid tracked device this frame */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Whether or not this component had a valid tracked device this frame" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MotionControllerComponent_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionControllerComponent_eventIsTracked_Parms), &Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "IsTracked", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::MotionControllerComponent_eventIsTracked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::MotionControllerComponent_eventIsTracked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execIsTracked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTracked();
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function IsTracked

// Begin Class UMotionControllerComponent Function OnMotionControllerUpdated
static FName NAME_UMotionControllerComponent_OnMotionControllerUpdated = FName(TEXT("OnMotionControllerUpdated"));
void UMotionControllerComponent::OnMotionControllerUpdated()
{
	ProcessEvent(FindFunctionChecked(NAME_UMotionControllerComponent_OnMotionControllerUpdated),NULL);
}
struct Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "Comment", "/** Blueprint Implementable function for responding to updated data from a motion controller (so we can use custom parameter values from it) */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Blueprint Implementable function for responding to updated data from a motion controller (so we can use custom parameter values from it)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "OnMotionControllerUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMotionControllerComponent Function OnMotionControllerUpdated

// Begin Class UMotionControllerComponent Function SetAssociatedPlayerIndex
struct Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics
{
	struct MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms
	{
		int32 NewPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms, NewPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPlayer_MetaData), NewProp_NewPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetAssociatedPlayerIndex", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execSetAssociatedPlayerIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAssociatedPlayerIndex(Z_Param_NewPlayer);
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function SetAssociatedPlayerIndex

// Begin Class UMotionControllerComponent Function SetTrackingMotionSource
struct Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics
{
	struct MotionControllerComponent_eventSetTrackingMotionSource_Parms
	{
		FName NewSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource = { "NewSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingMotionSource_Parms, NewSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSource_MetaData), NewProp_NewSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetTrackingMotionSource", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::MotionControllerComponent_eventSetTrackingMotionSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::MotionControllerComponent_eventSetTrackingMotionSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execSetTrackingMotionSource)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrackingMotionSource(Z_Param_NewSource);
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function SetTrackingMotionSource

// Begin Class UMotionControllerComponent Function SetTrackingSource
struct Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics
{
	struct MotionControllerComponent_eventSetTrackingSource_Parms
	{
		EControllerHand NewSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource = { "NewSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingSource_Parms, NewSource), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSource_MetaData), NewProp_NewSource_MetaData) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetTrackingSource", nullptr, nullptr, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::MotionControllerComponent_eventSetTrackingSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::MotionControllerComponent_eventSetTrackingSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMotionControllerComponent::execSetTrackingSource)
{
	P_GET_ENUM(EControllerHand,Z_Param_NewSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrackingSource(EControllerHand(Z_Param_NewSource));
	P_NATIVE_END;
}
// End Class UMotionControllerComponent Function SetTrackingSource

// Begin Class UMotionControllerComponent
void UMotionControllerComponent::StaticRegisterNativesUMotionControllerComponent()
{
	UClass* Class = UMotionControllerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAngularVelocity", &UMotionControllerComponent::execGetAngularVelocity },
		{ "GetHandJointPosition", &UMotionControllerComponent::execGetHandJointPosition },
		{ "GetLinearAcceleration", &UMotionControllerComponent::execGetLinearAcceleration },
		{ "GetLinearVelocity", &UMotionControllerComponent::execGetLinearVelocity },
		{ "GetParameterValue", &UMotionControllerComponent::execGetParameterValue },
		{ "GetTrackingSource", &UMotionControllerComponent::execGetTrackingSource },
		{ "IsTracked", &UMotionControllerComponent::execIsTracked },
		{ "SetAssociatedPlayerIndex", &UMotionControllerComponent::execSetAssociatedPlayerIndex },
		{ "SetTrackingMotionSource", &UMotionControllerComponent::execSetTrackingMotionSource },
		{ "SetTrackingSource", &UMotionControllerComponent::execSetTrackingSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionControllerComponent);
UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister()
{
	return UMotionControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UMotionControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MotionController" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MotionControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
		{ "BlueprintSetter", "SetAssociatedPlayerIndex" },
		{ "Category", "MotionController" },
		{ "Comment", "/** Which player index this motion controller should automatically follow */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Which player index this motion controller should automatically follow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionSource_MetaData[] = {
		{ "BlueprintSetter", "SetTrackingMotionSource" },
		{ "Category", "MotionController" },
		{ "Comment", "/** Defines which pose this component should receive from the OpenXR Runtime. Left/Right MotionSource is the same as LeftGrip/RightGrip. See OpenXR specification for details on poses. */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Defines which pose this component should receive from the OpenXR Runtime. Left/Right MotionSource is the same as LeftGrip/RightGrip. See OpenXR specification for details on poses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableLowLatencyUpdate_MetaData[] = {
		{ "Category", "MotionController" },
		{ "Comment", "/** If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering. */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingStatus_MetaData[] = {
		{ "Category", "MotionController" },
		{ "Comment", "/** The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking) */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MotionSource;
	static void NewProp_bDisableLowLatencyUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableLowLatencyUpdate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity, "GetAngularVelocity" }, // 2059358076
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition, "GetHandJointPosition" }, // 231772924
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration, "GetLinearAcceleration" }, // 2381984963
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity, "GetLinearVelocity" }, // 3478041723
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue, "GetParameterValue" }, // 3500842650
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource, "GetTrackingSource" }, // 3378643300
		{ &Z_Construct_UFunction_UMotionControllerComponent_IsTracked, "IsTracked" }, // 1212487502
		{ &Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated, "OnMotionControllerUpdated" }, // 4257344278
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex, "SetAssociatedPlayerIndex" }, // 1682111037
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource, "SetTrackingMotionSource" }, // 242067472
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource, "SetTrackingSource" }, // 1233684835
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionControllerComponent, PlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIndex_MetaData), NewProp_PlayerIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionControllerComponent, MotionSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionSource_MetaData), NewProp_MotionSource_MetaData) };
void Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_SetBit(void* Obj)
{
	((UMotionControllerComponent*)Obj)->bDisableLowLatencyUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate = { "bDisableLowLatencyUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMotionControllerComponent), &Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableLowLatencyUpdate_MetaData), NewProp_bDisableLowLatencyUpdate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus = { "CurrentTrackingStatus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionControllerComponent, CurrentTrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTrackingStatus_MetaData), NewProp_CurrentTrackingStatus_MetaData) }; // 2366538105
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMotionControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionControllerComponent_Statics::ClassParams = {
	&UMotionControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMotionControllerComponent()
{
	if (!Z_Registration_Info_UClass_UMotionControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionControllerComponent.OuterSingleton, Z_Construct_UClass_UMotionControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionControllerComponent.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UMotionControllerComponent>()
{
	return UMotionControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionControllerComponent);
UMotionControllerComponent::~UMotionControllerComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMotionControllerComponent)
// End Class UMotionControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMotionControllerComponent, UMotionControllerComponent::StaticClass, TEXT("UMotionControllerComponent"), &Z_Registration_Info_UClass_UMotionControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionControllerComponent), 343327129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_3208033927(TEXT("/Script/HeadMountedDisplay"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
