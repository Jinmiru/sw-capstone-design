// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputDeveloperSettings.h"
#include "Runtime/DeveloperSettings/Public/Engine/PlatformSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputDeveloperSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultContextSetting();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin ScriptStruct FDefaultContextSetting
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultContextSetting;
class UScriptStruct* FDefaultContextSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultContextSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultContextSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultContextSetting, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("DefaultContextSetting"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultContextSetting.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FDefaultContextSetting>()
{
	return FDefaultContextSetting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDefaultContextSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a single input mapping context and the priority that it should be applied with */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "Represents a single input mapping context and the priority that it should be applied with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Input Mapping Context that should be Added to the EnhancedInputEditorSubsystem when it starts listening for input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Input Mapping Context that should be Added to the EnhancedInputEditorSubsystem when it starts listening for input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The prioirty that should be given to this mapping context when it is added */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "The prioirty that should be given to this mapping context when it is added" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddImmediately_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If true, then this IMC will be applied immediately when the EI subsystem is ready */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then this IMC will be applied immediately when the EI subsystem is ready" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterWithUserSettings_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If true, then this IMC will be registered with the User Input Settings (if one is available) immediately when the Enhanced Input subsystem starts. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then this IMC will be registered with the User Input Settings (if one is available) immediately when the Enhanced Input subsystem starts." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static void NewProp_bAddImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddImmediately;
	static void NewProp_bRegisterWithUserSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterWithUserSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultContextSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultContextSetting, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultContextSetting, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
void Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_bAddImmediately_SetBit(void* Obj)
{
	((FDefaultContextSetting*)Obj)->bAddImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_bAddImmediately = { "bAddImmediately", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDefaultContextSetting), &Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_bAddImmediately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddImmediately_MetaData), NewProp_bAddImmediately_MetaData) };
void Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_bRegisterWithUserSettings_SetBit(void* Obj)
{
	((FDefaultContextSetting*)Obj)->bRegisterWithUserSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_bRegisterWithUserSettings = { "bRegisterWithUserSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDefaultContextSetting), &Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_bRegisterWithUserSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegisterWithUserSettings_MetaData), NewProp_bRegisterWithUserSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_bAddImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_bRegisterWithUserSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"DefaultContextSetting",
	Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::PropPointers),
	sizeof(FDefaultContextSetting),
	alignof(FDefaultContextSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDefaultContextSetting()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultContextSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultContextSetting.InnerSingleton, Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DefaultContextSetting.InnerSingleton;
}
// End ScriptStruct FDefaultContextSetting

// Begin Class UEnhancedInputDeveloperSettings
void UEnhancedInputDeveloperSettings::StaticRegisterNativesUEnhancedInputDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputDeveloperSettings);
UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings_NoRegister()
{
	return UEnhancedInputDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Developer settings for Enhanced Input */" },
		{ "DisplayName", "Enhanced Input" },
		{ "IncludePath", "EnhancedInputDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Developer settings for Enhanced Input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09 * Array of any input mapping contexts that you want to be applied by default to the Enhanced Input local player subsystem.\n\x09 * NOTE: These mapping context's can only be from your game's root content directory, not plugins.\n\x09 */" },
		{ "editCondition", "bEnableDefaultMappingContexts" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "Array of any input mapping contexts that you want to be applied by default to the Enhanced Input local player subsystem.\nNOTE: These mapping context's can only be from your game's root content directory, not plugins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWorldSubsystemMappingContexts_MetaData[] = {
		{ "Category", "Enhanced Input|World Subsystem" },
		{ "Comment", "/**\n\x09 * Array of any input mapping contexts that you want to be applied by default to the Enhanced Input world subsystem.\n\x09 * NOTE: These mapping context's can only be from your game's root content directory, not plugins.\n\x09 */" },
		{ "editCondition", "bEnableDefaultMappingContexts && bEnableWorldSubsystem" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "Array of any input mapping contexts that you want to be applied by default to the Enhanced Input world subsystem.\nNOTE: These mapping context's can only be from your game's root content directory, not plugins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSettings_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09 * Platform specific settings for Enhanced Input.\n\x09 * @see UEnhancedInputPlatformSettings\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "Platform specific settings for Enhanced Input.\n@see UEnhancedInputPlatformSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSettingsClass_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * The class that should be used for the User Settings by each Enhanced Input subsystem.\n\x09 * An instance of this class will be spawned by each Enhanced Input subsytem as a place to store\n\x09 * user settings such as keymappings, accessibility settings, etc. Subclass this to add more custom\n\x09 * options to your game.\n\x09 *\n\x09 * Note: This is a new experimental feature!\n\x09 */" },
		{ "editCondition", "bEnableUserSettings" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "The class that should be used for the User Settings by each Enhanced Input subsystem.\nAn instance of this class will be spawned by each Enhanced Input subsytem as a place to store\nuser settings such as keymappings, accessibility settings, etc. Subclass this to add more custom\noptions to your game.\n\nNote: This is a new experimental feature!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerMappableKeyProfileClass_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * The default class for the player mappable key profile, used to store the key mappings set by the player in the user settings.\n\x09 * \n\x09 * Note: This is a new experimental feature!\n\x09 */" },
		{ "editCondition", "bEnableUserSettings" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "The default class for the player mappable key profile, used to store the key mappings set by the player in the user settings.\n\nNote: This is a new experimental feature!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWorldInputClass_MetaData[] = {
		{ "Category", "Enhanced Input|World Subsystem" },
		{ "Comment", "/** The default player input class that the Enhanced Input world subsystem will use. */" },
		{ "editCondition", "bEnableWorldSubsystem" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "The default player input class that the Enhanced Input world subsystem will use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendTriggeredEventsWhenInputIsFlushed_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09* If true, then any in progress Enhanced Input Actions will fire Cancelled and Triggered events \n\x09* when input is flushed (i.e. the viewport has lost focus, or UEnhancedPlayerInput::FlushPressedKeys has been called)\n\x09* \n\x09* If false, then enhanced input actions may not fire their delegates when input is flushed and their key state would be retained.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then any in progress Enhanced Input Actions will fire Cancelled and Triggered events\nwhen input is flushed (i.e. the viewport has lost focus, or UEnhancedPlayerInput::FlushPressedKeys has been called)\n\nIf false, then enhanced input actions may not fire their delegates when input is flushed and their key state would be retained." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUserSettings_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * If true, then an instance of the User Settings Class will be created on each Enhanced Input subsystem.\n\x09 * \n\x09 * Note: This is a new experimental feature!\n\x09 */" },
		{ "DisplayName", "Enable User Settings (Experimental)" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then an instance of the User Settings Class will be created on each Enhanced Input subsystem.\n\nNote: This is a new experimental feature!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDefaultMappingContexts_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/** If true, then the DefaultMappingContexts will be applied to all Enhanced Input Subsystems. */" },
		{ "ConsoleVariable", "EnhancedInput.EnableDefaultMappingContexts" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then the DefaultMappingContexts will be applied to all Enhanced Input Subsystems." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldOnlyTriggerLastActionInChord_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09 * If true, then only the last action in a ChordedAction trigger will be fired.\n\x09 * This means that only the action that has the ChordedTrigger on it will be fired, not the individual steps.\n\x09 * \n\x09 * Default value is true.\n\x09 */" },
		{ "ConsoleVariable", "EnhancedInput.OnlyTriggerLastActionInChord" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then only the last action in a ChordedAction trigger will be fired.\nThis means that only the action that has the ChordedTrigger on it will be fired, not the individual steps.\n\nDefault value is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogOnDeprecatedConfigUsed_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09 * If true, then a warning will be logged when a UPlayerMappableInputConfig that has been marked as deprecated is used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then a warning will be logged when a UPlayerMappableInputConfig that has been marked as deprecated is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldSubsystem_MetaData[] = {
		{ "Category", "Enhanced Input|World Subsystem" },
		{ "Comment", "/** If true, then the world subsystem will be created. */" },
		{ "DisplayName", "Enable World Subsystem (Experimental)" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then the world subsystem will be created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLogAllWorldSubsystemInputs_MetaData[] = {
		{ "Category", "Enhanced Input|World Subsystem" },
		{ "Comment", "/**\n \x09 * If true then the Enhanced Input world subsystem will log all input that is being processed by it (keypresses, analog values, etc)\n \x09 * Note: This can produce A LOT of logs, so only use this if you are debugging something. Does nothing in shipping builds\n \x09 */" },
		{ "ConsoleVariable", "EnhancedInput.bShouldLogAllWorldSubsystemInputs" },
		{ "editCondition", "bEnableWorldSubsystem" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true then the Enhanced Input world subsystem will log all input that is being processed by it (keypresses, analog values, etc)\nNote: This can produce A LOT of logs, so only use this if you are debugging something. Does nothing in shipping builds" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWorldSubsystemMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWorldSubsystemMappingContexts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSettings;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_UserSettingsClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultPlayerMappableKeyProfileClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultWorldInputClass;
	static void NewProp_bSendTriggeredEventsWhenInputIsFlushed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendTriggeredEventsWhenInputIsFlushed;
	static void NewProp_bEnableUserSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUserSettings;
	static void NewProp_bEnableDefaultMappingContexts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDefaultMappingContexts;
	static void NewProp_bShouldOnlyTriggerLastActionInChord_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldOnlyTriggerLastActionInChord;
	static void NewProp_bLogOnDeprecatedConfigUsed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogOnDeprecatedConfigUsed;
	static void NewProp_bEnableWorldSubsystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldSubsystem;
	static void NewProp_bShouldLogAllWorldSubsystemInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLogAllWorldSubsystemInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDefaultContextSetting, METADATA_PARAMS(0, nullptr) }; // 4074989279
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) }; // 4074989279
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts_Inner = { "DefaultWorldSubsystemMappingContexts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDefaultContextSetting, METADATA_PARAMS(0, nullptr) }; // 4074989279
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts = { "DefaultWorldSubsystemMappingContexts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, DefaultWorldSubsystemMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWorldSubsystemMappingContexts_MetaData), NewProp_DefaultWorldSubsystemMappingContexts_MetaData) }; // 4074989279
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings = { "PlatformSettings", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, PlatformSettings), Z_Construct_UScriptStruct_FPerPlatformSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformSettings_MetaData), NewProp_PlatformSettings_MetaData) }; // 1467854229
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_UserSettingsClass = { "UserSettingsClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, UserSettingsClass), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSettingsClass_MetaData), NewProp_UserSettingsClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultPlayerMappableKeyProfileClass = { "DefaultPlayerMappableKeyProfileClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, DefaultPlayerMappableKeyProfileClass), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlayerMappableKeyProfileClass_MetaData), NewProp_DefaultPlayerMappableKeyProfileClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldInputClass = { "DefaultWorldInputClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, DefaultWorldInputClass), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWorldInputClass_MetaData), NewProp_DefaultWorldInputClass_MetaData) };
void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bSendTriggeredEventsWhenInputIsFlushed_SetBit(void* Obj)
{
	((UEnhancedInputDeveloperSettings*)Obj)->bSendTriggeredEventsWhenInputIsFlushed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bSendTriggeredEventsWhenInputIsFlushed = { "bSendTriggeredEventsWhenInputIsFlushed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bSendTriggeredEventsWhenInputIsFlushed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendTriggeredEventsWhenInputIsFlushed_MetaData), NewProp_bSendTriggeredEventsWhenInputIsFlushed_MetaData) };
void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableUserSettings_SetBit(void* Obj)
{
	((UEnhancedInputDeveloperSettings*)Obj)->bEnableUserSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableUserSettings = { "bEnableUserSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableUserSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUserSettings_MetaData), NewProp_bEnableUserSettings_MetaData) };
void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts_SetBit(void* Obj)
{
	((UEnhancedInputDeveloperSettings*)Obj)->bEnableDefaultMappingContexts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts = { "bEnableDefaultMappingContexts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDefaultMappingContexts_MetaData), NewProp_bEnableDefaultMappingContexts_MetaData) };
void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_SetBit(void* Obj)
{
	((UEnhancedInputDeveloperSettings*)Obj)->bShouldOnlyTriggerLastActionInChord = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord = { "bShouldOnlyTriggerLastActionInChord", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldOnlyTriggerLastActionInChord_MetaData), NewProp_bShouldOnlyTriggerLastActionInChord_MetaData) };
void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bLogOnDeprecatedConfigUsed_SetBit(void* Obj)
{
	((UEnhancedInputDeveloperSettings*)Obj)->bLogOnDeprecatedConfigUsed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bLogOnDeprecatedConfigUsed = { "bLogOnDeprecatedConfigUsed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bLogOnDeprecatedConfigUsed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogOnDeprecatedConfigUsed_MetaData), NewProp_bLogOnDeprecatedConfigUsed_MetaData) };
void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem_SetBit(void* Obj)
{
	((UEnhancedInputDeveloperSettings*)Obj)->bEnableWorldSubsystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem = { "bEnableWorldSubsystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWorldSubsystem_MetaData), NewProp_bEnableWorldSubsystem_MetaData) };
void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs_SetBit(void* Obj)
{
	((UEnhancedInputDeveloperSettings*)Obj)->bShouldLogAllWorldSubsystemInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs = { "bShouldLogAllWorldSubsystemInputs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldLogAllWorldSubsystemInputs_MetaData), NewProp_bShouldLogAllWorldSubsystemInputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_UserSettingsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultPlayerMappableKeyProfileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldInputClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bSendTriggeredEventsWhenInputIsFlushed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableUserSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bLogOnDeprecatedConfigUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::ClassParams = {
	&UEnhancedInputDeveloperSettings::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers),
	0,
	0x009000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.OuterSingleton, Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputDeveloperSettings>()
{
	return UEnhancedInputDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputDeveloperSettings);
UEnhancedInputDeveloperSettings::~UEnhancedInputDeveloperSettings() {}
// End Class UEnhancedInputDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDefaultContextSetting::StaticStruct, Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewStructOps, TEXT("DefaultContextSetting"), &Z_Registration_Info_UScriptStruct_DefaultContextSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultContextSetting), 4074989279U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputDeveloperSettings, UEnhancedInputDeveloperSettings::StaticClass, TEXT("UEnhancedInputDeveloperSettings"), &Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputDeveloperSettings), 3246869398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_2423631662(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
