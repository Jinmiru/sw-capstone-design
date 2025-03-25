// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneAudioSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneAudioTriggerChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneBoolChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneIntegerChannel.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneStringChannel.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAudioSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneAudioSection Function GetAttenuationSettings
struct Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics
{
	struct MovieSceneAudioSection_eventGetAttenuationSettings_Parms
	{
		USoundAttenuation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * @return The attenuation settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "@return The attenuation settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventGetAttenuationSettings_Parms, ReturnValue), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetAttenuationSettings", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::MovieSceneAudioSection_eventGetAttenuationSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::MovieSceneAudioSection_eventGetAttenuationSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execGetAttenuationSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundAttenuation**)Z_Param__Result=P_THIS->GetAttenuationSettings();
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function GetAttenuationSettings

// Begin Class UMovieSceneAudioSection Function GetLooping
struct Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics
{
	struct MovieSceneAudioSection_eventGetLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * @return Whether to allow looping if the section length is greater than the sound duration\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "@return Whether to allow looping if the section length is greater than the sound duration" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneAudioSection_eventGetLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneAudioSection_eventGetLooping_Parms), &Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetLooping", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::MovieSceneAudioSection_eventGetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::MovieSceneAudioSection_eventGetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execGetLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLooping();
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function GetLooping

// Begin Class UMovieSceneAudioSection Function GetOverrideAttenuation
struct Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics
{
	struct MovieSceneAudioSection_eventGetOverrideAttenuation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * @return Whether override settings on this section should be used\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "@return Whether override settings on this section should be used" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneAudioSection_eventGetOverrideAttenuation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneAudioSection_eventGetOverrideAttenuation_Parms), &Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetOverrideAttenuation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::MovieSceneAudioSection_eventGetOverrideAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::MovieSceneAudioSection_eventGetOverrideAttenuation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execGetOverrideAttenuation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetOverrideAttenuation();
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function GetOverrideAttenuation

// Begin Class UMovieSceneAudioSection Function GetSound
struct Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics
{
	struct MovieSceneAudioSection_eventGetSound_Parms
	{
		USoundBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets the sound for this section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Gets the sound for this section" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventGetSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetSound", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::MovieSceneAudioSection_eventGetSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::MovieSceneAudioSection_eventGetSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execGetSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundBase**)Z_Param__Result=P_THIS->GetSound();
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function GetSound

// Begin Class UMovieSceneAudioSection Function GetStartOffset
struct Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics
{
	struct MovieSceneAudioSection_eventGetStartOffset_Parms
	{
		FFrameNumber ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Get the offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Get the offset into the beginning of the audio clip" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetStartOffset", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::MovieSceneAudioSection_eventGetStartOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::MovieSceneAudioSection_eventGetStartOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execGetStartOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameNumber*)Z_Param__Result=P_THIS->GetStartOffset();
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function GetStartOffset

// Begin Class UMovieSceneAudioSection Function GetSuppressSubtitles
struct Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics
{
	struct MovieSceneAudioSection_eventGetSuppressSubtitles_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * @return Whether subtitles should be suppressed\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "@return Whether subtitles should be suppressed" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneAudioSection_eventGetSuppressSubtitles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneAudioSection_eventGetSuppressSubtitles_Parms), &Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetSuppressSubtitles", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::MovieSceneAudioSection_eventGetSuppressSubtitles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::MovieSceneAudioSection_eventGetSuppressSubtitles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execGetSuppressSubtitles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSuppressSubtitles();
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function GetSuppressSubtitles

// Begin Class UMovieSceneAudioSection Function SetAttenuationSettings
struct Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics
{
	struct MovieSceneAudioSection_eventSetAttenuationSettings_Parms
	{
		USoundAttenuation* InAttenuationSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Set the attenuation settings for this audio section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Set the attenuation settings for this audio section" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttenuationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventSetAttenuationSettings_Parms, InAttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::NewProp_InAttenuationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetAttenuationSettings", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::MovieSceneAudioSection_eventSetAttenuationSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::MovieSceneAudioSection_eventSetAttenuationSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execSetAttenuationSettings)
{
	P_GET_OBJECT(USoundAttenuation,Z_Param_InAttenuationSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttenuationSettings(Z_Param_InAttenuationSettings);
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function SetAttenuationSettings

// Begin Class UMovieSceneAudioSection Function SetLooping
struct Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics
{
	struct MovieSceneAudioSection_eventSetLooping_Parms
	{
		bool bInLooping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Set whether the sound should be looped */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Set whether the sound should be looped" },
	};
#endif // WITH_METADATA
	static void NewProp_bInLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLooping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::NewProp_bInLooping_SetBit(void* Obj)
{
	((MovieSceneAudioSection_eventSetLooping_Parms*)Obj)->bInLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::NewProp_bInLooping = { "bInLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneAudioSection_eventSetLooping_Parms), &Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::NewProp_bInLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::NewProp_bInLooping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::MovieSceneAudioSection_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::MovieSceneAudioSection_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execSetLooping)
{
	P_GET_UBOOL(Z_Param_bInLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLooping(Z_Param_bInLooping);
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function SetLooping

// Begin Class UMovieSceneAudioSection Function SetOverrideAttenuation
struct Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics
{
	struct MovieSceneAudioSection_eventSetOverrideAttenuation_Parms
	{
		bool bInOverrideAttenuation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Set whether the attentuation should be overriden */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Set whether the attentuation should be overriden" },
	};
#endif // WITH_METADATA
	static void NewProp_bInOverrideAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInOverrideAttenuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::NewProp_bInOverrideAttenuation_SetBit(void* Obj)
{
	((MovieSceneAudioSection_eventSetOverrideAttenuation_Parms*)Obj)->bInOverrideAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::NewProp_bInOverrideAttenuation = { "bInOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneAudioSection_eventSetOverrideAttenuation_Parms), &Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::NewProp_bInOverrideAttenuation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::NewProp_bInOverrideAttenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetOverrideAttenuation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::MovieSceneAudioSection_eventSetOverrideAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::MovieSceneAudioSection_eventSetOverrideAttenuation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execSetOverrideAttenuation)
{
	P_GET_UBOOL(Z_Param_bInOverrideAttenuation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverrideAttenuation(Z_Param_bInOverrideAttenuation);
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function SetOverrideAttenuation

// Begin Class UMovieSceneAudioSection Function SetSound
struct Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics
{
	struct MovieSceneAudioSection_eventSetSound_Parms
	{
		USoundBase* InSound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Sets this section's sound */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Sets this section's sound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::NewProp_InSound = { "InSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventSetSound_Parms, InSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::NewProp_InSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetSound", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::MovieSceneAudioSection_eventSetSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::MovieSceneAudioSection_eventSetSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execSetSound)
{
	P_GET_OBJECT(USoundBase,Z_Param_InSound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSound(Z_Param_InSound);
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function SetSound

// Begin Class UMovieSceneAudioSection Function SetStartOffset
struct Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics
{
	struct MovieSceneAudioSection_eventSetStartOffset_Parms
	{
		FFrameNumber InStartOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Set the offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Set the offset into the beginning of the audio clip" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStartOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::NewProp_InStartOffset = { "InStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAudioSection_eventSetStartOffset_Parms, InStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::NewProp_InStartOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetStartOffset", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::MovieSceneAudioSection_eventSetStartOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::MovieSceneAudioSection_eventSetStartOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execSetStartOffset)
{
	P_GET_STRUCT(FFrameNumber,Z_Param_InStartOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartOffset(Z_Param_InStartOffset);
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function SetStartOffset

// Begin Class UMovieSceneAudioSection Function SetSuppressSubtitles
struct Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics
{
	struct MovieSceneAudioSection_eventSetSuppressSubtitles_Parms
	{
		bool bInSuppressSubtitles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Set whether subtitles should be suppressed */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Set whether subtitles should be suppressed" },
	};
#endif // WITH_METADATA
	static void NewProp_bInSuppressSubtitles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSuppressSubtitles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::NewProp_bInSuppressSubtitles_SetBit(void* Obj)
{
	((MovieSceneAudioSection_eventSetSuppressSubtitles_Parms*)Obj)->bInSuppressSubtitles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::NewProp_bInSuppressSubtitles = { "bInSuppressSubtitles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneAudioSection_eventSetSuppressSubtitles_Parms), &Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::NewProp_bInSuppressSubtitles_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::NewProp_bInSuppressSubtitles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetSuppressSubtitles", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::MovieSceneAudioSection_eventSetSuppressSubtitles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::MovieSceneAudioSection_eventSetSuppressSubtitles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAudioSection::execSetSuppressSubtitles)
{
	P_GET_UBOOL(Z_Param_bInSuppressSubtitles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSuppressSubtitles(Z_Param_bInSuppressSubtitles);
	P_NATIVE_END;
}
// End Class UMovieSceneAudioSection Function SetSuppressSubtitles

// Begin Class UMovieSceneAudioSection
void UMovieSceneAudioSection::StaticRegisterNativesUMovieSceneAudioSection()
{
	UClass* Class = UMovieSceneAudioSection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttenuationSettings", &UMovieSceneAudioSection::execGetAttenuationSettings },
		{ "GetLooping", &UMovieSceneAudioSection::execGetLooping },
		{ "GetOverrideAttenuation", &UMovieSceneAudioSection::execGetOverrideAttenuation },
		{ "GetSound", &UMovieSceneAudioSection::execGetSound },
		{ "GetStartOffset", &UMovieSceneAudioSection::execGetStartOffset },
		{ "GetSuppressSubtitles", &UMovieSceneAudioSection::execGetSuppressSubtitles },
		{ "SetAttenuationSettings", &UMovieSceneAudioSection::execSetAttenuationSettings },
		{ "SetLooping", &UMovieSceneAudioSection::execSetLooping },
		{ "SetOverrideAttenuation", &UMovieSceneAudioSection::execSetOverrideAttenuation },
		{ "SetSound", &UMovieSceneAudioSection::execSetSound },
		{ "SetStartOffset", &UMovieSceneAudioSection::execSetStartOffset },
		{ "SetSuppressSubtitles", &UMovieSceneAudioSection::execSetSuppressSubtitles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAudioSection);
UClass* Z_Construct_UClass_UMovieSceneAudioSection_NoRegister()
{
	return UMovieSceneAudioSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneAudioSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Audio section, for use in the audio track, or by attached audio objects\n */" },
		{ "IncludePath", "Sections/MovieSceneAudioSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Audio section, for use in the audio track, or by attached audio objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "BlueprintGetter", "GetSound" },
		{ "BlueprintSetter", "SetSound" },
		{ "Category", "Audio" },
		{ "Comment", "/** The sound cue or wave that this section plays */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The sound cue or wave that this section plays" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The offset into the beginning of the audio clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Comment", "/** The offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The offset into the beginning of the audio clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioStartTime_MetaData[] = {
		{ "Comment", "/** The absolute time that the sound starts playing at */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The absolute time that the sound starts playing at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDilationFactor_MetaData[] = {
		{ "Comment", "/** The amount which this audio is time dilated by */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The amount which this audio is time dilated by" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioVolume_MetaData[] = {
		{ "Comment", "/** The volume the sound will be played with. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The volume the sound will be played with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[] = {
		{ "Comment", "/** The volume the sound will be played with. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The volume the sound will be played with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
		{ "Comment", "/** The pitch multiplier the sound will be played with. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The pitch multiplier the sound will be played with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Float_MetaData[] = {
		{ "Comment", "/** Generic inputs for the sound  */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Generic inputs for the sound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_String_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Bool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Int_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Trigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachActorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/* Allow looping if the section length is greater than the sound duration */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Allow looping if the section length is greater than the sound duration" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Should the attenuation settings on this section be used. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Should the attenuation settings on this section be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** The attenuation settings to use. */" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The attenuation settings to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQueueSubtitles_MetaData[] = {
		{ "Comment", "/** Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackPercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioStartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioDilationFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Float_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Float_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Float;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_String_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_String_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_String;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Bool_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Bool_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Bool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Int_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Int_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Int;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Trigger_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Trigger_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Trigger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachActorData;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
	static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnQueueSubtitles;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetAttenuationSettings, "GetAttenuationSettings" }, // 4067772769
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetLooping, "GetLooping" }, // 1970067723
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetOverrideAttenuation, "GetOverrideAttenuation" }, // 1430116582
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetSound, "GetSound" }, // 1252238993
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset, "GetStartOffset" }, // 880279651
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetSuppressSubtitles, "GetSuppressSubtitles" }, // 2439588148
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetAttenuationSettings, "SetAttenuationSettings" }, // 34803748
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetLooping, "SetLooping" }, // 3415834082
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetOverrideAttenuation, "SetOverrideAttenuation" }, // 469668336
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetSound, "SetSound" }, // 535303604
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset, "SetStartOffset" }, // 186321645
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetSuppressSubtitles, "SetSuppressSubtitles" }, // 1691446217
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAudioSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, StartOffset_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime = { "AudioStartTime", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, AudioStartTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioStartTime_MetaData), NewProp_AudioStartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor = { "AudioDilationFactor", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, AudioDilationFactor_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDilationFactor_MetaData), NewProp_AudioDilationFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume = { "AudioVolume", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, AudioVolume_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioVolume_MetaData), NewProp_AudioVolume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume = { "SoundVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, SoundVolume), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundVolume_MetaData), NewProp_SoundVolume_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, PitchMultiplier), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMultiplier_MetaData), NewProp_PitchMultiplier_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_ValueProp = { "Inputs_Float", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(0, nullptr) }; // 139010471
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_Key_KeyProp = { "Inputs_Float_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float = { "Inputs_Float", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_Float), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_Float_MetaData), NewProp_Inputs_Float_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_ValueProp = { "Inputs_String", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(0, nullptr) }; // 377388920
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_Key_KeyProp = { "Inputs_String_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String = { "Inputs_String", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_String), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_String_MetaData), NewProp_Inputs_String_MetaData) }; // 377388920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_ValueProp = { "Inputs_Bool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(0, nullptr) }; // 2663502824
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_Key_KeyProp = { "Inputs_Bool_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool = { "Inputs_Bool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_Bool), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_Bool_MetaData), NewProp_Inputs_Bool_MetaData) }; // 2663502824
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_ValueProp = { "Inputs_Int", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(0, nullptr) }; // 1279923975
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_Key_KeyProp = { "Inputs_Int_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int = { "Inputs_Int", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_Int), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_Int_MetaData), NewProp_Inputs_Int_MetaData) }; // 1279923975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_ValueProp = { "Inputs_Trigger", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel, METADATA_PARAMS(0, nullptr) }; // 2592298101
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_Key_KeyProp = { "Inputs_Trigger_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger = { "Inputs_Trigger", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_Trigger), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_Trigger_MetaData), NewProp_Inputs_Trigger_MetaData) }; // 2592298101
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttachActorData = { "AttachActorData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, AttachActorData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachActorData_MetaData), NewProp_AttachActorData_MetaData) }; // 359755361
void Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((UMovieSceneAudioSection*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAudioSection), &Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
{
	((UMovieSceneAudioSection*)Obj)->bSuppressSubtitles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAudioSection), &Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressSubtitles_MetaData), NewProp_bSuppressSubtitles_MetaData) };
void Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
{
	((UMovieSceneAudioSection*)Obj)->bOverrideAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAudioSection), &Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData), NewProp_bOverrideAttenuation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles = { "OnQueueSubtitles", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQueueSubtitles_MetaData), NewProp_OnQueueSubtitles_MetaData) }; // 4253763457
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished = { "OnAudioFinished", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAudioFinished_MetaData), NewProp_OnAudioFinished_MetaData) }; // 3505909610
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent = { "OnAudioPlaybackPercent", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAudioPlaybackPercent_MetaData), NewProp_OnAudioPlaybackPercent_MetaData) }; // 3382345791
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttachActorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneAudioSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneAudioSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::ClassParams = {
	&UMovieSceneAudioSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAudioSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneAudioSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneAudioSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAudioSection.OuterSingleton, Z_Construct_UClass_UMovieSceneAudioSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAudioSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneAudioSection>()
{
	return UMovieSceneAudioSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAudioSection);
UMovieSceneAudioSection::~UMovieSceneAudioSection() {}
// End Class UMovieSceneAudioSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAudioSection, UMovieSceneAudioSection::StaticClass, TEXT("UMovieSceneAudioSection"), &Z_Registration_Info_UClass_UMovieSceneAudioSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAudioSection), 866818518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_1136133308(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
