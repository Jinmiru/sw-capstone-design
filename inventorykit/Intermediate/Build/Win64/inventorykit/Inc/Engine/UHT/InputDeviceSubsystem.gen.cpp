// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/InputDeviceSubsystem.h"
#include "Runtime/Engine/Classes/GameFramework/InputDevicePropertyHandle.h"
#include "Runtime/Engine/Classes/GameFramework/InputSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDeviceSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceSubsystem_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActivateDevicePropertyParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveDeviceProperty();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHardwareDeviceIdentifier();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDevicePropertyHandle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FActivateDevicePropertyParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActivateDevicePropertyParams;
class UScriptStruct* FActivateDevicePropertyParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActivateDevicePropertyParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActivateDevicePropertyParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActivateDevicePropertyParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActivateDevicePropertyParams"));
	}
	return Z_Registration_Info_UScriptStruct_ActivateDevicePropertyParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActivateDevicePropertyParams>()
{
	return FActivateDevicePropertyParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters for the UInputDeviceSubsystem::ActivateDeviceProperty function */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "Parameters for the UInputDeviceSubsystem::ActivateDeviceProperty function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "Category", "Activation Options" },
		{ "Comment", "/** The Platform User whose device's should receive the device property */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "The Platform User whose device's should receive the device property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "Category", "Activation Options" },
		{ "Comment", "/** \n\x09* The Input Device that should receive the device property. If nothing is specified here,\n\x09* then the Platform User's default input device will be used. \n\x09* \n\x09* The default input device is obtained from IPlatformInputDeviceMapper::GetPrimaryInputDeviceForUser\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "The Input Device that should receive the device property. If nothing is specified here,\nthen the Platform User's default input device will be used.\n\nThe default input device is obtained from IPlatformInputDeviceMapper::GetPrimaryInputDeviceForUser" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Activation Options" },
		{ "Comment", "/**\n\x09* If true, then the input device property will not be removed after it's evaluation time has completed.\n\x09* Instead, it will remain active until manually removed with a RemoveDeviceProperty call.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "If true, then the input device property will not be removed after it's evaluation time has completed.\nInstead, it will remain active until manually removed with a RemoveDeviceProperty call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "Activation Options" },
		{ "Comment", "/** If true, then this device property will ignore dilated delta time and use the Applications delta time instead */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "If true, then this device property will ignore dilated delta time and use the Applications delta time instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayWhilePaused_MetaData[] = {
		{ "Category", "Activation Options" },
		{ "Comment", "/** If true, then this device property will be played even if the game world is paused. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "If true, then this device property will be played even if the game world is paused." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
	static void NewProp_bPlayWhilePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayWhilePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActivateDevicePropertyParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActivateDevicePropertyParams, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActivateDevicePropertyParams, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
void Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((FActivateDevicePropertyParams*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FActivateDevicePropertyParams), &Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
{
	((FActivateDevicePropertyParams*)Obj)->bIgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FActivateDevicePropertyParams), &Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData), NewProp_bIgnoreTimeDilation_MetaData) };
void Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bPlayWhilePaused_SetBit(void* Obj)
{
	((FActivateDevicePropertyParams*)Obj)->bPlayWhilePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bPlayWhilePaused = { "bPlayWhilePaused", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FActivateDevicePropertyParams), &Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bPlayWhilePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayWhilePaused_MetaData), NewProp_bPlayWhilePaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bIgnoreTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewProp_bPlayWhilePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActivateDevicePropertyParams",
	Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::PropPointers),
	sizeof(FActivateDevicePropertyParams),
	alignof(FActivateDevicePropertyParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActivateDevicePropertyParams()
{
	if (!Z_Registration_Info_UScriptStruct_ActivateDevicePropertyParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActivateDevicePropertyParams.InnerSingleton, Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActivateDevicePropertyParams.InnerSingleton;
}
// End ScriptStruct FActivateDevicePropertyParams

// Begin ScriptStruct FActiveDeviceProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveDeviceProperty;
class UScriptStruct* FActiveDeviceProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveDeviceProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveDeviceProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveDeviceProperty, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActiveDeviceProperty"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveDeviceProperty.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActiveDeviceProperty>()
{
	return FActiveDeviceProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains a pointer to an active device property and keeps track of how long it has been evaluated for */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "Contains a pointer to an active device property and keeps track of how long it has been evaluated for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "Comment", "/** The active device property */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "The active device property" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Property;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveDeviceProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveDeviceProperty, Property), Z_Construct_UClass_UInputDeviceProperty_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::NewProp_Property,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActiveDeviceProperty",
	Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::PropPointers),
	sizeof(FActiveDeviceProperty),
	alignof(FActiveDeviceProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveDeviceProperty()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveDeviceProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveDeviceProperty.InnerSingleton, Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveDeviceProperty.InnerSingleton;
}
// End ScriptStruct FActiveDeviceProperty

// Begin Delegate FHardwareInputDeviceChanged
struct Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct _Script_Engine_eventHardwareInputDeviceChanged_Parms
	{
		FPlatformUserId UserId;
		FInputDeviceId DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Delegate called when a user changed the hardware they are using for input.\n *\n * @param UserId\x09\x09The Platform user whose device has changed\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "Delegate called when a user changed the hardware they are using for input.\n\n@param UserId               The Platform user whose device has changed" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventHardwareInputDeviceChanged_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventHardwareInputDeviceChanged_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "HardwareInputDeviceChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::_Script_Engine_eventHardwareInputDeviceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::_Script_Engine_eventHardwareInputDeviceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHardwareInputDeviceChanged_DelegateWrapper(const FMulticastScriptDelegate& HardwareInputDeviceChanged, const FPlatformUserId UserId, const FInputDeviceId DeviceId)
{
	struct _Script_Engine_eventHardwareInputDeviceChanged_Parms
	{
		FPlatformUserId UserId;
		FInputDeviceId DeviceId;
	};
	_Script_Engine_eventHardwareInputDeviceChanged_Parms Parms;
	Parms.UserId=UserId;
	Parms.DeviceId=DeviceId;
	HardwareInputDeviceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FHardwareInputDeviceChanged

// Begin Class UInputDeviceSubsystem Function ActivateDevicePropertyOfClass
struct Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics
{
	struct InputDeviceSubsystem_eventActivateDevicePropertyOfClass_Parms
	{
		TSubclassOf<UInputDeviceProperty> PropertyClass;
		FActivateDevicePropertyParams Params;
		FInputDevicePropertyHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Params" },
		{ "Category", "Input Devices" },
		{ "Comment", "/** Spawn a new instance of the given device property class and activate it. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ReturnDisplayName", "Device Property Handle" },
		{ "ToolTip", "Spawn a new instance of the given device property class and activate it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PropertyClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventActivateDevicePropertyOfClass_Parms, PropertyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInputDeviceProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventActivateDevicePropertyOfClass_Parms, Params), Z_Construct_UScriptStruct_FActivateDevicePropertyParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 1805145070
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventActivateDevicePropertyOfClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(0, nullptr) }; // 158936348
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::NewProp_PropertyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceSubsystem, nullptr, "ActivateDevicePropertyOfClass", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::InputDeviceSubsystem_eventActivateDevicePropertyOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::InputDeviceSubsystem_eventActivateDevicePropertyOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceSubsystem::execActivateDevicePropertyOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_PropertyClass);
	P_GET_STRUCT_REF(FActivateDevicePropertyParams,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDevicePropertyHandle*)Z_Param__Result=P_THIS->ActivateDevicePropertyOfClass(Z_Param_PropertyClass,Z_Param_Out_Params);
	P_NATIVE_END;
}
// End Class UInputDeviceSubsystem Function ActivateDevicePropertyOfClass

// Begin Class UInputDeviceSubsystem Function GetActiveDeviceProperty
struct Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics
{
	struct InputDeviceSubsystem_eventGetActiveDeviceProperty_Parms
	{
		FInputDevicePropertyHandle Handle;
		UInputDeviceProperty* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/** Returns a pointer to the active input device property with the given handle. Returns null if the property doesn't exist */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ReturnDisplayName", "Device Property" },
		{ "ToolTip", "Returns a pointer to the active input device property with the given handle. Returns null if the property doesn't exist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventGetActiveDeviceProperty_Parms, Handle), Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 158936348
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventGetActiveDeviceProperty_Parms, ReturnValue), Z_Construct_UClass_UInputDeviceProperty_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceSubsystem, nullptr, "GetActiveDeviceProperty", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::InputDeviceSubsystem_eventGetActiveDeviceProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::InputDeviceSubsystem_eventGetActiveDeviceProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceSubsystem::execGetActiveDeviceProperty)
{
	P_GET_STRUCT(FInputDevicePropertyHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInputDeviceProperty**)Z_Param__Result=P_THIS->GetActiveDeviceProperty(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UInputDeviceSubsystem Function GetActiveDeviceProperty

// Begin Class UInputDeviceSubsystem Function GetInputDeviceHardwareIdentifier
struct Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct InputDeviceSubsystem_eventGetInputDeviceHardwareIdentifier_Parms
	{
		FInputDeviceId InputDevice;
		FHardwareDeviceIdentifier ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDevice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputDevice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::NewProp_InputDevice = { "InputDevice", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventGetInputDeviceHardwareIdentifier_Parms, InputDevice), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDevice_MetaData), NewProp_InputDevice_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventGetInputDeviceHardwareIdentifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FHardwareDeviceIdentifier, METADATA_PARAMS(0, nullptr) }; // 359882396
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::NewProp_InputDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceSubsystem, nullptr, "GetInputDeviceHardwareIdentifier", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::InputDeviceSubsystem_eventGetInputDeviceHardwareIdentifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::InputDeviceSubsystem_eventGetInputDeviceHardwareIdentifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceSubsystem::execGetInputDeviceHardwareIdentifier)
{
	P_GET_STRUCT(FInputDeviceId,Z_Param_InputDevice);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHardwareDeviceIdentifier*)Z_Param__Result=P_THIS->GetInputDeviceHardwareIdentifier(Z_Param_InputDevice);
	P_NATIVE_END;
}
// End Class UInputDeviceSubsystem Function GetInputDeviceHardwareIdentifier

// Begin Class UInputDeviceSubsystem Function GetMostRecentlyUsedHardwareDevice
struct Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct InputDeviceSubsystem_eventGetMostRecentlyUsedHardwareDevice_Parms
	{
		FPlatformUserId InUserId;
		FHardwareDeviceIdentifier ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/** Gets the most recently used hardware input device for the given platform user */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "Gets the most recently used hardware input device for the given platform user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventGetMostRecentlyUsedHardwareDevice_Parms, InUserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUserId_MetaData), NewProp_InUserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventGetMostRecentlyUsedHardwareDevice_Parms, ReturnValue), Z_Construct_UScriptStruct_FHardwareDeviceIdentifier, METADATA_PARAMS(0, nullptr) }; // 359882396
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::NewProp_InUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceSubsystem, nullptr, "GetMostRecentlyUsedHardwareDevice", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::InputDeviceSubsystem_eventGetMostRecentlyUsedHardwareDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::InputDeviceSubsystem_eventGetMostRecentlyUsedHardwareDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceSubsystem::execGetMostRecentlyUsedHardwareDevice)
{
	P_GET_STRUCT(FPlatformUserId,Z_Param_InUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHardwareDeviceIdentifier*)Z_Param__Result=P_THIS->GetMostRecentlyUsedHardwareDevice(Z_Param_InUserId);
	P_NATIVE_END;
}
// End Class UInputDeviceSubsystem Function GetMostRecentlyUsedHardwareDevice

// Begin Class UInputDeviceSubsystem Function IsPropertyActive
struct Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics
{
	struct InputDeviceSubsystem_eventIsPropertyActive_Parms
	{
		FInputDevicePropertyHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/** Returns true if the property associated with the given handle is currently active, and it is not pending removal */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ReturnDisplayName", "Is Active" },
		{ "ToolTip", "Returns true if the property associated with the given handle is currently active, and it is not pending removal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventIsPropertyActive_Parms, Handle), Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 158936348
void Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputDeviceSubsystem_eventIsPropertyActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputDeviceSubsystem_eventIsPropertyActive_Parms), &Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceSubsystem, nullptr, "IsPropertyActive", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::InputDeviceSubsystem_eventIsPropertyActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::InputDeviceSubsystem_eventIsPropertyActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceSubsystem::execIsPropertyActive)
{
	P_GET_STRUCT(FInputDevicePropertyHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPropertyActive(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class UInputDeviceSubsystem Function IsPropertyActive

// Begin Class UInputDeviceSubsystem Function RemoveAllDeviceProperties
struct Z_Construct_UFunction_UInputDeviceSubsystem_RemoveAllDeviceProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/** Removes all the current Input Device Properties that are active, regardless of the Platform User */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "Removes all the current Input Device Properties that are active, regardless of the Platform User" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceSubsystem_RemoveAllDeviceProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceSubsystem, nullptr, "RemoveAllDeviceProperties", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveAllDeviceProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceSubsystem_RemoveAllDeviceProperties_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInputDeviceSubsystem_RemoveAllDeviceProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceSubsystem_RemoveAllDeviceProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceSubsystem::execRemoveAllDeviceProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllDeviceProperties();
	P_NATIVE_END;
}
// End Class UInputDeviceSubsystem Function RemoveAllDeviceProperties

// Begin Class UInputDeviceSubsystem Function RemoveDevicePropertyByHandle
struct Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics
{
	struct InputDeviceSubsystem_eventRemoveDevicePropertyByHandle_Parms
	{
		FInputDevicePropertyHandle HandleToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/**\n\x09* Remove a single device property based on it's handle\n\x09*\n\x09* @param FInputDevicePropertyHandle\x09\x09""Device property handle to be removed\x09\n\x09*\n\x09* @return\x09\x09\x09\x09\x09\x09\x09\x09The number of removed device properties.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "Remove a single device property based on it's handle\n\n@param FInputDevicePropertyHandle             Device property handle to be removed\n\n@return                                                               The number of removed device properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandleToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::NewProp_HandleToRemove = { "HandleToRemove", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventRemoveDevicePropertyByHandle_Parms, HandleToRemove), Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleToRemove_MetaData), NewProp_HandleToRemove_MetaData) }; // 158936348
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::NewProp_HandleToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceSubsystem, nullptr, "RemoveDevicePropertyByHandle", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::InputDeviceSubsystem_eventRemoveDevicePropertyByHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::InputDeviceSubsystem_eventRemoveDevicePropertyByHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceSubsystem::execRemoveDevicePropertyByHandle)
{
	P_GET_STRUCT(FInputDevicePropertyHandle,Z_Param_HandleToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDevicePropertyByHandle(Z_Param_HandleToRemove);
	P_NATIVE_END;
}
// End Class UInputDeviceSubsystem Function RemoveDevicePropertyByHandle

// Begin Class UInputDeviceSubsystem Function RemoveDevicePropertyHandles
struct Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics
{
	struct InputDeviceSubsystem_eventRemoveDevicePropertyHandles_Parms
	{
		TSet<FInputDevicePropertyHandle> HandlesToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/**\n\x09* Remove a set of device properties based on their handles. \n\x09* \n\x09* @param HandlesToRemove\x09The set of device property handles to remove\n\x09* \n\x09* @return\x09\x09\x09\x09\x09The number of removed device properties\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "Remove a set of device properties based on their handles.\n\n@param HandlesToRemove        The set of device property handles to remove\n\n@return                                       The number of removed device properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandlesToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandlesToRemove_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_HandlesToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::NewProp_HandlesToRemove_ElementProp = { "HandlesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(0, nullptr) }; // 158936348
static_assert(TModels_V<CGetTypeHashable, FInputDevicePropertyHandle>, "The structure 'FInputDevicePropertyHandle' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::NewProp_HandlesToRemove = { "HandlesToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputDeviceSubsystem_eventRemoveDevicePropertyHandles_Parms, HandlesToRemove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandlesToRemove_MetaData), NewProp_HandlesToRemove_MetaData) }; // 158936348
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::NewProp_HandlesToRemove_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::NewProp_HandlesToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputDeviceSubsystem, nullptr, "RemoveDevicePropertyHandles", nullptr, nullptr, Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::InputDeviceSubsystem_eventRemoveDevicePropertyHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::InputDeviceSubsystem_eventRemoveDevicePropertyHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputDeviceSubsystem::execRemoveDevicePropertyHandles)
{
	P_GET_TSET_REF(FInputDevicePropertyHandle,Z_Param_Out_HandlesToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDevicePropertyHandles(Z_Param_Out_HandlesToRemove);
	P_NATIVE_END;
}
// End Class UInputDeviceSubsystem Function RemoveDevicePropertyHandles

// Begin Class UInputDeviceSubsystem
void UInputDeviceSubsystem::StaticRegisterNativesUInputDeviceSubsystem()
{
	UClass* Class = UInputDeviceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateDevicePropertyOfClass", &UInputDeviceSubsystem::execActivateDevicePropertyOfClass },
		{ "GetActiveDeviceProperty", &UInputDeviceSubsystem::execGetActiveDeviceProperty },
		{ "GetInputDeviceHardwareIdentifier", &UInputDeviceSubsystem::execGetInputDeviceHardwareIdentifier },
		{ "GetMostRecentlyUsedHardwareDevice", &UInputDeviceSubsystem::execGetMostRecentlyUsedHardwareDevice },
		{ "IsPropertyActive", &UInputDeviceSubsystem::execIsPropertyActive },
		{ "RemoveAllDeviceProperties", &UInputDeviceSubsystem::execRemoveAllDeviceProperties },
		{ "RemoveDevicePropertyByHandle", &UInputDeviceSubsystem::execRemoveDevicePropertyByHandle },
		{ "RemoveDevicePropertyHandles", &UInputDeviceSubsystem::execRemoveDevicePropertyHandles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDeviceSubsystem);
UClass* Z_Construct_UClass_UInputDeviceSubsystem_NoRegister()
{
	return UInputDeviceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UInputDeviceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The input device subsystem provides an interface to allow users to set Input Device Properties\n* on any Platform User. \n*/" },
		{ "IncludePath", "GameFramework/InputDeviceSubsystem.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "The input device subsystem provides an interface to allow users to set Input Device Properties\non any Platform User." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputHardwareDeviceChanged_MetaData[] = {
		{ "Category", "Input Devices" },
		{ "Comment", "/** A delegate that is fired when a platform user changes what Hardware Input device they are using */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "A delegate that is fired when a platform user changes what Hardware Input device they are using" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveProperties_MetaData[] = {
		{ "Comment", "/**\n\x09* Set of currently active input device properties that will be evaluated on tick\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "Set of currently active input device properties that will be evaluated on tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesPendingRemoval_MetaData[] = {
		{ "Comment", "/**\n\x09 * Set of property handles the properties that are currently pending manual removal.\n\x09 * This is populated by the \"Remove device property\" functions. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputDeviceSubsystem.h" },
		{ "ToolTip", "Set of property handles the properties that are currently pending manual removal.\nThis is populated by the \"Remove device property\" functions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputHardwareDeviceChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveProperties_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActiveProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertiesPendingRemoval_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_PropertiesPendingRemoval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputDeviceSubsystem_ActivateDevicePropertyOfClass, "ActivateDevicePropertyOfClass" }, // 414311856
		{ &Z_Construct_UFunction_UInputDeviceSubsystem_GetActiveDeviceProperty, "GetActiveDeviceProperty" }, // 1844559443
		{ &Z_Construct_UFunction_UInputDeviceSubsystem_GetInputDeviceHardwareIdentifier, "GetInputDeviceHardwareIdentifier" }, // 1343919482
		{ &Z_Construct_UFunction_UInputDeviceSubsystem_GetMostRecentlyUsedHardwareDevice, "GetMostRecentlyUsedHardwareDevice" }, // 118136125
		{ &Z_Construct_UFunction_UInputDeviceSubsystem_IsPropertyActive, "IsPropertyActive" }, // 3121349261
		{ &Z_Construct_UFunction_UInputDeviceSubsystem_RemoveAllDeviceProperties, "RemoveAllDeviceProperties" }, // 3093588788
		{ &Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyByHandle, "RemoveDevicePropertyByHandle" }, // 94907602
		{ &Z_Construct_UFunction_UInputDeviceSubsystem_RemoveDevicePropertyHandles, "RemoveDevicePropertyHandles" }, // 4134468619
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDeviceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_OnInputHardwareDeviceChanged = { "OnInputHardwareDeviceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceSubsystem, OnInputHardwareDeviceChanged), Z_Construct_UDelegateFunction_Engine_HardwareInputDeviceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputHardwareDeviceChanged_MetaData), NewProp_OnInputHardwareDeviceChanged_MetaData) }; // 3734242596
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_ActiveProperties_ElementProp = { "ActiveProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveDeviceProperty, METADATA_PARAMS(0, nullptr) }; // 1814367595
static_assert(TModels_V<CGetTypeHashable, FActiveDeviceProperty>, "The structure 'FActiveDeviceProperty' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_ActiveProperties = { "ActiveProperties", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceSubsystem, ActiveProperties), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveProperties_MetaData), NewProp_ActiveProperties_MetaData) }; // 1814367595
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_PropertiesPendingRemoval_ElementProp = { "PropertiesPendingRemoval", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputDevicePropertyHandle, METADATA_PARAMS(0, nullptr) }; // 158936348
static_assert(TModels_V<CGetTypeHashable, FInputDevicePropertyHandle>, "The structure 'FInputDevicePropertyHandle' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_PropertiesPendingRemoval = { "PropertiesPendingRemoval", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDeviceSubsystem, PropertiesPendingRemoval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertiesPendingRemoval_MetaData), NewProp_PropertiesPendingRemoval_MetaData) }; // 158936348
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDeviceSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_OnInputHardwareDeviceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_ActiveProperties_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_ActiveProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_PropertiesPendingRemoval_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDeviceSubsystem_Statics::NewProp_PropertiesPendingRemoval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDeviceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDeviceSubsystem_Statics::ClassParams = {
	&UInputDeviceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputDeviceSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceSubsystem_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDeviceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDeviceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDeviceSubsystem()
{
	if (!Z_Registration_Info_UClass_UInputDeviceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDeviceSubsystem.OuterSingleton, Z_Construct_UClass_UInputDeviceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDeviceSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputDeviceSubsystem>()
{
	return UInputDeviceSubsystem::StaticClass();
}
UInputDeviceSubsystem::UInputDeviceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDeviceSubsystem);
UInputDeviceSubsystem::~UInputDeviceSubsystem() {}
// End Class UInputDeviceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActivateDevicePropertyParams::StaticStruct, Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics::NewStructOps, TEXT("ActivateDevicePropertyParams"), &Z_Registration_Info_UScriptStruct_ActivateDevicePropertyParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActivateDevicePropertyParams), 1805145070U) },
		{ FActiveDeviceProperty::StaticStruct, Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics::NewStructOps, TEXT("ActiveDeviceProperty"), &Z_Registration_Info_UScriptStruct_ActiveDeviceProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveDeviceProperty), 1814367595U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputDeviceSubsystem, UInputDeviceSubsystem::StaticClass, TEXT("UInputDeviceSubsystem"), &Z_Registration_Info_UClass_UInputDeviceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDeviceSubsystem), 4168873521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_2758953468(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
