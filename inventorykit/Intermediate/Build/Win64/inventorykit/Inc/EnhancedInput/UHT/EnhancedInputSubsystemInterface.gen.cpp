// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputSubsystemInterface.h"
#include "EnhancedInput/Public/EnhancedActionKeyMapping.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "EnhancedInput/Public/InputMappingQuery.h"
#include "EnhancedInput/Public/PlayerMappableKeySlot.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputSubsystemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryResult();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FMappingQueryIssue();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FModifyContextOptions();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeySlot();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Enum EInputMappingRebuildType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputMappingRebuildType;
static UEnum* EInputMappingRebuildType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputMappingRebuildType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputMappingRebuildType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EInputMappingRebuildType"));
	}
	return Z_Registration_Info_UEnum_EInputMappingRebuildType.OuterSingleton;
}
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputMappingRebuildType>()
{
	return EInputMappingRebuildType_StaticEnum();
}
struct Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "None.Comment", "// No rebuild required.\n" },
		{ "None.Name", "EInputMappingRebuildType::None" },
		{ "None.ToolTip", "No rebuild required." },
		{ "Rebuild.Comment", "// Standard mapping rebuild. Retains existing triggers and modifiers for actions that were previously mapped.\n" },
		{ "Rebuild.Name", "EInputMappingRebuildType::Rebuild" },
		{ "Rebuild.ToolTip", "Standard mapping rebuild. Retains existing triggers and modifiers for actions that were previously mapped." },
		{ "RebuildWithFlush.Comment", "// If you have made changes to the triggers/modifiers associated with a UInputAction that was previously mapped a flush is required to reset the tracked data for that action.\n" },
		{ "RebuildWithFlush.Name", "EInputMappingRebuildType::RebuildWithFlush" },
		{ "RebuildWithFlush.ToolTip", "If you have made changes to the triggers/modifiers associated with a UInputAction that was previously mapped a flush is required to reset the tracked data for that action." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputMappingRebuildType::None", (int64)EInputMappingRebuildType::None },
		{ "EInputMappingRebuildType::Rebuild", (int64)EInputMappingRebuildType::Rebuild },
		{ "EInputMappingRebuildType::RebuildWithFlush", (int64)EInputMappingRebuildType::RebuildWithFlush },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	"EInputMappingRebuildType",
	"EInputMappingRebuildType",
	Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType()
{
	if (!Z_Registration_Info_UEnum_EInputMappingRebuildType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputMappingRebuildType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputMappingRebuildType.InnerSingleton;
}
// End Enum EInputMappingRebuildType

// Begin ScriptStruct FModifyContextOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifyContextOptions;
class UScriptStruct* FModifyContextOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyContextOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifyContextOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyContextOptions, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("ModifyContextOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ModifyContextOptions.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FModifyContextOptions>()
{
	return FModifyContextOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModifyContextOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Passed in as params for Adding/Remove input contexts */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Passed in as params for Adding/Remove input contexts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If true, then any keys that are \"down\" or \"pressed\" during the rebuild of control mappings will\n\x09 * not be processed by Enhanced Input until after they are \"released\". \n\x09 * \n\x09 * For example, if you are adding a mapping context with a key mapping to \"X\",\n\x09 * and the player is holding down \"X\" while that IMC is added, \n\x09 * there will not be a \"Triggered\" event until the player releases \"X\" and presses it again.\n\x09 * \n\x09 * If this is set to false for the above example, then the \"Triggered\" would fire immediately \n\x09 * as soon as the IMC is finished being added.\n\x09 *\n\x09 * Default: True\n\x09 * \n\x09 * Note: This will only do something for keys bound to boolean Input Action types.\n\x09 * Note: This includes all keys that the player has pressed, not just the keys that are previously mapped in Enhanced Input before\n\x09 * the call to RebuildControlMappings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "If true, then any keys that are \"down\" or \"pressed\" during the rebuild of control mappings will\nnot be processed by Enhanced Input until after they are \"released\".\n\nFor example, if you are adding a mapping context with a key mapping to \"X\",\nand the player is holding down \"X\" while that IMC is added,\nthere will not be a \"Triggered\" event until the player releases \"X\" and presses it again.\n\nIf this is set to false for the above example, then the \"Triggered\" would fire immediately\nas soon as the IMC is finished being added.\n\nDefault: True\n\nNote: This will only do something for keys bound to boolean Input Action types.\nNote: This includes all keys that the player has pressed, not just the keys that are previously mapped in Enhanced Input before\nthe call to RebuildControlMappings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceImmediately_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * The mapping changes will be applied synchronously, rather than at the end of the frame,\n\x09 * making them available to the input system on the same frame.\n\x09 * \n\x09 * This is not recommended to be set to true if you are adding multiple mapping contexts \n\x09 * as it will have poor performance.\n\x09 *\n\x09 * Default: False\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "The mapping changes will be applied synchronously, rather than at the end of the frame,\nmaking them available to the input system on the same frame.\n\nThis is not recommended to be set to true if you are adding multiple mapping contexts\nas it will have poor performance.\n\nDefault: False" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyUserSettings_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If true, then this Mapping Context will be registered or unregistered with the\n\x09 * Enhanced Input User Settings on this subsystem, if they exist.\n\x09 *\n\x09 * Default: False\n\x09 *\n\x09 * Note: You need to enable and configure your UEnhancedInputUserSettings class in the project\n\x09 * settings for this to do anything.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "If true, then this Mapping Context will be registered or unregistered with the\nEnhanced Input User Settings on this subsystem, if they exist.\n\nDefault: False\n\nNote: You need to enable and configure your UEnhancedInputUserSettings class in the project\nsettings for this to do anything." },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnoreAllPressedKeysUntilRelease_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAllPressedKeysUntilRelease;
	static void NewProp_bForceImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceImmediately;
	static void NewProp_bNotifyUserSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyUserSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyContextOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_SetBit(void* Obj)
{
	((FModifyContextOptions*)Obj)->bIgnoreAllPressedKeysUntilRelease = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease = { "bIgnoreAllPressedKeysUntilRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModifyContextOptions), &Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData), NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData) };
void Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_SetBit(void* Obj)
{
	((FModifyContextOptions*)Obj)->bForceImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately = { "bForceImmediately", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModifyContextOptions), &Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceImmediately_MetaData), NewProp_bForceImmediately_MetaData) };
void Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings_SetBit(void* Obj)
{
	((FModifyContextOptions*)Obj)->bNotifyUserSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings = { "bNotifyUserSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FModifyContextOptions), &Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyUserSettings_MetaData), NewProp_bNotifyUserSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bNotifyUserSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"ModifyContextOptions",
	Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers),
	sizeof(FModifyContextOptions),
	alignof(FModifyContextOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifyContextOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifyContextOptions()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyContextOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifyContextOptions.InnerSingleton, Z_Construct_UScriptStruct_FModifyContextOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModifyContextOptions.InnerSingleton;
}
// End ScriptStruct FModifyContextOptions

// Begin Interface UEnhancedInputSubsystemInterface Function AddMappingContext
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics
{
	struct EnhancedInputSubsystemInterface_eventAddMappingContext_Parms
	{
		const UInputMappingContext* MappingContext;
		int32 Priority;
		FModifyContextOptions Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Add a control mapping context.\n\x09 * @param MappingContext\x09\x09""A set of key to action mappings to apply to this player\n\x09 * @param Priority\x09\x09\x09\x09Higher priority mappings will be applied first and, if they consume input, will block lower priority mappings.\n\x09 * @param Options\x09\x09\x09\x09Options to consider when adding this mapping context.\n\x09 */" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Add a control mapping context.\n@param MappingContext                A set of key to action mappings to apply to this player\n@param Priority                              Higher priority mappings will be applied first and, if they consume input, will block lower priority mappings.\n@param Options                               Options to consider when adding this mapping context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContext_MetaData), NewProp_MappingContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddMappingContext_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddMappingContext_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3675162816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "AddMappingContext", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::EnhancedInputSubsystemInterface_eventAddMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::EnhancedInputSubsystemInterface_eventAddMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execAddMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMappingContext(Z_Param_MappingContext,Z_Param_Priority,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function AddMappingContext

// Begin Interface UEnhancedInputSubsystemInterface Function AddPlayerMappableConfig
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics
{
	struct EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms
	{
		const UPlayerMappableInputConfig* Config;
		FModifyContextOptions Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddPlayerMappableConfig has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3675162816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "AddPlayerMappableConfig", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execAddPlayerMappableConfig)
{
	P_GET_OBJECT(UPlayerMappableInputConfig,Z_Param_Config);
	P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayerMappableConfig(Z_Param_Config,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function AddPlayerMappableConfig

// Begin Interface UEnhancedInputSubsystemInterface Function ClearAllMappings
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Remove all applied mapping contexts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Remove all applied mapping contexts." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "ClearAllMappings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execClearAllMappings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllMappings();
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function ClearAllMappings

// Begin Interface UEnhancedInputSubsystemInterface Function GetAllPlayerMappableActionKeyMappings
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics
{
	struct EnhancedInputSubsystemInterface_eventGetAllPlayerMappableActionKeyMappings_Parms
	{
		TArray<FEnhancedActionKeyMapping> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/**\n\x09 * Get an array of the currently applied key mappings that are marked as Player Mappable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Get an array of the currently applied key mappings that are marked as Player Mappable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3589935709
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventGetAllPlayerMappableActionKeyMappings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3589935709
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "GetAllPlayerMappableActionKeyMappings", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::EnhancedInputSubsystemInterface_eventGetAllPlayerMappableActionKeyMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::EnhancedInputSubsystemInterface_eventGetAllPlayerMappableActionKeyMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execGetAllPlayerMappableActionKeyMappings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FEnhancedActionKeyMapping>*)Z_Param__Result=P_THIS->GetAllPlayerMappableActionKeyMappings();
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function GetAllPlayerMappableActionKeyMappings

// Begin Interface UEnhancedInputSubsystemInterface Function GetAllPlayerMappedKeys
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics
{
	struct EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms
	{
		FName MappingName;
		TArray<FKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllPlayerMappedKeys has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "GetAllPlayerMappedKeys", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::EnhancedInputSubsystemInterface_eventGetAllPlayerMappedKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execGetAllPlayerMappedKeys)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FKey>*)Z_Param__Result=P_THIS->GetAllPlayerMappedKeys(Z_Param_MappingName);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function GetAllPlayerMappedKeys

// Begin Interface UEnhancedInputSubsystemInterface Function GetUserSettings
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics
{
	struct EnhancedInputSubsystemInterface_eventGetUserSettings_Parms
	{
		UEnhancedInputUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "DisplayName", "Get Enhanced Input User Settings" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventGetUserSettings_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "GetUserSettings", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::EnhancedInputSubsystemInterface_eventGetUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::EnhancedInputSubsystemInterface_eventGetUserSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execGetUserSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedInputUserSettings**)Z_Param__Result=P_THIS->GetUserSettings();
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function GetUserSettings

// Begin Interface UEnhancedInputSubsystemInterface Function HasMappingContext
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics
{
	struct EnhancedInputSubsystemInterface_eventHasMappingContext_Parms
	{
		const UInputMappingContext* MappingContext;
		int32 OutFoundPriority;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/**\n\x09 * Check if a mapping context is applied to this subsystem's owner.\n\x09 *\n\x09 * @param MappingContext\x09\x09The mapping context to search for on the subsystem's owner.\n\x09 * @param OutFoundPriority\x09\x09The priority of the mapping context if it is applied. -1 if the context is not applied\x09\n\x09 * @return\x09True if the mapping context is applied\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Check if a mapping context is applied to this subsystem's owner.\n\n@param MappingContext                The mapping context to search for on the subsystem's owner.\n@param OutFoundPriority              The priority of the mapping context if it is applied. -1 if the context is not applied\n@return      True if the mapping context is applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutFoundPriority;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventHasMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContext_MetaData), NewProp_MappingContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_OutFoundPriority = { "OutFoundPriority", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventHasMappingContext_Parms, OutFoundPriority), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputSubsystemInterface_eventHasMappingContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputSubsystemInterface_eventHasMappingContext_Parms), &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_OutFoundPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "HasMappingContext", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::EnhancedInputSubsystemInterface_eventHasMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::EnhancedInputSubsystemInterface_eventHasMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execHasMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutFoundPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasMappingContext(Z_Param_MappingContext,Z_Param_Out_OutFoundPriority);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function HasMappingContext

// Begin Interface UEnhancedInputSubsystemInterface Function InjectInputForAction
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics
{
	struct EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms
	{
		const UInputAction* Action;
		FInputActionValue RawValue;
		TArray<UInputModifier*> Modifiers;
		TArray<UInputTrigger*> Triggers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param Action\x09\x09The Input Action to set inject input for\n\x09 * @param RawValue\x09\x09The value to set the action to\n\x09 * @param Modifiers\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param Action                The Input Action to set inject input for\n@param RawValue              The value to set the action to\n@param Modifiers             The modifiers to apply to the injected input.\n@param Triggers              The triggers to apply to the injected input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_RawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputForAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputForAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
	P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
	P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InjectInputForAction(Z_Param_Action,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function InjectInputForAction

// Begin Interface UEnhancedInputSubsystemInterface Function InjectInputForPlayerMapping
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics
{
	struct EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms
	{
		FName MappingName;
		FInputActionValue RawValue;
		TArray<UInputModifier*> Modifiers;
		TArray<UInputTrigger*> Triggers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param MappingName\x09\x09The name of the player mapping that can be used for look up an associated UInputAction object.\n\x09 * @param RawValue\x09\x09\x09The value to set the action to\n\x09 * @param Modifiers\x09\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param MappingName           The name of the player mapping that can be used for look up an associated UInputAction object.\n@param RawValue                      The value to set the action to\n@param Modifiers                     The modifiers to apply to the injected input.\n@param Triggers                      The triggers to apply to the injected input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "GetOptions", "EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_RawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::NewProp_Triggers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputForPlayerMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventInjectInputForPlayerMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputForPlayerMapping)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
	P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
	P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InjectInputForPlayerMapping(Z_Param_MappingName,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function InjectInputForPlayerMapping

// Begin Interface UEnhancedInputSubsystemInterface Function InjectInputVectorForAction
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics
{
	struct EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms
	{
		const UInputAction* Action;
		FVector Value;
		TArray<UInputModifier*> Modifiers;
		TArray<UInputTrigger*> Triggers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param Action\x09\x09The Input Action to set inject input for\n\x09 * @param Value\x09\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 * @param Modifiers\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param Action                The Input Action to set inject input for\n@param Value                 The value to set the action to (the type will be controlled by the Action)\n@param Modifiers             The modifiers to apply to the injected input.\n@param Triggers              The triggers to apply to the injected input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputVectorForAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputVectorForAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
	P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InjectInputVectorForAction(Z_Param_Action,Z_Param_Value,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function InjectInputVectorForAction

// Begin Interface UEnhancedInputSubsystemInterface Function InjectInputVectorForPlayerMapping
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics
{
	struct EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms
	{
		FName MappingName;
		FVector Value;
		TArray<UInputModifier*> Modifiers;
		TArray<UInputTrigger*> Triggers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param MappingName\x09\x09The name of the player mapping that can be used for look up an associated UInputAction object.\n\x09 * @param Value\x09\x09\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 * @param Modifiers\x09\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param MappingName           The name of the player mapping that can be used for look up an associated UInputAction object.\n@param Value                         The value to set the action to (the type will be controlled by the Action)\n@param Modifiers                     The modifiers to apply to the injected input.\n@param Triggers                      The triggers to apply to the injected input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "GetOptions", "EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::NewProp_Triggers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputVectorForPlayerMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventInjectInputVectorForPlayerMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputVectorForPlayerMapping)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
	P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InjectInputVectorForPlayerMapping(Z_Param_MappingName,Z_Param_Value,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function InjectInputVectorForPlayerMapping

// Begin Interface UEnhancedInputSubsystemInterface Function K2_AddPlayerMappedKeyInSlot
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics
{
	struct EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms
	{
		FName MappingName;
		FKey NewKey;
		FPlayerMappableKeySlot KeySlot;
		FModifyContextOptions Options;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "KeySlot, Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_KeySlot", "()" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddPlayerMappedKeyInSlot has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "DisplayName", "Add Player Mapped Key In Slot" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySlot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeySlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewKey_MetaData), NewProp_NewKey_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_KeySlot = { "KeySlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, KeySlot), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySlot_MetaData), NewProp_KeySlot_MetaData) }; // 2870632456
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3675162816
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_NewKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_KeySlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "K2_AddPlayerMappedKeyInSlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_AddPlayerMappedKeyInSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execK2_AddPlayerMappedKeyInSlot)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_GET_STRUCT(FKey,Z_Param_NewKey);
	P_GET_STRUCT_REF(FPlayerMappableKeySlot,Z_Param_Out_KeySlot);
	P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->K2_AddPlayerMappedKeyInSlot(Z_Param_MappingName,Z_Param_NewKey,Z_Param_Out_KeySlot,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function K2_AddPlayerMappedKeyInSlot

// Begin Interface UEnhancedInputSubsystemInterface Function K2_GetPlayerMappedKeyInSlot
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics
{
	struct EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms
	{
		FName MappingName;
		FPlayerMappableKeySlot KeySlot;
		FKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "KeySlot" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_KeySlot", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "K2_GetPlayerMappedKeyInSlot has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "DisplayName", "Get Player Mapped Key In Slot" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeySlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_KeySlot = { "KeySlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms, KeySlot), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySlot_MetaData), NewProp_KeySlot_MetaData) }; // 2870632456
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_KeySlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "K2_GetPlayerMappedKeyInSlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_GetPlayerMappedKeyInSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execK2_GetPlayerMappedKeyInSlot)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_GET_STRUCT_REF(FPlayerMappableKeySlot,Z_Param_Out_KeySlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKey*)Z_Param__Result=P_THIS->K2_GetPlayerMappedKeyInSlot(Z_Param_MappingName,Z_Param_Out_KeySlot);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function K2_GetPlayerMappedKeyInSlot

// Begin Interface UEnhancedInputSubsystemInterface Function K2_RemovePlayerMappedKeyInSlot
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics
{
	struct EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms
	{
		FName MappingName;
		FPlayerMappableKeySlot KeySlot;
		FModifyContextOptions Options;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "KeySlot, Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/**\n\x09 * Removes player mapped key in the KeySlot for mapping of MappingName.\n\x09 * Requests a rebuild of the player mappings.\n\x09 *\n\x09 * @return The number of mappings that have been removed\n\x09 */" },
		{ "CPP_Default_KeySlot", "()" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "K2_RemovePlayerMappedKeyInSlot has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "DisplayName", "Remove Player Mapped Key In Slot" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Removes player mapped key in the KeySlot for mapping of MappingName.\nRequests a rebuild of the player mappings.\n\n@return The number of mappings that have been removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySlot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeySlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_KeySlot = { "KeySlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms, KeySlot), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySlot_MetaData), NewProp_KeySlot_MetaData) }; // 2870632456
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3675162816
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_KeySlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "K2_RemovePlayerMappedKeyInSlot", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::EnhancedInputSubsystemInterface_eventK2_RemovePlayerMappedKeyInSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execK2_RemovePlayerMappedKeyInSlot)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_GET_STRUCT_REF(FPlayerMappableKeySlot,Z_Param_Out_KeySlot);
	P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->K2_RemovePlayerMappedKeyInSlot(Z_Param_MappingName,Z_Param_Out_KeySlot,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function K2_RemovePlayerMappedKeyInSlot

// Begin Interface UEnhancedInputSubsystemInterface Function OnUserKeyProfileChanged
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics
{
	struct EnhancedInputSubsystemInterface_eventOnUserKeyProfileChanged_Parms
	{
		const UEnhancedPlayerMappableKeyProfile* InNewProfile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** A callback for when the user has applied a new mappable key profile. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "A callback for when the user has applied a new mappable key profile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::NewProp_InNewProfile = { "InNewProfile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventOnUserKeyProfileChanged_Parms, InNewProfile), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewProfile_MetaData), NewProp_InNewProfile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::NewProp_InNewProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "OnUserKeyProfileChanged", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::EnhancedInputSubsystemInterface_eventOnUserKeyProfileChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::EnhancedInputSubsystemInterface_eventOnUserKeyProfileChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execOnUserKeyProfileChanged)
{
	P_GET_OBJECT(UEnhancedPlayerMappableKeyProfile,Z_Param_InNewProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUserKeyProfileChanged(Z_Param_InNewProfile);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function OnUserKeyProfileChanged

// Begin Interface UEnhancedInputSubsystemInterface Function OnUserSettingsChanged
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics
{
	struct EnhancedInputSubsystemInterface_eventOnUserSettingsChanged_Parms
	{
		UEnhancedInputUserSettings* Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Callback for when any Enhanced Input user settings have been changed (a new key mapping for example) */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Callback for when any Enhanced Input user settings have been changed (a new key mapping for example)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventOnUserSettingsChanged_Parms, Settings), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "OnUserSettingsChanged", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::EnhancedInputSubsystemInterface_eventOnUserSettingsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::EnhancedInputSubsystemInterface_eventOnUserSettingsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execOnUserSettingsChanged)
{
	P_GET_OBJECT(UEnhancedInputUserSettings,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUserSettingsChanged(Z_Param_Settings);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function OnUserSettingsChanged

// Begin Interface UEnhancedInputSubsystemInterface Function QueryKeysMappedToAction
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics
{
	struct EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms
	{
		const UInputAction* Action;
		TArray<FKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/**\n\x09 * Returns the keys mapped to the given action in the active input mapping contexts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Returns the keys mapped to the given action in the active input mapping contexts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "QueryKeysMappedToAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execQueryKeysMappedToAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FKey>*)Z_Param__Result=P_THIS->QueryKeysMappedToAction(Z_Param_Action);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function QueryKeysMappedToAction

// Begin Interface UEnhancedInputSubsystemInterface Function QueryMapKeyInActiveContextSet
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics
{
	struct EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms
	{
		const UInputMappingContext* InputContext;
		const UInputAction* Action;
		FKey Key;
		TArray<FMappingQueryIssue> OutIssues;
		EMappingQueryIssue BlockingIssues;
		EMappingQueryResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/* = DefaultMappingIssues::StandardFatal*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "= DefaultMappingIssues::StandardFatal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutIssues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIssues;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlockingIssues_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockingIssues;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputContext_MetaData), NewProp_InputContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues_Inner = { "OutIssues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMappingQueryIssue, METADATA_PARAMS(0, nullptr) }; // 186197119
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues = { "OutIssues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, OutIssues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 186197119
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues = { "BlockingIssues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, BlockingIssues), Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue, METADATA_PARAMS(0, nullptr) }; // 3081233225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, ReturnValue), Z_Construct_UEnum_EnhancedInput_EMappingQueryResult, METADATA_PARAMS(0, nullptr) }; // 1462134381
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "QueryMapKeyInActiveContextSet", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execQueryMapKeyInActiveContextSet)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_InputContext);
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_GET_TARRAY_REF(FMappingQueryIssue,Z_Param_Out_OutIssues);
	P_GET_ENUM(EMappingQueryIssue,Z_Param_BlockingIssues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMappingQueryResult*)Z_Param__Result=P_THIS->QueryMapKeyInActiveContextSet(Z_Param_InputContext,Z_Param_Action,Z_Param_Key,Z_Param_Out_OutIssues,EMappingQueryIssue(Z_Param_BlockingIssues));
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function QueryMapKeyInActiveContextSet

// Begin Interface UEnhancedInputSubsystemInterface Function QueryMapKeyInContextSet
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics
{
	struct EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms
	{
		TArray<UInputMappingContext*> PrioritizedActiveContexts;
		const UInputMappingContext* InputContext;
		const UInputAction* Action;
		FKey Key;
		TArray<FMappingQueryIssue> OutIssues;
		EMappingQueryIssue BlockingIssues;
		EMappingQueryResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/* = DefaultMappingIssues::StandardFatal*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "= DefaultMappingIssues::StandardFatal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizedActiveContexts_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrioritizedActiveContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrioritizedActiveContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutIssues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIssues;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlockingIssues_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockingIssues;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_Inner = { "PrioritizedActiveContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts = { "PrioritizedActiveContexts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, PrioritizedActiveContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrioritizedActiveContexts_MetaData), NewProp_PrioritizedActiveContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputContext_MetaData), NewProp_InputContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues_Inner = { "OutIssues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMappingQueryIssue, METADATA_PARAMS(0, nullptr) }; // 186197119
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues = { "OutIssues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, OutIssues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 186197119
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues = { "BlockingIssues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, BlockingIssues), Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue, METADATA_PARAMS(0, nullptr) }; // 3081233225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, ReturnValue), Z_Construct_UEnum_EnhancedInput_EMappingQueryResult, METADATA_PARAMS(0, nullptr) }; // 1462134381
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "QueryMapKeyInContextSet", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execQueryMapKeyInContextSet)
{
	P_GET_TARRAY_REF(UInputMappingContext*,Z_Param_Out_PrioritizedActiveContexts);
	P_GET_OBJECT(UInputMappingContext,Z_Param_InputContext);
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_GET_TARRAY_REF(FMappingQueryIssue,Z_Param_Out_OutIssues);
	P_GET_ENUM(EMappingQueryIssue,Z_Param_BlockingIssues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMappingQueryResult*)Z_Param__Result=P_THIS->QueryMapKeyInContextSet(Z_Param_Out_PrioritizedActiveContexts,Z_Param_InputContext,Z_Param_Action,Z_Param_Key,Z_Param_Out_OutIssues,EMappingQueryIssue(Z_Param_BlockingIssues));
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function QueryMapKeyInContextSet

// Begin Interface UEnhancedInputSubsystemInterface Function RemoveAllPlayerMappedKeys
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics
{
	struct EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeys_Parms
	{
		FModifyContextOptions Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveAllPlayerMappedKeys has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeys_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3675162816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemoveAllPlayerMappedKeys", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemoveAllPlayerMappedKeys)
{
	P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllPlayerMappedKeys(Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function RemoveAllPlayerMappedKeys

// Begin Interface UEnhancedInputSubsystemInterface Function RemoveAllPlayerMappedKeysForMapping
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics
{
	struct EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms
	{
		FName MappingName;
		FModifyContextOptions Options;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "KeySlot, Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveAllPlayerMappedKeysForMapping has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3675162816
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemoveAllPlayerMappedKeysForMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::EnhancedInputSubsystemInterface_eventRemoveAllPlayerMappedKeysForMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemoveAllPlayerMappedKeysForMapping)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveAllPlayerMappedKeysForMapping(Z_Param_MappingName,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function RemoveAllPlayerMappedKeysForMapping

// Begin Interface UEnhancedInputSubsystemInterface Function RemoveMappingContext
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics
{
	struct EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms
	{
		const UInputMappingContext* MappingContext;
		FModifyContextOptions Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Remove a specific control context. \n\x09* This is safe to call even if the context is not applied.\n\x09* @param MappingContext\x09\x09""Context to remove from the player\n\x09* @param Options\x09\x09\x09Options to consider when removing this input mapping context\n\x09*/" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Remove a specific control context.\nThis is safe to call even if the context is not applied.\n@param MappingContext         Context to remove from the player\n@param Options                        Options to consider when removing this input mapping context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContext_MetaData), NewProp_MappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3675162816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemoveMappingContext", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemoveMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
	P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMappingContext(Z_Param_MappingContext,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function RemoveMappingContext

// Begin Interface UEnhancedInputSubsystemInterface Function RemovePlayerMappableConfig
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics
{
	struct EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms
	{
		const UPlayerMappableInputConfig* Config;
		FModifyContextOptions Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "CPP_Default_Options", "()" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemovePlayerMappableConfig has been deprecated, please use UEnhancedInputUserSettings instead." },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3675162816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemovePlayerMappableConfig", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemovePlayerMappableConfig)
{
	P_GET_OBJECT(UPlayerMappableInputConfig,Z_Param_Config);
	P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePlayerMappableConfig(Z_Param_Config,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function RemovePlayerMappableConfig

// Begin Interface UEnhancedInputSubsystemInterface Function RequestRebuildControlMappings
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics
{
	struct EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms
	{
		FModifyContextOptions Options;
		EInputMappingRebuildType RebuildType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Flag player for reapplication of all mapping contexts at the end of this frame.\n\x09* This is called automatically when adding or removing mappings contexts.\n\x09*\n\x09* @param Options\x09\x09Options to consider when removing this input mapping context\n\x09*/" },
		{ "CPP_Default_Options", "()" },
		{ "CPP_Default_RebuildType", "Rebuild" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Flag player for reapplication of all mapping contexts at the end of this frame.\nThis is called automatically when adding or removing mappings contexts.\n\n@param Options                Options to consider when removing this input mapping context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RebuildType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RebuildType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 3675162816
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType = { "RebuildType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms, RebuildType), Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType, METADATA_PARAMS(0, nullptr) }; // 2174930475
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RequestRebuildControlMappings", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRequestRebuildControlMappings)
{
	P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
	P_GET_ENUM(EInputMappingRebuildType,Z_Param_RebuildType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestRebuildControlMappings(Z_Param_Out_Options,EInputMappingRebuildType(Z_Param_RebuildType));
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function RequestRebuildControlMappings

// Begin Interface UEnhancedInputSubsystemInterface Function StartContinuousInputInjectionForAction
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics
{
	struct EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms
	{
		const UInputAction* Action;
		FInputActionValue RawValue;
		TArray<UInputModifier*> Modifiers;
		TArray<UInputTrigger*> Triggers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.\n\x09 *\n\x09 * @param Action\x09\x09The Input Action to set inject input for\n\x09 * @param RawValue\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 * @param Modifiers\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.\n\n@param Action                The Input Action to set inject input for\n@param RawValue              The value to set the action to (the type will be controlled by the Action)\n@param Modifiers             The modifiers to apply to the injected input.\n@param Triggers              The triggers to apply to the injected input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_RawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::NewProp_Triggers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "StartContinuousInputInjectionForAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
	P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
	P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartContinuousInputInjectionForAction(Z_Param_Action,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function StartContinuousInputInjectionForAction

// Begin Interface UEnhancedInputSubsystemInterface Function StartContinuousInputInjectionForPlayerMapping
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics
{
	struct EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms
	{
		FName MappingName;
		FInputActionValue RawValue;
		TArray<UInputModifier*> Modifiers;
		TArray<UInputTrigger*> Triggers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.\n\x09 *\n\x09 * @param MappingName\x09\x09The name of the player mapping that can be used for look up an associated UInputAction object.\n\x09 * @param RawValue\x09\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 * @param Modifiers\x09\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Starts simulation of input via injection. This injects the given input every tick until it is stopped with StopContinuousInputInjectionForAction.\n\n@param MappingName           The name of the player mapping that can be used for look up an associated UInputAction object.\n@param RawValue                      The value to set the action to (the type will be controlled by the Action)\n@param Modifiers                     The modifiers to apply to the injected input.\n@param Triggers                      The triggers to apply to the injected input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "GetOptions", "EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_RawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::NewProp_Triggers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "StartContinuousInputInjectionForPlayerMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventStartContinuousInputInjectionForPlayerMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForPlayerMapping)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
	P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
	P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartContinuousInputInjectionForPlayerMapping(Z_Param_MappingName,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function StartContinuousInputInjectionForPlayerMapping

// Begin Interface UEnhancedInputSubsystemInterface Function StopContinuousInputInjectionForAction
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics
{
	struct EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForAction_Parms
	{
		const UInputAction* Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Stops continuous input injection for the given action.\n\x09 *\n\x09 * @param Action\x09\x09The action to stop injecting input for\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Stops continuous input injection for the given action.\n\n@param Action                The action to stop injecting input for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "StopContinuousInputInjectionForAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopContinuousInputInjectionForAction(Z_Param_Action);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function StopContinuousInputInjectionForAction

// Begin Interface UEnhancedInputSubsystemInterface Function StopContinuousInputInjectionForPlayerMapping
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics
{
	struct EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForPlayerMapping_Parms
	{
		FName MappingName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Stops continuous input injection for the given player mapping name.\n\x09 *\n\x09 * @param MappingName\x09\x09The name of the player mapping that can be used for look up an associated UInputAction object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Stops continuous input injection for the given player mapping name.\n\n@param MappingName           The name of the player mapping that can be used for look up an associated UInputAction object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "GetOptions", "EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForPlayerMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "StopContinuousInputInjectionForPlayerMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForPlayerMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventStopContinuousInputInjectionForPlayerMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForPlayerMapping)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopContinuousInputInjectionForPlayerMapping(Z_Param_MappingName);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function StopContinuousInputInjectionForPlayerMapping

// Begin Interface UEnhancedInputSubsystemInterface Function UpdateValueOfContinuousInputInjectionForAction
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics
{
	struct EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForAction_Parms
	{
		const UInputAction* Action;
		FInputActionValue RawValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Update the value of a continuous input injection, preserving the state of triggers and modifiers.\n\x09 *\n\x09 * @param Action\x09The Input Action to set inject input for\n\x09 * @param RawValue\x09The value to set the action to (the type will be controlled by the Action)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Update the value of a continuous input injection, preserving the state of triggers and modifiers.\n\n@param Action        The Input Action to set inject input for\n@param RawValue      The value to set the action to (the type will be controlled by the Action)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForAction_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::NewProp_RawValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "UpdateValueOfContinuousInputInjectionForAction", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execUpdateValueOfContinuousInputInjectionForAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateValueOfContinuousInputInjectionForAction(Z_Param_Action,Z_Param_RawValue);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function UpdateValueOfContinuousInputInjectionForAction

// Begin Interface UEnhancedInputSubsystemInterface Function UpdateValueOfContinuousInputInjectionForPlayerMapping
struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics
{
	struct EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForPlayerMapping_Parms
	{
		FName MappingName;
		FInputActionValue RawValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Update the value of a continuous input injection for the given player mapping name, preserving the state of triggers and modifiers.\n\x09 *\n\x09 * @param MappingName\x09The name of the player mapping that can be used for look up an associated UInputAction object.\n\x09 * @param RawValue\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Update the value of a continuous input injection for the given player mapping name, preserving the state of triggers and modifiers.\n\n@param MappingName   The name of the player mapping that can be used for look up an associated UInputAction object.\n@param RawValue              The value to set the action to (the type will be controlled by the Action)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "GetOptions", "EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForPlayerMapping_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForPlayerMapping_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(0, nullptr) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::NewProp_RawValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "UpdateValueOfContinuousInputInjectionForPlayerMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForPlayerMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::EnhancedInputSubsystemInterface_eventUpdateValueOfContinuousInputInjectionForPlayerMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execUpdateValueOfContinuousInputInjectionForPlayerMapping)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateValueOfContinuousInputInjectionForPlayerMapping(Z_Param_MappingName,Z_Param_RawValue);
	P_NATIVE_END;
}
// End Interface UEnhancedInputSubsystemInterface Function UpdateValueOfContinuousInputInjectionForPlayerMapping

// Begin Interface UEnhancedInputSubsystemInterface
void UEnhancedInputSubsystemInterface::StaticRegisterNativesUEnhancedInputSubsystemInterface()
{
	UClass* Class = UEnhancedInputSubsystemInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMappingContext", &IEnhancedInputSubsystemInterface::execAddMappingContext },
		{ "AddPlayerMappableConfig", &IEnhancedInputSubsystemInterface::execAddPlayerMappableConfig },
		{ "ClearAllMappings", &IEnhancedInputSubsystemInterface::execClearAllMappings },
		{ "GetAllPlayerMappableActionKeyMappings", &IEnhancedInputSubsystemInterface::execGetAllPlayerMappableActionKeyMappings },
		{ "GetAllPlayerMappedKeys", &IEnhancedInputSubsystemInterface::execGetAllPlayerMappedKeys },
		{ "GetUserSettings", &IEnhancedInputSubsystemInterface::execGetUserSettings },
		{ "HasMappingContext", &IEnhancedInputSubsystemInterface::execHasMappingContext },
		{ "InjectInputForAction", &IEnhancedInputSubsystemInterface::execInjectInputForAction },
		{ "InjectInputForPlayerMapping", &IEnhancedInputSubsystemInterface::execInjectInputForPlayerMapping },
		{ "InjectInputVectorForAction", &IEnhancedInputSubsystemInterface::execInjectInputVectorForAction },
		{ "InjectInputVectorForPlayerMapping", &IEnhancedInputSubsystemInterface::execInjectInputVectorForPlayerMapping },
		{ "K2_AddPlayerMappedKeyInSlot", &IEnhancedInputSubsystemInterface::execK2_AddPlayerMappedKeyInSlot },
		{ "K2_GetPlayerMappedKeyInSlot", &IEnhancedInputSubsystemInterface::execK2_GetPlayerMappedKeyInSlot },
		{ "K2_RemovePlayerMappedKeyInSlot", &IEnhancedInputSubsystemInterface::execK2_RemovePlayerMappedKeyInSlot },
		{ "OnUserKeyProfileChanged", &IEnhancedInputSubsystemInterface::execOnUserKeyProfileChanged },
		{ "OnUserSettingsChanged", &IEnhancedInputSubsystemInterface::execOnUserSettingsChanged },
		{ "QueryKeysMappedToAction", &IEnhancedInputSubsystemInterface::execQueryKeysMappedToAction },
		{ "QueryMapKeyInActiveContextSet", &IEnhancedInputSubsystemInterface::execQueryMapKeyInActiveContextSet },
		{ "QueryMapKeyInContextSet", &IEnhancedInputSubsystemInterface::execQueryMapKeyInContextSet },
		{ "RemoveAllPlayerMappedKeys", &IEnhancedInputSubsystemInterface::execRemoveAllPlayerMappedKeys },
		{ "RemoveAllPlayerMappedKeysForMapping", &IEnhancedInputSubsystemInterface::execRemoveAllPlayerMappedKeysForMapping },
		{ "RemoveMappingContext", &IEnhancedInputSubsystemInterface::execRemoveMappingContext },
		{ "RemovePlayerMappableConfig", &IEnhancedInputSubsystemInterface::execRemovePlayerMappableConfig },
		{ "RequestRebuildControlMappings", &IEnhancedInputSubsystemInterface::execRequestRebuildControlMappings },
		{ "StartContinuousInputInjectionForAction", &IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForAction },
		{ "StartContinuousInputInjectionForPlayerMapping", &IEnhancedInputSubsystemInterface::execStartContinuousInputInjectionForPlayerMapping },
		{ "StopContinuousInputInjectionForAction", &IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForAction },
		{ "StopContinuousInputInjectionForPlayerMapping", &IEnhancedInputSubsystemInterface::execStopContinuousInputInjectionForPlayerMapping },
		{ "UpdateValueOfContinuousInputInjectionForAction", &IEnhancedInputSubsystemInterface::execUpdateValueOfContinuousInputInjectionForAction },
		{ "UpdateValueOfContinuousInputInjectionForPlayerMapping", &IEnhancedInputSubsystemInterface::execUpdateValueOfContinuousInputInjectionForPlayerMapping },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSubsystemInterface);
UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister()
{
	return UEnhancedInputSubsystemInterface::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext, "AddMappingContext" }, // 2569250859
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig, "AddPlayerMappableConfig" }, // 1558284093
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings, "ClearAllMappings" }, // 588939313
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings, "GetAllPlayerMappableActionKeyMappings" }, // 4089013663
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys, "GetAllPlayerMappedKeys" }, // 391076914
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_GetUserSettings, "GetUserSettings" }, // 2409179858
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext, "HasMappingContext" }, // 2128615688
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction, "InjectInputForAction" }, // 4259777539
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping, "InjectInputForPlayerMapping" }, // 2971553654
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction, "InjectInputVectorForAction" }, // 2094103373
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping, "InjectInputVectorForPlayerMapping" }, // 494453613
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot, "K2_AddPlayerMappedKeyInSlot" }, // 193955841
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot, "K2_GetPlayerMappedKeyInSlot" }, // 874239971
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot, "K2_RemovePlayerMappedKeyInSlot" }, // 3916735880
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged, "OnUserKeyProfileChanged" }, // 413268530
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_OnUserSettingsChanged, "OnUserSettingsChanged" }, // 1671487367
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction, "QueryKeysMappedToAction" }, // 791479862
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet, "QueryMapKeyInActiveContextSet" }, // 3938770856
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet, "QueryMapKeyInContextSet" }, // 3735529716
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys, "RemoveAllPlayerMappedKeys" }, // 1429368812
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping, "RemoveAllPlayerMappedKeysForMapping" }, // 2284351146
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext, "RemoveMappingContext" }, // 4043616736
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig, "RemovePlayerMappableConfig" }, // 3076698797
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings, "RequestRebuildControlMappings" }, // 334902299
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction, "StartContinuousInputInjectionForAction" }, // 1066413588
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping, "StartContinuousInputInjectionForPlayerMapping" }, // 3927635054
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction, "StopContinuousInputInjectionForAction" }, // 688803262
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping, "StopContinuousInputInjectionForPlayerMapping" }, // 3074340718
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForAction, "UpdateValueOfContinuousInputInjectionForAction" }, // 2850467187
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_UpdateValueOfContinuousInputInjectionForPlayerMapping, "UpdateValueOfContinuousInputInjectionForPlayerMapping" }, // 3472309631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnhancedInputSubsystemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::ClassParams = {
	&UEnhancedInputSubsystemInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.OuterSingleton, Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputSubsystemInterface>()
{
	return UEnhancedInputSubsystemInterface::StaticClass();
}
UEnhancedInputSubsystemInterface::UEnhancedInputSubsystemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSubsystemInterface);
UEnhancedInputSubsystemInterface::~UEnhancedInputSubsystemInterface() {}
// End Interface UEnhancedInputSubsystemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputMappingRebuildType_StaticEnum, TEXT("EInputMappingRebuildType"), &Z_Registration_Info_UEnum_EInputMappingRebuildType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2174930475U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModifyContextOptions::StaticStruct, Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewStructOps, TEXT("ModifyContextOptions"), &Z_Registration_Info_UScriptStruct_ModifyContextOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyContextOptions), 3675162816U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputSubsystemInterface, UEnhancedInputSubsystemInterface::StaticClass, TEXT("UEnhancedInputSubsystemInterface"), &Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSubsystemInterface), 1027689643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_507981696(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
