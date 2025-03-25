// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Public/AudioDeviceNotificationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioDeviceNotificationSubsystem() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioDeviceNotificationSubsystem();
AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioDeviceNotificationSubsystem_NoRegister();
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole();
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState();
AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature();
AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature();
AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin Enum EAudioDeviceChangedRole
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioDeviceChangedRole;
static UEnum* EAudioDeviceChangedRole_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioDeviceChangedRole.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioDeviceChangedRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("EAudioDeviceChangedRole"));
	}
	return Z_Registration_Info_UEnum_EAudioDeviceChangedRole.OuterSingleton;
}
template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioDeviceChangedRole>()
{
	return EAudioDeviceChangedRole_StaticEnum();
}
struct Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""EAudioDeviceChangedRole\n */" },
		{ "Communications.Name", "EAudioDeviceChangedRole::Communications" },
		{ "Console.Name", "EAudioDeviceChangedRole::Console" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EAudioDeviceChangedRole::Count" },
		{ "Invalid.Name", "EAudioDeviceChangedRole::Invalid" },
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
		{ "Multimedia.Name", "EAudioDeviceChangedRole::Multimedia" },
		{ "ToolTip", "EAudioDeviceChangedRole" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioDeviceChangedRole::Invalid", (int64)EAudioDeviceChangedRole::Invalid },
		{ "EAudioDeviceChangedRole::Console", (int64)EAudioDeviceChangedRole::Console },
		{ "EAudioDeviceChangedRole::Multimedia", (int64)EAudioDeviceChangedRole::Multimedia },
		{ "EAudioDeviceChangedRole::Communications", (int64)EAudioDeviceChangedRole::Communications },
		{ "EAudioDeviceChangedRole::Count", (int64)EAudioDeviceChangedRole::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	"EAudioDeviceChangedRole",
	"EAudioDeviceChangedRole",
	Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole()
{
	if (!Z_Registration_Info_UEnum_EAudioDeviceChangedRole.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioDeviceChangedRole.InnerSingleton, Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioDeviceChangedRole.InnerSingleton;
}
// End Enum EAudioDeviceChangedRole

// Begin Enum EAudioDeviceChangedState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioDeviceChangedState;
static UEnum* EAudioDeviceChangedState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioDeviceChangedState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioDeviceChangedState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("EAudioDeviceChangedState"));
	}
	return Z_Registration_Info_UEnum_EAudioDeviceChangedState.OuterSingleton;
}
template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioDeviceChangedState>()
{
	return EAudioDeviceChangedState_StaticEnum();
}
struct Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Name", "EAudioDeviceChangedState::Active" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""EAudioDeviceChangedState\n */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EAudioDeviceChangedState::Count" },
		{ "Disabled.Name", "EAudioDeviceChangedState::Disabled" },
		{ "Invalid.Name", "EAudioDeviceChangedState::Invalid" },
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
		{ "NotPresent.Name", "EAudioDeviceChangedState::NotPresent" },
		{ "ToolTip", "EAudioDeviceChangedState" },
		{ "Unplugged.Name", "EAudioDeviceChangedState::Unplugged" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioDeviceChangedState::Invalid", (int64)EAudioDeviceChangedState::Invalid },
		{ "EAudioDeviceChangedState::Active", (int64)EAudioDeviceChangedState::Active },
		{ "EAudioDeviceChangedState::Disabled", (int64)EAudioDeviceChangedState::Disabled },
		{ "EAudioDeviceChangedState::NotPresent", (int64)EAudioDeviceChangedState::NotPresent },
		{ "EAudioDeviceChangedState::Unplugged", (int64)EAudioDeviceChangedState::Unplugged },
		{ "EAudioDeviceChangedState::Count", (int64)EAudioDeviceChangedState::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	"EAudioDeviceChangedState",
	"EAudioDeviceChangedState",
	Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState()
{
	if (!Z_Registration_Info_UEnum_EAudioDeviceChangedState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioDeviceChangedState.InnerSingleton, Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioDeviceChangedState.InnerSingleton;
}
// End Enum EAudioDeviceChangedState

// Begin Delegate FOnAudioDefaultDeviceChanged
struct Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics
{
	struct _Script_AudioMixer_eventOnAudioDefaultDeviceChanged_Parms
	{
		EAudioDeviceChangedRole AudioDeviceRole;
		FString DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioDeviceRole_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioDeviceRole;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::NewProp_AudioDeviceRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::NewProp_AudioDeviceRole = { "AudioDeviceRole", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioMixer_eventOnAudioDefaultDeviceChanged_Parms, AudioDeviceRole), Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedRole, METADATA_PARAMS(0, nullptr) }; // 2393683699
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioMixer_eventOnAudioDefaultDeviceChanged_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::NewProp_AudioDeviceRole_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::NewProp_AudioDeviceRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnAudioDefaultDeviceChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::_Script_AudioMixer_eventOnAudioDefaultDeviceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::_Script_AudioMixer_eventOnAudioDefaultDeviceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioDefaultDeviceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDefaultDeviceChanged, EAudioDeviceChangedRole AudioDeviceRole, const FString& DeviceId)
{
	struct _Script_AudioMixer_eventOnAudioDefaultDeviceChanged_Parms
	{
		EAudioDeviceChangedRole AudioDeviceRole;
		FString DeviceId;
	};
	_Script_AudioMixer_eventOnAudioDefaultDeviceChanged_Parms Parms;
	Parms.AudioDeviceRole=AudioDeviceRole;
	Parms.DeviceId=DeviceId;
	OnAudioDefaultDeviceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAudioDefaultDeviceChanged

// Begin Delegate FOnAudioDeviceStateChanged
struct Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics
{
	struct _Script_AudioMixer_eventOnAudioDeviceStateChanged_Parms
	{
		FString DeviceId;
		EAudioDeviceChangedState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioMixer_eventOnAudioDeviceStateChanged_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioMixer_eventOnAudioDeviceStateChanged_Parms, NewState), Z_Construct_UEnum_AudioMixer_EAudioDeviceChangedState, METADATA_PARAMS(0, nullptr) }; // 3231109567
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnAudioDeviceStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::_Script_AudioMixer_eventOnAudioDeviceStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::_Script_AudioMixer_eventOnAudioDeviceStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioDeviceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDeviceStateChanged, const FString& DeviceId, EAudioDeviceChangedState NewState)
{
	struct _Script_AudioMixer_eventOnAudioDeviceStateChanged_Parms
	{
		FString DeviceId;
		EAudioDeviceChangedState NewState;
	};
	_Script_AudioMixer_eventOnAudioDeviceStateChanged_Parms Parms;
	Parms.DeviceId=DeviceId;
	Parms.NewState=NewState;
	OnAudioDeviceStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAudioDeviceStateChanged

// Begin Delegate FOnAudioDeviceChange
struct Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics
{
	struct _Script_AudioMixer_eventOnAudioDeviceChange_Parms
	{
		FString DeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioMixer_eventOnAudioDeviceChange_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnAudioDeviceChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::_Script_AudioMixer_eventOnAudioDeviceChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::_Script_AudioMixer_eventOnAudioDeviceChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioDeviceChange_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDeviceChange, const FString& DeviceId)
{
	struct _Script_AudioMixer_eventOnAudioDeviceChange_Parms
	{
		FString DeviceId;
	};
	_Script_AudioMixer_eventOnAudioDeviceChange_Parms Parms;
	Parms.DeviceId=DeviceId;
	OnAudioDeviceChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAudioDeviceChange

// Begin Class UAudioDeviceNotificationSubsystem
void UAudioDeviceNotificationSubsystem::StaticRegisterNativesUAudioDeviceNotificationSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioDeviceNotificationSubsystem);
UClass* Z_Construct_UClass_UAudioDeviceNotificationSubsystem_NoRegister()
{
	return UAudioDeviceNotificationSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAudioDeviceNotificationSubsystem\n */" },
		{ "IncludePath", "AudioDeviceNotificationSubsystem.h" },
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
		{ "ToolTip", "UAudioDeviceNotificationSubsystem" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCaptureDeviceChanged_MetaData[] = {
		{ "Category", "Audio Delegates" },
		{ "Comment", "/** Multicast delegate triggered when default capture device changes */" },
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
		{ "ToolTip", "Multicast delegate triggered when default capture device changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRenderDeviceChanged_MetaData[] = {
		{ "Category", "Audio Delegates" },
		{ "Comment", "/** Multicast delegate triggered when default render device changes */" },
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
		{ "ToolTip", "Multicast delegate triggered when default render device changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceAdded_MetaData[] = {
		{ "Category", "Audio Delegates" },
		{ "Comment", "/** Multicast delegate triggered when a device is added */" },
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
		{ "ToolTip", "Multicast delegate triggered when a device is added" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceRemoved_MetaData[] = {
		{ "Category", "Audio Delegates" },
		{ "Comment", "/** Multicast delegate triggered when a device is removed */" },
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
		{ "ToolTip", "Multicast delegate triggered when a device is removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceStateChanged_MetaData[] = {
		{ "Category", "Audio Delegates" },
		{ "Comment", "/** Multicast delegate triggered on device state change */" },
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
		{ "ToolTip", "Multicast delegate triggered on device state change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSwitched_MetaData[] = {
		{ "Category", "Audio Delegates" },
		{ "Comment", "/** Multicast delegate triggered on device switch */" },
		{ "ModuleRelativePath", "Public/AudioDeviceNotificationSubsystem.h" },
		{ "ToolTip", "Multicast delegate triggered on device switch" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DefaultCaptureDeviceChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DefaultRenderDeviceChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeviceAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeviceRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeviceStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeviceSwitched;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioDeviceNotificationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DefaultCaptureDeviceChanged = { "DefaultCaptureDeviceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioDeviceNotificationSubsystem, DefaultCaptureDeviceChanged), Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCaptureDeviceChanged_MetaData), NewProp_DefaultCaptureDeviceChanged_MetaData) }; // 3372485501
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DefaultRenderDeviceChanged = { "DefaultRenderDeviceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioDeviceNotificationSubsystem, DefaultRenderDeviceChanged), Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRenderDeviceChanged_MetaData), NewProp_DefaultRenderDeviceChanged_MetaData) }; // 3372485501
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DeviceAdded = { "DeviceAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioDeviceNotificationSubsystem, DeviceAdded), Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceAdded_MetaData), NewProp_DeviceAdded_MetaData) }; // 200446457
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DeviceRemoved = { "DeviceRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioDeviceNotificationSubsystem, DeviceRemoved), Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceRemoved_MetaData), NewProp_DeviceRemoved_MetaData) }; // 200446457
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DeviceStateChanged = { "DeviceStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioDeviceNotificationSubsystem, DeviceStateChanged), Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceStateChanged_MetaData), NewProp_DeviceStateChanged_MetaData) }; // 3687272170
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DeviceSwitched = { "DeviceSwitched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioDeviceNotificationSubsystem, DeviceSwitched), Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceSwitched_MetaData), NewProp_DeviceSwitched_MetaData) }; // 200446457
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DefaultCaptureDeviceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DefaultRenderDeviceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DeviceAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DeviceRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DeviceStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::NewProp_DeviceSwitched,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::ClassParams = {
	&UAudioDeviceNotificationSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioDeviceNotificationSubsystem()
{
	if (!Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.OuterSingleton, Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.OuterSingleton;
}
template<> AUDIOMIXER_API UClass* StaticClass<UAudioDeviceNotificationSubsystem>()
{
	return UAudioDeviceNotificationSubsystem::StaticClass();
}
UAudioDeviceNotificationSubsystem::UAudioDeviceNotificationSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioDeviceNotificationSubsystem);
// End Class UAudioDeviceNotificationSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioDeviceChangedRole_StaticEnum, TEXT("EAudioDeviceChangedRole"), &Z_Registration_Info_UEnum_EAudioDeviceChangedRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2393683699U) },
		{ EAudioDeviceChangedState_StaticEnum, TEXT("EAudioDeviceChangedState"), &Z_Registration_Info_UEnum_EAudioDeviceChangedState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3231109567U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioDeviceNotificationSubsystem, UAudioDeviceNotificationSubsystem::StaticClass, TEXT("UAudioDeviceNotificationSubsystem"), &Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioDeviceNotificationSubsystem), 1910135854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_979091028(TEXT("/Script/AudioMixer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
