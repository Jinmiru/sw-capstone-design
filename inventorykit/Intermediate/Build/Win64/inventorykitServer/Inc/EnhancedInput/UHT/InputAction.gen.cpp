// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/InputAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionValueType();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Enum EInputActionAccumulationBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputActionAccumulationBehavior;
static UEnum* EInputActionAccumulationBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputActionAccumulationBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputActionAccumulationBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EInputActionAccumulationBehavior"));
	}
	return Z_Registration_Info_UEnum_EInputActionAccumulationBehavior.OuterSingleton;
}
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputActionAccumulationBehavior>()
{
	return EInputActionAccumulationBehavior_StaticEnum();
}
struct Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** \n* This is an advanced setting that allows you to change how the value of an Input Action is calculated when there are \n* multiple mappings to the same Input Action. The default behavior is to accept highest absolute value.\n*/" },
		{ "Cumulative.Comment", "/** \n\x09* Cumulatively adds the key values for each mapping.\n\x09* \n\x09* For example, a value of -0.7 and +0.75 on the same input action would result in a value of 0.05.\n\x09* \n\x09* A practical example of when to use this would be for something like WASD movement, if you want pressing W and S to cancel each other out.\n\x09*/" },
		{ "Cumulative.Name", "EInputActionAccumulationBehavior::Cumulative" },
		{ "Cumulative.ToolTip", "Cumulatively adds the key values for each mapping.\n\nFor example, a value of -0.7 and +0.75 on the same input action would result in a value of 0.05.\n\nA practical example of when to use this would be for something like WASD movement, if you want pressing W and S to cancel each other out." },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "TakeHighestAbsoluteValue.Comment", "/** \n\x09* Take the value from the mapping with the highest Absolute Value.\n\x09* \n\x09* For example, given a value of -0.3 and 0.5, the input action's value would be 0.5. \n\x09*/" },
		{ "TakeHighestAbsoluteValue.Name", "EInputActionAccumulationBehavior::TakeHighestAbsoluteValue" },
		{ "TakeHighestAbsoluteValue.ToolTip", "Take the value from the mapping with the highest Absolute Value.\n\nFor example, given a value of -0.3 and 0.5, the input action's value would be 0.5." },
		{ "ToolTip", "This is an advanced setting that allows you to change how the value of an Input Action is calculated when there are\nmultiple mappings to the same Input Action. The default behavior is to accept highest absolute value." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputActionAccumulationBehavior::TakeHighestAbsoluteValue", (int64)EInputActionAccumulationBehavior::TakeHighestAbsoluteValue },
		{ "EInputActionAccumulationBehavior::Cumulative", (int64)EInputActionAccumulationBehavior::Cumulative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	"EInputActionAccumulationBehavior",
	"EInputActionAccumulationBehavior",
	Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior()
{
	if (!Z_Registration_Info_UEnum_EInputActionAccumulationBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputActionAccumulationBehavior.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputActionAccumulationBehavior.InnerSingleton;
}
// End Enum EInputActionAccumulationBehavior

// Begin Class UInputAction
void UInputAction::StaticRegisterNativesUInputAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputAction);
UClass* Z_Construct_UClass_UInputAction_NoRegister()
{
	return UInputAction::StaticClass();
}
struct Z_Construct_UClass_UInputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* An Input Action is a logical representation of something the user can do, such as \"Jump\" or \"Crouch\".\n* These are what your gameplay code binds to in order to listen for input state changes. For most scenarios \n* your gameplay code should be listening for the \"Triggered\" event on an input action. This will allow\n* for the most scalable and customizable input configuration because you can add different triggers \n* for each key mapping in the Input Mapping Context. \n* \n* They are the conceptual equivalent to \"Action\" and \"Axis\" mapping names from the Legacy Input System.\n* \n* Note: These are instanced per player (via FInputActionInstance)\n*/" },
		{ "IncludePath", "InputAction.h" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "An Input Action is a logical representation of something the user can do, such as \"Jump\" or \"Crouch\".\nThese are what your gameplay code binds to in order to listen for input state changes. For most scenarios\nyour gameplay code should be listening for the \"Triggered\" event on an input action. This will allow\nfor the most scalable and customizable input configuration because you can add different triggers\nfor each key mapping in the Input Mapping Context.\n\nThey are the conceptual equivalent to \"Action\" and \"Axis\" mapping names from the Legacy Input System.\n\nNote: These are instanced per player (via FInputActionInstance)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionDescription_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "// A localized descriptor of this input action\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "A localized descriptor of this input action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerWhenPaused_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// Should this action be able to trigger whilst the game is paused - Replaces bExecuteWhenPaused\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Should this action be able to trigger whilst the game is paused - Replaces bExecuteWhenPaused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[] = {
		{ "Category", "Input Consumption" },
		{ "Comment", "// Should this action swallow any inputs bound to it or allow them to pass through to affect lower priority bound actions?\n" },
		{ "DisplayName", "Consume Lower Priority Enhanced Input Mappings" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Should this action swallow any inputs bound to it or allow them to pass through to affect lower priority bound actions?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumesActionAndAxisMappings_MetaData[] = {
		{ "Category", "Input Consumption" },
		{ "Comment", "/**\n\x09 * Should this Input Action consume any legacy Action and Axis key mappings?\n\x09 * If true, then any key mapping to this input action will consume(aka block) the legacy key\n\x09 * mapping from firing delegates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Should this Input Action consume any legacy Action and Axis key mappings?\nIf true, then any key mapping to this input action will consume(aka block) the legacy key\nmapping from firing delegates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReserveAllMappings_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// This action's mappings are not intended to be automatically overridden by higher priority context mappings. Users must explicitly remove the mapping first. NOTE: It is the responsibility of the author of the mapping code to enforce this!\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "This action's mappings are not intended to be automatically overridden by higher priority context mappings. Users must explicitly remove the mapping first. NOTE: It is the responsibility of the author of the mapping code to enforce this!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEventsThatConsumeLegacyKeys_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/EnhancedInput.ETriggerEvent" },
		{ "Category", "Input Consumption" },
		{ "Comment", "/** A bitmask of trigger events that, when reached, will consume any FKeys mapped to this input action. */" },
		{ "EditCondition", "bConsumesActionAndAxisMappings" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "A bitmask of trigger events that, when reached, will consume any FKeys mapped to this input action." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// The type that this action returns from a GetActionValue query or action event\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "The type that this action returns from a GetActionValue query or action event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulationBehavior_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/**\n\x09* This defines how the value of this input action will be calcuated in the case that there are multiple key mappings to the same input action.\n\x09* \n\x09* When TakeHighestAbsoluteValue is selected, then the key mapping with the highest absolutle value will be utilized. (Default)\n\x09* When Cumulative is selected, then each key mapping will be added together to get the key value. \n\x09* \n\x09* @see UEnhancedPlayerInput::ProcessActionMappingEvent, where this property is read from. \n\x09*/" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "This defines how the value of this input action will be calcuated in the case that there are multiple key mappings to the same input action.\n\nWhen TakeHighestAbsoluteValue is selected, then the key mapping with the highest absolutle value will be utilized. (Default)\nWhen Cumulative is selected, then each key mapping will be added together to get the key value.\n\n@see UEnhancedPlayerInput::ProcessActionMappingEvent, where this property is read from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_Inner_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/**\n\x09* Trigger qualifiers. If any trigger qualifiers exist the action will not trigger unless:\n\x09* At least one Explicit trigger in this list has been met.\n\x09* All Implicit triggers in this list are met.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Trigger qualifiers. If any trigger qualifiers exist the action will not trigger unless:\nAt least one Explicit trigger in this list has been met.\nAll Implicit triggers in this list are met." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/**\n\x09* Trigger qualifiers. If any trigger qualifiers exist the action will not trigger unless:\n\x09* At least one Explicit trigger in this list has been met.\n\x09* All Implicit triggers in this list are met.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Trigger qualifiers. If any trigger qualifiers exist the action will not trigger unless:\nAt least one Explicit trigger in this list has been met.\nAll Implicit triggers in this list are met." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_Inner_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/**\n\x09* Modifiers are applied to the final action value.\n\x09* These are applied sequentially in array order.\n\x09* They are applied on top of any FEnhancedActionKeyMapping modifiers that drove the initial input\n\x09* \n\x09* Note: Modifiers defined in the Input Action asset will be applied AFTER any modifiers defined in individual key mappings in the Input Mapping Context asset.\n\x09*/" },
		{ "DisplayAfter", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Modifiers are applied to the final action value.\nThese are applied sequentially in array order.\nThey are applied on top of any FEnhancedActionKeyMapping modifiers that drove the initial input\n\nNote: Modifiers defined in the Input Action asset will be applied AFTER any modifiers defined in individual key mappings in the Input Mapping Context asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/**\n\x09* Modifiers are applied to the final action value.\n\x09* These are applied sequentially in array order.\n\x09* They are applied on top of any FEnhancedActionKeyMapping modifiers that drove the initial input\n\x09* \n\x09* Note: Modifiers defined in the Input Action asset will be applied AFTER any modifiers defined in individual key mappings in the Input Mapping Context asset.\n\x09*/" },
		{ "DisplayAfter", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Modifiers are applied to the final action value.\nThese are applied sequentially in array order.\nThey are applied on top of any FEnhancedActionKeyMapping modifiers that drove the initial input\n\nNote: Modifiers defined in the Input Action asset will be applied AFTER any modifiers defined in individual key mappings in the Input Mapping Context asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMappableKeySettings_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "User Settings" },
		{ "Comment", "/**\n\x09* Holds setting information about this Action Input for setting screen and save purposes.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Holds setting information about this Action Input for setting screen and save purposes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ActionDescription;
	static void NewProp_bTriggerWhenPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerWhenPaused;
	static void NewProp_bConsumeInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
	static void NewProp_bConsumesActionAndAxisMappings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumesActionAndAxisMappings;
	static void NewProp_bReserveAllMappings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReserveAllMappings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TriggerEventsThatConsumeLegacyKeys;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccumulationBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccumulationBehavior;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMappableKeySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_ActionDescription = { "ActionDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAction, ActionDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionDescription_MetaData), NewProp_ActionDescription_MetaData) };
void Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused_SetBit(void* Obj)
{
	((UInputAction*)Obj)->bTriggerWhenPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused = { "bTriggerWhenPaused", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputAction), &Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerWhenPaused_MetaData), NewProp_bTriggerWhenPaused_MetaData) };
void Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
{
	((UInputAction*)Obj)->bConsumeInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputAction), &Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeInput_MetaData), NewProp_bConsumeInput_MetaData) };
void Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumesActionAndAxisMappings_SetBit(void* Obj)
{
	((UInputAction*)Obj)->bConsumesActionAndAxisMappings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumesActionAndAxisMappings = { "bConsumesActionAndAxisMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputAction), &Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumesActionAndAxisMappings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumesActionAndAxisMappings_MetaData), NewProp_bConsumesActionAndAxisMappings_MetaData) };
void Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings_SetBit(void* Obj)
{
	((UInputAction*)Obj)->bReserveAllMappings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings = { "bReserveAllMappings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputAction), &Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReserveAllMappings_MetaData), NewProp_bReserveAllMappings_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_TriggerEventsThatConsumeLegacyKeys = { "TriggerEventsThatConsumeLegacyKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAction, TriggerEventsThatConsumeLegacyKeys), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEventsThatConsumeLegacyKeys_MetaData), NewProp_TriggerEventsThatConsumeLegacyKeys_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAction, ValueType), Z_Construct_UEnum_EnhancedInput_EInputActionValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 3726302502
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_AccumulationBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_AccumulationBehavior = { "AccumulationBehavior", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAction, AccumulationBehavior), Z_Construct_UEnum_EnhancedInput_EInputActionAccumulationBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulationBehavior_MetaData), NewProp_AccumulationBehavior_MetaData) }; // 3764986622
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_Inner_MetaData), NewProp_Triggers_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAction, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_Inner_MetaData), NewProp_Modifiers_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAction, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_PlayerMappableKeySettings = { "PlayerMappableKeySettings", nullptr, (EPropertyFlags)0x012608000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAction, PlayerMappableKeySettings), Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMappableKeySettings_MetaData), NewProp_PlayerMappableKeySettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_ActionDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumesActionAndAxisMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_TriggerEventsThatConsumeLegacyKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_AccumulationBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_AccumulationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_PlayerMappableKeySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputAction_Statics::ClassParams = {
	&UInputAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputAction()
{
	if (!Z_Registration_Info_UClass_UInputAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputAction.OuterSingleton, Z_Construct_UClass_UInputAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputAction.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputAction>()
{
	return UInputAction::StaticClass();
}
UInputAction::UInputAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAction);
UInputAction::~UInputAction() {}
// End Class UInputAction

// Begin ScriptStruct FInputActionInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionInstance;
class UScriptStruct* FInputActionInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionInstance, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("InputActionInstance"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionInstance.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FInputActionInstance>()
{
	return FInputActionInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputActionInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Run time queryable action instance\n// Generated from UInputAction templates above\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Run time queryable action instance\nGenerated from UInputAction templates above" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAction_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Input" },
		{ "Comment", "// The source action that this instance is created from\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The source action that this instance is created from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// Trigger state\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Trigger state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTriggeredWorldTime_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// The last time that this evaluated to a Triggered State\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "The last time that this evaluated to a Triggered State" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_Inner_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_Inner_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedProcessedTime_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// Total trigger processing/evaluation time (How long this action has been in event Started, Ongoing, or Triggered\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Total trigger processing/evaluation time (How long this action has been in event Started, Ongoing, or Triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTriggeredTime_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// Triggered time (How long this action has been in event Triggered only)\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Triggered time (How long this action has been in event Triggered only)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastTriggeredWorldTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedProcessedTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTriggeredTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_SourceAction = { "SourceAction", nullptr, (EPropertyFlags)0x0144000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionInstance, SourceAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAction_MetaData), NewProp_SourceAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionInstance, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEvent_MetaData), NewProp_TriggerEvent_MetaData) }; // 3771639830
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_LastTriggeredWorldTime = { "LastTriggeredWorldTime", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionInstance, LastTriggeredWorldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTriggeredWorldTime_MetaData), NewProp_LastTriggeredWorldTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_Inner_MetaData), NewProp_Triggers_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x012408800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionInstance, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_Inner_MetaData), NewProp_Modifiers_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x012408800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionInstance, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedProcessedTime = { "ElapsedProcessedTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionInstance, ElapsedProcessedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedProcessedTime_MetaData), NewProp_ElapsedProcessedTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedTriggeredTime = { "ElapsedTriggeredTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionInstance, ElapsedTriggeredTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTriggeredTime_MetaData), NewProp_ElapsedTriggeredTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_SourceAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_LastTriggeredWorldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedProcessedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedTriggeredTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"InputActionInstance",
	Z_Construct_UScriptStruct_FInputActionInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::PropPointers),
	sizeof(FInputActionInstance),
	alignof(FInputActionInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionInstance.InnerSingleton, Z_Construct_UScriptStruct_FInputActionInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputActionInstance.InnerSingleton;
}
// End ScriptStruct FInputActionInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputActionAccumulationBehavior_StaticEnum, TEXT("EInputActionAccumulationBehavior"), &Z_Registration_Info_UEnum_EInputActionAccumulationBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3764986622U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputActionInstance::StaticStruct, Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewStructOps, TEXT("InputActionInstance"), &Z_Registration_Info_UScriptStruct_InputActionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionInstance), 1467082250U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputAction, UInputAction::StaticClass, TEXT("UInputAction"), &Z_Registration_Info_UClass_UInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputAction), 2072438863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_1536216078(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
