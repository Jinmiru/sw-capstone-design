// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingActorReference.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingActorReference() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieSceneScriptingActorReferenceKey Function GetTime
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics
{
	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct MovieSceneScriptingActorReferenceKey_eventGetTime_Parms
	{
		EMovieSceneTimeUnit TimeUnit;
		FFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the time for this key from the owning channel.\n\x09* @param TimeUnit\x09Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n\x09* @return\x09\x09\x09The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution.\x09\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Get Time (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Gets the time for this key from the owning channel.\n@param TimeUnit       Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n@return                       The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceKey_eventGetTime_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceKey_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::MovieSceneScriptingActorReferenceKey_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::MovieSceneScriptingActorReferenceKey_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceKey::execGetTime)
{
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameTime*)Z_Param__Result=P_THIS->GetTime(EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceKey Function GetTime

// Begin Class UMovieSceneScriptingActorReferenceKey Function GetValue
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics
{
	struct MovieSceneScriptingActorReferenceKey_eventGetValue_Parms
	{
		FMovieSceneObjectBindingID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the value for this key from the owning channel.\n\x09* @return\x09The object binding for this key.\n\x09*/" },
		{ "DisplayName", "Get Value (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Gets the value for this key from the owning channel.\n@return       The object binding for this key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceKey_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::MovieSceneScriptingActorReferenceKey_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::MovieSceneScriptingActorReferenceKey_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceKey::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceKey Function GetValue

// Begin Class UMovieSceneScriptingActorReferenceKey Function SetTime
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics
{
	struct MovieSceneScriptingActorReferenceKey_eventSetTime_Parms
	{
		FFrameNumber NewFrameNumber;
		float SubFrame;
		EMovieSceneTimeUnit TimeUnit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n\x09* @param NewFrameNumber\x09What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n\x09* @param SubFrame\x09\x09If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution. \n\x09* @param TimeUnit\x09\x09Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Set Time (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n@param NewFrameNumber What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n@param SubFrame               If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n@param TimeUnit               Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewFrameNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::NewProp_NewFrameNumber = { "NewFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceKey_eventSetTime_Parms, NewFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFrameNumber_MetaData), NewProp_NewFrameNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceKey_eventSetTime_Parms, SubFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceKey_eventSetTime_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::NewProp_NewFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::NewProp_SubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::NewProp_TimeUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey, nullptr, "SetTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::MovieSceneScriptingActorReferenceKey_eventSetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::MovieSceneScriptingActorReferenceKey_eventSetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceKey::execSetTime)
{
	P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_NewFrameNumber);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTime(Z_Param_Out_NewFrameNumber,Z_Param_SubFrame,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceKey Function SetTime

// Begin Class UMovieSceneScriptingActorReferenceKey Function SetValue
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics
{
	struct MovieSceneScriptingActorReferenceKey_eventSetValue_Parms
	{
		FMovieSceneObjectBindingID InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the value for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09The new object binding for this key.\n\x09*/" },
		{ "DisplayName", "Set Value (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Sets the value for this key, reflecting it in the owning channel.\n@param InNewValue     The new object binding for this key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceKey_eventSetValue_Parms, InNewValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewValue_MetaData), NewProp_InNewValue_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::MovieSceneScriptingActorReferenceKey_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::MovieSceneScriptingActorReferenceKey_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceKey::execSetValue)
{
	P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_Out_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceKey Function SetValue

// Begin Class UMovieSceneScriptingActorReferenceKey
void UMovieSceneScriptingActorReferenceKey::StaticRegisterNativesUMovieSceneScriptingActorReferenceKey()
{
	UClass* Class = UMovieSceneScriptingActorReferenceKey::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTime", &UMovieSceneScriptingActorReferenceKey::execGetTime },
		{ "GetValue", &UMovieSceneScriptingActorReferenceKey::execGetValue },
		{ "SetTime", &UMovieSceneScriptingActorReferenceKey::execSetTime },
		{ "SetValue", &UMovieSceneScriptingActorReferenceKey::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingActorReferenceKey);
UClass* Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_NoRegister()
{
	return UMovieSceneScriptingActorReferenceKey::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Exposes a Sequencer Actor Reference type key to Python/Blueprints.\n* Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.\n*/" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Exposes a Sequencer Actor Reference type key to Python/Blueprints.\nStores a reference to the data so changes to this class are forwarded onto the underlying data structures." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetTime, "GetTime" }, // 3803573457
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_GetValue, "GetValue" }, // 2946786717
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetTime, "SetTime" }, // 910320884
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceKey_SetValue, "SetValue" }, // 2186213441
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingActorReferenceKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingKey,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_Statics::ClassParams = {
	&UMovieSceneScriptingActorReferenceKey::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceKey.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingActorReferenceKey>()
{
	return UMovieSceneScriptingActorReferenceKey::StaticClass();
}
UMovieSceneScriptingActorReferenceKey::UMovieSceneScriptingActorReferenceKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingActorReferenceKey);
UMovieSceneScriptingActorReferenceKey::~UMovieSceneScriptingActorReferenceKey() {}
// End Class UMovieSceneScriptingActorReferenceKey

// Begin Class UMovieSceneScriptingActorReferenceChannel Function AddKey
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics
{
	struct MovieSceneScriptingActorReferenceChannel_eventAddKey_Parms
	{
		FFrameNumber InTime;
		FMovieSceneObjectBindingID NewValue;
		float SubFrame;
		EMovieSceneTimeUnit TimeUnit;
		UMovieSceneScriptingActorReferenceKey* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Add a key to this channel. This initializes a new key and returns a reference to it.\n\x09* @param\x09InTime\x09\x09\x09The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n\x09* @param\x09NewValue\x09\x09The value that this key should be created with.\n\x09* @param\x09SubFrame\x09\x09Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n\x09* @param\x09TimeUnit \x09\x09Is the specified InTime in Display Rate frames or Tick Resolution.\n\x09* @return\x09The key that was created with the specified values at the specified time.\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Add Key (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Add a key to this channel. This initializes a new key and returns a reference to it.\n@param        InTime                  The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n@param        NewValue                The value that this key should be created with.\n@param        SubFrame                Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n@param        TimeUnit                Is the specified InTime in Display Rate frames or Tick Resolution.\n@return       The key that was created with the specified values at the specified time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventAddKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTime_MetaData), NewProp_InTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventAddKey_Parms, NewValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventAddKey_Parms, SubFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventAddKey_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventAddKey_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_SubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel, nullptr, "AddKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::MovieSceneScriptingActorReferenceChannel_eventAddKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::MovieSceneScriptingActorReferenceChannel_eventAddKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceChannel::execAddKey)
{
	P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_NewValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneScriptingActorReferenceKey**)Z_Param__Result=P_THIS->AddKey(Z_Param_InTime,Z_Param_NewValue,Z_Param_SubFrame,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceChannel Function AddKey

// Begin Class UMovieSceneScriptingActorReferenceChannel Function GetDefault
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics
{
	struct MovieSceneScriptingActorReferenceChannel_eventGetDefault_Parms
	{
		FMovieSceneObjectBindingID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Get this channel's default value that will be used when no keys are present. Only a valid\n\x09* value when HasDefault() returns true.\n\x09*/" },
		{ "DisplayName", "Get Default (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Get this channel's default value that will be used when no keys are present. Only a valid\nvalue when HasDefault() returns true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventGetDefault_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel, nullptr, "GetDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::MovieSceneScriptingActorReferenceChannel_eventGetDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::MovieSceneScriptingActorReferenceChannel_eventGetDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceChannel::execGetDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceChannel Function GetDefault

// Begin Class UMovieSceneScriptingActorReferenceChannel Function GetKeys
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics
{
	struct MovieSceneScriptingActorReferenceChannel_eventGetKeys_Parms
	{
		TArray<UMovieSceneScriptingKey*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets all of the keys in this channel.\n\x09* @return\x09""An array of UMovieSceneScriptingActorReferenceKeys contained by this channel.\n\x09*\x09\x09\x09Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.\n\x09*/" },
		{ "DisplayName", "Get Keys (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Gets all of the keys in this channel.\n@return       An array of UMovieSceneScriptingActorReferenceKeys contained by this channel.\n                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel, nullptr, "GetKeys", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::MovieSceneScriptingActorReferenceChannel_eventGetKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::MovieSceneScriptingActorReferenceChannel_eventGetKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceChannel::execGetKeys)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeys();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceChannel Function GetKeys

// Begin Class UMovieSceneScriptingActorReferenceChannel Function GetKeysByIndex
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics
{
	struct MovieSceneScriptingActorReferenceChannel_eventGetKeysByIndex_Parms
	{
		TArray<int32> Indices;
		TArray<UMovieSceneScriptingKey*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the keys in this channel specified by the specific index\n\x09* @Indices  The indices from which to get the keys from\n\x09* @return\x09""An array of UMovieSceneScriptingKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys specified by the indices, even if out of range.\n\x09*/" },
		{ "DisplayName", "Get Keys By Index (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Gets the keys in this channel specified by the specific index\n@Indices  The indices from which to get the keys from\n@return       An array of UMovieSceneScriptingKey's contained by this channel.\n                      Returns all keys specified by the indices, even if out of range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventGetKeysByIndex_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventGetKeysByIndex_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel, nullptr, "GetKeysByIndex", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::MovieSceneScriptingActorReferenceChannel_eventGetKeysByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::MovieSceneScriptingActorReferenceChannel_eventGetKeysByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceChannel::execGetKeysByIndex)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Indices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeysByIndex(Z_Param_Out_Indices);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceChannel Function GetKeysByIndex

// Begin Class UMovieSceneScriptingActorReferenceChannel Function HasDefault
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics
{
	struct MovieSceneScriptingActorReferenceChannel_eventHasDefault_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Does this channel have a default value set?\n\x09*/" },
		{ "DisplayName", "Has Default (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "@return Does this channel have a default value set?" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneScriptingActorReferenceChannel_eventHasDefault_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneScriptingActorReferenceChannel_eventHasDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel, nullptr, "HasDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::MovieSceneScriptingActorReferenceChannel_eventHasDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::MovieSceneScriptingActorReferenceChannel_eventHasDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceChannel::execHasDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceChannel Function HasDefault

// Begin Class UMovieSceneScriptingActorReferenceChannel Function RemoveDefault
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Remove this channel's default value causing the channel to have no effect where no keys are present\n\x09*/" },
		{ "DisplayName", "Remove Default (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Remove this channel's default value causing the channel to have no effect where no keys are present" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel, nullptr, "RemoveDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceChannel::execRemoveDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceChannel Function RemoveDefault

// Begin Class UMovieSceneScriptingActorReferenceChannel Function RemoveKey
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics
{
	struct MovieSceneScriptingActorReferenceChannel_eventRemoveKey_Parms
	{
		UMovieSceneScriptingKey* Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.\n\x09*/" },
		{ "DisplayName", "Remove Key (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventRemoveKey_Parms, Key), Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel, nullptr, "RemoveKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::MovieSceneScriptingActorReferenceChannel_eventRemoveKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::MovieSceneScriptingActorReferenceChannel_eventRemoveKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceChannel::execRemoveKey)
{
	P_GET_OBJECT(UMovieSceneScriptingKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveKey(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceChannel Function RemoveKey

// Begin Class UMovieSceneScriptingActorReferenceChannel Function SetDefault
struct Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics
{
	struct MovieSceneScriptingActorReferenceChannel_eventSetDefault_Parms
	{
		FMovieSceneObjectBindingID InDefaultValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Set this channel's default value that should be used when no keys are present.\n\x09* Sets bHasDefaultValue to true automatically.\n\x09*/" },
		{ "DisplayName", "Set Default (Actor Reference)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ToolTip", "Set this channel's default value that should be used when no keys are present.\nSets bHasDefaultValue to true automatically." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingActorReferenceChannel_eventSetDefault_Parms, InDefaultValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::NewProp_InDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel, nullptr, "SetDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::MovieSceneScriptingActorReferenceChannel_eventSetDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::MovieSceneScriptingActorReferenceChannel_eventSetDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingActorReferenceChannel::execSetDefault)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_InDefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefault(Z_Param_InDefaultValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingActorReferenceChannel Function SetDefault

// Begin Class UMovieSceneScriptingActorReferenceChannel
void UMovieSceneScriptingActorReferenceChannel::StaticRegisterNativesUMovieSceneScriptingActorReferenceChannel()
{
	UClass* Class = UMovieSceneScriptingActorReferenceChannel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddKey", &UMovieSceneScriptingActorReferenceChannel::execAddKey },
		{ "GetDefault", &UMovieSceneScriptingActorReferenceChannel::execGetDefault },
		{ "GetKeys", &UMovieSceneScriptingActorReferenceChannel::execGetKeys },
		{ "GetKeysByIndex", &UMovieSceneScriptingActorReferenceChannel::execGetKeysByIndex },
		{ "HasDefault", &UMovieSceneScriptingActorReferenceChannel::execHasDefault },
		{ "RemoveDefault", &UMovieSceneScriptingActorReferenceChannel::execRemoveDefault },
		{ "RemoveKey", &UMovieSceneScriptingActorReferenceChannel::execRemoveKey },
		{ "SetDefault", &UMovieSceneScriptingActorReferenceChannel::execSetDefault },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingActorReferenceChannel);
UClass* Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_NoRegister()
{
	return UMovieSceneScriptingActorReferenceChannel::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingActorReference.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingActorReference.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_AddKey, "AddKey" }, // 870730754
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetDefault, "GetDefault" }, // 2784364307
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeys, "GetKeys" }, // 561430447
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_GetKeysByIndex, "GetKeysByIndex" }, // 382138038
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_HasDefault, "HasDefault" }, // 3151433790
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveDefault, "RemoveDefault" }, // 18305032
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_RemoveKey, "RemoveKey" }, // 3029337074
		{ &Z_Construct_UFunction_UMovieSceneScriptingActorReferenceChannel_SetDefault, "SetDefault" }, // 3814600821
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingActorReferenceChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_Statics::ClassParams = {
	&UMovieSceneScriptingActorReferenceChannel::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingActorReferenceChannel>()
{
	return UMovieSceneScriptingActorReferenceChannel::StaticClass();
}
UMovieSceneScriptingActorReferenceChannel::UMovieSceneScriptingActorReferenceChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingActorReferenceChannel);
UMovieSceneScriptingActorReferenceChannel::~UMovieSceneScriptingActorReferenceChannel() {}
// End Class UMovieSceneScriptingActorReferenceChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingActorReference_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingActorReferenceKey, UMovieSceneScriptingActorReferenceKey::StaticClass, TEXT("UMovieSceneScriptingActorReferenceKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingActorReferenceKey), 4275647564U) },
		{ Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel, UMovieSceneScriptingActorReferenceChannel::StaticClass, TEXT("UMovieSceneScriptingActorReferenceChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingActorReferenceChannel), 2931492505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingActorReference_h_581279462(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingActorReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingActorReference_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
