// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingByte.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingByte() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingByteChannel();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingByteChannel_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingByteKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingByteKey_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieSceneScriptingByteKey Function GetTime
struct Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics
{
	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct MovieSceneScriptingByteKey_eventGetTime_Parms
	{
		EMovieSceneTimeUnit TimeUnit;
		FFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the time for this key from the owning channel.\n\x09* @param TimeUnit\x09Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n\x09* @return\x09\x09\x09The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Get Time (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Gets the time for this key from the owning channel.\n@param TimeUnit       Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n@return                       The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteKey_eventGetTime_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteKey_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteKey, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::MovieSceneScriptingByteKey_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::MovieSceneScriptingByteKey_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteKey::execGetTime)
{
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameTime*)Z_Param__Result=P_THIS->GetTime(EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteKey Function GetTime

// Begin Class UMovieSceneScriptingByteKey Function GetValue
struct Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics
{
	struct MovieSceneScriptingByteKey_eventGetValue_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the value for this key from the owning channel.\n\x09* @return\x09The value for this key.\n\x09*/" },
		{ "DisplayName", "Get Value (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Gets the value for this key from the owning channel.\n@return       The value for this key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteKey_eventGetValue_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteKey, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::MovieSceneScriptingByteKey_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::MovieSceneScriptingByteKey_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteKey::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteKey Function GetValue

// Begin Class UMovieSceneScriptingByteKey Function SetTime
struct Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics
{
	struct MovieSceneScriptingByteKey_eventSetTime_Parms
	{
		FFrameNumber NewFrameNumber;
		float SubFrame;
		EMovieSceneTimeUnit TimeUnit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n\x09* @param NewFrameNumber\x09What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n\x09* @param SubFrame\x09\x09If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n\x09* @param TimeUnit\x09\x09Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Set Time (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::NewProp_NewFrameNumber = { "NewFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteKey_eventSetTime_Parms, NewFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFrameNumber_MetaData), NewProp_NewFrameNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteKey_eventSetTime_Parms, SubFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteKey_eventSetTime_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::NewProp_NewFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::NewProp_SubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::NewProp_TimeUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteKey, nullptr, "SetTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::MovieSceneScriptingByteKey_eventSetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::MovieSceneScriptingByteKey_eventSetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteKey::execSetTime)
{
	P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_NewFrameNumber);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTime(Z_Param_Out_NewFrameNumber,Z_Param_SubFrame,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteKey Function SetTime

// Begin Class UMovieSceneScriptingByteKey Function SetValue
struct Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics
{
	struct MovieSceneScriptingByteKey_eventSetValue_Parms
	{
		uint8 InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the value for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09The new value for this key.\n\x09*/" },
		{ "DisplayName", "Set Value (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Sets the value for this key, reflecting it in the owning channel.\n@param InNewValue     The new value for this key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteKey_eventSetValue_Parms, InNewValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteKey, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::MovieSceneScriptingByteKey_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::MovieSceneScriptingByteKey_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteKey::execSetValue)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteKey Function SetValue

// Begin Class UMovieSceneScriptingByteKey
void UMovieSceneScriptingByteKey::StaticRegisterNativesUMovieSceneScriptingByteKey()
{
	UClass* Class = UMovieSceneScriptingByteKey::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTime", &UMovieSceneScriptingByteKey::execGetTime },
		{ "GetValue", &UMovieSceneScriptingByteKey::execGetValue },
		{ "SetTime", &UMovieSceneScriptingByteKey::execSetTime },
		{ "SetValue", &UMovieSceneScriptingByteKey::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingByteKey);
UClass* Z_Construct_UClass_UMovieSceneScriptingByteKey_NoRegister()
{
	return UMovieSceneScriptingByteKey::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Exposes a Sequencer byte/enum type key to Python/Blueprints.\n* Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.\n*/" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Exposes a Sequencer byte/enum type key to Python/Blueprints.\nStores a reference to the data so changes to this class are forwarded onto the underlying data structures." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetTime, "GetTime" }, // 1754056568
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteKey_GetValue, "GetValue" }, // 1248923420
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetTime, "SetTime" }, // 2314522272
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteKey_SetValue, "SetValue" }, // 805572156
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingByteKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingKey,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics::ClassParams = {
	&UMovieSceneScriptingByteKey::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingByteKey()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingByteKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingByteKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingByteKey.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingByteKey>()
{
	return UMovieSceneScriptingByteKey::StaticClass();
}
UMovieSceneScriptingByteKey::UMovieSceneScriptingByteKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingByteKey);
UMovieSceneScriptingByteKey::~UMovieSceneScriptingByteKey() {}
// End Class UMovieSceneScriptingByteKey

// Begin Class UMovieSceneScriptingByteChannel Function AddKey
struct Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics
{
	struct MovieSceneScriptingByteChannel_eventAddKey_Parms
	{
		FFrameNumber InTime;
		uint8 NewValue;
		float SubFrame;
		EMovieSceneTimeUnit TimeUnit;
		EMovieSceneKeyInterpolation InInterpolation;
		UMovieSceneScriptingByteKey* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Add a key to this channel. This initializes a new key and returns a reference to it.\n\x09* @param\x09InTime\x09\x09\x09The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n\x09* @param\x09NewValue\x09\x09The value that this key should be created with.\n\x09* @param\x09SubFrame\x09\x09Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n\x09* @param\x09TimeUnit \x09\x09Is the specified InTime in Display Rate frames or Tick Resolution.\n\x09* @param\x09InInterpolation\x09Interpolation method the key should use.\n\x09* @return\x09The key that was created with the specified values at the specified time.\n\x09*/" },
		{ "CPP_Default_InInterpolation", "Auto" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Add Key (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Add a key to this channel. This initializes a new key and returns a reference to it.\n@param        InTime                  The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n@param        NewValue                The value that this key should be created with.\n@param        SubFrame                Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n@param        TimeUnit                Is the specified InTime in Display Rate frames or Tick Resolution.\n@param        InInterpolation Interpolation method the key should use.\n@return       The key that was created with the specified values at the specified time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InInterpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InInterpolation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventAddKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTime_MetaData), NewProp_InTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventAddKey_Parms, NewValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventAddKey_Parms, SubFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventAddKey_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_InInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_InInterpolation = { "InInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventAddKey_Parms, InInterpolation), Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation, METADATA_PARAMS(0, nullptr) }; // 2572474140
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventAddKey_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneScriptingByteKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_SubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_InInterpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_InInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteChannel, nullptr, "AddKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::MovieSceneScriptingByteChannel_eventAddKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::MovieSceneScriptingByteChannel_eventAddKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteChannel::execAddKey)
{
	P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InTime);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_GET_ENUM(EMovieSceneKeyInterpolation,Z_Param_InInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneScriptingByteKey**)Z_Param__Result=P_THIS->AddKey(Z_Param_Out_InTime,Z_Param_NewValue,Z_Param_SubFrame,EMovieSceneTimeUnit(Z_Param_TimeUnit),EMovieSceneKeyInterpolation(Z_Param_InInterpolation));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteChannel Function AddKey

// Begin Class UMovieSceneScriptingByteChannel Function GetDefault
struct Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics
{
	struct MovieSceneScriptingByteChannel_eventGetDefault_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Get this channel's default value that will be used when no keys are present. Only a valid\n\x09* value when HasDefault() returns true.\n\x09*/" },
		{ "DisplayName", "Get Default (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Get this channel's default value that will be used when no keys are present. Only a valid\nvalue when HasDefault() returns true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventGetDefault_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteChannel, nullptr, "GetDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::MovieSceneScriptingByteChannel_eventGetDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::MovieSceneScriptingByteChannel_eventGetDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteChannel::execGetDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteChannel Function GetDefault

// Begin Class UMovieSceneScriptingByteChannel Function GetKeys
struct Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics
{
	struct MovieSceneScriptingByteChannel_eventGetKeys_Parms
	{
		TArray<UMovieSceneScriptingKey*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets all of the keys in this channel.\n\x09* @return\x09""An array of UMovieSceneScriptingByteKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.\n\x09*/" },
		{ "DisplayName", "Get Keys (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Gets all of the keys in this channel.\n@return       An array of UMovieSceneScriptingByteKey's contained by this channel.\n                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteChannel, nullptr, "GetKeys", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::MovieSceneScriptingByteChannel_eventGetKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::MovieSceneScriptingByteChannel_eventGetKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteChannel::execGetKeys)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeys();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteChannel Function GetKeys

// Begin Class UMovieSceneScriptingByteChannel Function GetKeysByIndex
struct Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics
{
	struct MovieSceneScriptingByteChannel_eventGetKeysByIndex_Parms
	{
		TArray<int32> Indices;
		TArray<UMovieSceneScriptingKey*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the keys in this channel specified by the specific index\n\x09* @Indices  The indices from which to get the keys from\n\x09* @return\x09""An array of UMovieSceneScriptingKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys specified by the indices, even if out of range.\n\x09*/" },
		{ "DisplayName", "Get Keys By Index (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventGetKeysByIndex_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventGetKeysByIndex_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteChannel, nullptr, "GetKeysByIndex", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::MovieSceneScriptingByteChannel_eventGetKeysByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::MovieSceneScriptingByteChannel_eventGetKeysByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteChannel::execGetKeysByIndex)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Indices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeysByIndex(Z_Param_Out_Indices);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteChannel Function GetKeysByIndex

// Begin Class UMovieSceneScriptingByteChannel Function HasDefault
struct Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics
{
	struct MovieSceneScriptingByteChannel_eventHasDefault_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Does this channel have a default value set?\n\x09*/" },
		{ "DisplayName", "Has Default (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "@return Does this channel have a default value set?" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneScriptingByteChannel_eventHasDefault_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneScriptingByteChannel_eventHasDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteChannel, nullptr, "HasDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::MovieSceneScriptingByteChannel_eventHasDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::MovieSceneScriptingByteChannel_eventHasDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteChannel::execHasDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteChannel Function HasDefault

// Begin Class UMovieSceneScriptingByteChannel Function RemoveDefault
struct Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Remove this channel's default value causing the channel to have no effect where no keys are present\n\x09*/" },
		{ "DisplayName", "Remove Default (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Remove this channel's default value causing the channel to have no effect where no keys are present" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteChannel, nullptr, "RemoveDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteChannel::execRemoveDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteChannel Function RemoveDefault

// Begin Class UMovieSceneScriptingByteChannel Function RemoveKey
struct Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics
{
	struct MovieSceneScriptingByteChannel_eventRemoveKey_Parms
	{
		UMovieSceneScriptingKey* Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.\n\x09*/" },
		{ "DisplayName", "Remove Key (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventRemoveKey_Parms, Key), Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteChannel, nullptr, "RemoveKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::MovieSceneScriptingByteChannel_eventRemoveKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::MovieSceneScriptingByteChannel_eventRemoveKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteChannel::execRemoveKey)
{
	P_GET_OBJECT(UMovieSceneScriptingKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveKey(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteChannel Function RemoveKey

// Begin Class UMovieSceneScriptingByteChannel Function SetDefault
struct Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics
{
	struct MovieSceneScriptingByteChannel_eventSetDefault_Parms
	{
		uint8 InDefaultValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Set this channel's default value that should be used when no keys are present.\n\x09* Sets bHasDefaultValue to true automatically.\n\x09*/" },
		{ "DisplayName", "Set Default (Enum)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ToolTip", "Set this channel's default value that should be used when no keys are present.\nSets bHasDefaultValue to true automatically." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingByteChannel_eventSetDefault_Parms, InDefaultValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::NewProp_InDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingByteChannel, nullptr, "SetDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::MovieSceneScriptingByteChannel_eventSetDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::MovieSceneScriptingByteChannel_eventSetDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingByteChannel::execSetDefault)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InDefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefault(Z_Param_InDefaultValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingByteChannel Function SetDefault

// Begin Class UMovieSceneScriptingByteChannel
void UMovieSceneScriptingByteChannel::StaticRegisterNativesUMovieSceneScriptingByteChannel()
{
	UClass* Class = UMovieSceneScriptingByteChannel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddKey", &UMovieSceneScriptingByteChannel::execAddKey },
		{ "GetDefault", &UMovieSceneScriptingByteChannel::execGetDefault },
		{ "GetKeys", &UMovieSceneScriptingByteChannel::execGetKeys },
		{ "GetKeysByIndex", &UMovieSceneScriptingByteChannel::execGetKeysByIndex },
		{ "HasDefault", &UMovieSceneScriptingByteChannel::execHasDefault },
		{ "RemoveDefault", &UMovieSceneScriptingByteChannel::execRemoveDefault },
		{ "RemoveKey", &UMovieSceneScriptingByteChannel::execRemoveKey },
		{ "SetDefault", &UMovieSceneScriptingByteChannel::execSetDefault },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingByteChannel);
UClass* Z_Construct_UClass_UMovieSceneScriptingByteChannel_NoRegister()
{
	return UMovieSceneScriptingByteChannel::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingByte.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingByte.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteChannel_AddKey, "AddKey" }, // 4081006126
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetDefault, "GetDefault" }, // 2741746235
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeys, "GetKeys" }, // 3285805733
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteChannel_GetKeysByIndex, "GetKeysByIndex" }, // 2686030264
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteChannel_HasDefault, "HasDefault" }, // 2868303975
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveDefault, "RemoveDefault" }, // 2710075966
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteChannel_RemoveKey, "RemoveKey" }, // 297055873
		{ &Z_Construct_UFunction_UMovieSceneScriptingByteChannel_SetDefault, "SetDefault" }, // 1865653098
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingByteChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics::ClassParams = {
	&UMovieSceneScriptingByteChannel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingByteChannel()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingByteChannel>()
{
	return UMovieSceneScriptingByteChannel::StaticClass();
}
UMovieSceneScriptingByteChannel::UMovieSceneScriptingByteChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingByteChannel);
UMovieSceneScriptingByteChannel::~UMovieSceneScriptingByteChannel() {}
// End Class UMovieSceneScriptingByteChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingByteKey, UMovieSceneScriptingByteKey::StaticClass, TEXT("UMovieSceneScriptingByteKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingByteKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingByteKey), 2457129366U) },
		{ Z_Construct_UClass_UMovieSceneScriptingByteChannel, UMovieSceneScriptingByteChannel::StaticClass, TEXT("UMovieSceneScriptingByteChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingByteChannel), 1776702997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_1123538731(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
