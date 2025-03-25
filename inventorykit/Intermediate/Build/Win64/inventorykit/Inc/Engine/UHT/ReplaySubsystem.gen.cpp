// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ReplaySubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplaySubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UReplaySubsystem();
ENGINE_API UClass* Z_Construct_UClass_UReplaySubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UReplaySubsystem Function GetActiveReplayName
struct Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics
{
	struct ReplaySubsystem_eventGetActiveReplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "Comment", "/**\n\x09 * Get current recording/playing replay name\n\x09 *\n\x09 * @return FString Name of relpay (session id, file name, etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
		{ "ToolTip", "Get current recording/playing replay name\n\n@return FString Name of relpay (session id, file name, etc)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySubsystem_eventGetActiveReplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "GetActiveReplayName", nullptr, nullptr, Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::ReplaySubsystem_eventGetActiveReplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::ReplaySubsystem_eventGetActiveReplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySubsystem::execGetActiveReplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetActiveReplayName();
	P_NATIVE_END;
}
// End Class UReplaySubsystem Function GetActiveReplayName

// Begin Class UReplaySubsystem Function GetReplayCurrentTime
struct Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics
{
	struct ReplaySubsystem_eventGetReplayCurrentTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "Comment", "/**\n\x09 * Get current recording/playing replay time\n\x09 *\n\x09 * @return float Current recording/playback time in seconds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
		{ "ToolTip", "Get current recording/playing replay time\n\n@return float Current recording/playback time in seconds" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySubsystem_eventGetReplayCurrentTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "GetReplayCurrentTime", nullptr, nullptr, Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::ReplaySubsystem_eventGetReplayCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::ReplaySubsystem_eventGetReplayCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySubsystem::execGetReplayCurrentTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReplayCurrentTime();
	P_NATIVE_END;
}
// End Class UReplaySubsystem Function GetReplayCurrentTime

// Begin Class UReplaySubsystem Function IsPlaying
struct Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics
{
	struct ReplaySubsystem_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReplaySubsystem_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplaySubsystem_eventIsPlaying_Parms), &Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::ReplaySubsystem_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::ReplaySubsystem_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySubsystem_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySubsystem::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UReplaySubsystem Function IsPlaying

// Begin Class UReplaySubsystem Function IsRecording
struct Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics
{
	struct ReplaySubsystem_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReplaySubsystem_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplaySubsystem_eventIsRecording_Parms), &Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "IsRecording", nullptr, nullptr, Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::ReplaySubsystem_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::ReplaySubsystem_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySubsystem_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySubsystem::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// End Class UReplaySubsystem Function IsRecording

// Begin Class UReplaySubsystem Function RequestCheckpoint
struct Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "Comment", "/**\n\x09 * Request a checkpoint write, if currently recording.\n\x09 *\n\x09*/" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
		{ "ToolTip", "Request a checkpoint write, if currently recording." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "RequestCheckpoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySubsystem::execRequestCheckpoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestCheckpoint();
	P_NATIVE_END;
}
// End Class UReplaySubsystem Function RequestCheckpoint

// Begin Class UReplaySubsystem
void UReplaySubsystem::StaticRegisterNativesUReplaySubsystem()
{
	UClass* Class = UReplaySubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActiveReplayName", &UReplaySubsystem::execGetActiveReplayName },
		{ "GetReplayCurrentTime", &UReplaySubsystem::execGetReplayCurrentTime },
		{ "IsPlaying", &UReplaySubsystem::execIsPlaying },
		{ "IsRecording", &UReplaySubsystem::execIsRecording },
		{ "RequestCheckpoint", &UReplaySubsystem::execRequestCheckpoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplaySubsystem);
UClass* Z_Construct_UClass_UReplaySubsystem_NoRegister()
{
	return UReplaySubsystem::StaticClass();
}
struct Z_Construct_UClass_UReplaySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Replay Subsystem" },
		{ "IncludePath", "ReplaySubsystem.h" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoadDefaultMapOnStop_MetaData[] = {
		{ "Category", "Replay" },
		{ "Comment", "/**\n\x09 * Whether to reload the default map when StopReplay is called.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
		{ "ToolTip", "Whether to reload the default map when StopReplay is called." },
	};
#endif // WITH_METADATA
	static void NewProp_bLoadDefaultMapOnStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadDefaultMapOnStop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName, "GetActiveReplayName" }, // 4076980453
		{ &Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime, "GetReplayCurrentTime" }, // 2889912435
		{ &Z_Construct_UFunction_UReplaySubsystem_IsPlaying, "IsPlaying" }, // 2509680333
		{ &Z_Construct_UFunction_UReplaySubsystem_IsRecording, "IsRecording" }, // 306362902
		{ &Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint, "RequestCheckpoint" }, // 675936455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplaySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_SetBit(void* Obj)
{
	((UReplaySubsystem*)Obj)->bLoadDefaultMapOnStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop = { "bLoadDefaultMapOnStop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplaySubsystem), &Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoadDefaultMapOnStop_MetaData), NewProp_bLoadDefaultMapOnStop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReplaySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplaySubsystem_Statics::ClassParams = {
	&UReplaySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplaySubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplaySubsystem()
{
	if (!Z_Registration_Info_UClass_UReplaySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplaySubsystem.OuterSingleton, Z_Construct_UClass_UReplaySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplaySubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UReplaySubsystem>()
{
	return UReplaySubsystem::StaticClass();
}
UReplaySubsystem::UReplaySubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplaySubsystem);
UReplaySubsystem::~UReplaySubsystem() {}
// End Class UReplaySubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplaySubsystem, UReplaySubsystem::StaticClass, TEXT("UReplaySubsystem"), &Z_Registration_Info_UClass_UReplaySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplaySubsystem), 3199680717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_3662740792(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
