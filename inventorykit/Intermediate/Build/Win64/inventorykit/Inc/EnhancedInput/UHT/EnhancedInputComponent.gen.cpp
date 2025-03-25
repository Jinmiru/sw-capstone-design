// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UFunction* Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature();
ENHANCEDINPUT_API UFunction* Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Delegate FInputDebugKeyHandlerDynamicSignature
struct Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics
{
	struct _Script_EnhancedInput_eventInputDebugKeyHandlerDynamicSignature_Parms
	{
		FKey Key;
		FInputActionValue ActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EnhancedInput_eventInputDebugKeyHandlerDynamicSignature_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EnhancedInput_eventInputDebugKeyHandlerDynamicSignature_Parms, ActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::NewProp_ActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput, nullptr, "InputDebugKeyHandlerDynamicSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::_Script_EnhancedInput_eventInputDebugKeyHandlerDynamicSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::_Script_EnhancedInput_eventInputDebugKeyHandlerDynamicSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EnhancedInput_InputDebugKeyHandlerDynamicSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInputDebugKeyHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputDebugKeyHandlerDynamicSignature, FKey Key, FInputActionValue ActionValue)
{
	struct _Script_EnhancedInput_eventInputDebugKeyHandlerDynamicSignature_Parms
	{
		FKey Key;
		FInputActionValue ActionValue;
	};
	_Script_EnhancedInput_eventInputDebugKeyHandlerDynamicSignature_Parms Parms;
	Parms.Key=Key;
	Parms.ActionValue=ActionValue;
	InputDebugKeyHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FInputDebugKeyHandlerDynamicSignature

// Begin Delegate FEnhancedInputActionHandlerDynamicSignature
struct Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics
{
	struct _Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms
	{
		FInputActionValue ActionValue;
		float ElapsedTime;
		float TriggeredTime;
		const UInputAction* SourceAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Provides full access to value and timers\n" },
		{ "ModuleRelativePath", "Public/EnhancedInputComponent.h" },
		{ "ToolTip", "Provides full access to value and timers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggeredTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms, ActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms, ElapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_TriggeredTime = { "TriggeredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms, TriggeredTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_SourceAction = { "SourceAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms, SourceAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAction_MetaData), NewProp_SourceAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_ActionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_ElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_TriggeredTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_SourceAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput, nullptr, "EnhancedInputActionHandlerDynamicSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::_Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::_Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EnhancedInput_EnhancedInputActionHandlerDynamicSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEnhancedInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& EnhancedInputActionHandlerDynamicSignature, FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const UInputAction* SourceAction)
{
	struct _Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms
	{
		FInputActionValue ActionValue;
		float ElapsedTime;
		float TriggeredTime;
		const UInputAction* SourceAction;
	};
	_Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms Parms;
	Parms.ActionValue=ActionValue;
	Parms.ElapsedTime=ElapsedTime;
	Parms.TriggeredTime=TriggeredTime;
	Parms.SourceAction=SourceAction;
	EnhancedInputActionHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FEnhancedInputActionHandlerDynamicSignature

// Begin Class UEnhancedInputComponent Function GetBoundActionValue
struct Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics
{
	struct EnhancedInputComponent_eventGetBoundActionValue_Parms
	{
		const UInputAction* Action;
		FInputActionValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/**\n\x09 * Helper function to pull the action value for a bound action value.\n\x09 */" },
		{ "HidePin", "Action" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/EnhancedInputComponent.h" },
		{ "ToolTip", "Helper function to pull the action value for a bound action value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputComponent_eventGetBoundActionValue_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputComponent_eventGetBoundActionValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputComponent, nullptr, "GetBoundActionValue", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::EnhancedInputComponent_eventGetBoundActionValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::EnhancedInputComponent_eventGetBoundActionValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputComponent::execGetBoundActionValue)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionValue*)Z_Param__Result=P_THIS->GetBoundActionValue(Z_Param_Action);
	P_NATIVE_END;
}
// End Class UEnhancedInputComponent Function GetBoundActionValue

// Begin Class UEnhancedInputComponent
void UEnhancedInputComponent::StaticRegisterNativesUEnhancedInputComponent()
{
	UClass* Class = UEnhancedInputComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoundActionValue", &UEnhancedInputComponent::execGetBoundActionValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputComponent);
UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister()
{
	return UEnhancedInputComponent::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implement an Actor component for input bindings.\n *\n * An Enhanced Input Component is a transient component that enables an Actor to bind enhanced actions to delegate functions, or monitor those actions.\n * Input components are processed from a stack managed by the PlayerController and processed by the PlayerInput.\n * These bindings will not consume input events, but this behaviour can be replicated using UInputMappingContext::Priority.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "EnhancedInputComponent.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputComponent.h" },
		{ "ToolTip", "Implement an Actor component for input bindings.\n\nAn Enhanced Input Component is a transient component that enables an Actor to bind enhanced actions to delegate functions, or monitor those actions.\nInput components are processed from a stack managed by the PlayerController and processed by the PlayerInput.\nThese bindings will not consume input events, but this behaviour can be replicated using UInputMappingContext::Priority.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputComponent_GetBoundActionValue, "GetBoundActionValue" }, // 770534524
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputComponent_Statics::ClassParams = {
	&UEnhancedInputComponent::StaticClass,
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
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputComponent()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputComponent.OuterSingleton, Z_Construct_UClass_UEnhancedInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputComponent.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputComponent>()
{
	return UEnhancedInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputComponent);
UEnhancedInputComponent::~UEnhancedInputComponent() {}
// End Class UEnhancedInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputComponent, UEnhancedInputComponent::StaticClass, TEXT("UEnhancedInputComponent"), &Z_Registration_Info_UClass_UEnhancedInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputComponent), 301103549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_1904421089(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
