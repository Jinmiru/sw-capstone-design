// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneDoubleChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneChannelData.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneCurveChannelCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoubleChannel() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleValue();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentData();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneDoubleValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDoubleValue;
class UScriptStruct* FMovieSceneDoubleValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDoubleValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDoubleValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoubleValue, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDoubleValue"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDoubleValue.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDoubleValue>()
{
	return FMovieSceneDoubleValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaddingByte_MetaData[] = {
		{ "Comment", "/**\n\x09 * double value = 8 bytes\n\x09 * tangent data = 4 floats + byte enum = 4*4 + 1 = 17 bytes, rounded up to 20 bytes on clang-win64\n\x09 * interp and tangent modes = 2 byte enums = 2 bytes\n\x09 * total = 30 bytes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
		{ "ToolTip", "double value = 8 bytes\ntangent data = 4 floats + byte enum = 4*4 + 1 = 17 bytes, rounded up to 20 bytes on clang-win64\ninterp and tangent modes = 2 byte enums = 2 bytes\ntotal = 30 bytes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PaddingByte;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDoubleValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleValue, Tangent), Z_Construct_UScriptStruct_FMovieSceneTangentData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) }; // 4158658663
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleValue, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpMode_MetaData), NewProp_InterpMode_MetaData) }; // 294528593
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleValue, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentMode_MetaData), NewProp_TangentMode_MetaData) }; // 1321210525
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_PaddingByte = { "PaddingByte", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleValue, PaddingByte), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaddingByte_MetaData), NewProp_PaddingByte_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_Tangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_InterpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_TangentMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewProp_PaddingByte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneDoubleValue",
	Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::PropPointers),
	sizeof(FMovieSceneDoubleValue),
	alignof(FMovieSceneDoubleValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleValue()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDoubleValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDoubleValue.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDoubleValue.InnerSingleton;
}
// End ScriptStruct FMovieSceneDoubleValue

// Begin ScriptStruct FMovieSceneDoubleChannel
static_assert(std::is_polymorphic<FMovieSceneDoubleChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneDoubleChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDoubleChannel;
class UScriptStruct* FMovieSceneDoubleChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDoubleChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDoubleChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDoubleChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDoubleChannel.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDoubleChannel>()
{
	return FMovieSceneDoubleChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[] = {
		{ "Comment", "/** Pre-infinity extrapolation state */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
		{ "ToolTip", "Pre-infinity extrapolation state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[] = {
		{ "Comment", "/** Post-infinity extrapolation state */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
		{ "ToolTip", "Post-infinity extrapolation state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoubleChannel.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultValue;
	static void NewProp_bHasDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShowCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCurve;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDoubleChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleChannel, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreInfinityExtrap_MetaData), NewProp_PreInfinityExtrap_MetaData) }; // 1973521097
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleChannel, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostInfinityExtrap_MetaData), NewProp_PostInfinityExtrap_MetaData) }; // 1973521097
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleChannel, Times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Times_MetaData), NewProp_Times_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneDoubleValue, METADATA_PARAMS(0, nullptr) }; // 3712117757
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleChannel, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3712117757
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleChannel, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
{
	((FMovieSceneDoubleChannel*)Obj)->bHasDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_bHasDefaultValue = { "bHasDefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneDoubleChannel), &Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasDefaultValue_MetaData), NewProp_bHasDefaultValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyHandles_MetaData), NewProp_KeyHandles_MetaData) }; // 3777546645
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleChannel, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickResolution_MetaData), NewProp_TickResolution_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_bShowCurve_SetBit(void* Obj)
{
	((FMovieSceneDoubleChannel*)Obj)->bShowCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_bShowCurve = { "bShowCurve", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneDoubleChannel), &Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_bShowCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCurve_MetaData), NewProp_bShowCurve_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_PreInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_PostInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_Times_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_Times,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_bHasDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_KeyHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_TickResolution,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewProp_bShowCurve,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	Z_Construct_UScriptStruct_FMovieSceneChannel,
	&NewStructOps,
	"MovieSceneDoubleChannel",
	Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::PropPointers),
	sizeof(FMovieSceneDoubleChannel),
	alignof(FMovieSceneDoubleChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDoubleChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDoubleChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDoubleChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneDoubleChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneDoubleChannel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneDoubleValue::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDoubleValue_Statics::NewStructOps, TEXT("MovieSceneDoubleValue"), &Z_Registration_Info_UScriptStruct_MovieSceneDoubleValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDoubleValue), 3712117757U) },
		{ FMovieSceneDoubleChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDoubleChannel_Statics::NewStructOps, TEXT("MovieSceneDoubleChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneDoubleChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDoubleChannel), 3417982846U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneDoubleChannel_h_254116854(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneDoubleChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneDoubleChannel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
