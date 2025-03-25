// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimecodeProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETimecodeProviderSynchronizationState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState;
static UEnum* ETimecodeProviderSynchronizationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETimecodeProviderSynchronizationState"));
	}
	return Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETimecodeProviderSynchronizationState>()
{
	return ETimecodeProviderSynchronizationState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Closed.Comment", "/** TimecodeProvider has not been initialized or has been shutdown. */" },
		{ "Closed.Name", "ETimecodeProviderSynchronizationState::Closed" },
		{ "Closed.ToolTip", "TimecodeProvider has not been initialized or has been shutdown." },
		{ "Comment", "/**\n * Possible states of TimecodeProvider.\n */" },
		{ "Error.Comment", "/** Unrecoverable error occurred during Synchronization. */" },
		{ "Error.Name", "ETimecodeProviderSynchronizationState::Error" },
		{ "Error.ToolTip", "Unrecoverable error occurred during Synchronization." },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "Synchronized.Comment", "/** TimecodeProvider is currently synchronized with the source. */" },
		{ "Synchronized.Name", "ETimecodeProviderSynchronizationState::Synchronized" },
		{ "Synchronized.ToolTip", "TimecodeProvider is currently synchronized with the source." },
		{ "Synchronizing.Comment", "/** TimecodeProvider is initialized and being prepared for synchronization. */" },
		{ "Synchronizing.Name", "ETimecodeProviderSynchronizationState::Synchronizing" },
		{ "Synchronizing.ToolTip", "TimecodeProvider is initialized and being prepared for synchronization." },
		{ "ToolTip", "Possible states of TimecodeProvider." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETimecodeProviderSynchronizationState::Closed", (int64)ETimecodeProviderSynchronizationState::Closed },
		{ "ETimecodeProviderSynchronizationState::Error", (int64)ETimecodeProviderSynchronizationState::Error },
		{ "ETimecodeProviderSynchronizationState::Synchronized", (int64)ETimecodeProviderSynchronizationState::Synchronized },
		{ "ETimecodeProviderSynchronizationState::Synchronizing", (int64)ETimecodeProviderSynchronizationState::Synchronizing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETimecodeProviderSynchronizationState",
	"ETimecodeProviderSynchronizationState",
	Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState()
{
	if (!Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.InnerSingleton, Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.InnerSingleton;
}
// End Enum ETimecodeProviderSynchronizationState

// Begin Class UTimecodeProvider Function FetchAndUpdate
struct Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Update the state of the provider. Call it to ensure timecode and state are updated.\n\x09 * It is suggested to fetch timecode from its source and cache it for the getters.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Update the state of the provider. Call it to ensure timecode and state are updated.\nIt is suggested to fetch timecode from its source and cache it for the getters." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "FetchAndUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimecodeProvider::execFetchAndUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FetchAndUpdate();
	P_NATIVE_END;
}
// End Class UTimecodeProvider Function FetchAndUpdate

// Begin Class UTimecodeProvider Function FetchTimecode
struct Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct TimecodeProvider_eventFetchTimecode_Parms
	{
		FQualifiedFrameTime OutFrameTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Fetch current timecode from its source. e.g. From hardware/network/file/etc.\n\x09 * It is recommended to cache the fetched timecode.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Fetch current timecode from its source. e.g. From hardware/network/file/etc.\nIt is recommended to cache the fetched timecode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutFrameTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_OutFrameTime = { "OutFrameTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimecodeProvider_eventFetchTimecode_Parms, OutFrameTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TimecodeProvider_eventFetchTimecode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimecodeProvider_eventFetchTimecode_Parms), &Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_OutFrameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "FetchTimecode", nullptr, nullptr, Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::TimecodeProvider_eventFetchTimecode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::TimecodeProvider_eventFetchTimecode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimecodeProvider_FetchTimecode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimecodeProvider::execFetchTimecode)
{
	P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_OutFrameTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FetchTimecode(Z_Param_Out_OutFrameTime);
	P_NATIVE_END;
}
// End Class UTimecodeProvider Function FetchTimecode

// Begin Class UTimecodeProvider Function GetDelayedQualifiedFrameTime
struct Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms
	{
		FQualifiedFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Return current frame time with FrameDelay applied.\n\x09 * Only assume valid when GetSynchronizationState() returns Synchronized.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return current frame time with FrameDelay applied.\nOnly assume valid when GetSynchronizationState() returns Synchronized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetDelayedQualifiedFrameTime", nullptr, nullptr, Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimecodeProvider::execGetDelayedQualifiedFrameTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetDelayedQualifiedFrameTime();
	P_NATIVE_END;
}
// End Class UTimecodeProvider Function GetDelayedQualifiedFrameTime

// Begin Class UTimecodeProvider Function GetDelayedTimecode
struct Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics
{
	struct FTimecode
	{
		int32 Hours;
		int32 Minutes;
		int32 Seconds;
		int32 Frames;
		bool bDropFrameFormat;
	};

	struct TimecodeProvider_eventGetDelayedTimecode_Parms
	{
		FTimecode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Return the delayed frame time converted into a timecode value. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the delayed frame time converted into a timecode value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimecodeProvider_eventGetDelayedTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetDelayedTimecode", nullptr, nullptr, Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::TimecodeProvider_eventGetDelayedTimecode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::TimecodeProvider_eventGetDelayedTimecode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimecodeProvider::execGetDelayedTimecode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimecode*)Z_Param__Result=P_THIS->GetDelayedTimecode();
	P_NATIVE_END;
}
// End Class UTimecodeProvider Function GetDelayedTimecode

// Begin Class UTimecodeProvider Function GetFrameRate
struct Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct TimecodeProvider_eventGetFrameRate_Parms
	{
		FFrameRate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Return the frame rate of the frame time. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the frame rate of the frame time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimecodeProvider_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetFrameRate", nullptr, nullptr, Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::TimecodeProvider_eventGetFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::TimecodeProvider_eventGetFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimecodeProvider_GetFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimecodeProvider::execGetFrameRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
	P_NATIVE_END;
}
// End Class UTimecodeProvider Function GetFrameRate

// Begin Class UTimecodeProvider Function GetQualifiedFrameTime
struct Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct TimecodeProvider_eventGetQualifiedFrameTime_Parms
	{
		FQualifiedFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Return current frame time. \n\x09 * Since it may be called several times per frame, it is suggested to return a cached value.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return current frame time.\nSince it may be called several times per frame, it is suggested to return a cached value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimecodeProvider_eventGetQualifiedFrameTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetQualifiedFrameTime", nullptr, nullptr, Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::TimecodeProvider_eventGetQualifiedFrameTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::TimecodeProvider_eventGetQualifiedFrameTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimecodeProvider::execGetQualifiedFrameTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetQualifiedFrameTime();
	P_NATIVE_END;
}
// End Class UTimecodeProvider Function GetQualifiedFrameTime

// Begin Class UTimecodeProvider Function GetSynchronizationState
struct Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics
{
	struct TimecodeProvider_eventGetSynchronizationState_Parms
	{
		ETimecodeProviderSynchronizationState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** The state of the TimecodeProvider and if it's currently synchronized and the Timecode and FrameRate getters are valid. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "The state of the TimecodeProvider and if it's currently synchronized and the Timecode and FrameRate getters are valid." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimecodeProvider_eventGetSynchronizationState_Parms, ReturnValue), Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState, METADATA_PARAMS(0, nullptr) }; // 3955347369
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetSynchronizationState", nullptr, nullptr, Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::TimecodeProvider_eventGetSynchronizationState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::TimecodeProvider_eventGetSynchronizationState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimecodeProvider::execGetSynchronizationState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETimecodeProviderSynchronizationState*)Z_Param__Result=P_THIS->GetSynchronizationState();
	P_NATIVE_END;
}
// End Class UTimecodeProvider Function GetSynchronizationState

// Begin Class UTimecodeProvider Function GetTimecode
struct Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics
{
	struct FTimecode
	{
		int32 Hours;
		int32 Minutes;
		int32 Seconds;
		int32 Frames;
		bool bDropFrameFormat;
	};

	struct TimecodeProvider_eventGetTimecode_Parms
	{
		FTimecode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Return the frame time converted into a timecode value. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the frame time converted into a timecode value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimecodeProvider_eventGetTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetTimecode", nullptr, nullptr, Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::TimecodeProvider_eventGetTimecode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::TimecodeProvider_eventGetTimecode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimecodeProvider_GetTimecode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimecodeProvider::execGetTimecode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimecode*)Z_Param__Result=P_THIS->GetTimecode();
	P_NATIVE_END;
}
// End Class UTimecodeProvider Function GetTimecode

// Begin Class UTimecodeProvider
void UTimecodeProvider::StaticRegisterNativesUTimecodeProvider()
{
	UClass* Class = UTimecodeProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FetchAndUpdate", &UTimecodeProvider::execFetchAndUpdate },
		{ "FetchTimecode", &UTimecodeProvider::execFetchTimecode },
		{ "GetDelayedQualifiedFrameTime", &UTimecodeProvider::execGetDelayedQualifiedFrameTime },
		{ "GetDelayedTimecode", &UTimecodeProvider::execGetDelayedTimecode },
		{ "GetFrameRate", &UTimecodeProvider::execGetFrameRate },
		{ "GetQualifiedFrameTime", &UTimecodeProvider::execGetQualifiedFrameTime },
		{ "GetSynchronizationState", &UTimecodeProvider::execGetSynchronizationState },
		{ "GetTimecode", &UTimecodeProvider::execGetTimecode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimecodeProvider);
UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister()
{
	return UTimecodeProvider::StaticClass();
}
struct Z_Construct_UClass_UTimecodeProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class responsible of fetching a timecode from a source.\n * Note, FApp::GetTimecode and FApp::GetTimecodeFramerate should be used to retrieve\n * the current system Timecode and Framerate.\n */" },
		{ "IncludePath", "Engine/TimecodeProvider.h" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "A class responsible of fetching a timecode from a source.\nNote, FApp::GetTimecode and FApp::GetTimecodeFramerate should be used to retrieve\nthe current system Timecode and Framerate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Number of frames to subtract from the qualified frame time when GetDelayedQualifiedFrameTime or GetDelayedTimecode is called.\n\x09 * @see GetDelayedQualifiedFrameTime, GetDelayedTimecode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Number of frames to subtract from the qualified frame time when GetDelayedQualifiedFrameTime or GetDelayedTimecode is called.\n@see GetDelayedQualifiedFrameTime, GetDelayedTimecode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate, "FetchAndUpdate" }, // 3339286220
		{ &Z_Construct_UFunction_UTimecodeProvider_FetchTimecode, "FetchTimecode" }, // 2277686968
		{ &Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime, "GetDelayedQualifiedFrameTime" }, // 3837704612
		{ &Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode, "GetDelayedTimecode" }, // 1790453663
		{ &Z_Construct_UFunction_UTimecodeProvider_GetFrameRate, "GetFrameRate" }, // 250134980
		{ &Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime, "GetQualifiedFrameTime" }, // 56403269
		{ &Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState, "GetSynchronizationState" }, // 1108525155
		{ &Z_Construct_UFunction_UTimecodeProvider_GetTimecode, "GetTimecode" }, // 3407206792
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimecodeProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimecodeProvider, FrameDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDelay_MetaData), NewProp_FrameDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimecodeProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimecodeProvider_Statics::ClassParams = {
	&UTimecodeProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimecodeProvider()
{
	if (!Z_Registration_Info_UClass_UTimecodeProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimecodeProvider.OuterSingleton, Z_Construct_UClass_UTimecodeProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimecodeProvider.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTimecodeProvider>()
{
	return UTimecodeProvider::StaticClass();
}
UTimecodeProvider::UTimecodeProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimecodeProvider);
UTimecodeProvider::~UTimecodeProvider() {}
// End Class UTimecodeProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETimecodeProviderSynchronizationState_StaticEnum, TEXT("ETimecodeProviderSynchronizationState"), &Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3955347369U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimecodeProvider, UTimecodeProvider::StaticClass, TEXT("UTimecodeProvider"), &Z_Registration_Info_UClass_UTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimecodeProvider), 1979268089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_3260918013(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
