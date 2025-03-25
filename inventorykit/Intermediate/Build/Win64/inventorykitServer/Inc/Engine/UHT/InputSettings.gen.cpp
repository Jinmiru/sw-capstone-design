// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/InputSettings.h"
#include "Runtime/DeveloperSettings/Public/Engine/PlatformSettings.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings();
DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputPlatformSettings();
ENGINE_API UClass* Z_Construct_UClass_UInputPlatformSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputSettings();
ENGINE_API UClass* Z_Construct_UClass_UInputSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHardwareDeviceIdentifier();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSpeechMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UInputSettings Function AddActionMapping
struct Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics
{
	struct InputSettings_eventAddActionMapping_Parms
	{
		FInputActionKeyMapping KeyMapping;
		bool bForceRebuildKeymaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically add an action mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically add an action mapping to the project defaults" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
	static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventAddActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyMapping_MetaData), NewProp_KeyMapping_MetaData) }; // 3236058125
void Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
{
	((InputSettings_eventAddActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputSettings_eventAddActionMapping_Parms), &Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "AddActionMapping", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::InputSettings_eventAddActionMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::InputSettings_eventAddActionMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_AddActionMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execAddActionMapping)
{
	P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping);
	P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
	P_NATIVE_END;
}
// End Class UInputSettings Function AddActionMapping

// Begin Class UInputSettings Function AddAxisMapping
struct Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics
{
	struct InputSettings_eventAddAxisMapping_Parms
	{
		FInputAxisKeyMapping KeyMapping;
		bool bForceRebuildKeymaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically add an axis mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically add an axis mapping to the project defaults" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
	static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventAddAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyMapping_MetaData), NewProp_KeyMapping_MetaData) }; // 2680743740
void Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
{
	((InputSettings_eventAddAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputSettings_eventAddAxisMapping_Parms), &Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "AddAxisMapping", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::InputSettings_eventAddAxisMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::InputSettings_eventAddAxisMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_AddAxisMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execAddAxisMapping)
{
	P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping);
	P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
	P_NATIVE_END;
}
// End Class UInputSettings Function AddAxisMapping

// Begin Class UInputSettings Function ForceRebuildKeymaps
struct Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When changes are made to the default mappings, push those changes out to PlayerInput key maps */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "When changes are made to the default mappings, push those changes out to PlayerInput key maps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "ForceRebuildKeymaps", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execForceRebuildKeymaps)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceRebuildKeymaps();
	P_NATIVE_END;
}
// End Class UInputSettings Function ForceRebuildKeymaps

// Begin Class UInputSettings Function GetActionMappingByName
struct Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics
{
	struct InputSettings_eventGetActionMappingByName_Parms
	{
		FName InActionName;
		TArray<FInputActionKeyMapping> OutMappings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, InActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActionName_MetaData), NewProp_InActionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings_Inner = { "OutMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings = { "OutMappings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, OutMappings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetActionMappingByName", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::InputSettings_eventGetActionMappingByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::InputSettings_eventGetActionMappingByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_GetActionMappingByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execGetActionMappingByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
	P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_OutMappings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetActionMappingByName(Z_Param_InActionName,Z_Param_Out_OutMappings);
	P_NATIVE_END;
}
// End Class UInputSettings Function GetActionMappingByName

// Begin Class UInputSettings Function GetActionNames
struct Z_Construct_UFunction_UInputSettings_GetActionNames_Statics
{
	struct InputSettings_eventGetActionNames_Parms
	{
		TArray<FName> ActionNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Populate a list of all defined action names */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Populate a list of all defined action names" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames_Inner = { "ActionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames = { "ActionNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventGetActionNames_Parms, ActionNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetActionNames", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::InputSettings_eventGetActionNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::InputSettings_eventGetActionNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_GetActionNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execGetActionNames)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_ActionNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetActionNames(Z_Param_Out_ActionNames);
	P_NATIVE_END;
}
// End Class UInputSettings Function GetActionNames

// Begin Class UInputSettings Function GetAllActionAndAxisNames
#if WITH_EDITOR
struct Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics
{
	struct InputSettings_eventGetAllActionAndAxisNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Returns all known legacy action and axis names that is useful for\n\x09 * properties that you want a drop down selection of the available names\n\x09 * on a UPROPERTY\n\x09 * i.e.\n\x09 *\n\x09 * meta=(GetOptions=\"Engine.InputSettings.GetAllActionAndAxisNames\")\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Returns all known legacy action and axis names that is useful for\nproperties that you want a drop down selection of the available names\non a UPROPERTY\ni.e.\n\nmeta=(GetOptions=\"Engine.InputSettings.GetAllActionAndAxisNames\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventGetAllActionAndAxisNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetAllActionAndAxisNames", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::InputSettings_eventGetAllActionAndAxisNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::InputSettings_eventGetAllActionAndAxisNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UInputSettings::execGetAllActionAndAxisNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UInputSettings::GetAllActionAndAxisNames();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UInputSettings Function GetAllActionAndAxisNames

// Begin Class UInputSettings Function GetAxisMappingByName
struct Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics
{
	struct InputSettings_eventGetAxisMappingByName_Parms
	{
		FName InAxisName;
		TArray<FInputAxisKeyMapping> OutMappings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Retrieve all axis mappings by a certain name. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Retrieve all axis mappings by a certain name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAxisName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName = { "InAxisName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, InAxisName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAxisName_MetaData), NewProp_InAxisName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings_Inner = { "OutMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings = { "OutMappings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, OutMappings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetAxisMappingByName", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::InputSettings_eventGetAxisMappingByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::InputSettings_eventGetAxisMappingByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_GetAxisMappingByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execGetAxisMappingByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InAxisName);
	P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_OutMappings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAxisMappingByName(Z_Param_InAxisName,Z_Param_Out_OutMappings);
	P_NATIVE_END;
}
// End Class UInputSettings Function GetAxisMappingByName

// Begin Class UInputSettings Function GetAxisNames
struct Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics
{
	struct InputSettings_eventGetAxisNames_Parms
	{
		TArray<FName> AxisNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Populate a list of all defined axis names */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Populate a list of all defined axis names" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames_Inner = { "AxisNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames = { "AxisNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventGetAxisNames_Parms, AxisNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetAxisNames", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::InputSettings_eventGetAxisNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::InputSettings_eventGetAxisNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_GetAxisNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execGetAxisNames)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_AxisNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAxisNames(Z_Param_Out_AxisNames);
	P_NATIVE_END;
}
// End Class UInputSettings Function GetAxisNames

// Begin Class UInputSettings Function GetInputSettings
struct Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics
{
	struct InputSettings_eventGetInputSettings_Parms
	{
		UInputSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the game local input settings (action mappings, axis mappings, etc...) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Returns the game local input settings (action mappings, axis mappings, etc...)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventGetInputSettings_Parms, ReturnValue), Z_Construct_UClass_UInputSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetInputSettings", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::InputSettings_eventGetInputSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::InputSettings_eventGetInputSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_GetInputSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execGetInputSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInputSettings**)Z_Param__Result=UInputSettings::GetInputSettings();
	P_NATIVE_END;
}
// End Class UInputSettings Function GetInputSettings

// Begin Class UInputSettings Function RemoveActionMapping
struct Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics
{
	struct InputSettings_eventRemoveActionMapping_Parms
	{
		FInputActionKeyMapping KeyMapping;
		bool bForceRebuildKeymaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically remove an action mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically remove an action mapping to the project defaults" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
	static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventRemoveActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyMapping_MetaData), NewProp_KeyMapping_MetaData) }; // 3236058125
void Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
{
	((InputSettings_eventRemoveActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputSettings_eventRemoveActionMapping_Parms), &Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "RemoveActionMapping", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::InputSettings_eventRemoveActionMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::InputSettings_eventRemoveActionMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_RemoveActionMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execRemoveActionMapping)
{
	P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping);
	P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
	P_NATIVE_END;
}
// End Class UInputSettings Function RemoveActionMapping

// Begin Class UInputSettings Function RemoveAxisMapping
struct Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics
{
	struct InputSettings_eventRemoveAxisMapping_Parms
	{
		FInputAxisKeyMapping KeyMapping;
		bool bForceRebuildKeymaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically remove an axis mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically remove an axis mapping to the project defaults" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
	static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSettings_eventRemoveAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyMapping_MetaData), NewProp_KeyMapping_MetaData) }; // 2680743740
void Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
{
	((InputSettings_eventRemoveAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputSettings_eventRemoveAxisMapping_Parms), &Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "RemoveAxisMapping", nullptr, nullptr, Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::InputSettings_eventRemoveAxisMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::InputSettings_eventRemoveAxisMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSettings_RemoveAxisMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execRemoveAxisMapping)
{
	P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping);
	P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
	P_NATIVE_END;
}
// End Class UInputSettings Function RemoveAxisMapping

// Begin Class UInputSettings Function SaveKeyMappings
struct Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Flush the current mapping values to the config file */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Flush the current mapping values to the config file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "SaveKeyMappings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInputSettings_SaveKeyMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSettings::execSaveKeyMappings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveKeyMappings();
	P_NATIVE_END;
}
// End Class UInputSettings Function SaveKeyMappings

// Begin Class UInputSettings
void UInputSettings::StaticRegisterNativesUInputSettings()
{
	UClass* Class = UInputSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActionMapping", &UInputSettings::execAddActionMapping },
		{ "AddAxisMapping", &UInputSettings::execAddAxisMapping },
		{ "ForceRebuildKeymaps", &UInputSettings::execForceRebuildKeymaps },
		{ "GetActionMappingByName", &UInputSettings::execGetActionMappingByName },
		{ "GetActionNames", &UInputSettings::execGetActionNames },
#if WITH_EDITOR
		{ "GetAllActionAndAxisNames", &UInputSettings::execGetAllActionAndAxisNames },
#endif // WITH_EDITOR
		{ "GetAxisMappingByName", &UInputSettings::execGetAxisMappingByName },
		{ "GetAxisNames", &UInputSettings::execGetAxisNames },
		{ "GetInputSettings", &UInputSettings::execGetInputSettings },
		{ "RemoveActionMapping", &UInputSettings::execRemoveActionMapping },
		{ "RemoveAxisMapping", &UInputSettings::execRemoveAxisMapping },
		{ "SaveKeyMappings", &UInputSettings::execSaveKeyMappings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSettings);
UClass* Z_Construct_UClass_UInputSettings_NoRegister()
{
	return UInputSettings::StaticClass();
}
struct Z_Construct_UClass_UInputSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Project wide settings for input handling\n * \n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "IncludePath", "GameFramework/InputSettings.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Project wide settings for input handling\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisConfig_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Axis Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSettings_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/**\n\x09 * Platform specific settings for Input.\n\x09 * @see UInputPlatformSettings\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Platform specific settings for Input.\n@see UInputPlatformSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAltEnterTogglesFullscreen_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bF11TogglesFullscreen_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMouseForTouch_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// Allow mouse to be used for touch\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Allow mouse to be used for touch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMouseSmoothing_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// Mouse smoothing control\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Mouse smoothing control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFOVScaling_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// Scale the mouse based on the player camera manager's field of view\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Scale the mouse based on the player camera manager's field of view" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureMouseOnLaunch_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "Comment", "/** Controls if the viewport will capture the mouse on Launch of the application */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Controls if the viewport will capture the mouse on Launch of the application" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLegacyInputScales_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Enable the use of legacy input scales on the player controller (InputYawScale, InputPitchScale, and InputRollScale) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Enable the use of legacy input scales on the player controller (InputYawScale, InputPitchScale, and InputRollScale)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMotionControls_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If set to false, then the player controller's InputMotion function will never be called.\n\x09 * This will effectively disable any motion input (tilt, rotation, acceleration, etc) on\n\x09 * the GameViewportClient.\n\x09 * \n\x09 * @see GameViewportClient::InputMotion\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If set to false, then the player controller's InputMotion function will never be called.\nThis will effectively disable any motion input (tilt, rotation, acceleration, etc) on\nthe GameViewportClient.\n\n@see GameViewportClient::InputMotion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterInputByPlatformUser_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If true, then the PlayerController::InputKey function will only process an input event if it\n\x09 * came from an input device that is owned by the PlayerController's Platform User.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If true, then the PlayerController::InputKey function will only process an input event if it\ncame from an input device that is owned by the PlayerController's Platform User." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInputDeviceSubsystem_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If true, then the input device subsystem will be allowed to Initalize when the engine boots.\n\x09 * NOTE: For this setting to take effect, and editor restart is required.\n\x09 * \n\x09 * @see UInputDeviceSubsystem\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If true, then the input device subsystem will be allowed to Initalize when the engine boots.\nNOTE: For this setting to take effect, and editor restart is required.\n\n@see UInputDeviceSubsystem" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFlushPressedKeysOnViewportFocusLost_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If true, then the Player Controller will have it's Pressed Keys flushed when the input mode is changed\n\x09 * to Game and UI mode or the game viewport loses focus. The default behavior is true.\n\x09 * \n\x09 * @see UGameViewportClient::LostFocus\n\x09 * @see APlayerController::ShouldFlushKeysWhenViewportFocusChanges\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If true, then the Player Controller will have it's Pressed Keys flushed when the input mode is changed\nto Game and UI mode or the game viewport loses focus. The default behavior is true.\n\n@see UGameViewportClient::LostFocus\n@see APlayerController::ShouldFlushKeysWhenViewportFocusChanges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDynamicComponentInputBinding_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Should components that are dynamically added via the 'AddComponent' function at runtime have input delegates bound to them?\n\x09 * @see AActor::FinishAddComponent\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Should components that are dynamically added via the 'AddComponent' function at runtime have input delegates bound to them?\n@see AActor::FinishAddComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowTouchInterface_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Should the touch input interface be shown always, or only when the platform has a touch screen? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Should the touch input interface be shown always, or only when the platform has a touch screen?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowConsoleOnFourFingerTap_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Whether or not to show the console on 4 finger tap, on mobile platforms */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Whether or not to show the console on 4 finger tap, on mobile platforms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGestureRecognizer_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Whether or not to use the gesture recognition system to convert touches in to gestures that can be bound and queried */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Whether or not to use the gesture recognition system to convert touches in to gestures that can be bound and queried" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAutocorrect_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** If enabled, virtual keyboards will have autocorrect enabled. Currently only supported on mobile devices. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If enabled, virtual keyboards will have autocorrect enabled. Currently only supported on mobile devices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectOS_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** \n\x09 * Disables autocorrect for these operating systems, even if autocorrect is enabled. Use the format \"[platform] [osversion]\"\n\x09 * (e.g., \"iOS 11.2\" or \"Android 6\"). More specific versions will disable autocorrect for fewer devices (\"iOS 11\" will disable\n\x09 * autocorrect for all devices running iOS 11, but \"iOS 11.2.2\" will not disable autocorrect for devices running 11.2.1).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these operating systems, even if autocorrect is enabled. Use the format \"[platform] [osversion]\"\n(e.g., \"iOS 11.2\" or \"Android 6\"). More specific versions will disable autocorrect for fewer devices (\"iOS 11\" will disable\nautocorrect for all devices running iOS 11, but \"iOS 11.2.2\" will not disable autocorrect for devices running 11.2.1)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectCultures_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** Disables autocorrect for these cultures, even if autocorrect is turned on. These should be ISO-compliant language and country codes, such as \"en\" or \"en-US\". */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these cultures, even if autocorrect is turned on. These should be ISO-compliant language and country codes, such as \"en\" or \"en-US\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectDeviceModels_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** \n\x09 * Disables autocorrect for these device models, even if autocorrect is turned in. Model IDs listed here will match against the start of the device's\n\x09 * model (e.g., \"SM-\" will match all device model IDs that start with \"SM-\"). This is currently only supported on Android devices.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these device models, even if autocorrect is turned in. Model IDs listed here will match against the start of the device's\nmodel (e.g., \"SM-\" will match all device model IDs that start with \"SM-\"). This is currently only supported on Android devices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseCaptureMode_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "Comment", "/** The default mouse capture mode for the game viewport */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse capture mode for the game viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseLockMode_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "Comment", "/** The default mouse lock state behavior when the viewport acquires capture */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse lock state behavior when the viewport acquires capture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVScale_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// The scaling value to multiply the field of view by\n" },
		{ "editcondition", "bEnableFOVScaling" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The scaling value to multiply the field of view by" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleClickTime_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "/** If a key is pressed twice in this amount of time it is considered a \"double click\" */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If a key is pressed twice in this amount of time it is considered a \"double click\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Action Mappings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Action Mappings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Axis Mappings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Axis Mappings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Speech Mappings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Speech Mappings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerInputClass_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Default class type for player input object. May be overridden by player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Default class type for player input object. May be overridden by player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputComponentClass_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Default class type for pawn input components. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Default class type for pawn input components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTouchInterface_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.TouchInterface" },
		{ "Category", "Mobile" },
		{ "Comment", "/** The default on-screen touch input interface for the game (can be null to disable the onscreen interface) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default on-screen touch input interface for the game (can be null to disable the onscreen interface)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleKeys_MetaData[] = {
		{ "Category", "Console" },
		{ "Comment", "/** The keys which open the console. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The keys which open the console." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisConfig_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSettings;
	static void NewProp_bAltEnterTogglesFullscreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAltEnterTogglesFullscreen;
	static void NewProp_bF11TogglesFullscreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bF11TogglesFullscreen;
	static void NewProp_bUseMouseForTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMouseForTouch;
	static void NewProp_bEnableMouseSmoothing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMouseSmoothing;
	static void NewProp_bEnableFOVScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFOVScaling;
	static void NewProp_bCaptureMouseOnLaunch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureMouseOnLaunch;
	static void NewProp_bEnableLegacyInputScales_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLegacyInputScales;
	static void NewProp_bEnableMotionControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMotionControls;
	static void NewProp_bFilterInputByPlatformUser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterInputByPlatformUser;
	static void NewProp_bEnableInputDeviceSubsystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInputDeviceSubsystem;
	static void NewProp_bShouldFlushPressedKeysOnViewportFocusLost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFlushPressedKeysOnViewportFocusLost;
	static void NewProp_bEnableDynamicComponentInputBinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDynamicComponentInputBinding;
	static void NewProp_bAlwaysShowTouchInterface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowTouchInterface;
	static void NewProp_bShowConsoleOnFourFingerTap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConsoleOnFourFingerTap;
	static void NewProp_bEnableGestureRecognizer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGestureRecognizer;
	static void NewProp_bUseAutocorrect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutocorrect;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectOS_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectOS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectCultures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectCultures;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectDeviceModels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectDeviceModels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseCaptureMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseCaptureMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseLockMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseLockMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoubleClickTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeechMappings;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultPlayerInputClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultInputComponentClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTouchInterface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsoleKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputSettings_AddActionMapping, "AddActionMapping" }, // 3436450843
		{ &Z_Construct_UFunction_UInputSettings_AddAxisMapping, "AddAxisMapping" }, // 2170718275
		{ &Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps, "ForceRebuildKeymaps" }, // 1752305090
		{ &Z_Construct_UFunction_UInputSettings_GetActionMappingByName, "GetActionMappingByName" }, // 1173982952
		{ &Z_Construct_UFunction_UInputSettings_GetActionNames, "GetActionNames" }, // 322243399
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UInputSettings_GetAllActionAndAxisNames, "GetAllActionAndAxisNames" }, // 2597699897
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UInputSettings_GetAxisMappingByName, "GetAxisMappingByName" }, // 202474562
		{ &Z_Construct_UFunction_UInputSettings_GetAxisNames, "GetAxisNames" }, // 3599390795
		{ &Z_Construct_UFunction_UInputSettings_GetInputSettings, "GetInputSettings" }, // 887405919
		{ &Z_Construct_UFunction_UInputSettings_RemoveActionMapping, "RemoveActionMapping" }, // 2359471698
		{ &Z_Construct_UFunction_UInputSettings_RemoveAxisMapping, "RemoveAxisMapping" }, // 1742142077
		{ &Z_Construct_UFunction_UInputSettings_SaveKeyMappings, "SaveKeyMappings" }, // 4288205059
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_Inner = { "AxisConfig", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputAxisConfigEntry, METADATA_PARAMS(0, nullptr) }; // 3092975344
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig = { "AxisConfig", nullptr, (EPropertyFlags)0x0010040000004041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, AxisConfig), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisConfig_MetaData), NewProp_AxisConfig_MetaData) }; // 3092975344
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_PlatformSettings = { "PlatformSettings", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, PlatformSettings), Z_Construct_UScriptStruct_FPerPlatformSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformSettings_MetaData), NewProp_PlatformSettings_MetaData) }; // 1467854229
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bAltEnterTogglesFullscreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen = { "bAltEnterTogglesFullscreen", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAltEnterTogglesFullscreen_MetaData), NewProp_bAltEnterTogglesFullscreen_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bF11TogglesFullscreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen = { "bF11TogglesFullscreen", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bF11TogglesFullscreen_MetaData), NewProp_bF11TogglesFullscreen_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bUseMouseForTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch = { "bUseMouseForTouch", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMouseForTouch_MetaData), NewProp_bUseMouseForTouch_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bEnableMouseSmoothing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing = { "bEnableMouseSmoothing", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMouseSmoothing_MetaData), NewProp_bEnableMouseSmoothing_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bEnableFOVScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling = { "bEnableFOVScaling", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFOVScaling_MetaData), NewProp_bEnableFOVScaling_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bCaptureMouseOnLaunch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch = { "bCaptureMouseOnLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureMouseOnLaunch_MetaData), NewProp_bCaptureMouseOnLaunch_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bEnableLegacyInputScales = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales = { "bEnableLegacyInputScales", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLegacyInputScales_MetaData), NewProp_bEnableLegacyInputScales_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bEnableMotionControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls = { "bEnableMotionControls", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMotionControls_MetaData), NewProp_bEnableMotionControls_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bFilterInputByPlatformUser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser = { "bFilterInputByPlatformUser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterInputByPlatformUser_MetaData), NewProp_bFilterInputByPlatformUser_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bEnableInputDeviceSubsystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem = { "bEnableInputDeviceSubsystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableInputDeviceSubsystem_MetaData), NewProp_bEnableInputDeviceSubsystem_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bShouldFlushPressedKeysOnViewportFocusLost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost = { "bShouldFlushPressedKeysOnViewportFocusLost", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldFlushPressedKeysOnViewportFocusLost_MetaData), NewProp_bShouldFlushPressedKeysOnViewportFocusLost_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bEnableDynamicComponentInputBinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding = { "bEnableDynamicComponentInputBinding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDynamicComponentInputBinding_MetaData), NewProp_bEnableDynamicComponentInputBinding_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bAlwaysShowTouchInterface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface = { "bAlwaysShowTouchInterface", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysShowTouchInterface_MetaData), NewProp_bAlwaysShowTouchInterface_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bShowConsoleOnFourFingerTap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap = { "bShowConsoleOnFourFingerTap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowConsoleOnFourFingerTap_MetaData), NewProp_bShowConsoleOnFourFingerTap_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bEnableGestureRecognizer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer = { "bEnableGestureRecognizer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGestureRecognizer_MetaData), NewProp_bEnableGestureRecognizer_MetaData) };
void Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_SetBit(void* Obj)
{
	((UInputSettings*)Obj)->bUseAutocorrect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect = { "bUseAutocorrect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAutocorrect_MetaData), NewProp_bUseAutocorrect_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_Inner = { "ExcludedAutocorrectOS", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS = { "ExcludedAutocorrectOS", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectOS), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedAutocorrectOS_MetaData), NewProp_ExcludedAutocorrectOS_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_Inner = { "ExcludedAutocorrectCultures", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures = { "ExcludedAutocorrectCultures", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectCultures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedAutocorrectCultures_MetaData), NewProp_ExcludedAutocorrectCultures_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_Inner = { "ExcludedAutocorrectDeviceModels", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels = { "ExcludedAutocorrectDeviceModels", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectDeviceModels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedAutocorrectDeviceModels_MetaData), NewProp_ExcludedAutocorrectDeviceModels_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode = { "DefaultViewportMouseCaptureMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultViewportMouseCaptureMode_MetaData), NewProp_DefaultViewportMouseCaptureMode_MetaData) }; // 2576598572
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode = { "DefaultViewportMouseLockMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultViewportMouseLockMode_MetaData), NewProp_DefaultViewportMouseLockMode_MetaData) }; // 2166499711
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale = { "FOVScale", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, FOVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVScale_MetaData), NewProp_FOVScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime = { "DoubleClickTime", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, DoubleClickTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleClickTime_MetaData), NewProp_DoubleClickTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionMappings_MetaData), NewProp_ActionMappings_MetaData) }; // 3236058125
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisMappings_MetaData), NewProp_AxisMappings_MetaData) }; // 2680743740
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_Inner = { "SpeechMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionSpeechMapping, METADATA_PARAMS(0, nullptr) }; // 2109401072
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings = { "SpeechMappings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, SpeechMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechMappings_MetaData), NewProp_SpeechMappings_MetaData) }; // 2109401072
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass = { "DefaultPlayerInputClass", nullptr, (EPropertyFlags)0x0044000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, DefaultPlayerInputClass), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlayerInputClass_MetaData), NewProp_DefaultPlayerInputClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass = { "DefaultInputComponentClass", nullptr, (EPropertyFlags)0x0044000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, DefaultInputComponentClass), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputComponentClass_MetaData), NewProp_DefaultInputComponentClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface = { "DefaultTouchInterface", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, DefaultTouchInterface), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTouchInterface_MetaData), NewProp_DefaultTouchInterface_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_Inner = { "ConsoleKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys = { "ConsoleKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSettings, ConsoleKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsoleKeys_MetaData), NewProp_ConsoleKeys_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_PlatformSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSettings_Statics::ClassParams = {
	&UInputSettings::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::PropPointers),
	0,
	0x008800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSettings()
{
	if (!Z_Registration_Info_UClass_UInputSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSettings.OuterSingleton, Z_Construct_UClass_UInputSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputSettings>()
{
	return UInputSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSettings);
UInputSettings::~UInputSettings() {}
// End Class UInputSettings

// Begin Enum EHardwareDeviceSupportedFeatures
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHardwareDeviceSupportedFeatures;
static UEnum* EHardwareDeviceSupportedFeatures_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHardwareDeviceSupportedFeatures.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHardwareDeviceSupportedFeatures.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHardwareDeviceSupportedFeatures"));
	}
	return Z_Registration_Info_UEnum_EHardwareDeviceSupportedFeatures.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EHardwareDeviceSupportedFeatures::Type>()
{
	return EHardwareDeviceSupportedFeatures_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Acceleration.Comment", "/** This device can track acceleration in the users physical space */" },
		{ "Acceleration.Name", "EHardwareDeviceSupportedFeatures::Acceleration" },
		{ "Acceleration.ToolTip", "This device can track acceleration in the users physical space" },
		{ "All.Comment", "/** A flag for ALL supported device flags */" },
		{ "All.Hidden", "" },
		{ "All.Name", "EHardwareDeviceSupportedFeatures::All" },
		{ "All.ToolTip", "A flag for ALL supported device flags" },
		{ "AudioBasedVibrations.Comment", "/** Does this device support vibrations sourced from an audio file? */" },
		{ "AudioBasedVibrations.Name", "EHardwareDeviceSupportedFeatures::AudioBasedVibrations" },
		{ "AudioBasedVibrations.ToolTip", "Does this device support vibrations sourced from an audio file?" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Camera.Comment", "/** Does this device have a camera on it that we can access? */" },
		{ "Camera.Name", "EHardwareDeviceSupportedFeatures::Camera" },
		{ "Camera.ToolTip", "Does this device have a camera on it that we can access?" },
		{ "Comment", "/**\n * A bitmask of supported features that a hardware device has. \n */" },
		{ "CustomA.Comment", "/** Some custom flags that can be used in your game if you have custom hardware! */" },
		{ "CustomA.Name", "EHardwareDeviceSupportedFeatures::CustomA" },
		{ "CustomA.ToolTip", "Some custom flags that can be used in your game if you have custom hardware!" },
		{ "CustomB.Name", "EHardwareDeviceSupportedFeatures::CustomB" },
		{ "CustomC.Name", "EHardwareDeviceSupportedFeatures::CustomC" },
		{ "CustomD.Name", "EHardwareDeviceSupportedFeatures::CustomD" },
		{ "Drums.Comment", "/** This device has the capabilities of drums (symbols, foot pedal, etc) */" },
		{ "Drums.Name", "EHardwareDeviceSupportedFeatures::Drums" },
		{ "Drums.ToolTip", "This device has the capabilities of drums (symbols, foot pedal, etc)" },
		{ "ForceFeedback.Comment", "/** Flagged true if this device supports force feedback */" },
		{ "ForceFeedback.Name", "EHardwareDeviceSupportedFeatures::ForceFeedback" },
		{ "ForceFeedback.ToolTip", "Flagged true if this device supports force feedback" },
		{ "Gamepad.Comment", "/** This device has basic gamepad support */" },
		{ "Gamepad.Name", "EHardwareDeviceSupportedFeatures::Gamepad" },
		{ "Gamepad.ToolTip", "This device has basic gamepad support" },
		{ "Guitar.Comment", "/** This device has the capabilities of a guitar (whammy bar, tilt, etc) */" },
		{ "Guitar.Name", "EHardwareDeviceSupportedFeatures::Guitar" },
		{ "Guitar.ToolTip", "This device has the capabilities of a guitar (whammy bar, tilt, etc)" },
		{ "Keypress.Comment", "/** This device can support basic key presses */" },
		{ "Keypress.Name", "EHardwareDeviceSupportedFeatures::Keypress" },
		{ "Keypress.ToolTip", "This device can support basic key presses" },
		{ "Lights.Comment", "/** This hardware supports setting a light color (such as an LED light bar) */" },
		{ "Lights.Name", "EHardwareDeviceSupportedFeatures::Lights" },
		{ "Lights.ToolTip", "This hardware supports setting a light color (such as an LED light bar)" },
		{ "Microphone.Comment", "/** This device has a microphone on it that you can get audio from */" },
		{ "Microphone.Name", "EHardwareDeviceSupportedFeatures::Microphone" },
		{ "Microphone.ToolTip", "This device has a microphone on it that you can get audio from" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "MotionTracking.Comment", "/** Can this device track motion in a 3D space? (VR controllers, headset, etc) */" },
		{ "MotionTracking.Name", "EHardwareDeviceSupportedFeatures::MotionTracking" },
		{ "MotionTracking.ToolTip", "Can this device track motion in a 3D space? (VR controllers, headset, etc)" },
		{ "Orientation.Comment", "/** This device can track the orientation in world space, such as a gyroscope */" },
		{ "Orientation.Name", "EHardwareDeviceSupportedFeatures::Orientation" },
		{ "Orientation.ToolTip", "This device can track the orientation in world space, such as a gyroscope" },
		{ "Pointer.Comment", "/** This device can handle basic pointer behavior, such as a mouse */" },
		{ "Pointer.Name", "EHardwareDeviceSupportedFeatures::Pointer" },
		{ "Pointer.ToolTip", "This device can handle basic pointer behavior, such as a mouse" },
		{ "ToolTip", "A bitmask of supported features that a hardware device has." },
		{ "Touch.Comment", "/** This device supports touch in some capactiy (tablet, controller with a touch pad, etc) */" },
		{ "Touch.Name", "EHardwareDeviceSupportedFeatures::Touch" },
		{ "Touch.ToolTip", "This device supports touch in some capactiy (tablet, controller with a touch pad, etc)" },
		{ "TriggerHaptics.Comment", "/** Does this device have trigger haptics available? */" },
		{ "TriggerHaptics.Name", "EHardwareDeviceSupportedFeatures::TriggerHaptics" },
		{ "TriggerHaptics.ToolTip", "Does this device have trigger haptics available?" },
		{ "Unspecified.Comment", "/** A device that has not specified the type  */" },
		{ "Unspecified.Name", "EHardwareDeviceSupportedFeatures::Unspecified" },
		{ "Unspecified.ToolTip", "A device that has not specified the type" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Virtual.Comment", "/** This is a virtual device simulating input, not a physical device */" },
		{ "Virtual.Name", "EHardwareDeviceSupportedFeatures::Virtual" },
		{ "Virtual.ToolTip", "This is a virtual device simulating input, not a physical device" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHardwareDeviceSupportedFeatures::Unspecified", (int64)EHardwareDeviceSupportedFeatures::Unspecified },
		{ "EHardwareDeviceSupportedFeatures::Keypress", (int64)EHardwareDeviceSupportedFeatures::Keypress },
		{ "EHardwareDeviceSupportedFeatures::Pointer", (int64)EHardwareDeviceSupportedFeatures::Pointer },
		{ "EHardwareDeviceSupportedFeatures::Gamepad", (int64)EHardwareDeviceSupportedFeatures::Gamepad },
		{ "EHardwareDeviceSupportedFeatures::Touch", (int64)EHardwareDeviceSupportedFeatures::Touch },
		{ "EHardwareDeviceSupportedFeatures::Camera", (int64)EHardwareDeviceSupportedFeatures::Camera },
		{ "EHardwareDeviceSupportedFeatures::MotionTracking", (int64)EHardwareDeviceSupportedFeatures::MotionTracking },
		{ "EHardwareDeviceSupportedFeatures::Lights", (int64)EHardwareDeviceSupportedFeatures::Lights },
		{ "EHardwareDeviceSupportedFeatures::TriggerHaptics", (int64)EHardwareDeviceSupportedFeatures::TriggerHaptics },
		{ "EHardwareDeviceSupportedFeatures::ForceFeedback", (int64)EHardwareDeviceSupportedFeatures::ForceFeedback },
		{ "EHardwareDeviceSupportedFeatures::AudioBasedVibrations", (int64)EHardwareDeviceSupportedFeatures::AudioBasedVibrations },
		{ "EHardwareDeviceSupportedFeatures::Acceleration", (int64)EHardwareDeviceSupportedFeatures::Acceleration },
		{ "EHardwareDeviceSupportedFeatures::Virtual", (int64)EHardwareDeviceSupportedFeatures::Virtual },
		{ "EHardwareDeviceSupportedFeatures::Microphone", (int64)EHardwareDeviceSupportedFeatures::Microphone },
		{ "EHardwareDeviceSupportedFeatures::Orientation", (int64)EHardwareDeviceSupportedFeatures::Orientation },
		{ "EHardwareDeviceSupportedFeatures::Guitar", (int64)EHardwareDeviceSupportedFeatures::Guitar },
		{ "EHardwareDeviceSupportedFeatures::Drums", (int64)EHardwareDeviceSupportedFeatures::Drums },
		{ "EHardwareDeviceSupportedFeatures::CustomA", (int64)EHardwareDeviceSupportedFeatures::CustomA },
		{ "EHardwareDeviceSupportedFeatures::CustomB", (int64)EHardwareDeviceSupportedFeatures::CustomB },
		{ "EHardwareDeviceSupportedFeatures::CustomC", (int64)EHardwareDeviceSupportedFeatures::CustomC },
		{ "EHardwareDeviceSupportedFeatures::CustomD", (int64)EHardwareDeviceSupportedFeatures::CustomD },
		{ "EHardwareDeviceSupportedFeatures::All", (int64)EHardwareDeviceSupportedFeatures::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EHardwareDeviceSupportedFeatures",
	"EHardwareDeviceSupportedFeatures::Type",
	Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures()
{
	if (!Z_Registration_Info_UEnum_EHardwareDeviceSupportedFeatures.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHardwareDeviceSupportedFeatures.InnerSingleton, Z_Construct_UEnum_Engine_EHardwareDeviceSupportedFeatures_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHardwareDeviceSupportedFeatures.InnerSingleton;
}
// End Enum EHardwareDeviceSupportedFeatures

// Begin Enum EHardwareDevicePrimaryType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHardwareDevicePrimaryType;
static UEnum* EHardwareDevicePrimaryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHardwareDevicePrimaryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHardwareDevicePrimaryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHardwareDevicePrimaryType"));
	}
	return Z_Registration_Info_UEnum_EHardwareDevicePrimaryType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EHardwareDevicePrimaryType>()
{
	return EHardwareDevicePrimaryType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Camera.Name", "EHardwareDevicePrimaryType::Camera" },
		{ "Comment", "/**\n * What is the primary use of an input device type? \n * Each hardware device can only be one primary type.\n */" },
		{ "CustomTypeA.Comment", "// Some custom devices that can be used for your game specific hardware if desired\n" },
		{ "CustomTypeA.Name", "EHardwareDevicePrimaryType::CustomTypeA" },
		{ "CustomTypeA.ToolTip", "Some custom devices that can be used for your game specific hardware if desired" },
		{ "CustomTypeB.Name", "EHardwareDevicePrimaryType::CustomTypeB" },
		{ "CustomTypeC.Name", "EHardwareDevicePrimaryType::CustomTypeC" },
		{ "CustomTypeD.Name", "EHardwareDevicePrimaryType::CustomTypeD" },
		{ "FlightStick.Name", "EHardwareDevicePrimaryType::FlightStick" },
		{ "Gamepad.Name", "EHardwareDevicePrimaryType::Gamepad" },
		{ "Instrument.Name", "EHardwareDevicePrimaryType::Instrument" },
		{ "KeyboardAndMouse.Name", "EHardwareDevicePrimaryType::KeyboardAndMouse" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "MotionTracking.Name", "EHardwareDevicePrimaryType::MotionTracking" },
		{ "RacingWheel.Name", "EHardwareDevicePrimaryType::RacingWheel" },
		{ "ToolTip", "What is the primary use of an input device type?\nEach hardware device can only be one primary type." },
		{ "Touch.Name", "EHardwareDevicePrimaryType::Touch" },
		{ "Unspecified.Name", "EHardwareDevicePrimaryType::Unspecified" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHardwareDevicePrimaryType::Unspecified", (int64)EHardwareDevicePrimaryType::Unspecified },
		{ "EHardwareDevicePrimaryType::KeyboardAndMouse", (int64)EHardwareDevicePrimaryType::KeyboardAndMouse },
		{ "EHardwareDevicePrimaryType::Gamepad", (int64)EHardwareDevicePrimaryType::Gamepad },
		{ "EHardwareDevicePrimaryType::Touch", (int64)EHardwareDevicePrimaryType::Touch },
		{ "EHardwareDevicePrimaryType::MotionTracking", (int64)EHardwareDevicePrimaryType::MotionTracking },
		{ "EHardwareDevicePrimaryType::RacingWheel", (int64)EHardwareDevicePrimaryType::RacingWheel },
		{ "EHardwareDevicePrimaryType::FlightStick", (int64)EHardwareDevicePrimaryType::FlightStick },
		{ "EHardwareDevicePrimaryType::Camera", (int64)EHardwareDevicePrimaryType::Camera },
		{ "EHardwareDevicePrimaryType::Instrument", (int64)EHardwareDevicePrimaryType::Instrument },
		{ "EHardwareDevicePrimaryType::CustomTypeA", (int64)EHardwareDevicePrimaryType::CustomTypeA },
		{ "EHardwareDevicePrimaryType::CustomTypeB", (int64)EHardwareDevicePrimaryType::CustomTypeB },
		{ "EHardwareDevicePrimaryType::CustomTypeC", (int64)EHardwareDevicePrimaryType::CustomTypeC },
		{ "EHardwareDevicePrimaryType::CustomTypeD", (int64)EHardwareDevicePrimaryType::CustomTypeD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EHardwareDevicePrimaryType",
	"EHardwareDevicePrimaryType",
	Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType()
{
	if (!Z_Registration_Info_UEnum_EHardwareDevicePrimaryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHardwareDevicePrimaryType.InnerSingleton, Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHardwareDevicePrimaryType.InnerSingleton;
}
// End Enum EHardwareDevicePrimaryType

// Begin ScriptStruct FHardwareDeviceIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier;
class UScriptStruct* FHardwareDeviceIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HardwareDeviceIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHardwareDeviceIdentifier>()
{
	return FHardwareDeviceIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* An identifier that can be used to determine what input devices are available based on the FInputDeviceScope.\n* These mappings should match a FInputDeviceScope that is used by an IInputDevice\n*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "An identifier that can be used to determine what input devices are available based on the FInputDeviceScope.\nThese mappings should match a FInputDeviceScope that is used by an IInputDevice" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputClassName_MetaData[] = {
		{ "Category", "Hardware" },
		{ "Comment", "/** \n\x09* The name of the Input Class that uses this hardware device.\n\x09* This should correspond with a FInputDeviceScope that is used by an IInputDevice\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The name of the Input Class that uses this hardware device.\nThis should correspond with a FInputDeviceScope that is used by an IInputDevice" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardwareDeviceIdentifier_MetaData[] = {
		{ "Category", "Hardware" },
		{ "Comment", "/**\n\x09 * The name of this hardware device. \n\x09 * This should correspond with a FInputDeviceScope that is used by an IInputDevice\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The name of this hardware device.\nThis should correspond with a FInputDeviceScope that is used by an IInputDevice" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryDeviceType_MetaData[] = {
		{ "Category", "Hardware" },
		{ "Comment", "/** The generic type that this hardware identifies as. This can be used to easily determine behaviors  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The generic type that this hardware identifies as. This can be used to easily determine behaviors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedFeaturesMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Engine.EHardwareDeviceSupportedFeatures" },
		{ "Category", "Hardware" },
		{ "Comment", "/** Flags that represent this hardware device's traits */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Flags that represent this hardware device's traits" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputClassName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HardwareDeviceIdentifier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryDeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryDeviceType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SupportedFeaturesMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHardwareDeviceIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_InputClassName = { "InputClassName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHardwareDeviceIdentifier, InputClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputClassName_MetaData), NewProp_InputClassName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_HardwareDeviceIdentifier = { "HardwareDeviceIdentifier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHardwareDeviceIdentifier, HardwareDeviceIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardwareDeviceIdentifier_MetaData), NewProp_HardwareDeviceIdentifier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_PrimaryDeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_PrimaryDeviceType = { "PrimaryDeviceType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHardwareDeviceIdentifier, PrimaryDeviceType), Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryDeviceType_MetaData), NewProp_PrimaryDeviceType_MetaData) }; // 2367033142
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_SupportedFeaturesMask = { "SupportedFeaturesMask", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHardwareDeviceIdentifier, SupportedFeaturesMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedFeaturesMask_MetaData), NewProp_SupportedFeaturesMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_InputClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_HardwareDeviceIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_PrimaryDeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_PrimaryDeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_SupportedFeaturesMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"HardwareDeviceIdentifier",
	Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::PropPointers),
	sizeof(FHardwareDeviceIdentifier),
	alignof(FHardwareDeviceIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHardwareDeviceIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.InnerSingleton;
}
// End ScriptStruct FHardwareDeviceIdentifier

// Begin Class UInputPlatformSettings Function GetAllHardwareDeviceNames
#if WITH_EDITOR
struct Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics
{
	struct InputPlatformSettings_eventGetAllHardwareDeviceNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Returns an array of Hardware device names from every registered platform ini.\n\x09* For use in the editor so that you can get a list of all known input devices and \n\x09* make device-specific options. For example, you can map any data type to a specific input \n\x09* device\n\x09* \n\x09* UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(GetOptions=\"Engine.InputPlatformSettings.GetAllHardwareDeviceNames\"))\n\x09* TMap<FString, UFooData> DeviceSpecificMap;\n\x09* \n\x09* and the editor will make a nice drop down for you with all the current options that are in the settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Returns an array of Hardware device names from every registered platform ini.\nFor use in the editor so that you can get a list of all known input devices and\nmake device-specific options. For example, you can map any data type to a specific input\ndevice\n\nUPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(GetOptions=\"Engine.InputPlatformSettings.GetAllHardwareDeviceNames\"))\nTMap<FString, UFooData> DeviceSpecificMap;\n\nand the editor will make a nice drop down for you with all the current options that are in the settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputPlatformSettings_eventGetAllHardwareDeviceNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputPlatformSettings, nullptr, "GetAllHardwareDeviceNames", nullptr, nullptr, Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::InputPlatformSettings_eventGetAllHardwareDeviceNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::InputPlatformSettings_eventGetAllHardwareDeviceNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UInputPlatformSettings::execGetAllHardwareDeviceNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UInputPlatformSettings::GetAllHardwareDeviceNames();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UInputPlatformSettings Function GetAllHardwareDeviceNames

// Begin Class UInputPlatformSettings
void UInputPlatformSettings::StaticRegisterNativesUInputPlatformSettings()
{
#if WITH_EDITOR
	UClass* Class = UInputPlatformSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllHardwareDeviceNames", &UInputPlatformSettings::execGetAllHardwareDeviceNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputPlatformSettings);
UClass* Z_Construct_UClass_UInputPlatformSettings_NoRegister()
{
	return UInputPlatformSettings::StaticClass();
}
struct Z_Construct_UClass_UInputPlatformSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Per-Platform input options */" },
		{ "IncludePath", "GameFramework/InputSettings.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Per-Platform input options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerFeedbackPosition_MetaData[] = {
		{ "Category", "Device Properties|Trigger Feedback" },
		{ "Comment", "/**\n\x09 * The maximum position that a trigger can be set to\n\x09 * \n\x09 * @see UInputDeviceTriggerFeedbackProperty\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The maximum position that a trigger can be set to\n\n@see UInputDeviceTriggerFeedbackProperty" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerFeedbackStrength_MetaData[] = {
		{ "Category", "Device Properties|Trigger Feedback" },
		{ "Comment", "/**\n\x09 * The maximum strength that trigger feedback can be set to\n\x09 * \n\x09 * @see UInputDeviceTriggerFeedbackProperty\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The maximum strength that trigger feedback can be set to\n\n@see UInputDeviceTriggerFeedbackProperty" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerVibrationTriggerPosition_MetaData[] = {
		{ "Category", "Device Properties|Trigger Vibration" },
		{ "Comment", "/**\n\x09 * The max position that a vibration trigger effect can be set to.\n\x09 * \n\x09 * @see UInputDeviceTriggerVibrationProperty::GetTriggerPositionValue\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The max position that a vibration trigger effect can be set to.\n\n@see UInputDeviceTriggerVibrationProperty::GetTriggerPositionValue" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerVibrationFrequency_MetaData[] = {
		{ "Category", "Device Properties|Trigger Vibration" },
		{ "Comment", "/**\n\x09 * The max frequency that a trigger vibration can occur\n\x09 * \n\x09 * @see UInputDeviceTriggerVibrationProperty::GetVibrationFrequencyValue\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The max frequency that a trigger vibration can occur\n\n@see UInputDeviceTriggerVibrationProperty::GetVibrationFrequencyValue" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerVibrationAmplitude_MetaData[] = {
		{ "Category", "Device Properties|Trigger Vibration" },
		{ "Comment", "/**\n\x09 * The maximum amplitude that can be set on trigger vibrations\n\x09 * \n\x09 * @see UInputDeviceTriggerVibrationProperty::GetVibrationAmplitudeValue\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The maximum amplitude that can be set on trigger vibrations\n\n@see UInputDeviceTriggerVibrationProperty::GetVibrationAmplitudeValue" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardwareDevices_MetaData[] = {
		{ "Category", "Hardware" },
		{ "Comment", "/** A list of identifiable hardware devices available on this platform */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "A list of identifiable hardware devices available on this platform" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerFeedbackPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerFeedbackStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerVibrationTriggerPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerVibrationFrequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerVibrationAmplitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HardwareDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HardwareDevices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames, "GetAllHardwareDeviceNames" }, // 4281691634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputPlatformSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackPosition = { "MaxTriggerFeedbackPosition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerFeedbackPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTriggerFeedbackPosition_MetaData), NewProp_MaxTriggerFeedbackPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackStrength = { "MaxTriggerFeedbackStrength", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerFeedbackStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTriggerFeedbackStrength_MetaData), NewProp_MaxTriggerFeedbackStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationTriggerPosition = { "MaxTriggerVibrationTriggerPosition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerVibrationTriggerPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTriggerVibrationTriggerPosition_MetaData), NewProp_MaxTriggerVibrationTriggerPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationFrequency = { "MaxTriggerVibrationFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerVibrationFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTriggerVibrationFrequency_MetaData), NewProp_MaxTriggerVibrationFrequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationAmplitude = { "MaxTriggerVibrationAmplitude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerVibrationAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTriggerVibrationAmplitude_MetaData), NewProp_MaxTriggerVibrationAmplitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices_Inner = { "HardwareDevices", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHardwareDeviceIdentifier, METADATA_PARAMS(0, nullptr) }; // 359882396
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices = { "HardwareDevices", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputPlatformSettings, HardwareDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardwareDevices_MetaData), NewProp_HardwareDevices_MetaData) }; // 359882396
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputPlatformSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationTriggerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputPlatformSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlatformSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputPlatformSettings_Statics::ClassParams = {
	&UInputPlatformSettings::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UInputPlatformSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::PropPointers),
	0,
	0x000804A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputPlatformSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputPlatformSettings()
{
	if (!Z_Registration_Info_UClass_UInputPlatformSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputPlatformSettings.OuterSingleton, Z_Construct_UClass_UInputPlatformSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputPlatformSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputPlatformSettings>()
{
	return UInputPlatformSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputPlatformSettings);
UInputPlatformSettings::~UInputPlatformSettings() {}
// End Class UInputPlatformSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHardwareDeviceSupportedFeatures_StaticEnum, TEXT("EHardwareDeviceSupportedFeatures"), &Z_Registration_Info_UEnum_EHardwareDeviceSupportedFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2133085116U) },
		{ EHardwareDevicePrimaryType_StaticEnum, TEXT("EHardwareDevicePrimaryType"), &Z_Registration_Info_UEnum_EHardwareDevicePrimaryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2367033142U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHardwareDeviceIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewStructOps, TEXT("HardwareDeviceIdentifier"), &Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHardwareDeviceIdentifier), 359882396U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputSettings, UInputSettings::StaticClass, TEXT("UInputSettings"), &Z_Registration_Info_UClass_UInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSettings), 217217134U) },
		{ Z_Construct_UClass_UInputPlatformSettings, UInputPlatformSettings::StaticClass, TEXT("UInputPlatformSettings"), &Z_Registration_Info_UClass_UInputPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputPlatformSettings), 1928184428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_1936674108(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
