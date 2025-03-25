// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioCapture/Public/AudioCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCapture() {}

// Begin Cross Module References
AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCapture();
AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCapture_NoRegister();
AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureFunctionLibrary();
AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureFunctionLibrary_NoRegister();
AUDIOCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo();
AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioGenerator();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AudioCapture();
// End Cross Module References

// Begin ScriptStruct FAudioCaptureDeviceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioCaptureDeviceInfo;
class UScriptStruct* FAudioCaptureDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioCaptureDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioCaptureDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo, (UObject*)Z_Construct_UPackage__Script_AudioCapture(), TEXT("AudioCaptureDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AudioCaptureDeviceInfo.OuterSingleton;
}
template<> AUDIOCAPTURE_API UScriptStruct* StaticStruct<FAudioCaptureDeviceInfo>()
{
	return FAudioCaptureDeviceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct defining the time synth global quantization settings\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Struct defining the time synth global quantization settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// The name of the audio capture device\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "The name of the audio capture device" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInputChannels_MetaData[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// The number of input channels\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "The number of input channels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// The sample rate of the audio capture device\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "The sample rate of the audio capture device" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInputChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioCaptureDeviceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioCaptureDeviceInfo, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_NumInputChannels = { "NumInputChannels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioCaptureDeviceInfo, NumInputChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInputChannels_MetaData), NewProp_NumInputChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioCaptureDeviceInfo, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_NumInputChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewProp_SampleRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
	nullptr,
	&NewStructOps,
	"AudioCaptureDeviceInfo",
	Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::PropPointers),
	sizeof(FAudioCaptureDeviceInfo),
	alignof(FAudioCaptureDeviceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AudioCaptureDeviceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioCaptureDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioCaptureDeviceInfo.InnerSingleton;
}
// End ScriptStruct FAudioCaptureDeviceInfo

// Begin Class UAudioCapture Function GetAudioCaptureDeviceInfo
struct Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics
{
	struct AudioCapture_eventGetAudioCaptureDeviceInfo_Parms
	{
		FAudioCaptureDeviceInfo OutInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// Returns the audio capture device info\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Returns the audio capture device info" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_OutInfo = { "OutInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioCapture_eventGetAudioCaptureDeviceInfo_Parms, OutInfo), Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 3490624330
void Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AudioCapture_eventGetAudioCaptureDeviceInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioCapture_eventGetAudioCaptureDeviceInfo_Parms), &Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_OutInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCapture, nullptr, "GetAudioCaptureDeviceInfo", nullptr, nullptr, Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::AudioCapture_eventGetAudioCaptureDeviceInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::AudioCapture_eventGetAudioCaptureDeviceInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioCapture::execGetAudioCaptureDeviceInfo)
{
	P_GET_STRUCT_REF(FAudioCaptureDeviceInfo,Z_Param_Out_OutInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAudioCaptureDeviceInfo(Z_Param_Out_OutInfo);
	P_NATIVE_END;
}
// End Class UAudioCapture Function GetAudioCaptureDeviceInfo

// Begin Class UAudioCapture Function IsCapturingAudio
struct Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics
{
	struct AudioCapture_eventIsCapturingAudio_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// Returns true if capturing audio\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Returns true if capturing audio" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AudioCapture_eventIsCapturingAudio_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioCapture_eventIsCapturingAudio_Parms), &Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCapture, nullptr, "IsCapturingAudio", nullptr, nullptr, Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::AudioCapture_eventIsCapturingAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::AudioCapture_eventIsCapturingAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioCapture_IsCapturingAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioCapture::execIsCapturingAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCapturingAudio();
	P_NATIVE_END;
}
// End Class UAudioCapture Function IsCapturingAudio

// Begin Class UAudioCapture Function StartCapturingAudio
struct Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// Starts capturing audio\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Starts capturing audio" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCapture, nullptr, "StartCapturingAudio", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioCapture_StartCapturingAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioCapture::execStartCapturingAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCapturingAudio();
	P_NATIVE_END;
}
// End Class UAudioCapture Function StartCapturingAudio

// Begin Class UAudioCapture Function StopCapturingAudio
struct Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioCapture" },
		{ "Comment", "// Stops capturing audio\n" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Stops capturing audio" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCapture, nullptr, "StopCapturingAudio", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioCapture_StopCapturingAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioCapture::execStopCapturingAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCapturingAudio();
	P_NATIVE_END;
}
// End Class UAudioCapture Function StopCapturingAudio

// Begin Class UAudioCapture
void UAudioCapture::StaticRegisterNativesUAudioCapture()
{
	UClass* Class = UAudioCapture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAudioCaptureDeviceInfo", &UAudioCapture::execGetAudioCaptureDeviceInfo },
		{ "IsCapturingAudio", &UAudioCapture::execIsCapturingAudio },
		{ "StartCapturingAudio", &UAudioCapture::execStartCapturingAudio },
		{ "StopCapturingAudio", &UAudioCapture::execStopCapturingAudio },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioCapture);
UClass* Z_Construct_UClass_UAudioCapture_NoRegister()
{
	return UAudioCapture::StaticClass();
}
struct Z_Construct_UClass_UAudioCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Class which opens up a handle to an audio capture device.\n// Allows other objects to get audio buffers from the capture device.\n" },
		{ "IncludePath", "AudioCapture.h" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
		{ "ToolTip", "Class which opens up a handle to an audio capture device.\nAllows other objects to get audio buffers from the capture device." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo, "GetAudioCaptureDeviceInfo" }, // 3090858607
		{ &Z_Construct_UFunction_UAudioCapture_IsCapturingAudio, "IsCapturingAudio" }, // 2937548357
		{ &Z_Construct_UFunction_UAudioCapture_StartCapturingAudio, "StartCapturingAudio" }, // 3969815962
		{ &Z_Construct_UFunction_UAudioCapture_StopCapturingAudio, "StopCapturingAudio" }, // 1727389014
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioCapture_Statics::ClassParams = {
	&UAudioCapture::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioCapture()
{
	if (!Z_Registration_Info_UClass_UAudioCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioCapture.OuterSingleton, Z_Construct_UClass_UAudioCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioCapture.OuterSingleton;
}
template<> AUDIOCAPTURE_API UClass* StaticClass<UAudioCapture>()
{
	return UAudioCapture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCapture);
// End Class UAudioCapture

// Begin Class UAudioCaptureFunctionLibrary Function CreateAudioCapture
struct Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics
{
	struct AudioCaptureFunctionLibrary_eventCreateAudioCapture_Parms
	{
		UAudioCapture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio Capture" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioCaptureFunctionLibrary_eventCreateAudioCapture_Parms, ReturnValue), Z_Construct_UClass_UAudioCapture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCaptureFunctionLibrary, nullptr, "CreateAudioCapture", nullptr, nullptr, Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::AudioCaptureFunctionLibrary_eventCreateAudioCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::AudioCaptureFunctionLibrary_eventCreateAudioCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioCaptureFunctionLibrary::execCreateAudioCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioCapture**)Z_Param__Result=UAudioCaptureFunctionLibrary::CreateAudioCapture();
	P_NATIVE_END;
}
// End Class UAudioCaptureFunctionLibrary Function CreateAudioCapture

// Begin Class UAudioCaptureFunctionLibrary
void UAudioCaptureFunctionLibrary::StaticRegisterNativesUAudioCaptureFunctionLibrary()
{
	UClass* Class = UAudioCaptureFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAudioCapture", &UAudioCaptureFunctionLibrary::execCreateAudioCapture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioCaptureFunctionLibrary);
UClass* Z_Construct_UClass_UAudioCaptureFunctionLibrary_NoRegister()
{
	return UAudioCaptureFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AudioCapture.h" },
		{ "ModuleRelativePath", "Public/AudioCapture.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture, "CreateAudioCapture" }, // 3537700105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCaptureFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::ClassParams = {
	&UAudioCaptureFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioCaptureFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.OuterSingleton;
}
template<> AUDIOCAPTURE_API UClass* StaticClass<UAudioCaptureFunctionLibrary>()
{
	return UAudioCaptureFunctionLibrary::StaticClass();
}
UAudioCaptureFunctionLibrary::UAudioCaptureFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCaptureFunctionLibrary);
UAudioCaptureFunctionLibrary::~UAudioCaptureFunctionLibrary() {}
// End Class UAudioCaptureFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioCaptureDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewStructOps, TEXT("AudioCaptureDeviceInfo"), &Z_Registration_Info_UScriptStruct_AudioCaptureDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioCaptureDeviceInfo), 3490624330U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioCapture, UAudioCapture::StaticClass, TEXT("UAudioCapture"), &Z_Registration_Info_UClass_UAudioCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioCapture), 2766131309U) },
		{ Z_Construct_UClass_UAudioCaptureFunctionLibrary, UAudioCaptureFunctionLibrary::StaticClass, TEXT("UAudioCaptureFunctionLibrary"), &Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioCaptureFunctionLibrary), 1330016169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_1005744267(TEXT("/Script/AudioCapture"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
