// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InputState.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRay();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceButtonState();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceRay();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceState();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputRayHit();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FKeyboardInputDeviceState();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMouseInputDeviceState();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Enum EInputDevices
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputDevices;
static UEnum* EInputDevices_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputDevices.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputDevices.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EInputDevices"));
	}
	return Z_Registration_Info_UEnum_EInputDevices.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputDevices>()
{
	return EInputDevices_StaticEnum();
}
struct Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnySpatialDevice.Name", "EInputDevices::AnySpatialDevice" },
		{ "Comment", "/**\n * Input event data can be applicable to many possible input devices.\n * These flags are used to indicate specific or sets of device types.\n */" },
		{ "Gamepad.Name", "EInputDevices::Gamepad" },
		{ "HTCViveWands.Name", "EInputDevices::HTCViveWands" },
		{ "Keyboard.Name", "EInputDevices::Keyboard" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "Mouse.Name", "EInputDevices::Mouse" },
		{ "None.Name", "EInputDevices::None" },
		{ "OculusTouch.Name", "EInputDevices::OculusTouch" },
		{ "TabletFingers.Name", "EInputDevices::TabletFingers" },
		{ "ToolTip", "Input event data can be applicable to many possible input devices.\nThese flags are used to indicate specific or sets of device types." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputDevices::None", (int64)EInputDevices::None },
		{ "EInputDevices::Keyboard", (int64)EInputDevices::Keyboard },
		{ "EInputDevices::Mouse", (int64)EInputDevices::Mouse },
		{ "EInputDevices::Gamepad", (int64)EInputDevices::Gamepad },
		{ "EInputDevices::OculusTouch", (int64)EInputDevices::OculusTouch },
		{ "EInputDevices::HTCViveWands", (int64)EInputDevices::HTCViveWands },
		{ "EInputDevices::AnySpatialDevice", (int64)EInputDevices::AnySpatialDevice },
		{ "EInputDevices::TabletFingers", (int64)EInputDevices::TabletFingers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	"EInputDevices",
	"EInputDevices",
	Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices()
{
	if (!Z_Registration_Info_UEnum_EInputDevices.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputDevices.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputDevices.InnerSingleton;
}
// End Enum EInputDevices

// Begin ScriptStruct FInputRayHit
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputRayHit;
class UScriptStruct* FInputRayHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputRayHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputRayHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputRayHit, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("InputRayHit"));
	}
	return Z_Registration_Info_UScriptStruct_InputRayHit.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FInputRayHit>()
{
	return FInputRayHit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputRayHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * FInputRayHit is returned by various hit-test interface functions.\n * Generally this is intended to be returned as the result of a hit-test with a FInputDeviceRay \n */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "* FInputRayHit is returned by various hit-test interface functions.\n* Generally this is intended to be returned as the result of a hit-test with a FInputDeviceRay" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** true if ray hit something, false otherwise */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "true if ray hit something, false otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDepth_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** distance along ray at which intersection occurred */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "distance along ray at which intersection occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** Normal at hit point, if available */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Normal at hit point, if available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasHitNormal_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** True if HitNormal was set */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "True if HitNormal was set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitIdentifier_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** Client-defined integer identifier for hit object/element/target/etc */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Client-defined integer identifier for hit object/element/target/etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitObject_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/**\n\x09  * Client-defined pointer for UObject-derived hit owners.  \n\x09  * HitOwner and HitObject should be set to the same pointer if the HitOwner derives from UObject. \n\x09  */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Client-defined pointer for UObject-derived hit owners.\nHitOwner and HitObject should be set to the same pointer if the HitOwner derives from UObject." },
	};
#endif // WITH_METADATA
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HitDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static void NewProp_bHasHitNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasHitNormal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitIdentifier;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HitObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputRayHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((FInputRayHit*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputRayHit), &Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHit_MetaData), NewProp_bHit_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitDepth = { "HitDepth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputRayHit, HitDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDepth_MetaData), NewProp_HitDepth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputRayHit, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
void Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal_SetBit(void* Obj)
{
	((FInputRayHit*)Obj)->bHasHitNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal = { "bHasHitNormal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputRayHit), &Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasHitNormal_MetaData), NewProp_bHasHitNormal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitIdentifier = { "HitIdentifier", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputRayHit, HitIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitIdentifier_MetaData), NewProp_HitIdentifier_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitObject = { "HitObject", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputRayHit, HitObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitObject_MetaData), NewProp_HitObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputRayHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputRayHit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"InputRayHit",
	Z_Construct_UScriptStruct_FInputRayHit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::PropPointers),
	sizeof(FInputRayHit),
	alignof(FInputRayHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputRayHit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputRayHit()
{
	if (!Z_Registration_Info_UScriptStruct_InputRayHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputRayHit.InnerSingleton, Z_Construct_UScriptStruct_FInputRayHit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputRayHit.InnerSingleton;
}
// End ScriptStruct FInputRayHit

// Begin ScriptStruct FDeviceButtonState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceButtonState;
class UScriptStruct* FDeviceButtonState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceButtonState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceButtonState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceButtonState, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("DeviceButtonState"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceButtonState.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FDeviceButtonState>()
{
	return FDeviceButtonState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeviceButtonState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Current State of a physical device button (mouse, key, etc) at a point in time.\n * Each \"click\" of a button should involve at minimum two separate state\n * events, one where bPressed=true and one where bReleased=true.\n * Each of these states should occur only once.\n * In addition there may be additional frames where the button is\n * held down and bDown=true and bPressed=false.\n */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Current State of a physical device button (mouse, key, etc) at a point in time.\nEach \"click\" of a button should involve at minimum two separate state\nevents, one where bPressed=true and one where bReleased=true.\nEach of these states should occur only once.\nIn addition there may be additional frames where the button is\nheld down and bDown=true and bPressed=false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "Category", "DeviceButtonState" },
		{ "Comment", "/** Button identifier */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Button identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPressed_MetaData[] = {
		{ "Category", "DeviceButtonState" },
		{ "Comment", "/** Was the button pressed down this frame. This should happen once per \"click\" */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Was the button pressed down this frame. This should happen once per \"click\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDown_MetaData[] = {
		{ "Category", "DeviceButtonState" },
		{ "Comment", "/** Is the button currently pressed down. This should be true every frame the button is pressed. */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Is the button currently pressed down. This should be true every frame the button is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReleased_MetaData[] = {
		{ "Category", "DeviceButtonState" },
		{ "Comment", "/** Was the button released this frame. This should happen once per \"click\" */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Was the button released this frame. This should happen once per \"click\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Button;
	static void NewProp_bPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPressed;
	static void NewProp_bDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDown;
	static void NewProp_bReleased_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReleased;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceButtonState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeviceButtonState, Button), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) }; // 658672854
void Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bPressed_SetBit(void* Obj)
{
	((FDeviceButtonState*)Obj)->bPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bPressed = { "bPressed", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceButtonState), &Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPressed_MetaData), NewProp_bPressed_MetaData) };
void Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bDown_SetBit(void* Obj)
{
	((FDeviceButtonState*)Obj)->bDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bDown = { "bDown", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceButtonState), &Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDown_MetaData), NewProp_bDown_MetaData) };
void Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bReleased_SetBit(void* Obj)
{
	((FDeviceButtonState*)Obj)->bReleased = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bReleased = { "bReleased", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDeviceButtonState), &Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bReleased_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReleased_MetaData), NewProp_bReleased_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceButtonState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewProp_bReleased,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceButtonState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceButtonState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"DeviceButtonState",
	Z_Construct_UScriptStruct_FDeviceButtonState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceButtonState_Statics::PropPointers),
	sizeof(FDeviceButtonState),
	alignof(FDeviceButtonState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceButtonState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceButtonState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceButtonState()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceButtonState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceButtonState.InnerSingleton, Z_Construct_UScriptStruct_FDeviceButtonState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeviceButtonState.InnerSingleton;
}
// End ScriptStruct FDeviceButtonState

// Begin ScriptStruct FKeyboardInputDeviceState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyboardInputDeviceState;
class UScriptStruct* FKeyboardInputDeviceState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyboardInputDeviceState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyboardInputDeviceState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyboardInputDeviceState, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("KeyboardInputDeviceState"));
	}
	return Z_Registration_Info_UScriptStruct_KeyboardInputDeviceState.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FKeyboardInputDeviceState>()
{
	return FKeyboardInputDeviceState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Current state of active keyboard key at a point in time\n * @todo would be useful to track set of active keys\n */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Current state of active keyboard key at a point in time\n@todo would be useful to track set of active keys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveKey_MetaData[] = {
		{ "Category", "KeyboardInputDeviceState" },
		{ "Comment", "/** state of active key that was modified (ie press or release) */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "state of active key that was modified (ie press or release)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyboardInputDeviceState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::NewProp_ActiveKey = { "ActiveKey", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyboardInputDeviceState, ActiveKey), Z_Construct_UScriptStruct_FDeviceButtonState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveKey_MetaData), NewProp_ActiveKey_MetaData) }; // 1187649968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::NewProp_ActiveKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"KeyboardInputDeviceState",
	Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::PropPointers),
	sizeof(FKeyboardInputDeviceState),
	alignof(FKeyboardInputDeviceState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyboardInputDeviceState()
{
	if (!Z_Registration_Info_UScriptStruct_KeyboardInputDeviceState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyboardInputDeviceState.InnerSingleton, Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyboardInputDeviceState.InnerSingleton;
}
// End ScriptStruct FKeyboardInputDeviceState

// Begin ScriptStruct FMouseInputDeviceState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MouseInputDeviceState;
class UScriptStruct* FMouseInputDeviceState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MouseInputDeviceState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MouseInputDeviceState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMouseInputDeviceState, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("MouseInputDeviceState"));
	}
	return Z_Registration_Info_UScriptStruct_MouseInputDeviceState.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FMouseInputDeviceState>()
{
	return FMouseInputDeviceState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Current State of a physical Mouse device at a point in time.\n */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Current State of a physical Mouse device at a point in time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** State of the left mouse button */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "State of the left mouse button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Middle_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** State of the middle mouse button */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "State of the middle mouse button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** State of the right mouse button */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "State of the right mouse button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelDelta_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Change in 'ticks' of the mouse wheel since last state event */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Change in 'ticks' of the mouse wheel since last state event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position2D_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Current 2D position of the mouse, in application-defined coordinate system */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Current 2D position of the mouse, in application-defined coordinate system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta2D_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Change in 2D mouse position from last state event */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Change in 2D mouse position from last state event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRay_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Ray into current 3D scene at current 2D mouse position */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Ray into current 3D scene at current 2D mouse position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Middle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelDelta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Delta2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMouseInputDeviceState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMouseInputDeviceState, Left), Z_Construct_UScriptStruct_FDeviceButtonState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) }; // 1187649968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Middle = { "Middle", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMouseInputDeviceState, Middle), Z_Construct_UScriptStruct_FDeviceButtonState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Middle_MetaData), NewProp_Middle_MetaData) }; // 1187649968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMouseInputDeviceState, Right), Z_Construct_UScriptStruct_FDeviceButtonState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) }; // 1187649968
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_WheelDelta = { "WheelDelta", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMouseInputDeviceState, WheelDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelDelta_MetaData), NewProp_WheelDelta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Position2D = { "Position2D", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMouseInputDeviceState, Position2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position2D_MetaData), NewProp_Position2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Delta2D = { "Delta2D", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMouseInputDeviceState, Delta2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta2D_MetaData), NewProp_Delta2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_WorldRay = { "WorldRay", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMouseInputDeviceState, WorldRay), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRay_MetaData), NewProp_WorldRay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Middle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_WheelDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Position2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_Delta2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewProp_WorldRay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"MouseInputDeviceState",
	Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::PropPointers),
	sizeof(FMouseInputDeviceState),
	alignof(FMouseInputDeviceState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMouseInputDeviceState()
{
	if (!Z_Registration_Info_UScriptStruct_MouseInputDeviceState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MouseInputDeviceState.InnerSingleton, Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MouseInputDeviceState.InnerSingleton;
}
// End ScriptStruct FMouseInputDeviceState

// Begin ScriptStruct FInputDeviceState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputDeviceState;
class UScriptStruct* FInputDeviceState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputDeviceState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputDeviceState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDeviceState, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("InputDeviceState"));
	}
	return Z_Registration_Info_UScriptStruct_InputDeviceState.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FInputDeviceState>()
{
	return FInputDeviceState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputDeviceState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Current state of physical input devices at a point in time.\n * Assumption is that the state refers to a single physical input device,\n * ie InputDevice field is a single value of EInputDevices and not a combination.\n */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Current state of physical input devices at a point in time.\nAssumption is that the state refers to a single physical input device,\nie InputDevice field is a single value of EInputDevices and not a combination." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDevice_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Which InputDevice member is valid in this state */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Which InputDevice member is valid in this state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShiftKeyDown_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Is they keyboard SHIFT modifier key currently pressed down */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Is they keyboard SHIFT modifier key currently pressed down" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAltKeyDown_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Is they keyboard ALT modifier key currently pressed down */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Is they keyboard ALT modifier key currently pressed down" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCtrlKeyDown_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Is they keyboard CTRL modifier key currently pressed down */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Is they keyboard CTRL modifier key currently pressed down" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCmdKeyDown_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Is they keyboard CMD modifier key currently pressed down (only on Apple devices) */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Is they keyboard CMD modifier key currently pressed down (only on Apple devices)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keyboard_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Current state of Keyboard device, if InputDevice == EInputDevices::Keyboard */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Current state of Keyboard device, if InputDevice == EInputDevices::Keyboard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mouse_MetaData[] = {
		{ "Category", "MouseInputDeviceState" },
		{ "Comment", "/** Current state of Mouse device, if InputDevice == EInputDevices::Mouse */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Current state of Mouse device, if InputDevice == EInputDevices::Mouse" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputDevice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputDevice;
	static void NewProp_bShiftKeyDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShiftKeyDown;
	static void NewProp_bAltKeyDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAltKeyDown;
	static void NewProp_bCtrlKeyDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrlKeyDown;
	static void NewProp_bCmdKeyDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCmdKeyDown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keyboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mouse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDeviceState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_InputDevice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_InputDevice = { "InputDevice", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputDeviceState, InputDevice), Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDevice_MetaData), NewProp_InputDevice_MetaData) }; // 3794757482
void Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bShiftKeyDown_SetBit(void* Obj)
{
	((FInputDeviceState*)Obj)->bShiftKeyDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bShiftKeyDown = { "bShiftKeyDown", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDeviceState), &Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bShiftKeyDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShiftKeyDown_MetaData), NewProp_bShiftKeyDown_MetaData) };
void Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bAltKeyDown_SetBit(void* Obj)
{
	((FInputDeviceState*)Obj)->bAltKeyDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bAltKeyDown = { "bAltKeyDown", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDeviceState), &Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bAltKeyDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAltKeyDown_MetaData), NewProp_bAltKeyDown_MetaData) };
void Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCtrlKeyDown_SetBit(void* Obj)
{
	((FInputDeviceState*)Obj)->bCtrlKeyDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCtrlKeyDown = { "bCtrlKeyDown", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDeviceState), &Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCtrlKeyDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCtrlKeyDown_MetaData), NewProp_bCtrlKeyDown_MetaData) };
void Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCmdKeyDown_SetBit(void* Obj)
{
	((FInputDeviceState*)Obj)->bCmdKeyDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCmdKeyDown = { "bCmdKeyDown", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDeviceState), &Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCmdKeyDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCmdKeyDown_MetaData), NewProp_bCmdKeyDown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_Keyboard = { "Keyboard", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputDeviceState, Keyboard), Z_Construct_UScriptStruct_FKeyboardInputDeviceState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keyboard_MetaData), NewProp_Keyboard_MetaData) }; // 2274727779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_Mouse = { "Mouse", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputDeviceState, Mouse), Z_Construct_UScriptStruct_FMouseInputDeviceState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mouse_MetaData), NewProp_Mouse_MetaData) }; // 4026874141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDeviceState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_InputDevice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_InputDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bShiftKeyDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bAltKeyDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCtrlKeyDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_bCmdKeyDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_Keyboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewProp_Mouse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDeviceState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"InputDeviceState",
	Z_Construct_UScriptStruct_FInputDeviceState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceState_Statics::PropPointers),
	sizeof(FInputDeviceState),
	alignof(FInputDeviceState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputDeviceState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceState()
{
	if (!Z_Registration_Info_UScriptStruct_InputDeviceState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputDeviceState.InnerSingleton, Z_Construct_UScriptStruct_FInputDeviceState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputDeviceState.InnerSingleton;
}
// End ScriptStruct FInputDeviceState

// Begin ScriptStruct FInputDeviceRay
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputDeviceRay;
class UScriptStruct* FInputDeviceRay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputDeviceRay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputDeviceRay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDeviceRay, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("InputDeviceRay"));
	}
	return Z_Registration_Info_UScriptStruct_InputDeviceRay.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FInputDeviceRay>()
{
	return FInputDeviceRay::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputDeviceRay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FInputDeviceRay represents a 3D ray created based on an input device.\n * If the device is a 2D input device like a mouse, then the ray may\n * have an associated 2D screen position.\n */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "FInputDeviceRay represents a 3D ray created based on an input device.\nIf the device is a 2D input device like a mouse, then the ray may\nhave an associated 2D screen position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRay_MetaData[] = {
		{ "Category", "InputDeviceRay" },
		{ "Comment", "/** 3D ray in 3D scene, in world coordinates */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "3D ray in 3D scene, in world coordinates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHas2D_MetaData[] = {
		{ "Category", "InputDeviceRay" },
		{ "Comment", "/** If true, WorldRay has 2D device position coordinates */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "If true, WorldRay has 2D device position coordinates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[] = {
		{ "Category", "InputDeviceRay" },
		{ "Comment", "/** 2D device position coordinates associated with the ray */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "2D device position coordinates associated with the ray" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRay;
	static void NewProp_bHas2D_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHas2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDeviceRay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_WorldRay = { "WorldRay", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputDeviceRay, WorldRay), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRay_MetaData), NewProp_WorldRay_MetaData) };
void Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D_SetBit(void* Obj)
{
	((FInputDeviceRay*)Obj)->bHas2D = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D = { "bHas2D", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDeviceRay), &Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHas2D_MetaData), NewProp_bHas2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputDeviceRay, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenPosition_MetaData), NewProp_ScreenPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDeviceRay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_WorldRay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_ScreenPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDeviceRay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"InputDeviceRay",
	Z_Construct_UScriptStruct_FInputDeviceRay_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::PropPointers),
	sizeof(FInputDeviceRay),
	alignof(FInputDeviceRay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputDeviceRay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceRay()
{
	if (!Z_Registration_Info_UScriptStruct_InputDeviceRay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputDeviceRay.InnerSingleton, Z_Construct_UScriptStruct_FInputDeviceRay_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputDeviceRay.InnerSingleton;
}
// End ScriptStruct FInputDeviceRay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputDevices_StaticEnum, TEXT("EInputDevices"), &Z_Registration_Info_UEnum_EInputDevices, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3794757482U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputRayHit::StaticStruct, Z_Construct_UScriptStruct_FInputRayHit_Statics::NewStructOps, TEXT("InputRayHit"), &Z_Registration_Info_UScriptStruct_InputRayHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputRayHit), 712923177U) },
		{ FDeviceButtonState::StaticStruct, Z_Construct_UScriptStruct_FDeviceButtonState_Statics::NewStructOps, TEXT("DeviceButtonState"), &Z_Registration_Info_UScriptStruct_DeviceButtonState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceButtonState), 1187649968U) },
		{ FKeyboardInputDeviceState::StaticStruct, Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics::NewStructOps, TEXT("KeyboardInputDeviceState"), &Z_Registration_Info_UScriptStruct_KeyboardInputDeviceState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyboardInputDeviceState), 2274727779U) },
		{ FMouseInputDeviceState::StaticStruct, Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics::NewStructOps, TEXT("MouseInputDeviceState"), &Z_Registration_Info_UScriptStruct_MouseInputDeviceState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMouseInputDeviceState), 4026874141U) },
		{ FInputDeviceState::StaticStruct, Z_Construct_UScriptStruct_FInputDeviceState_Statics::NewStructOps, TEXT("InputDeviceState"), &Z_Registration_Info_UScriptStruct_InputDeviceState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDeviceState), 65356584U) },
		{ FInputDeviceRay::StaticStruct, Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewStructOps, TEXT("InputDeviceRay"), &Z_Registration_Info_UScriptStruct_InputDeviceRay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDeviceRay), 578076448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_609870828(TEXT("/Script/InteractiveToolsFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
