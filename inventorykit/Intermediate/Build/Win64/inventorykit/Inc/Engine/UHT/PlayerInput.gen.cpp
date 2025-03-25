// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInput() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlayerInput();
ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSpeechMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyBind();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FKeyBind
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyBind;
class UScriptStruct* FKeyBind::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyBind.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyBind.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyBind, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KeyBind"));
	}
	return Z_Registration_Info_UScriptStruct_KeyBind.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKeyBind>()
{
	return FKeyBind::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyBind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing mappings for legacy method of binding keys to exec commands. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Struct containing mappings for legacy method of binding keys to exec commands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Comment", "/** The key to be bound to the command */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "The key to be bound to the command" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "Comment", "/** The command to execute when the key is pressed/released */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "The command to execute when the key is pressed/released" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Comment", "/** Whether the control key needs to be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the control key needs to be held when the key event occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[] = {
		{ "Comment", "/** Whether the shift key needs to be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the shift key needs to be held when the key event occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alt_MetaData[] = {
		{ "Comment", "/** Whether the alt key needs to be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the alt key needs to be held when the key event occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[] = {
		{ "Comment", "/** Whether the command key needs to be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the command key needs to be held when the key event occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCtrl_MetaData[] = {
		{ "Comment", "/** Whether the control key must not be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the control key must not be held when the key event occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreShift_MetaData[] = {
		{ "Comment", "/** Whether the shift key must not be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the shift key must not be held when the key event occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAlt_MetaData[] = {
		{ "Comment", "/** Whether the alt key must not be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the alt key must not be held when the key event occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCmd_MetaData[] = {
		{ "Comment", "/** Whether the command key must not be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the command key must not be held when the key event occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static void NewProp_Control_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Control;
	static void NewProp_Shift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Shift;
	static void NewProp_Alt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Alt;
	static void NewProp_Cmd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Cmd;
	static void NewProp_bIgnoreCtrl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCtrl;
	static void NewProp_bIgnoreShift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreShift;
	static void NewProp_bIgnoreAlt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAlt;
	static void NewProp_bIgnoreCmd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCmd;
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyBind>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyBind, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyBind, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_SetBit(void* Obj)
{
	((FKeyBind*)Obj)->Control = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_SetBit(void* Obj)
{
	((FKeyBind*)Obj)->Shift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shift_MetaData), NewProp_Shift_MetaData) };
void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_SetBit(void* Obj)
{
	((FKeyBind*)Obj)->Alt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alt_MetaData), NewProp_Alt_MetaData) };
void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_SetBit(void* Obj)
{
	((FKeyBind*)Obj)->Cmd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cmd_MetaData), NewProp_Cmd_MetaData) };
void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_SetBit(void* Obj)
{
	((FKeyBind*)Obj)->bIgnoreCtrl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl = { "bIgnoreCtrl", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreCtrl_MetaData), NewProp_bIgnoreCtrl_MetaData) };
void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_SetBit(void* Obj)
{
	((FKeyBind*)Obj)->bIgnoreShift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift = { "bIgnoreShift", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreShift_MetaData), NewProp_bIgnoreShift_MetaData) };
void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_SetBit(void* Obj)
{
	((FKeyBind*)Obj)->bIgnoreAlt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt = { "bIgnoreAlt", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreAlt_MetaData), NewProp_bIgnoreAlt_MetaData) };
void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_SetBit(void* Obj)
{
	((FKeyBind*)Obj)->bIgnoreCmd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd = { "bIgnoreCmd", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreCmd_MetaData), NewProp_bIgnoreCmd_MetaData) };
void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((FKeyBind*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyBind_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"KeyBind",
	Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers),
	sizeof(FKeyBind),
	alignof(FKeyBind),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyBind_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyBind()
{
	if (!Z_Registration_Info_UScriptStruct_KeyBind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyBind.InnerSingleton, Z_Construct_UScriptStruct_FKeyBind_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyBind.InnerSingleton;
}
// End ScriptStruct FKeyBind

// Begin ScriptStruct FInputAxisProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAxisProperties;
class UScriptStruct* FInputAxisProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAxisProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAxisProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisProperties"));
	}
	return Z_Registration_Info_UScriptStruct_InputAxisProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAxisProperties>()
{
	return FInputAxisProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputAxisProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Configurable properties for control axes, used to transform raw input into game ready values. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Configurable properties for control axes, used to transform raw input into game ready values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadZone_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** What the dead zone of the axis is.  For control axes such as analog sticks. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "What the dead zone of the axis is.  For control axes such as analog sticks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Scaling factor to multiply raw value by. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Scaling factor to multiply raw value by." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** For applying curves to [0..1] axes, e.g. analog sticks */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "For applying curves to [0..1] axes, e.g. analog sticks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Inverts reported values for this axis */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Inverts reported values for this axis" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadZone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Exponent;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone = { "DeadZone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisProperties, DeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadZone_MetaData), NewProp_DeadZone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisProperties, Sensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sensitivity_MetaData), NewProp_Sensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisProperties, Exponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exponent_MetaData), NewProp_Exponent_MetaData) };
void Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FInputAxisProperties*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputAxisProperties), &Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputAxisProperties",
	Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers),
	sizeof(FInputAxisProperties),
	alignof(FInputAxisProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAxisProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAxisProperties()
{
	if (!Z_Registration_Info_UScriptStruct_InputAxisProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAxisProperties.InnerSingleton, Z_Construct_UScriptStruct_FInputAxisProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputAxisProperties.InnerSingleton;
}
// End ScriptStruct FInputAxisProperties

// Begin ScriptStruct FInputAxisConfigEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAxisConfigEntry;
class UScriptStruct* FInputAxisConfigEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisConfigEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisConfigEntry"));
	}
	return Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAxisConfigEntry>()
{
	return FInputAxisConfigEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Configurable properties for control axes. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Configurable properties for control axes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisKeyName_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Axis Key these properties apply to */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Axis Key these properties apply to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisProperties_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Properties for the Axis Key */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Properties for the Axis Key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisKeyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisConfigEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName = { "AxisKeyName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisConfigEntry, AxisKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisKeyName_MetaData), NewProp_AxisKeyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties = { "AxisProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisConfigEntry, AxisProperties), Z_Construct_UScriptStruct_FInputAxisProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisProperties_MetaData), NewProp_AxisProperties_MetaData) }; // 1886399510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputAxisConfigEntry",
	Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers),
	sizeof(FInputAxisConfigEntry),
	alignof(FInputAxisConfigEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry()
{
	if (!Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.InnerSingleton, Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.InnerSingleton;
}
// End ScriptStruct FInputAxisConfigEntry

// Begin ScriptStruct FInputActionKeyMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionKeyMapping;
class UScriptStruct* FInputActionKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionKeyMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputActionKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionKeyMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputActionKeyMapping>()
{
	return FInputActionKeyMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Defines a mapping between an action and key \n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Defines a mapping between an action and key\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Friendly name of action, e.g \"jump\" */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Friendly name of action, e.g \"jump\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** true if one of the Shift keys must be down when the KeyEvent is received to be acknowledged */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Shift keys must be down when the KeyEvent is received to be acknowledged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCtrl_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** true if one of the Ctrl keys must be down when the KeyEvent is received to be acknowledged */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Ctrl keys must be down when the KeyEvent is received to be acknowledged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** true if one of the Alt keys must be down when the KeyEvent is received to be acknowledged */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Alt keys must be down when the KeyEvent is received to be acknowledged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCmd_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** true if one of the Cmd keys must be down when the KeyEvent is received to be acknowledged */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Cmd keys must be down when the KeyEvent is received to be acknowledged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key to bind it to. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Key to bind it to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static void NewProp_bShift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShift;
	static void NewProp_bCtrl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrl;
	static void NewProp_bAlt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlt;
	static void NewProp_bCmd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCmd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionKeyMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionKeyMapping, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_SetBit(void* Obj)
{
	((FInputActionKeyMapping*)Obj)->bShift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShift_MetaData), NewProp_bShift_MetaData) };
void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_SetBit(void* Obj)
{
	((FInputActionKeyMapping*)Obj)->bCtrl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl = { "bCtrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCtrl_MetaData), NewProp_bCtrl_MetaData) };
void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_SetBit(void* Obj)
{
	((FInputActionKeyMapping*)Obj)->bAlt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlt_MetaData), NewProp_bAlt_MetaData) };
void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_SetBit(void* Obj)
{
	((FInputActionKeyMapping*)Obj)->bCmd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd = { "bCmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCmd_MetaData), NewProp_bCmd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputActionKeyMapping",
	Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers),
	sizeof(FInputActionKeyMapping),
	alignof(FInputActionKeyMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionKeyMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputActionKeyMapping.InnerSingleton;
}
// End ScriptStruct FInputActionKeyMapping

// Begin ScriptStruct FInputAxisKeyMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAxisKeyMapping;
class UScriptStruct* FInputAxisKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisKeyMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAxisKeyMapping>()
{
	return FInputAxisKeyMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Defines a mapping between an axis and key \n * \n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n**/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Defines a mapping between an axis and key\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Friendly name of axis, e.g \"MoveForward\" */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Friendly name of axis, e.g \"MoveForward\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Multiplier to use for the mapping when accumulating the axis value */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Multiplier to use for the mapping when accumulating the axis value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key to bind it to. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Key to bind it to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisKeyMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisKeyMapping, AxisName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisName_MetaData), NewProp_AxisName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisKeyMapping, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAxisKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputAxisKeyMapping",
	Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers),
	sizeof(FInputAxisKeyMapping),
	alignof(FInputAxisKeyMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping()
{
	if (!Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.InnerSingleton;
}
// End ScriptStruct FInputAxisKeyMapping

// Begin ScriptStruct FInputActionSpeechMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionSpeechMapping;
class UScriptStruct* FInputActionSpeechMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionSpeechMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputActionSpeechMapping"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputActionSpeechMapping>()
{
	return FInputActionSpeechMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Defines a mapping between an action and speech recognition \n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Defines a mapping between an action and speech recognition\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Friendly name of action, e.g \"jump\" */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Friendly name of action, e.g \"jump\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechKeyword_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key to bind it to. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Key to bind it to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeechKeyword;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionSpeechMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionSpeechMapping, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_SpeechKeyword = { "SpeechKeyword", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionSpeechMapping, SpeechKeyword), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechKeyword_MetaData), NewProp_SpeechKeyword_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_SpeechKeyword,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputActionSpeechMapping",
	Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::PropPointers),
	sizeof(FInputActionSpeechMapping),
	alignof(FInputActionSpeechMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionSpeechMapping()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.InnerSingleton, Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.InnerSingleton;
}
// End ScriptStruct FInputActionSpeechMapping

// Begin Class UPlayerInput Function ClearSmoothing
struct Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Exec function to reset mouse smoothing values */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to reset mouse smoothing values" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "ClearSmoothing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerInput_ClearSmoothing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInput::execClearSmoothing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSmoothing();
	P_NATIVE_END;
}
// End Class UPlayerInput Function ClearSmoothing

// Begin Class UPlayerInput Function GetOuterAPlayerController
struct Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics
{
	struct PlayerInput_eventGetOuterAPlayerController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Return's this object casted to a player controller. This can be null if there is no player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Return's this object casted to a player controller. This can be null if there is no player controller." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInput_eventGetOuterAPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "GetOuterAPlayerController", nullptr, nullptr, Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PlayerInput_eventGetOuterAPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PlayerInput_eventGetOuterAPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInput::execGetOuterAPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetOuterAPlayerController();
	P_NATIVE_END;
}
// End Class UPlayerInput Function GetOuterAPlayerController

// Begin Class UPlayerInput Function InvertAxis
struct Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics
{
	struct PlayerInput_eventInvertAxis_Parms
	{
		FName AxisName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Exec function to invert an axis mapping */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to invert an axis mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInput_eventInvertAxis_Parms, AxisName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisName_MetaData), NewProp_AxisName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "InvertAxis", nullptr, nullptr, Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PlayerInput_eventInvertAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PlayerInput_eventInvertAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInput::execInvertAxis)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvertAxis(Z_Param_AxisName);
	P_NATIVE_END;
}
// End Class UPlayerInput Function InvertAxis

// Begin Class UPlayerInput Function InvertAxisKey
struct Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics
{
	struct PlayerInput_eventInvertAxisKey_Parms
	{
		FKey AxisKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Exec function to invert an axis key */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to invert an axis key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey = { "AxisKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInput_eventInvertAxisKey_Parms, AxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisKey_MetaData), NewProp_AxisKey_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "InvertAxisKey", nullptr, nullptr, Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PlayerInput_eventInvertAxisKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PlayerInput_eventInvertAxisKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxisKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInput::execInvertAxisKey)
{
	P_GET_STRUCT(FKey,Z_Param_AxisKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvertAxisKey(Z_Param_AxisKey);
	P_NATIVE_END;
}
// End Class UPlayerInput Function InvertAxisKey

// Begin Class UPlayerInput Function SetBind
struct Z_Construct_UFunction_UPlayerInput_SetBind_Statics
{
	struct PlayerInput_eventSetBind_Parms
	{
		FName BindName;
		FString Command;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Exec function to add a debug exec command */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to add a debug exec command" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BindName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_BindName = { "BindName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInput_eventSetBind_Parms, BindName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInput_eventSetBind_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_BindName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_SetBind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "SetBind", nullptr, nullptr, Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PlayerInput_eventSetBind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInput_SetBind_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PlayerInput_eventSetBind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInput_SetBind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_SetBind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInput::execSetBind)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BindName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBind(Z_Param_BindName,Z_Param_Command);
	P_NATIVE_END;
}
// End Class UPlayerInput Function SetBind

// Begin Class UPlayerInput Function SetMouseSensitivity
struct Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics
{
	struct PlayerInput_eventSetMouseSensitivity_Parms
	{
		float Sensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Sets both X and Y axis sensitivity to the supplied value. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Sets both X and Y axis sensitivity to the supplied value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInput_eventSetMouseSensitivity_Parms, Sensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sensitivity_MetaData), NewProp_Sensitivity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "SetMouseSensitivity", nullptr, nullptr, Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PlayerInput_eventSetMouseSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PlayerInput_eventSetMouseSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInput::execSetMouseSensitivity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseSensitivity(Z_Param_Sensitivity);
	P_NATIVE_END;
}
// End Class UPlayerInput Function SetMouseSensitivity

// Begin Class UPlayerInput
void UPlayerInput::StaticRegisterNativesUPlayerInput()
{
	UClass* Class = UPlayerInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearSmoothing", &UPlayerInput::execClearSmoothing },
		{ "GetOuterAPlayerController", &UPlayerInput::execGetOuterAPlayerController },
		{ "InvertAxis", &UPlayerInput::execInvertAxis },
		{ "InvertAxisKey", &UPlayerInput::execInvertAxisKey },
		{ "SetBind", &UPlayerInput::execSetBind },
		{ "SetMouseSensitivity", &UPlayerInput::execSetMouseSensitivity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInput);
UClass* Z_Construct_UClass_UPlayerInput_NoRegister()
{
	return UPlayerInput::StaticClass();
}
struct Z_Construct_UClass_UPlayerInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object within PlayerController that processes player input.\n * Only exists on the client in network games.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "IncludePath", "GameFramework/PlayerInput.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Object within PlayerController that processes player input.\nOnly exists on the client in network games.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugExecBindings_MetaData[] = {
		{ "Comment", "/** Generic bindings of keys to Exec()-compatible strings for development purposes only */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Generic bindings of keys to Exec()-compatible strings for development purposes only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertedAxis_MetaData[] = {
		{ "Comment", "/** List of Axis Mappings that have been inverted */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "List of Axis Mappings that have been inverted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugExecBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugExecBindings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InvertedAxis_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InvertedAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInput_ClearSmoothing, "ClearSmoothing" }, // 1424387980
		{ &Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController, "GetOuterAPlayerController" }, // 4272977672
		{ &Z_Construct_UFunction_UPlayerInput_InvertAxis, "InvertAxis" }, // 3809444050
		{ &Z_Construct_UFunction_UPlayerInput_InvertAxisKey, "InvertAxisKey" }, // 2622524516
		{ &Z_Construct_UFunction_UPlayerInput_SetBind, "SetBind" }, // 1269377788
		{ &Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity, "SetMouseSensitivity" }, // 4121846259
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_Inner = { "DebugExecBindings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyBind, METADATA_PARAMS(0, nullptr) }; // 1642713908
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings = { "DebugExecBindings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInput, DebugExecBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugExecBindings_MetaData), NewProp_DebugExecBindings_MetaData) }; // 1642713908
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_Inner = { "InvertedAxis", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis = { "InvertedAxis", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInput, InvertedAxis), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertedAxis_MetaData), NewProp_InvertedAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInput_Statics::ClassParams = {
	&UPlayerInput::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerInput()
{
	if (!Z_Registration_Info_UClass_UPlayerInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInput.OuterSingleton, Z_Construct_UClass_UPlayerInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPlayerInput>()
{
	return UPlayerInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInput);
UPlayerInput::~UPlayerInput() {}
// End Class UPlayerInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKeyBind::StaticStruct, Z_Construct_UScriptStruct_FKeyBind_Statics::NewStructOps, TEXT("KeyBind"), &Z_Registration_Info_UScriptStruct_KeyBind, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyBind), 1642713908U) },
		{ FInputAxisProperties::StaticStruct, Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewStructOps, TEXT("InputAxisProperties"), &Z_Registration_Info_UScriptStruct_InputAxisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAxisProperties), 1886399510U) },
		{ FInputAxisConfigEntry::StaticStruct, Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewStructOps, TEXT("InputAxisConfigEntry"), &Z_Registration_Info_UScriptStruct_InputAxisConfigEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAxisConfigEntry), 3092975344U) },
		{ FInputActionKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewStructOps, TEXT("InputActionKeyMapping"), &Z_Registration_Info_UScriptStruct_InputActionKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionKeyMapping), 3236058125U) },
		{ FInputAxisKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewStructOps, TEXT("InputAxisKeyMapping"), &Z_Registration_Info_UScriptStruct_InputAxisKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAxisKeyMapping), 2680743740U) },
		{ FInputActionSpeechMapping::StaticStruct, Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewStructOps, TEXT("InputActionSpeechMapping"), &Z_Registration_Info_UScriptStruct_InputActionSpeechMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionSpeechMapping), 2109401072U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInput, UPlayerInput::StaticClass, TEXT("UPlayerInput"), &Z_Registration_Info_UClass_UPlayerInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInput), 3199252041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_106846006(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
