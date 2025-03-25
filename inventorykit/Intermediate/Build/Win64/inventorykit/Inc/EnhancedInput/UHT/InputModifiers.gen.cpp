// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/InputModifiers.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputModifiers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierDeadZone();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierDeadZone_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierFOVScaling();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierFOVScaling_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierNegate();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierNegate_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveExponential();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveExponential_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveUser();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveUser_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierScalar();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierScalar_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierScaleByDeltaTime();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierScaleByDeltaTime_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSmooth();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSmooth_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSmoothDelta();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSmoothDelta_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSwizzleAxis();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSwizzleAxis_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierToWorldSpace();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierToWorldSpace_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EDeadZoneType();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EFOVScalingType();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Class UInputModifier Function GetVisualizationColor
struct InputModifier_eventGetVisualizationColor_Parms
{
	FInputActionValue SampleValue;
	FInputActionValue FinalValue;
	FLinearColor ReturnValue;

	/** Constructor, initializes return property only **/
	InputModifier_eventGetVisualizationColor_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static FName NAME_UInputModifier_GetVisualizationColor = FName(TEXT("GetVisualizationColor"));
FLinearColor UInputModifier::GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue) const
{
	InputModifier_eventGetVisualizationColor_Parms Parms;
	Parms.SampleValue=SampleValue;
	Parms.FinalValue=FinalValue;
	const_cast<UInputModifier*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInputModifier_GetVisualizationColor),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/**\n\x09 * Helper to allow debug visualization of the modifier.\n\x09 * @param SampleValue - The base input action value pre-modification (ranging -1 -> 1 across all applicable axes).\n\x09 * @param FinalValue - The post-modification input action value for the provided SampleValue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Helper to allow debug visualization of the modifier.\n@param SampleValue - The base input action value pre-modification (ranging -1 -> 1 across all applicable axes).\n@param FinalValue - The post-modification input action value for the provided SampleValue." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_SampleValue = { "SampleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputModifier_eventGetVisualizationColor_Parms, SampleValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_FinalValue = { "FinalValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputModifier_eventGetVisualizationColor_Parms, FinalValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputModifier_eventGetVisualizationColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_SampleValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_FinalValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputModifier, nullptr, "GetVisualizationColor", nullptr, nullptr, Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::PropPointers), sizeof(InputModifier_eventGetVisualizationColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputModifier_eventGetVisualizationColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputModifier_GetVisualizationColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputModifier::execGetVisualizationColor)
{
	P_GET_STRUCT(FInputActionValue,Z_Param_SampleValue);
	P_GET_STRUCT(FInputActionValue,Z_Param_FinalValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetVisualizationColor_Implementation(Z_Param_SampleValue,Z_Param_FinalValue);
	P_NATIVE_END;
}
// End Class UInputModifier Function GetVisualizationColor

// Begin Class UInputModifier Function ModifyRaw
struct InputModifier_eventModifyRaw_Parms
{
	const UEnhancedPlayerInput* PlayerInput;
	FInputActionValue CurrentValue;
	float DeltaTime;
	FInputActionValue ReturnValue;
};
static FName NAME_UInputModifier_ModifyRaw = FName(TEXT("ModifyRaw"));
FInputActionValue UInputModifier::ModifyRaw(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) const
{
	InputModifier_eventModifyRaw_Parms Parms;
	Parms.PlayerInput=PlayerInput;
	Parms.CurrentValue=CurrentValue;
	Parms.DeltaTime=DeltaTime;
	const_cast<UInputModifier*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInputModifier_ModifyRaw),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/**\n\x09 * ModifyRaw\n\x09 * Will be called by each modifier in the modifier chain\n\x09 * @param CurrentValue - The modified value returned by the previous modifier in the chain, or the base raw value if this is the first modifier in the chain.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "ModifyRaw\nWill be called by each modifier in the modifier chain\n@param CurrentValue - The modified value returned by the previous modifier in the chain, or the base raw value if this is the first modifier in the chain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputModifier_eventModifyRaw_Parms, PlayerInput), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInput_MetaData), NewProp_PlayerInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputModifier_eventModifyRaw_Parms, CurrentValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputModifier_eventModifyRaw_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputModifier_eventModifyRaw_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_PlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_CurrentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputModifier, nullptr, "ModifyRaw", nullptr, nullptr, Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::PropPointers), sizeof(InputModifier_eventModifyRaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputModifier_eventModifyRaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputModifier_ModifyRaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputModifier::execModifyRaw)
{
	P_GET_OBJECT(UEnhancedPlayerInput,Z_Param_PlayerInput);
	P_GET_STRUCT(FInputActionValue,Z_Param_CurrentValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionValue*)Z_Param__Result=P_THIS->ModifyRaw_Implementation(Z_Param_PlayerInput,Z_Param_CurrentValue,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UInputModifier Function ModifyRaw

// Begin Class UInputModifier
void UInputModifier::StaticRegisterNativesUInputModifier()
{
	UClass* Class = UInputModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetVisualizationColor", &UInputModifier::execGetVisualizationColor },
		{ "ModifyRaw", &UInputModifier::execModifyRaw },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifier);
UClass* Z_Construct_UClass_UInputModifier_NoRegister()
{
	return UInputModifier::StaticClass();
}
struct Z_Construct_UClass_UInputModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nBase class for building modifiers.\n*/" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Base class for building modifiers." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputModifier_GetVisualizationColor, "GetVisualizationColor" }, // 4103305897
		{ &Z_Construct_UFunction_UInputModifier_ModifyRaw, "ModifyRaw" }, // 2510557608
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifier_Statics::ClassParams = {
	&UInputModifier::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x401030A3u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifier()
{
	if (!Z_Registration_Info_UClass_UInputModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifier.OuterSingleton, Z_Construct_UClass_UInputModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifier.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifier>()
{
	return UInputModifier::StaticClass();
}
UInputModifier::UInputModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifier);
UInputModifier::~UInputModifier() {}
// End Class UInputModifier

// Begin Enum ENormalizeInputSmoothingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENormalizeInputSmoothingType;
static UEnum* ENormalizeInputSmoothingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENormalizeInputSmoothingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENormalizeInputSmoothingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("ENormalizeInputSmoothingType"));
	}
	return Z_Registration_Info_UEnum_ENormalizeInputSmoothingType.OuterSingleton;
}
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ENormalizeInputSmoothingType>()
{
	return ENormalizeInputSmoothingType_StaticEnum();
}
struct Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Behavior options for how the value is calculated in UInputModifierSmoothDelta. */" },
		{ "Interp_Circular_In.Name", "ENormalizeInputSmoothingType::Interp_Circular_In" },
		{ "Interp_Circular_In_Out.Name", "ENormalizeInputSmoothingType::Interp_Circular_In_Out" },
		{ "Interp_Circular_Out.Name", "ENormalizeInputSmoothingType::Interp_Circular_Out" },
		{ "Interp_Constant_To.Name", "ENormalizeInputSmoothingType::Interp_Constant_To" },
		{ "Interp_Ease_In.Name", "ENormalizeInputSmoothingType::Interp_Ease_In" },
		{ "Interp_Ease_In_Out.Name", "ENormalizeInputSmoothingType::Interp_Ease_In_Out" },
		{ "Interp_Ease_Out.Name", "ENormalizeInputSmoothingType::Interp_Ease_Out" },
		{ "Interp_Expo_In.Name", "ENormalizeInputSmoothingType::Interp_Expo_In" },
		{ "Interp_Expo_In_Out.Name", "ENormalizeInputSmoothingType::Interp_Expo_In_Out" },
		{ "Interp_Expo_Out.Name", "ENormalizeInputSmoothingType::Interp_Expo_Out" },
		{ "Interp_Sin_In.Name", "ENormalizeInputSmoothingType::Interp_Sin_In" },
		{ "Interp_Sin_In_Out.Name", "ENormalizeInputSmoothingType::Interp_Sin_In_Out" },
		{ "Interp_Sin_Out.Name", "ENormalizeInputSmoothingType::Interp_Sin_Out" },
		{ "Interp_To.Name", "ENormalizeInputSmoothingType::Interp_To" },
		{ "Lerp.Name", "ENormalizeInputSmoothingType::Lerp" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ENormalizeInputSmoothingType::None" },
		{ "ToolTip", "Behavior options for how the value is calculated in UInputModifierSmoothDelta." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENormalizeInputSmoothingType::None", (int64)ENormalizeInputSmoothingType::None },
		{ "ENormalizeInputSmoothingType::Lerp", (int64)ENormalizeInputSmoothingType::Lerp },
		{ "ENormalizeInputSmoothingType::Interp_To", (int64)ENormalizeInputSmoothingType::Interp_To },
		{ "ENormalizeInputSmoothingType::Interp_Constant_To", (int64)ENormalizeInputSmoothingType::Interp_Constant_To },
		{ "ENormalizeInputSmoothingType::Interp_Circular_In", (int64)ENormalizeInputSmoothingType::Interp_Circular_In },
		{ "ENormalizeInputSmoothingType::Interp_Circular_Out", (int64)ENormalizeInputSmoothingType::Interp_Circular_Out },
		{ "ENormalizeInputSmoothingType::Interp_Circular_In_Out", (int64)ENormalizeInputSmoothingType::Interp_Circular_In_Out },
		{ "ENormalizeInputSmoothingType::Interp_Ease_In", (int64)ENormalizeInputSmoothingType::Interp_Ease_In },
		{ "ENormalizeInputSmoothingType::Interp_Ease_Out", (int64)ENormalizeInputSmoothingType::Interp_Ease_Out },
		{ "ENormalizeInputSmoothingType::Interp_Ease_In_Out", (int64)ENormalizeInputSmoothingType::Interp_Ease_In_Out },
		{ "ENormalizeInputSmoothingType::Interp_Expo_In", (int64)ENormalizeInputSmoothingType::Interp_Expo_In },
		{ "ENormalizeInputSmoothingType::Interp_Expo_Out", (int64)ENormalizeInputSmoothingType::Interp_Expo_Out },
		{ "ENormalizeInputSmoothingType::Interp_Expo_In_Out", (int64)ENormalizeInputSmoothingType::Interp_Expo_In_Out },
		{ "ENormalizeInputSmoothingType::Interp_Sin_In", (int64)ENormalizeInputSmoothingType::Interp_Sin_In },
		{ "ENormalizeInputSmoothingType::Interp_Sin_Out", (int64)ENormalizeInputSmoothingType::Interp_Sin_Out },
		{ "ENormalizeInputSmoothingType::Interp_Sin_In_Out", (int64)ENormalizeInputSmoothingType::Interp_Sin_In_Out },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	"ENormalizeInputSmoothingType",
	"ENormalizeInputSmoothingType",
	Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType()
{
	if (!Z_Registration_Info_UEnum_ENormalizeInputSmoothingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENormalizeInputSmoothingType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENormalizeInputSmoothingType.InnerSingleton;
}
// End Enum ENormalizeInputSmoothingType

// Begin Class UInputModifierSmoothDelta
void UInputModifierSmoothDelta::StaticRegisterNativesUInputModifierSmoothDelta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierSmoothDelta);
UClass* Z_Construct_UClass_UInputModifierSmoothDelta_NoRegister()
{
	return UInputModifierSmoothDelta::StaticClass();
}
struct Z_Construct_UClass_UInputModifierSmoothDelta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Normalized Smooth Delta\n* \n* Produces a smoothed normalized delta of the current(new) and last(old) input value.\n* Boolean input values will be returned as is.\n*/" },
		{ "DisplayName", "Smooth Delta" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Normalized Smooth Delta\n\nProduces a smoothed normalized delta of the current(new) and last(old) input value.\nBoolean input values will be returned as is." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Speed, or Alpha. If the speed given is 0, then jump to the target.\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Speed, or Alpha. If the speed given is 0, then jump to the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EasingExponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * For ease functions, this controls the degree of the curve.\n\x09 * \n\x09 * This only affects the Interp_Ease_In, Interp_Ease_Out, and Interp_Ease_In_Out smoothing methods\n\x09 */" },
		{ "EditCondition", "SmoothingMethod == ENormalizeInputSmoothingType::Interp_Ease_In ||SmoothingMethod == ENormalizeInputSmoothingType::Interp_Ease_Out || SmoothingMethod == ENormalizeInputSmoothingType::Interp_Ease_In_Out" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "For ease functions, this controls the degree of the curve.\n\nThis only affects the Interp_Ease_In, Interp_Ease_Out, and Interp_Ease_In_Out smoothing methods" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EasingExponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierSmoothDelta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputModifierSmoothDelta_Statics::NewProp_SmoothingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputModifierSmoothDelta_Statics::NewProp_SmoothingMethod = { "SmoothingMethod", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSmoothDelta, SmoothingMethod), Z_Construct_UEnum_EnhancedInput_ENormalizeInputSmoothingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingMethod_MetaData), NewProp_SmoothingMethod_MetaData) }; // 137322323
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputModifierSmoothDelta_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSmoothDelta, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputModifierSmoothDelta_Statics::NewProp_EasingExponent = { "EasingExponent", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSmoothDelta, EasingExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EasingExponent_MetaData), NewProp_EasingExponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierSmoothDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSmoothDelta_Statics::NewProp_SmoothingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSmoothDelta_Statics::NewProp_SmoothingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSmoothDelta_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSmoothDelta_Statics::NewProp_EasingExponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSmoothDelta_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierSmoothDelta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSmoothDelta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierSmoothDelta_Statics::ClassParams = {
	&UInputModifierSmoothDelta::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierSmoothDelta_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSmoothDelta_Statics::PropPointers),
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSmoothDelta_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierSmoothDelta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierSmoothDelta()
{
	if (!Z_Registration_Info_UClass_UInputModifierSmoothDelta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierSmoothDelta.OuterSingleton, Z_Construct_UClass_UInputModifierSmoothDelta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierSmoothDelta.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierSmoothDelta>()
{
	return UInputModifierSmoothDelta::StaticClass();
}
UInputModifierSmoothDelta::UInputModifierSmoothDelta(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierSmoothDelta);
UInputModifierSmoothDelta::~UInputModifierSmoothDelta() {}
// End Class UInputModifierSmoothDelta

// Begin Enum EDeadZoneType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeadZoneType;
static UEnum* EDeadZoneType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDeadZoneType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDeadZoneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EDeadZoneType, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EDeadZoneType"));
	}
	return Z_Registration_Info_UEnum_EDeadZoneType.OuterSingleton;
}
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EDeadZoneType>()
{
	return EDeadZoneType_StaticEnum();
}
struct Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axial.Comment", "// Apply dead zone to axes individually. This will result in input being chamfered at the corners for 2d/3d axis inputs, and matches the original UE4 deadzone logic.\n" },
		{ "Axial.Name", "EDeadZoneType::Axial" },
		{ "Axial.ToolTip", "Apply dead zone to axes individually. This will result in input being chamfered at the corners for 2d/3d axis inputs, and matches the original UE4 deadzone logic." },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "Radial.Comment", "// Apply dead zone logic to all axes simultaneously. This gives smooth input (circular/spherical coverage). On a 1d axis input this works identically to Axial.\n" },
		{ "Radial.Name", "EDeadZoneType::Radial" },
		{ "Radial.ToolTip", "Apply dead zone logic to all axes simultaneously. This gives smooth input (circular/spherical coverage). On a 1d axis input this works identically to Axial." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDeadZoneType::Axial", (int64)EDeadZoneType::Axial },
		{ "EDeadZoneType::Radial", (int64)EDeadZoneType::Radial },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	"EDeadZoneType",
	"EDeadZoneType",
	Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EnhancedInput_EDeadZoneType()
{
	if (!Z_Registration_Info_UEnum_EDeadZoneType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeadZoneType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDeadZoneType.InnerSingleton;
}
// End Enum EDeadZoneType

// Begin Class UInputModifierDeadZone
void UInputModifierDeadZone::StaticRegisterNativesUInputModifierDeadZone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierDeadZone);
UClass* Z_Construct_UClass_UInputModifierDeadZone_NoRegister()
{
	return UInputModifierDeadZone::StaticClass();
}
struct Z_Construct_UClass_UInputModifierDeadZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Dead Zone\n    *  Input values within the range LowerThreshold -> UpperThreshold will be remapped from 0 -> 1.\n\x09*  Values outside this range will be clamped.\n\x09*/" },
		{ "DisplayName", "Dead Zone" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Dead Zone\nInput values within the range LowerThreshold -> UpperThreshold will be remapped from 0 -> 1.\nValues outside this range will be clamped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Threshold below which input is ignored\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Threshold below which input is ignored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Threshold above which input is clamped to 1\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Threshold above which input is clamped to 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierDeadZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_LowerThreshold = { "LowerThreshold", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierDeadZone, LowerThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerThreshold_MetaData), NewProp_LowerThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_UpperThreshold = { "UpperThreshold", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierDeadZone, UpperThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperThreshold_MetaData), NewProp_UpperThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierDeadZone, Type), Z_Construct_UEnum_EnhancedInput_EDeadZoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1668477402
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierDeadZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_LowerThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_UpperThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierDeadZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierDeadZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierDeadZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierDeadZone_Statics::ClassParams = {
	&UInputModifierDeadZone::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierDeadZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierDeadZone_Statics::PropPointers),
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierDeadZone_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierDeadZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierDeadZone()
{
	if (!Z_Registration_Info_UClass_UInputModifierDeadZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierDeadZone.OuterSingleton, Z_Construct_UClass_UInputModifierDeadZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierDeadZone.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierDeadZone>()
{
	return UInputModifierDeadZone::StaticClass();
}
UInputModifierDeadZone::UInputModifierDeadZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierDeadZone);
UInputModifierDeadZone::~UInputModifierDeadZone() {}
// End Class UInputModifierDeadZone

// Begin Class UInputModifierScalar
void UInputModifierScalar::StaticRegisterNativesUInputModifierScalar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierScalar);
UClass* Z_Construct_UClass_UInputModifierScalar_NoRegister()
{
	return UInputModifierScalar::StaticClass();
}
struct Z_Construct_UClass_UInputModifierScalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Scalar\n\x09*  Scales input by a set factor per axis\n\x09*/" },
		{ "DisplayName", "Scalar" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Scalar\nScales input by a set factor per axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The scalar that will be applied to the input value.\n\x09 *\n\x09 * For example, if you have a scalar of (2.0, 2.0, 2.0), each input axis will be multiplied by 2.0.\n\x09 *  \n\x09 * Note: This will do nothing on boolean input action types, as they can only be true or false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "The scalar that will be applied to the input value.\n\nFor example, if you have a scalar of (2.0, 2.0, 2.0), each input axis will be multiplied by 2.0.\n\nNote: This will do nothing on boolean input action types, as they can only be true or false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scalar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierScalar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierScalar_Statics::NewProp_Scalar = { "Scalar", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierScalar, Scalar), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scalar_MetaData), NewProp_Scalar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierScalar_Statics::NewProp_Scalar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierScalar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierScalar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierScalar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierScalar_Statics::ClassParams = {
	&UInputModifierScalar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierScalar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierScalar_Statics::PropPointers),
	0,
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierScalar_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierScalar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierScalar()
{
	if (!Z_Registration_Info_UClass_UInputModifierScalar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierScalar.OuterSingleton, Z_Construct_UClass_UInputModifierScalar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierScalar.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierScalar>()
{
	return UInputModifierScalar::StaticClass();
}
UInputModifierScalar::UInputModifierScalar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierScalar);
UInputModifierScalar::~UInputModifierScalar() {}
// End Class UInputModifierScalar

// Begin Class UInputModifierScaleByDeltaTime
void UInputModifierScaleByDeltaTime::StaticRegisterNativesUInputModifierScaleByDeltaTime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierScaleByDeltaTime);
UClass* Z_Construct_UClass_UInputModifierScaleByDeltaTime_NoRegister()
{
	return UInputModifierScaleByDeltaTime::StaticClass();
}
struct Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Scalar\n\x09*  Multiplies the input value by Delta Time this frame\n\x09*/" },
		{ "DisplayName", "Scale By Delta Time" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Scalar\nMultiplies the input value by Delta Time this frame" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierScaleByDeltaTime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics::ClassParams = {
	&UInputModifierScaleByDeltaTime::StaticClass,
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
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierScaleByDeltaTime()
{
	if (!Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime.OuterSingleton, Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierScaleByDeltaTime>()
{
	return UInputModifierScaleByDeltaTime::StaticClass();
}
UInputModifierScaleByDeltaTime::UInputModifierScaleByDeltaTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierScaleByDeltaTime);
UInputModifierScaleByDeltaTime::~UInputModifierScaleByDeltaTime() {}
// End Class UInputModifierScaleByDeltaTime

// Begin Class UInputModifierNegate
void UInputModifierNegate::StaticRegisterNativesUInputModifierNegate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierNegate);
UClass* Z_Construct_UClass_UInputModifierNegate_NoRegister()
{
	return UInputModifierNegate::StaticClass();
}
struct Z_Construct_UClass_UInputModifierNegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Negate\n\x09*  Inverts input per axis\n\x09*/" },
		{ "DisplayName", "Negate" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Negate\nInverts input per axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
	static void NewProp_bY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
	static void NewProp_bZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierNegate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX_SetBit(void* Obj)
{
	((UInputModifierNegate*)Obj)->bX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputModifierNegate), &Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bX_MetaData), NewProp_bX_MetaData) };
void Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY_SetBit(void* Obj)
{
	((UInputModifierNegate*)Obj)->bY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputModifierNegate), &Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bY_MetaData), NewProp_bY_MetaData) };
void Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ_SetBit(void* Obj)
{
	((UInputModifierNegate*)Obj)->bZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputModifierNegate), &Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZ_MetaData), NewProp_bZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierNegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierNegate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierNegate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierNegate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierNegate_Statics::ClassParams = {
	&UInputModifierNegate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierNegate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierNegate_Statics::PropPointers),
	0,
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierNegate_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierNegate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierNegate()
{
	if (!Z_Registration_Info_UClass_UInputModifierNegate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierNegate.OuterSingleton, Z_Construct_UClass_UInputModifierNegate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierNegate.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierNegate>()
{
	return UInputModifierNegate::StaticClass();
}
UInputModifierNegate::UInputModifierNegate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierNegate);
UInputModifierNegate::~UInputModifierNegate() {}
// End Class UInputModifierNegate

// Begin Class UInputModifierSmooth
void UInputModifierSmooth::StaticRegisterNativesUInputModifierSmooth()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierSmooth);
UClass* Z_Construct_UClass_UInputModifierSmooth_NoRegister()
{
	return UInputModifierSmooth::StaticClass();
}
struct Z_Construct_UClass_UInputModifierSmooth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Smooth\n\x09*  Smooth inputs out over multiple frames\n\x09*/" },
		{ "DisplayName", "Smooth" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Smooth\nSmooth inputs out over multiple frames" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierSmooth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputModifierSmooth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSmooth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierSmooth_Statics::ClassParams = {
	&UInputModifierSmooth::StaticClass,
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
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSmooth_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierSmooth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierSmooth()
{
	if (!Z_Registration_Info_UClass_UInputModifierSmooth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierSmooth.OuterSingleton, Z_Construct_UClass_UInputModifierSmooth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierSmooth.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierSmooth>()
{
	return UInputModifierSmooth::StaticClass();
}
UInputModifierSmooth::UInputModifierSmooth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierSmooth);
UInputModifierSmooth::~UInputModifierSmooth() {}
// End Class UInputModifierSmooth

// Begin Class UInputModifierResponseCurveExponential
void UInputModifierResponseCurveExponential::StaticRegisterNativesUInputModifierResponseCurveExponential()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierResponseCurveExponential);
UClass* Z_Construct_UClass_UInputModifierResponseCurveExponential_NoRegister()
{
	return UInputModifierResponseCurveExponential::StaticClass();
}
struct Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Response Curve Exponential\n\x09*  Apply a simple exponential response curve to input values, per axis\n\x09*/" },
		{ "DisplayName", "Response Curve - Exponential" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Response Curve Exponential\nApply a simple exponential response curve to input values, per axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveExponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveExponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierResponseCurveExponential>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::NewProp_CurveExponent = { "CurveExponent", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierResponseCurveExponential, CurveExponent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveExponent_MetaData), NewProp_CurveExponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::NewProp_CurveExponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::ClassParams = {
	&UInputModifierResponseCurveExponential::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::PropPointers),
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierResponseCurveExponential()
{
	if (!Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.OuterSingleton, Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierResponseCurveExponential>()
{
	return UInputModifierResponseCurveExponential::StaticClass();
}
UInputModifierResponseCurveExponential::UInputModifierResponseCurveExponential(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierResponseCurveExponential);
UInputModifierResponseCurveExponential::~UInputModifierResponseCurveExponential() {}
// End Class UInputModifierResponseCurveExponential

// Begin Class UInputModifierResponseCurveUser
void UInputModifierResponseCurveUser::StaticRegisterNativesUInputModifierResponseCurveUser()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierResponseCurveUser);
UClass* Z_Construct_UClass_UInputModifierResponseCurveUser_NoRegister()
{
	return UInputModifierResponseCurveUser::StaticClass();
}
struct Z_Construct_UClass_UInputModifierResponseCurveUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Response Curve User Defined\n\x09*  Apply a custom response curve to input values, per axis\n\x09*/" },
		{ "DisplayName", "Response Curve - User Defined" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Response Curve User Defined\nApply a custom response curve to input values, per axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseX_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseY_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierResponseCurveUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseX = { "ResponseX", nullptr, (EPropertyFlags)0x0114000000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierResponseCurveUser, ResponseX), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseX_MetaData), NewProp_ResponseX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseY = { "ResponseY", nullptr, (EPropertyFlags)0x0114000000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierResponseCurveUser, ResponseY), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseY_MetaData), NewProp_ResponseY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseZ = { "ResponseZ", nullptr, (EPropertyFlags)0x0114000000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierResponseCurveUser, ResponseZ), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseZ_MetaData), NewProp_ResponseZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::ClassParams = {
	&UInputModifierResponseCurveUser::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::PropPointers),
	0,
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierResponseCurveUser()
{
	if (!Z_Registration_Info_UClass_UInputModifierResponseCurveUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierResponseCurveUser.OuterSingleton, Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierResponseCurveUser.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierResponseCurveUser>()
{
	return UInputModifierResponseCurveUser::StaticClass();
}
UInputModifierResponseCurveUser::UInputModifierResponseCurveUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierResponseCurveUser);
UInputModifierResponseCurveUser::~UInputModifierResponseCurveUser() {}
// End Class UInputModifierResponseCurveUser

// Begin Enum EFOVScalingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFOVScalingType;
static UEnum* EFOVScalingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFOVScalingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFOVScalingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EFOVScalingType, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EFOVScalingType"));
	}
	return Z_Registration_Info_UEnum_EFOVScalingType.OuterSingleton;
}
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EFOVScalingType>()
{
	return EFOVScalingType_StaticEnum();
}
struct Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "Standard.Comment", "// FOV scaling to apply scaled movement deltas to inputs dependent upon the player's selected FOV\n" },
		{ "Standard.Name", "EFOVScalingType::Standard" },
		{ "Standard.ToolTip", "FOV scaling to apply scaled movement deltas to inputs dependent upon the player's selected FOV" },
		{ "UE4_BackCompat.Comment", "// FOV scaling was incorrectly calculated in UE4's UPlayerInput::MassageAxisInput. This implementation is intended to aid backwards compatibility, but should not be used by new projects.\n" },
		{ "UE4_BackCompat.Name", "EFOVScalingType::UE4_BackCompat" },
		{ "UE4_BackCompat.ToolTip", "FOV scaling was incorrectly calculated in UE4's UPlayerInput::MassageAxisInput. This implementation is intended to aid backwards compatibility, but should not be used by new projects." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFOVScalingType::Standard", (int64)EFOVScalingType::Standard },
		{ "EFOVScalingType::UE4_BackCompat", (int64)EFOVScalingType::UE4_BackCompat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	"EFOVScalingType",
	"EFOVScalingType",
	Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EnhancedInput_EFOVScalingType()
{
	if (!Z_Registration_Info_UEnum_EFOVScalingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFOVScalingType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFOVScalingType.InnerSingleton;
}
// End Enum EFOVScalingType

// Begin Class UInputModifierFOVScaling
void UInputModifierFOVScaling::StaticRegisterNativesUInputModifierFOVScaling()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierFOVScaling);
UClass* Z_Construct_UClass_UInputModifierFOVScaling_NoRegister()
{
	return UInputModifierFOVScaling::StaticClass();
}
struct Z_Construct_UClass_UInputModifierFOVScaling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** FOV Scaling\n\x09* Apply FOV dependent scaling to input values, per axis\n\x09*/" },
		{ "DisplayName", "FOV Scaling" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "FOV Scaling\nApply FOV dependent scaling to input values, per axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Extra scalar applied on top of basic FOV scaling.\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Extra scalar applied on top of basic FOV scaling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVScalingType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FOVScalingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FOVScalingType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierFOVScaling>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScale = { "FOVScale", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierFOVScaling, FOVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVScale_MetaData), NewProp_FOVScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType = { "FOVScalingType", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierFOVScaling, FOVScalingType), Z_Construct_UEnum_EnhancedInput_EFOVScalingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVScalingType_MetaData), NewProp_FOVScalingType_MetaData) }; // 3133456823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierFOVScaling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierFOVScaling_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierFOVScaling_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierFOVScaling_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierFOVScaling_Statics::ClassParams = {
	&UInputModifierFOVScaling::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierFOVScaling_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierFOVScaling_Statics::PropPointers),
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierFOVScaling_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierFOVScaling_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierFOVScaling()
{
	if (!Z_Registration_Info_UClass_UInputModifierFOVScaling.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierFOVScaling.OuterSingleton, Z_Construct_UClass_UInputModifierFOVScaling_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierFOVScaling.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierFOVScaling>()
{
	return UInputModifierFOVScaling::StaticClass();
}
UInputModifierFOVScaling::UInputModifierFOVScaling(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierFOVScaling);
UInputModifierFOVScaling::~UInputModifierFOVScaling() {}
// End Class UInputModifierFOVScaling

// Begin Class UInputModifierToWorldSpace
void UInputModifierToWorldSpace::StaticRegisterNativesUInputModifierToWorldSpace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierToWorldSpace);
UClass* Z_Construct_UClass_UInputModifierToWorldSpace_NoRegister()
{
	return UInputModifierToWorldSpace::StaticClass();
}
struct Z_Construct_UClass_UInputModifierToWorldSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Input space to World space conversion\n\x09* Auto-converts axes within the Input Action Value into world space\x09""allowing the result to be directly plugged into functions that take world space values.\n\x09* E.g. For a 2D input axis up/down is mapped to world X (forward), whilst axis left/right is mapped to world Y (right).\n\x09*/" },
		{ "DisplayName", "To World Space" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Input space to World space conversion\nAuto-converts axes within the Input Action Value into world space     allowing the result to be directly plugged into functions that take world space values.\nE.g. For a 2D input axis up/down is mapped to world X (forward), whilst axis left/right is mapped to world Y (right)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierToWorldSpace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputModifierToWorldSpace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierToWorldSpace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierToWorldSpace_Statics::ClassParams = {
	&UInputModifierToWorldSpace::StaticClass,
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
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierToWorldSpace_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierToWorldSpace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierToWorldSpace()
{
	if (!Z_Registration_Info_UClass_UInputModifierToWorldSpace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierToWorldSpace.OuterSingleton, Z_Construct_UClass_UInputModifierToWorldSpace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierToWorldSpace.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierToWorldSpace>()
{
	return UInputModifierToWorldSpace::StaticClass();
}
UInputModifierToWorldSpace::UInputModifierToWorldSpace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierToWorldSpace);
UInputModifierToWorldSpace::~UInputModifierToWorldSpace() {}
// End Class UInputModifierToWorldSpace

// Begin Enum EInputAxisSwizzle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputAxisSwizzle;
static UEnum* EInputAxisSwizzle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputAxisSwizzle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputAxisSwizzle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EInputAxisSwizzle"));
	}
	return Z_Registration_Info_UEnum_EInputAxisSwizzle.OuterSingleton;
}
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputAxisSwizzle>()
{
	return EInputAxisSwizzle_StaticEnum();
}
struct Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "XZY.Comment", "// Swap Y and Z axis\n" },
		{ "XZY.Name", "EInputAxisSwizzle::XZY" },
		{ "XZY.ToolTip", "Swap Y and Z axis" },
		{ "YXZ.Comment", "// Swap X and Y axis. Useful for binding 1D inputs to the Y axis for 2D actions.\n" },
		{ "YXZ.Name", "EInputAxisSwizzle::YXZ" },
		{ "YXZ.ToolTip", "Swap X and Y axis. Useful for binding 1D inputs to the Y axis for 2D actions." },
		{ "YZX.Comment", "// Reorder all axes, Y first\n" },
		{ "YZX.Name", "EInputAxisSwizzle::YZX" },
		{ "YZX.ToolTip", "Reorder all axes, Y first" },
		{ "ZXY.Comment", "// Reorder all axes, Z first\n" },
		{ "ZXY.Name", "EInputAxisSwizzle::ZXY" },
		{ "ZXY.ToolTip", "Reorder all axes, Z first" },
		{ "ZYX.Comment", "// Swap X and Z axis\n" },
		{ "ZYX.Name", "EInputAxisSwizzle::ZYX" },
		{ "ZYX.ToolTip", "Swap X and Z axis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputAxisSwizzle::YXZ", (int64)EInputAxisSwizzle::YXZ },
		{ "EInputAxisSwizzle::ZYX", (int64)EInputAxisSwizzle::ZYX },
		{ "EInputAxisSwizzle::XZY", (int64)EInputAxisSwizzle::XZY },
		{ "EInputAxisSwizzle::YZX", (int64)EInputAxisSwizzle::YZX },
		{ "EInputAxisSwizzle::ZXY", (int64)EInputAxisSwizzle::ZXY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	"EInputAxisSwizzle",
	"EInputAxisSwizzle",
	Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle()
{
	if (!Z_Registration_Info_UEnum_EInputAxisSwizzle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputAxisSwizzle.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputAxisSwizzle.InnerSingleton;
}
// End Enum EInputAxisSwizzle

// Begin Class UInputModifierSwizzleAxis
void UInputModifierSwizzleAxis::StaticRegisterNativesUInputModifierSwizzleAxis()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierSwizzleAxis);
UClass* Z_Construct_UClass_UInputModifierSwizzleAxis_NoRegister()
{
	return UInputModifierSwizzleAxis::StaticClass();
}
struct Z_Construct_UClass_UInputModifierSwizzleAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Swizzle axis components of an input value.\n\x09* Useful to map a 1D input onto the Y axis of a 2D action.\n\x09*/" },
		{ "DisplayName", "Swizzle Input Axis Values" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Swizzle axis components of an input value.\nUseful to map a 1D input onto the Y axis of a 2D action." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Default to XY swap, useful for binding 1D inputs to the Y axis.\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Default to XY swap, useful for binding 1D inputs to the Y axis." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Order_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Order;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierSwizzleAxis>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSwizzleAxis, Order), Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) }; // 1421098546
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::ClassParams = {
	&UInputModifierSwizzleAxis::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::PropPointers),
	0,
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierSwizzleAxis()
{
	if (!Z_Registration_Info_UClass_UInputModifierSwizzleAxis.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierSwizzleAxis.OuterSingleton, Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierSwizzleAxis.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierSwizzleAxis>()
{
	return UInputModifierSwizzleAxis::StaticClass();
}
UInputModifierSwizzleAxis::UInputModifierSwizzleAxis(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierSwizzleAxis);
UInputModifierSwizzleAxis::~UInputModifierSwizzleAxis() {}
// End Class UInputModifierSwizzleAxis

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENormalizeInputSmoothingType_StaticEnum, TEXT("ENormalizeInputSmoothingType"), &Z_Registration_Info_UEnum_ENormalizeInputSmoothingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 137322323U) },
		{ EDeadZoneType_StaticEnum, TEXT("EDeadZoneType"), &Z_Registration_Info_UEnum_EDeadZoneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1668477402U) },
		{ EFOVScalingType_StaticEnum, TEXT("EFOVScalingType"), &Z_Registration_Info_UEnum_EFOVScalingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3133456823U) },
		{ EInputAxisSwizzle_StaticEnum, TEXT("EInputAxisSwizzle"), &Z_Registration_Info_UEnum_EInputAxisSwizzle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1421098546U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputModifier, UInputModifier::StaticClass, TEXT("UInputModifier"), &Z_Registration_Info_UClass_UInputModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifier), 2670998301U) },
		{ Z_Construct_UClass_UInputModifierSmoothDelta, UInputModifierSmoothDelta::StaticClass, TEXT("UInputModifierSmoothDelta"), &Z_Registration_Info_UClass_UInputModifierSmoothDelta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierSmoothDelta), 3709939495U) },
		{ Z_Construct_UClass_UInputModifierDeadZone, UInputModifierDeadZone::StaticClass, TEXT("UInputModifierDeadZone"), &Z_Registration_Info_UClass_UInputModifierDeadZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierDeadZone), 1538272964U) },
		{ Z_Construct_UClass_UInputModifierScalar, UInputModifierScalar::StaticClass, TEXT("UInputModifierScalar"), &Z_Registration_Info_UClass_UInputModifierScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierScalar), 2839139203U) },
		{ Z_Construct_UClass_UInputModifierScaleByDeltaTime, UInputModifierScaleByDeltaTime::StaticClass, TEXT("UInputModifierScaleByDeltaTime"), &Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierScaleByDeltaTime), 3671381098U) },
		{ Z_Construct_UClass_UInputModifierNegate, UInputModifierNegate::StaticClass, TEXT("UInputModifierNegate"), &Z_Registration_Info_UClass_UInputModifierNegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierNegate), 2258080587U) },
		{ Z_Construct_UClass_UInputModifierSmooth, UInputModifierSmooth::StaticClass, TEXT("UInputModifierSmooth"), &Z_Registration_Info_UClass_UInputModifierSmooth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierSmooth), 2178686264U) },
		{ Z_Construct_UClass_UInputModifierResponseCurveExponential, UInputModifierResponseCurveExponential::StaticClass, TEXT("UInputModifierResponseCurveExponential"), &Z_Registration_Info_UClass_UInputModifierResponseCurveExponential, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierResponseCurveExponential), 1544001258U) },
		{ Z_Construct_UClass_UInputModifierResponseCurveUser, UInputModifierResponseCurveUser::StaticClass, TEXT("UInputModifierResponseCurveUser"), &Z_Registration_Info_UClass_UInputModifierResponseCurveUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierResponseCurveUser), 2707793808U) },
		{ Z_Construct_UClass_UInputModifierFOVScaling, UInputModifierFOVScaling::StaticClass, TEXT("UInputModifierFOVScaling"), &Z_Registration_Info_UClass_UInputModifierFOVScaling, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierFOVScaling), 1459169037U) },
		{ Z_Construct_UClass_UInputModifierToWorldSpace, UInputModifierToWorldSpace::StaticClass, TEXT("UInputModifierToWorldSpace"), &Z_Registration_Info_UClass_UInputModifierToWorldSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierToWorldSpace), 2365437348U) },
		{ Z_Construct_UClass_UInputModifierSwizzleAxis, UInputModifierSwizzleAxis::StaticClass, TEXT("UInputModifierSwizzleAxis"), &Z_Registration_Info_UClass_UInputModifierSwizzleAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierSwizzleAxis), 1747571395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_3628832751(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
