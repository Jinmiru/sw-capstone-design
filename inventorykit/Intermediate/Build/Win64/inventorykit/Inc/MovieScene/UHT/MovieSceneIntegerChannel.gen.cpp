// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneIntegerChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneChannelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerChannel() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneIntegerChannel
static_assert(std::is_polymorphic<FMovieSceneIntegerChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneIntegerChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneIntegerChannel;
class UScriptStruct* FMovieSceneIntegerChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneIntegerChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneIntegerChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneIntegerChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneIntegerChannel.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneIntegerChannel>()
{
	return FMovieSceneIntegerChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneIntegerChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[] = {
		{ "Comment", "/** Pre-infinity extrapolation state, integer channel supports them all but linear since that requires a tangent*/" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneIntegerChannel.h" },
		{ "ToolTip", "Pre-infinity extrapolation state, integer channel supports them all but linear since that requires a tangent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[] = {
		{ "Comment", "/** Post-infinity extrapolation state, integer channel supports them all but linear since that requires a tangent*/" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneIntegerChannel.h" },
		{ "ToolTip", "Post-infinity extrapolation state, integer channel supports them all but linear since that requires a tangent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneIntegerChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneIntegerChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneIntegerChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneIntegerChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneIntegerChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static void NewProp_bHasDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneIntegerChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneIntegerChannel, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreInfinityExtrap_MetaData), NewProp_PreInfinityExtrap_MetaData) }; // 1973521097
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneIntegerChannel, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostInfinityExtrap_MetaData), NewProp_PostInfinityExtrap_MetaData) }; // 1973521097
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneIntegerChannel, Times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Times_MetaData), NewProp_Times_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneIntegerChannel, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
{
	((FMovieSceneIntegerChannel*)Obj)->bHasDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_bHasDefaultValue = { "bHasDefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneIntegerChannel), &Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasDefaultValue_MetaData), NewProp_bHasDefaultValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneIntegerChannel, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneIntegerChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyHandles_MetaData), NewProp_KeyHandles_MetaData) }; // 3777546645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_PreInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_PostInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_Times_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_Times,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_bHasDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewProp_KeyHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	Z_Construct_UScriptStruct_FMovieSceneChannel,
	&NewStructOps,
	"MovieSceneIntegerChannel",
	Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::PropPointers),
	sizeof(FMovieSceneIntegerChannel),
	alignof(FMovieSceneIntegerChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneIntegerChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneIntegerChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneIntegerChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneIntegerChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneIntegerChannel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneIntegerChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneIntegerChannel_Statics::NewStructOps, TEXT("MovieSceneIntegerChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneIntegerChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneIntegerChannel), 1279923975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneIntegerChannel_h_1517329834(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneIntegerChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneIntegerChannel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
