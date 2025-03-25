// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedPlayerInput.h"
#include "EnhancedInput/Public/EnhancedActionKeyMapping.h"
#include "EnhancedInput/Public/InputAction.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedPlayerInput() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPlayerInput();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInjectedInput();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInjectedInputArray();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyConsumptionOptions();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin ScriptStruct FInjectedInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InjectedInput;
class UScriptStruct* FInjectedInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InjectedInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InjectedInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInjectedInput, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("InjectedInput"));
	}
	return Z_Registration_Info_UScriptStruct_InjectedInput.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FInjectedInput>()
{
	return FInjectedInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInjectedInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// ContinuouslyInjectedInputs Map is not managed.\n// Continuous input injections seem to be getting garbage collected and\n// crashing in UObject::ProcessEvent when calling ModifyRaw.\n// Band-aid fix: Making these managed references. Also check modifications to\n// IEnhancedInputSubsystemInterface::Start/StopContinuousInputInjectionForAction.\n" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "ContinuouslyInjectedInputs Map is not managed.\nContinuous input injections seem to be getting garbage collected and\ncrashing in UObject::ProcessEvent when calling ModifyRaw.\nBand-aid fix: Making these managed references. Also check modifications to\nIEnhancedInputSubsystemInterface::Start/StopContinuousInputInjectionForAction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInjectedInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInjectedInput_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInjectedInput_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInjectedInput, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInjectedInput_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInjectedInput_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInjectedInput, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInjectedInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInjectedInput_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInjectedInput_Statics::NewProp_Triggers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInjectedInput_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInjectedInput_Statics::NewProp_Modifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInjectedInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInjectedInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"InjectedInput",
	Z_Construct_UScriptStruct_FInjectedInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInjectedInput_Statics::PropPointers),
	sizeof(FInjectedInput),
	alignof(FInjectedInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInjectedInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInjectedInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInjectedInput()
{
	if (!Z_Registration_Info_UScriptStruct_InjectedInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InjectedInput.InnerSingleton, Z_Construct_UScriptStruct_FInjectedInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InjectedInput.InnerSingleton;
}
// End ScriptStruct FInjectedInput

// Begin ScriptStruct FKeyConsumptionOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyConsumptionOptions;
class UScriptStruct* FKeyConsumptionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyConsumptionOptions, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("KeyConsumptionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FKeyConsumptionOptions>()
{
	return FKeyConsumptionOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyConsumptionOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"KeyConsumptionOptions",
	nullptr,
	0,
	sizeof(FKeyConsumptionOptions),
	alignof(FKeyConsumptionOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyConsumptionOptions()
{
	if (!Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.InnerSingleton, Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyConsumptionOptions.InnerSingleton;
}
// End ScriptStruct FKeyConsumptionOptions

// Begin ScriptStruct FInjectedInputArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InjectedInputArray;
class UScriptStruct* FInjectedInputArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InjectedInputArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InjectedInputArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInjectedInputArray, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("InjectedInputArray"));
	}
	return Z_Registration_Info_UScriptStruct_InjectedInputArray.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FInjectedInputArray>()
{
	return FInjectedInputArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInjectedInputArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Injected_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Injected_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Injected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInjectedInputArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInjectedInputArray_Statics::NewProp_Injected_Inner = { "Injected", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInjectedInput, METADATA_PARAMS(0, nullptr) }; // 3883729286
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInjectedInputArray_Statics::NewProp_Injected = { "Injected", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInjectedInputArray, Injected), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Injected_MetaData), NewProp_Injected_MetaData) }; // 3883729286
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInjectedInputArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInjectedInputArray_Statics::NewProp_Injected_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInjectedInputArray_Statics::NewProp_Injected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInjectedInputArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInjectedInputArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"InjectedInputArray",
	Z_Construct_UScriptStruct_FInjectedInputArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInjectedInputArray_Statics::PropPointers),
	sizeof(FInjectedInputArray),
	alignof(FInjectedInputArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInjectedInputArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInjectedInputArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInjectedInputArray()
{
	if (!Z_Registration_Info_UScriptStruct_InjectedInputArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InjectedInputArray.InnerSingleton, Z_Construct_UScriptStruct_FInjectedInputArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InjectedInputArray.InnerSingleton;
}
// End ScriptStruct FInjectedInputArray

// Begin Class UEnhancedPlayerInput
void UEnhancedPlayerInput::StaticRegisterNativesUEnhancedPlayerInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedPlayerInput);
UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister()
{
	return UEnhancedPlayerInput::StaticClass();
}
struct Z_Construct_UClass_UEnhancedPlayerInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UEnhancedPlayerInput : UPlayerInput extensions for enhanced player input system\n*/" },
		{ "IncludePath", "EnhancedPlayerInput.h" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "UEnhancedPlayerInput : UPlayerInput extensions for enhanced player input system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyConsumptionData_MetaData[] = {
		{ "Comment", "/** Array of data that represents what keys should be consumed if an enhanced input action is in a specific triggered state */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Array of data that represents what keys should be consumed if an enhanced input action is in a specific triggered state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppliedInputContexts_MetaData[] = {
		{ "Comment", "/** Currently applied key mappings\n\x09 * Note: Source reference only. Use EnhancedActionMappings for the actual mappings (with properly instanced triggers/modifiers)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Currently applied key mappings\nNote: Source reference only. Use EnhancedActionMappings for the actual mappings (with properly instanced triggers/modifiers)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedActionMappings_MetaData[] = {
		{ "Comment", "/** This player's version of the Action Mappings */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "This player's version of the Action Mappings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstanceData_MetaData[] = {
		{ "Comment", "/** Tracked action values. Queryable. */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Tracked action values. Queryable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeysPressedThisTick_MetaData[] = {
		{ "Comment", "/**\n\x09 * A map of Keys to the amount they were depressed this frame. This is reset with each call to ProcessInputStack\n\x09 * and is populated within UEnhancedPlayerInput::InputKey.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "A map of Keys to the amount they were depressed this frame. This is reset with each call to ProcessInputStack\nand is populated within UEnhancedPlayerInput::InputKey." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsInjectedThisTick_MetaData[] = {
		{ "Comment", "/** Inputs injected since the last call to ProcessInputStack */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Inputs injected since the last call to ProcessInputStack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInjectedActions_MetaData[] = {
		{ "Comment", "/** Last frame's injected inputs */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Last frame's injected inputs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyConsumptionData_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyConsumptionData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_KeyConsumptionData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppliedInputContexts_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AppliedInputContexts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedInputContexts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnhancedActionMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnhancedActionMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstanceData_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionInstanceData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActionInstanceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeysPressedThisTick_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeysPressedThisTick_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_KeysPressedThisTick;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputsInjectedThisTick_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputsInjectedThisTick_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputsInjectedThisTick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastInjectedActions_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LastInjectedActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedPlayerInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_ValueProp = { "KeyConsumptionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FKeyConsumptionOptions, METADATA_PARAMS(0, nullptr) }; // 1335449780
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_Key_KeyProp = { "KeyConsumptionData_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData = { "KeyConsumptionData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, KeyConsumptionData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyConsumptionData_MetaData), NewProp_KeyConsumptionData_MetaData) }; // 1335449780
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_ValueProp = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_Key_KeyProp = { "AppliedInputContexts_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, AppliedInputContexts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppliedInputContexts_MetaData), NewProp_AppliedInputContexts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_Inner = { "EnhancedActionMappings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3589935709
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings = { "EnhancedActionMappings", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, EnhancedActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedActionMappings_MetaData), NewProp_EnhancedActionMappings_MetaData) }; // 3589935709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_ValueProp = { "ActionInstanceData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(0, nullptr) }; // 1467082250
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_Key_KeyProp = { "ActionInstanceData_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData = { "ActionInstanceData", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, ActionInstanceData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionInstanceData_MetaData), NewProp_ActionInstanceData_MetaData) }; // 1467082250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_ValueProp = { "KeysPressedThisTick", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_Key_KeyProp = { "KeysPressedThisTick_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick = { "KeysPressedThisTick", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, KeysPressedThisTick), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeysPressedThisTick_MetaData), NewProp_KeysPressedThisTick_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_ValueProp = { "InputsInjectedThisTick", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInjectedInputArray, METADATA_PARAMS(0, nullptr) }; // 2262240186
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_Key_KeyProp = { "InputsInjectedThisTick_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick = { "InputsInjectedThisTick", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, InputsInjectedThisTick), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsInjectedThisTick_MetaData), NewProp_InputsInjectedThisTick_MetaData) }; // 2262240186
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions_ElementProp = { "LastInjectedActions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions = { "LastInjectedActions", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput, LastInjectedActions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInjectedActions_MetaData), NewProp_LastInjectedActions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeyConsumptionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_InputsInjectedThisTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_LastInjectedActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedPlayerInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlayerInput,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::ClassParams = {
	&UEnhancedPlayerInput::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers),
	0,
	0x009000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedPlayerInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedPlayerInput()
{
	if (!Z_Registration_Info_UClass_UEnhancedPlayerInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedPlayerInput.OuterSingleton, Z_Construct_UClass_UEnhancedPlayerInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedPlayerInput.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedPlayerInput>()
{
	return UEnhancedPlayerInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedPlayerInput);
UEnhancedPlayerInput::~UEnhancedPlayerInput() {}
// End Class UEnhancedPlayerInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInjectedInput::StaticStruct, Z_Construct_UScriptStruct_FInjectedInput_Statics::NewStructOps, TEXT("InjectedInput"), &Z_Registration_Info_UScriptStruct_InjectedInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInjectedInput), 3883729286U) },
		{ FKeyConsumptionOptions::StaticStruct, Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics::NewStructOps, TEXT("KeyConsumptionOptions"), &Z_Registration_Info_UScriptStruct_KeyConsumptionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyConsumptionOptions), 1335449780U) },
		{ FInjectedInputArray::StaticStruct, Z_Construct_UScriptStruct_FInjectedInputArray_Statics::NewStructOps, TEXT("InjectedInputArray"), &Z_Registration_Info_UScriptStruct_InjectedInputArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInjectedInputArray), 2262240186U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedPlayerInput, UEnhancedPlayerInput::StaticClass, TEXT("UEnhancedPlayerInput"), &Z_Registration_Info_UClass_UEnhancedPlayerInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedPlayerInput), 3143397808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_3748613149(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
