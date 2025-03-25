// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/InputDeviceProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDeviceProperties() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EInputDeviceTriggerMask();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceCurveProperty();
ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceCurveProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceProperty();
ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerEffect();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerEffect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerResistanceProperty();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerVibrationProperty();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioBasedVibrationData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceColorCurveData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceColorData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerBaseData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UInputDeviceProperty Function ApplyDeviceProperty
struct Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceProperty_eventApplyDeviceProperty_Parms
	{
		FPlatformUserId UserId;
		FInputDeviceId DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InputDevice" },
		{ "Comment", "/**\n\x09* Apply the device property from GetInternalDeviceProperty to the given platform user. \n\x09* Note: To remove any applied affects of this device property, call ResetDeviceProperty.\n\x09* \n\x09* @param UserId\x09\x09The owning Platform User whose input device this property should be applied to.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Apply the device property from GetInternalDeviceProperty to the given platform user.\nNote: To remove any applied affects of this device property, call ResetDeviceProperty.\n\n@param UserId         The owning Platform User whose input device this property should be applied to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceProperty_eventApplyDeviceProperty_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceProperty_eventApplyDeviceProperty_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceProperty, nullptr, "ApplyDeviceProperty", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::InputDeviceProperty_eventApplyDeviceProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::InputDeviceProperty_eventApplyDeviceProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceProperty::execApplyDeviceProperty)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
	P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDeviceProperty(Z_Param_UserId,Z_Param_DeviceId);
	P_NATIVE_END;
}
// End Class UInputDeviceProperty Function ApplyDeviceProperty

// Begin Class UInputDeviceProperty Function EvaluateDeviceProperty
struct InputDeviceProperty_eventEvaluateDeviceProperty_Parms
{
	FPlatformUserId PlatformUser;
	FInputDeviceId DeviceId;
	float DeltaTime;
	float Duration;
};
static FName NAME_UInputDeviceProperty_EvaluateDeviceProperty = FName(TEXT("EvaluateDeviceProperty"));
void UInputDeviceProperty::EvaluateDeviceProperty(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceId, const float DeltaTime, const float Duration)
{
	InputDeviceProperty_eventEvaluateDeviceProperty_Parms Parms;
	Parms.PlatformUser=PlatformUser;
	Parms.DeviceId=DeviceId;
	Parms.DeltaTime=DeltaTime;
	Parms.Duration=Duration;
	ProcessEvent(FindFunctionChecked(NAME_UInputDeviceProperty_EvaluateDeviceProperty),&Parms);
}
struct Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InputDevice" },
		{ "Comment", "/**\n\x09* Evaluate this device property for a given duration. \n\x09* If overriding in Blueprints, make sure to call the parent function!\n\x09* \n \x09* @param PlatformUser\x09\x09The platform user that should receive this device property change\n\x09* @param DeltaTime\x09\x09\x09""Delta time\n\x09* @param Duration\x09\x09\x09The number of seconds that this property has been active. Use this to get things like curve data over time.\n\x09* @return\x09\x09\x09\x09\x09""A pointer to the evaluated input device property.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Evaluate this device property for a given duration.\nIf overriding in Blueprints, make sure to call the parent function!\n\n@param PlatformUser           The platform user that should receive this device property change\n@param DeltaTime                      Delta time\n@param Duration                       The number of seconds that this property has been active. Use this to get things like curve data over time.\n@return                                       A pointer to the evaluated input device property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUser_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_PlatformUser = { "PlatformUser", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceProperty_eventEvaluateDeviceProperty_Parms, PlatformUser), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformUser_MetaData), NewProp_PlatformUser_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceProperty_eventEvaluateDeviceProperty_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceProperty_eventEvaluateDeviceProperty_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceProperty_eventEvaluateDeviceProperty_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_PlatformUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceProperty, nullptr, "EvaluateDeviceProperty", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::PropPointers), sizeof(InputDeviceProperty_eventEvaluateDeviceProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputDeviceProperty_eventEvaluateDeviceProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceProperty::execEvaluateDeviceProperty)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_PlatformUser);
	P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EvaluateDeviceProperty_Implementation(Z_Param_PlatformUser,Z_Param_DeviceId,Z_Param_DeltaTime,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UInputDeviceProperty Function EvaluateDeviceProperty

// Begin Class UInputDeviceProperty Function ResetDeviceProperty
struct InputDeviceProperty_eventResetDeviceProperty_Parms
{
	FPlatformUserId PlatformUser;
	FInputDeviceId DeviceId;
	bool bForceReset;
};
static FName NAME_UInputDeviceProperty_ResetDeviceProperty = FName(TEXT("ResetDeviceProperty"));
void UInputDeviceProperty::ResetDeviceProperty(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceId, bool bForceReset)
{
	InputDeviceProperty_eventResetDeviceProperty_Parms Parms;
	Parms.PlatformUser=PlatformUser;
	Parms.DeviceId=DeviceId;
	Parms.bForceReset=bForceReset ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UInputDeviceProperty_ResetDeviceProperty),&Parms);
}
struct Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InputDevice" },
		{ "Comment", "/**\n\x09* Reset the current device property. Provides an opportunity to reset device state after evaluation is complete. \n\x09* If overriding in Blueprints, make sure to call the parent function!\n\x09* \n\x09* @param PlatformUser\x09\x09The platform user that should receive this device property change\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Reset the current device property. Provides an opportunity to reset device state after evaluation is complete.\nIf overriding in Blueprints, make sure to call the parent function!\n\n@param PlatformUser           The platform user that should receive this device property change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUser_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static void NewProp_bForceReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_PlatformUser = { "PlatformUser", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceProperty_eventResetDeviceProperty_Parms, PlatformUser), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformUser_MetaData), NewProp_PlatformUser_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceProperty_eventResetDeviceProperty_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
void Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_bForceReset_SetBit(void* Obj)
{
	((InputDeviceProperty_eventResetDeviceProperty_Parms*)Obj)->bForceReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_bForceReset = { "bForceReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceProperty_eventResetDeviceProperty_Parms), &Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_bForceReset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_PlatformUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::NewProp_bForceReset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceProperty, nullptr, "ResetDeviceProperty", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::PropPointers), sizeof(InputDeviceProperty_eventResetDeviceProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputDeviceProperty_eventResetDeviceProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceProperty::execResetDeviceProperty)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_PlatformUser);
	P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
	P_GET_UBOOL(Z_Param_bForceReset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDeviceProperty_Implementation(Z_Param_PlatformUser,Z_Param_DeviceId,Z_Param_bForceReset);
	P_NATIVE_END;
}
// End Class UInputDeviceProperty Function ResetDeviceProperty

// Begin Class UInputDeviceProperty
void UInputDeviceProperty::StaticRegisterNativesUInputDeviceProperty()
{
	UClass* Class = UInputDeviceProperty::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDeviceProperty", &UInputDeviceProperty::execApplyDeviceProperty },
		{ "EvaluateDeviceProperty", &UInputDeviceProperty::execEvaluateDeviceProperty },
		{ "ResetDeviceProperty", &UInputDeviceProperty::execResetDeviceProperty },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceProperty);
UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister()
{
	return UInputDeviceProperty::StaticClass();
}
struct Z_Construct_UClass_UInputDeviceProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base class that represents a single Input Device Property. An Input Device Property\n* represents a feature that can be set on an input device. Things like what color a\n* light is, advanced rumble patterns, or trigger haptics.\n* \n* This top level object can then be evaluated at a specific time to create a lower level\n* FInputDeviceProperty, which the IInputInterface implementation can interpret however it desires.\n* \n* The behavior of device properties can vary depending on the current platform. Some platforms may not\n* support certain device properties. An older gamepad may not have any advanced trigger haptics for \n* example. \n*/" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Base class that represents a single Input Device Property. An Input Device Property\nrepresents a feature that can be set on an input device. Things like what color a\nlight is, advanced rumble patterns, or trigger haptics.\n\nThis top level object can then be evaluated at a specific time to create a lower level\nFInputDeviceProperty, which the IInputInterface implementation can interpret however it desires.\n\nThe behavior of device properties can vary depending on the current platform. Some platforms may not\nsupport certain device properties. An older gamepad may not have any advanced trigger haptics for\nexample." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyDuration_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/**\n\x09* The duration that this device property should last. Override this if your property has any dynamic curves \n\x09* to be the max time range.\n\x09* \n\x09* A duration of 0 means that the device property will be treated as a \"One Shot\" effect, being applied once\n\x09* before being removed by the Input Device Subsystem.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The duration that this device property should last. Override this if your property has any dynamic curves\nto be the max time range.\n\nA duration of 0 means that the device property will be treated as a \"One Shot\" effect, being applied once\nbefore being removed by the Input Device Subsystem." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PropertyDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputDeviceProperty_ApplyDeviceProperty, "ApplyDeviceProperty" }, // 4062502257
		{ &Z_Construct_UFunction_UInputDeviceProperty_EvaluateDeviceProperty, "EvaluateDeviceProperty" }, // 2770719930
		{ &Z_Construct_UFunction_UInputDeviceProperty_ResetDeviceProperty, "ResetDeviceProperty" }, // 794425687
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceProperty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputDeviceProperty_Statics::NewProp_PropertyDuration = { "PropertyDuration", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceProperty, PropertyDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyDuration_MetaData), NewProp_PropertyDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceProperty_Statics::NewProp_PropertyDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceProperty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDeviceProperty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceProperty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceProperty_Statics::ClassParams = {
	&UInputDeviceProperty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputDeviceProperty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceProperty_Statics::PropPointers),
	0,
	0x000830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDeviceProperty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDeviceProperty()
{
	if (!Z_Registration_Info_UClass_UInputDeviceProperty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceProperty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDeviceProperty.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputDeviceProperty>()
{
	return UInputDeviceProperty::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceProperty);
UInputDeviceProperty::~UInputDeviceProperty() {}
// End Class UInputDeviceProperty

// Begin ScriptStruct FDeviceColorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceColorData;
class UScriptStruct* FDeviceColorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceColorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceColorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceColorData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceColorData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceColorData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceColorData>()
{
	return FDeviceColorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeviceColorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data required for setting the Input Device Color */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Data required for setting the Input Device Color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** True if the light should be enabled at all */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "True if the light should be enabled at all" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetAfterCompletion_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If true, the light color will be reset to \"off\" after this property has been evaluated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "If true, the light color will be reset to \"off\" after this property has been evaluated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The color to set the light on  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The color to set the light on" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_bResetAfterCompletion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAfterCompletion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceColorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((FDeviceColorData*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceColorData), &Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
void Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion_SetBit(void* Obj)
{
	((FDeviceColorData*)Obj)->bResetAfterCompletion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion = { "bResetAfterCompletion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceColorData), &Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetAfterCompletion_MetaData), NewProp_bResetAfterCompletion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceColorData, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightColor_MetaData), NewProp_LightColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceColorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_bResetAfterCompletion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewProp_LightColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceColorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DeviceColorData",
	Z_Construct_UScriptStruct_FDeviceColorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorData_Statics::PropPointers),
	sizeof(FDeviceColorData),
	alignof(FDeviceColorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceColorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceColorData()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceColorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceColorData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceColorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeviceColorData.InnerSingleton;
}
// End ScriptStruct FDeviceColorData

// Begin Class UColorInputDeviceProperty
void UColorInputDeviceProperty::StaticRegisterNativesUColorInputDeviceProperty()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorInputDeviceProperty);
UClass* Z_Construct_UClass_UColorInputDeviceProperty_NoRegister()
{
	return UColorInputDeviceProperty::StaticClass();
}
struct Z_Construct_UClass_UColorInputDeviceProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Set the color of an Input Device to a static color. This will NOT reset the device color when the property\n* is done evaluating. You can think of this as a \"One Shot\" effect, where you set the device property color.\n* \n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Device Color (Static)" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Set the color of an Input Device to a static color. This will NOT reset the device color when the property\nis done evaluating. You can think of this as a \"One Shot\" effect, where you set the device property color.\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Default color data that will be used by default. Device Specific overrides will be used when the current input device matches */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Default color data that will be used by default. Device Specific overrides will be used when the current input device matches" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorInputDeviceProperty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorInputDeviceProperty, ColorData), Z_Construct_UScriptStruct_FDeviceColorData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorData_MetaData), NewProp_ColorData_MetaData) }; // 1424982665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDeviceColorData, METADATA_PARAMS(0, nullptr) }; // 1424982665
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorInputDeviceProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceOverrideData_MetaData), NewProp_DeviceOverrideData_MetaData) }; // 1424982665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorInputDeviceProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_ColorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceProperty_Statics::NewProp_DeviceOverrideData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceProperty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UColorInputDeviceProperty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDeviceProperty,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceProperty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorInputDeviceProperty_Statics::ClassParams = {
	&UColorInputDeviceProperty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UColorInputDeviceProperty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceProperty_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UColorInputDeviceProperty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UColorInputDeviceProperty()
{
	if (!Z_Registration_Info_UClass_UColorInputDeviceProperty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorInputDeviceProperty.OuterSingleton, Z_Construct_UClass_UColorInputDeviceProperty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UColorInputDeviceProperty.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UColorInputDeviceProperty>()
{
	return UColorInputDeviceProperty::StaticClass();
}
UColorInputDeviceProperty::UColorInputDeviceProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UColorInputDeviceProperty);
UColorInputDeviceProperty::~UColorInputDeviceProperty() {}
// End Class UColorInputDeviceProperty

// Begin ScriptStruct FDeviceColorCurveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceColorCurveData;
class UScriptStruct* FDeviceColorCurveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceColorCurveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceColorCurveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceColorCurveData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceColorCurveData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceColorCurveData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceColorCurveData>()
{
	return FDeviceColorCurveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data required for setting the Input Device Color */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Data required for setting the Input Device Color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** True if the light should be enabled at all */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "True if the light should be enabled at all" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetAfterCompletion_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If true, the light color will be reset to \"off\" after the curve values are finished evaluating. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "If true, the light color will be reset to \"off\" after the curve values are finished evaluating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceColorCurve_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The color the device light should be */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The color the device light should be" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_bResetAfterCompletion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAfterCompletion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeviceColorCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceColorCurveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((FDeviceColorCurveData*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceColorCurveData), &Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
void Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion_SetBit(void* Obj)
{
	((FDeviceColorCurveData*)Obj)->bResetAfterCompletion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion = { "bResetAfterCompletion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceColorCurveData), &Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetAfterCompletion_MetaData), NewProp_bResetAfterCompletion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_DeviceColorCurve = { "DeviceColorCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceColorCurveData, DeviceColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceColorCurve_MetaData), NewProp_DeviceColorCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_bResetAfterCompletion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewProp_DeviceColorCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DeviceColorCurveData",
	Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::PropPointers),
	sizeof(FDeviceColorCurveData),
	alignof(FDeviceColorCurveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceColorCurveData()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceColorCurveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceColorCurveData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeviceColorCurveData.InnerSingleton;
}
// End ScriptStruct FDeviceColorCurveData

// Begin Class UColorInputDeviceCurveProperty
void UColorInputDeviceCurveProperty::StaticRegisterNativesUColorInputDeviceCurveProperty()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorInputDeviceCurveProperty);
UClass* Z_Construct_UClass_UColorInputDeviceCurveProperty_NoRegister()
{
	return UColorInputDeviceCurveProperty::StaticClass();
}
struct Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* A property that can be used to change the color of an input device's light over time with a curve\n* \n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Device Color (Curve)" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A property that can be used to change the color of an input device's light over time with a curve\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Default color data that will be used by default. Device Specific overrides will be used when the current input device matches */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Default color data that will be used by default. Device Specific overrides will be used when the current input device matches" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorInputDeviceCurveProperty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorInputDeviceCurveProperty, ColorData), Z_Construct_UScriptStruct_FDeviceColorCurveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorData_MetaData), NewProp_ColorData_MetaData) }; // 2483736551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDeviceColorCurveData, METADATA_PARAMS(0, nullptr) }; // 2483736551
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorInputDeviceCurveProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceOverrideData_MetaData), NewProp_DeviceOverrideData_MetaData) }; // 2483736551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_ColorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::NewProp_DeviceOverrideData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDeviceProperty,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::ClassParams = {
	&UColorInputDeviceCurveProperty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UColorInputDeviceCurveProperty()
{
	if (!Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.OuterSingleton, Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UColorInputDeviceCurveProperty.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UColorInputDeviceCurveProperty>()
{
	return UColorInputDeviceCurveProperty::StaticClass();
}
UColorInputDeviceCurveProperty::UColorInputDeviceCurveProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UColorInputDeviceCurveProperty);
UColorInputDeviceCurveProperty::~UColorInputDeviceCurveProperty() {}
// End Class UColorInputDeviceCurveProperty

// Begin ScriptStruct FDeviceTriggerBaseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData;
class UScriptStruct* FDeviceTriggerBaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceTriggerBaseData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceTriggerBaseData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceTriggerBaseData>()
{
	return FDeviceTriggerBaseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////\n// UInputDeviceTriggerEffect\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "UInputDeviceTriggerEffect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedTriggers_MetaData[] = {
		{ "Category", "Triggers" },
		{ "Comment", "/** Which trigger this property should effect */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Which trigger this property should effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetUponCompletion_MetaData[] = {
		{ "Category", "Triggers" },
		{ "Comment", "/** True if the triggers should be reset after the duration of this device property */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "True if the triggers should be reset after the duration of this device property" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AffectedTriggers_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AffectedTriggers;
	static void NewProp_bResetUponCompletion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetUponCompletion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceTriggerBaseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers = { "AffectedTriggers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerBaseData, AffectedTriggers), Z_Construct_UEnum_CoreUObject_EInputDeviceTriggerMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedTriggers_MetaData), NewProp_AffectedTriggers_MetaData) }; // 2465142126
void Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion_SetBit(void* Obj)
{
	((FDeviceTriggerBaseData*)Obj)->bResetUponCompletion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion = { "bResetUponCompletion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceTriggerBaseData), &Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetUponCompletion_MetaData), NewProp_bResetUponCompletion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_AffectedTriggers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewProp_bResetUponCompletion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DeviceTriggerBaseData",
	Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::PropPointers),
	sizeof(FDeviceTriggerBaseData),
	alignof(FDeviceTriggerBaseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerBaseData()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData.InnerSingleton;
}
// End ScriptStruct FDeviceTriggerBaseData

// Begin Class UInputDeviceTriggerEffect
void UInputDeviceTriggerEffect::StaticRegisterNativesUInputDeviceTriggerEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceTriggerEffect);
UClass* Z_Construct_UClass_UInputDeviceTriggerEffect_NoRegister()
{
	return UInputDeviceTriggerEffect::StaticClass();
}
struct Z_Construct_UClass_UInputDeviceTriggerEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A property that effect the triggers on a gamepad */" },
		{ "DisplayName", "Base Trigger Effect" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A property that effect the triggers on a gamepad" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTriggerData_MetaData[] = {
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTriggerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceTriggerEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::NewProp_BaseTriggerData = { "BaseTriggerData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceTriggerEffect, BaseTriggerData), Z_Construct_UScriptStruct_FDeviceTriggerBaseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTriggerData_MetaData), NewProp_BaseTriggerData_MetaData) }; // 1903306270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::NewProp_BaseTriggerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDeviceProperty,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::ClassParams = {
	&UInputDeviceTriggerEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::PropPointers),
	0,
	0x000830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDeviceTriggerEffect()
{
	if (!Z_Registration_Info_UClass_UInputDeviceTriggerEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceTriggerEffect.OuterSingleton, Z_Construct_UClass_UInputDeviceTriggerEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDeviceTriggerEffect.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputDeviceTriggerEffect>()
{
	return UInputDeviceTriggerEffect::StaticClass();
}
UInputDeviceTriggerEffect::UInputDeviceTriggerEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceTriggerEffect);
UInputDeviceTriggerEffect::~UInputDeviceTriggerEffect() {}
// End Class UInputDeviceTriggerEffect

// Begin ScriptStruct FDeviceTriggerFeedbackData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData;
class UScriptStruct* FDeviceTriggerFeedbackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceTriggerFeedbackData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceTriggerFeedbackData>()
{
	return FDeviceTriggerFeedbackData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////\n// UInputDeviceTriggerFeedbackProperty\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "UInputDeviceTriggerFeedbackProperty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackPositionCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** What position on the trigger that the feedback should be applied to over time (1-9) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "What position on the trigger that the feedback should be applied to over time (1-9)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackStrenghCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** How strong the feedback is over time (1-8) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "How strong the feedback is over time (1-8)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeedbackPositionCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeedbackStrenghCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceTriggerFeedbackData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackPositionCurve = { "FeedbackPositionCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerFeedbackData, FeedbackPositionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackPositionCurve_MetaData), NewProp_FeedbackPositionCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackStrenghCurve = { "FeedbackStrenghCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerFeedbackData, FeedbackStrenghCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackStrenghCurve_MetaData), NewProp_FeedbackStrenghCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackPositionCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewProp_FeedbackStrenghCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DeviceTriggerFeedbackData",
	Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::PropPointers),
	sizeof(FDeviceTriggerFeedbackData),
	alignof(FDeviceTriggerFeedbackData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData.InnerSingleton;
}
// End ScriptStruct FDeviceTriggerFeedbackData

// Begin Class UInputDeviceTriggerFeedbackProperty
void UInputDeviceTriggerFeedbackProperty::StaticRegisterNativesUInputDeviceTriggerFeedbackProperty()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceTriggerFeedbackProperty);
UClass* Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_NoRegister()
{
	return UInputDeviceTriggerFeedbackProperty::StaticClass();
}
struct Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* Sets simple trigger feedback\n* \n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Trigger Feedback" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Sets simple trigger feedback\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** What position on the trigger that the feedback should be applied to over time (1-9) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "What position on the trigger that the feedback should be applied to over time (1-9)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceTriggerFeedbackProperty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceTriggerFeedbackProperty, TriggerData), Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerData_MetaData), NewProp_TriggerData_MetaData) }; // 2647972640
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData, METADATA_PARAMS(0, nullptr) }; // 2647972640
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceTriggerFeedbackProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceOverrideData_MetaData), NewProp_DeviceOverrideData_MetaData) }; // 2647972640
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_TriggerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::NewProp_DeviceOverrideData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDeviceTriggerEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::ClassParams = {
	&UInputDeviceTriggerFeedbackProperty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty()
{
	if (!Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputDeviceTriggerFeedbackProperty>()
{
	return UInputDeviceTriggerFeedbackProperty::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceTriggerFeedbackProperty);
UInputDeviceTriggerFeedbackProperty::~UInputDeviceTriggerFeedbackProperty() {}
// End Class UInputDeviceTriggerFeedbackProperty

// Begin ScriptStruct FDeviceTriggerTriggerResistanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData;
class UScriptStruct* FDeviceTriggerTriggerResistanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceTriggerTriggerResistanceData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceTriggerTriggerResistanceData>()
{
	return FDeviceTriggerTriggerResistanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////\n// UInputDeviceTriggerResistanceProperty\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "UInputDeviceTriggerResistanceProperty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** The position that the trigger should start providing resistance */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The position that the trigger should start providing resistance" },
		{ "UIMAX", "9" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartStrengh_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** How strong the resistance is */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "How strong the resistance is" },
		{ "UIMAX", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "UIMAX", "9" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStrengh_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "UIMAX", "8" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartStrengh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrengh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceTriggerTriggerResistanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerTriggerResistanceData, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartStrengh = { "StartStrengh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerTriggerResistanceData, StartStrengh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartStrengh_MetaData), NewProp_StartStrengh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerTriggerResistanceData, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndStrengh = { "EndStrengh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerTriggerResistanceData, EndStrengh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStrengh_MetaData), NewProp_EndStrengh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_StartStrengh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewProp_EndStrengh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DeviceTriggerTriggerResistanceData",
	Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::PropPointers),
	sizeof(FDeviceTriggerTriggerResistanceData),
	alignof(FDeviceTriggerTriggerResistanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData.InnerSingleton;
}
// End ScriptStruct FDeviceTriggerTriggerResistanceData

// Begin Class UInputDeviceTriggerResistanceProperty
void UInputDeviceTriggerResistanceProperty::StaticRegisterNativesUInputDeviceTriggerResistanceProperty()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceTriggerResistanceProperty);
UClass* Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_NoRegister()
{
	return UInputDeviceTriggerResistanceProperty::StaticClass();
}
struct Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* Provides linear resistance to a trigger while it is being pressed between a start and end value\n* \n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Trigger Resistance" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Provides linear resistance to a trigger while it is being pressed between a start and end value\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceTriggerResistanceProperty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceTriggerResistanceProperty, TriggerData), Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerData_MetaData), NewProp_TriggerData_MetaData) }; // 3809515183
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData, METADATA_PARAMS(0, nullptr) }; // 3809515183
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceTriggerResistanceProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceOverrideData_MetaData), NewProp_DeviceOverrideData_MetaData) }; // 3809515183
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_TriggerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::NewProp_DeviceOverrideData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDeviceTriggerEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::ClassParams = {
	&UInputDeviceTriggerResistanceProperty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDeviceTriggerResistanceProperty()
{
	if (!Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputDeviceTriggerResistanceProperty>()
{
	return UInputDeviceTriggerResistanceProperty::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceTriggerResistanceProperty);
UInputDeviceTriggerResistanceProperty::~UInputDeviceTriggerResistanceProperty() {}
// End Class UInputDeviceTriggerResistanceProperty

// Begin ScriptStruct FDeviceTriggerTriggerVibrationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData;
class UScriptStruct* FDeviceTriggerTriggerVibrationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DeviceTriggerTriggerVibrationData"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDeviceTriggerTriggerVibrationData>()
{
	return FDeviceTriggerTriggerVibrationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////\n// UInputDeviceTriggerVibrationProperty\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "UInputDeviceTriggerVibrationProperty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerPositionCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** What position on the trigger that the feedback should be applied to over time (1-9) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "What position on the trigger that the feedback should be applied to over time (1-9)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VibrationFrequencyCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** The frequency of the vibration */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The frequency of the vibration" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VibrationAmplitudeCurve_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** The amplitude of the vibration */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The amplitude of the vibration" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerPositionCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VibrationFrequencyCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VibrationAmplitudeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceTriggerTriggerVibrationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_TriggerPositionCurve = { "TriggerPositionCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerTriggerVibrationData, TriggerPositionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerPositionCurve_MetaData), NewProp_TriggerPositionCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationFrequencyCurve = { "VibrationFrequencyCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerTriggerVibrationData, VibrationFrequencyCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VibrationFrequencyCurve_MetaData), NewProp_VibrationFrequencyCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationAmplitudeCurve = { "VibrationAmplitudeCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceTriggerTriggerVibrationData, VibrationAmplitudeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VibrationAmplitudeCurve_MetaData), NewProp_VibrationAmplitudeCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_TriggerPositionCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationFrequencyCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewProp_VibrationAmplitudeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DeviceTriggerTriggerVibrationData",
	Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::PropPointers),
	sizeof(FDeviceTriggerTriggerVibrationData),
	alignof(FDeviceTriggerTriggerVibrationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.InnerSingleton, Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData.InnerSingleton;
}
// End ScriptStruct FDeviceTriggerTriggerVibrationData

// Begin Class UInputDeviceTriggerVibrationProperty
void UInputDeviceTriggerVibrationProperty::StaticRegisterNativesUInputDeviceTriggerVibrationProperty()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceTriggerVibrationProperty);
UClass* Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_NoRegister()
{
	return UInputDeviceTriggerVibrationProperty::StaticClass();
}
struct Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Sets trigger vibration\n*\n* NOTE: This property has platform specific implementations and may behave differently per platform.\n* See the docs for more details on each platform.\n*/" },
		{ "DisplayName", "Trigger Vibration" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Sets trigger vibration\n\nNOTE: This property has platform specific implementations and may behave differently per platform.\nSee the docs for more details on each platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceTriggerVibrationProperty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceTriggerVibrationProperty, TriggerData), Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerData_MetaData), NewProp_TriggerData_MetaData) }; // 2695141821
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData, METADATA_PARAMS(0, nullptr) }; // 2695141821
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceTriggerVibrationProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceOverrideData_MetaData), NewProp_DeviceOverrideData_MetaData) }; // 2695141821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_TriggerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::NewProp_DeviceOverrideData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDeviceTriggerEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::ClassParams = {
	&UInputDeviceTriggerVibrationProperty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDeviceTriggerVibrationProperty()
{
	if (!Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputDeviceTriggerVibrationProperty>()
{
	return UInputDeviceTriggerVibrationProperty::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceTriggerVibrationProperty);
UInputDeviceTriggerVibrationProperty::~UInputDeviceTriggerVibrationProperty() {}
// End Class UInputDeviceTriggerVibrationProperty

// Begin ScriptStruct FAudioBasedVibrationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioBasedVibrationData;
class UScriptStruct* FAudioBasedVibrationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioBasedVibrationData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioBasedVibrationData"));
	}
	return Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioBasedVibrationData>()
{
	return FAudioBasedVibrationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "DeviceProperty" },
		{ "Comment", "/** The sound to play on the gamepad. Make sure the set the sound's submix sends to the gamepad audio and vibration endpoints! */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "The sound to play on the gamepad. Make sure the set the sound's submix sends to the gamepad audio and vibration endpoints!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioBasedVibrationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioBasedVibrationData, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewProp_Sound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AudioBasedVibrationData",
	Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::PropPointers),
	sizeof(FAudioBasedVibrationData),
	alignof(FAudioBasedVibrationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioBasedVibrationData()
{
	if (!Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.InnerSingleton, Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioBasedVibrationData.InnerSingleton;
}
// End ScriptStruct FAudioBasedVibrationData

// Begin Class UInputDeviceAudioBasedVibrationProperty
void UInputDeviceAudioBasedVibrationProperty::StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceAudioBasedVibrationProperty);
UClass* Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_NoRegister()
{
	return UInputDeviceAudioBasedVibrationProperty::StaticClass();
}
struct Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Plays a sound to an input device's speaker. On platforms that support it, this sound will be played\n * in the form of a vibration where the left and right audio channels represent the left and right side\n * of the controller.\n */" },
		{ "DisplayName", "Audio Based Vibration (Experimental)" },
		{ "IncludePath", "GameFramework/InputDeviceProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "Plays a sound to an input device's speaker. On platforms that support it, this sound will be played\nin the form of a vibration where the left and right audio channels represent the left and right side\nof the controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceOverrideData_MetaData[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/** A map of device specific color data. If no overrides are specified, the Default hardware data will be used */" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceProperties.h" },
		{ "ToolTip", "A map of device specific color data. If no overrides are specified, the Default hardware data will be used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceOverrideData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceOverrideData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeviceOverrideData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceAudioBasedVibrationProperty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceAudioBasedVibrationProperty, Data), Z_Construct_UScriptStruct_FAudioBasedVibrationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 520837316
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_ValueProp = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAudioBasedVibrationData, METADATA_PARAMS(0, nullptr) }; // 520837316
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp = { "DeviceOverrideData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData = { "DeviceOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceAudioBasedVibrationProperty, DeviceOverrideData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceOverrideData_MetaData), NewProp_DeviceOverrideData_MetaData) }; // 520837316
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::NewProp_DeviceOverrideData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDeviceProperty,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::ClassParams = {
	&UInputDeviceAudioBasedVibrationProperty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty()
{
	if (!Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.OuterSingleton, Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputDeviceAudioBasedVibrationProperty>()
{
	return UInputDeviceAudioBasedVibrationProperty::StaticClass();
}
UInputDeviceAudioBasedVibrationProperty::UInputDeviceAudioBasedVibrationProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceAudioBasedVibrationProperty);
UInputDeviceAudioBasedVibrationProperty::~UInputDeviceAudioBasedVibrationProperty() {}
// End Class UInputDeviceAudioBasedVibrationProperty

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDeviceColorData::StaticStruct, Z_Construct_UScriptStruct_FDeviceColorData_Statics::NewStructOps, TEXT("DeviceColorData"), &Z_Registration_Info_UScriptStruct_DeviceColorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceColorData), 1424982665U) },
		{ FDeviceColorCurveData::StaticStruct, Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics::NewStructOps, TEXT("DeviceColorCurveData"), &Z_Registration_Info_UScriptStruct_DeviceColorCurveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceColorCurveData), 2483736551U) },
		{ FDeviceTriggerBaseData::StaticStruct, Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics::NewStructOps, TEXT("DeviceTriggerBaseData"), &Z_Registration_Info_UScriptStruct_DeviceTriggerBaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceTriggerBaseData), 1903306270U) },
		{ FDeviceTriggerFeedbackData::StaticStruct, Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics::NewStructOps, TEXT("DeviceTriggerFeedbackData"), &Z_Registration_Info_UScriptStruct_DeviceTriggerFeedbackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceTriggerFeedbackData), 2647972640U) },
		{ FDeviceTriggerTriggerResistanceData::StaticStruct, Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics::NewStructOps, TEXT("DeviceTriggerTriggerResistanceData"), &Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerResistanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceTriggerTriggerResistanceData), 3809515183U) },
		{ FDeviceTriggerTriggerVibrationData::StaticStruct, Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics::NewStructOps, TEXT("DeviceTriggerTriggerVibrationData"), &Z_Registration_Info_UScriptStruct_DeviceTriggerTriggerVibrationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceTriggerTriggerVibrationData), 2695141821U) },
		{ FAudioBasedVibrationData::StaticStruct, Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics::NewStructOps, TEXT("AudioBasedVibrationData"), &Z_Registration_Info_UScriptStruct_AudioBasedVibrationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioBasedVibrationData), 520837316U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputDeviceProperty, UInputDeviceProperty::StaticClass, TEXT("UInputDeviceProperty"), &Z_Registration_Info_UClass_UInputDeviceProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceProperty), 1880260200U) },
		{ Z_Construct_UClass_UColorInputDeviceProperty, UColorInputDeviceProperty::StaticClass, TEXT("UColorInputDeviceProperty"), &Z_Registration_Info_UClass_UColorInputDeviceProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorInputDeviceProperty), 3550287990U) },
		{ Z_Construct_UClass_UColorInputDeviceCurveProperty, UColorInputDeviceCurveProperty::StaticClass, TEXT("UColorInputDeviceCurveProperty"), &Z_Registration_Info_UClass_UColorInputDeviceCurveProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorInputDeviceCurveProperty), 4164258214U) },
		{ Z_Construct_UClass_UInputDeviceTriggerEffect, UInputDeviceTriggerEffect::StaticClass, TEXT("UInputDeviceTriggerEffect"), &Z_Registration_Info_UClass_UInputDeviceTriggerEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceTriggerEffect), 1730853107U) },
		{ Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty, UInputDeviceTriggerFeedbackProperty::StaticClass, TEXT("UInputDeviceTriggerFeedbackProperty"), &Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceTriggerFeedbackProperty), 2435227662U) },
		{ Z_Construct_UClass_UInputDeviceTriggerResistanceProperty, UInputDeviceTriggerResistanceProperty::StaticClass, TEXT("UInputDeviceTriggerResistanceProperty"), &Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceTriggerResistanceProperty), 1793846895U) },
		{ Z_Construct_UClass_UInputDeviceTriggerVibrationProperty, UInputDeviceTriggerVibrationProperty::StaticClass, TEXT("UInputDeviceTriggerVibrationProperty"), &Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceTriggerVibrationProperty), 3085113118U) },
		{ Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty, UInputDeviceAudioBasedVibrationProperty::StaticClass, TEXT("UInputDeviceAudioBasedVibrationProperty"), &Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceAudioBasedVibrationProperty), 2904058189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_3064410768(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
