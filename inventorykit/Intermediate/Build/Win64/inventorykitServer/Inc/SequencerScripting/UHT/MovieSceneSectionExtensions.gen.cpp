// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Public/ExtensionLibraries/MovieSceneSectionExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSectionExtensions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneSectionExtensions();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneSectionExtensions_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieSceneSectionExtensions Function GetAllChannels
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics
{
	struct MovieSceneSectionExtensions_eventGetAllChannels_Parms
	{
		UMovieSceneSection* Section;
		TArray<UMovieSceneScriptingChannel*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09* Find all channels that belong to the specified UMovieSceneSection. Some sections have many channels (such as\n\x09* Transforms containing 9 double channels to represent Translation/Rotation/Scale), and a section may have mixed\n\x09* channel types.\n\x09*\n\x09* @param Section       The section to use.\n\x09* @return An array containing any key channels that match the type specified\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all channels that belong to the specified UMovieSceneSection. Some sections have many channels (such as\nTransforms containing 9 double channels to represent Translation/Rotation/Scale), and a section may have mixed\nchannel types.\n\n@param Section       The section to use.\n@return An array containing any key channels that match the type specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAllChannels_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAllChannels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAllChannels", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::MovieSceneSectionExtensions_eventGetAllChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::MovieSceneSectionExtensions_eventGetAllChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAllChannels)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingChannel*>*)Z_Param__Result=UMovieSceneSectionExtensions::GetAllChannels(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetAllChannels

// Begin Class UMovieSceneSectionExtensions Function GetAutoSizeEndFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics
{
	struct MovieSceneSectionExtensions_eventGetAutoSizeEndFrame_Parms
	{
		UMovieSceneSection* Section;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get end frame of the AutoSize. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return The end frame of the AutoSize data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get end frame of the AutoSize. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.\n\n@param Section        The section being queried\n@return The end frame of the AutoSize data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeEndFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeEndFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeEndFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeEndFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeEndFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeEndFrame(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetAutoSizeEndFrame

// Begin Class UMovieSceneSectionExtensions Function GetAutoSizeEndFrameSeconds
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics
{
	struct MovieSceneSectionExtensions_eventGetAutoSizeEndFrameSeconds_Parms
	{
		UMovieSceneSection* Section;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get end time of the AutoSize seconds. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return The end frame of the AutoSize data in seconds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get end time of the AutoSize seconds. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.\n\n@param Section        The section being queried\n@return The end frame of the AutoSize data in seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeEndFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeEndFrameSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeEndFrameSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetAutoSizeEndFrameSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetAutoSizeEndFrameSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeEndFrameSeconds)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeEndFrameSeconds(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetAutoSizeEndFrameSeconds

// Begin Class UMovieSceneSectionExtensions Function GetAutoSizeHasEndFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics
{
	struct MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms
	{
		UMovieSceneSection* Section;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a end frame.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return Whether this section has a valid autosize range, and a valid end frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a end frame.\n\n@param Section        The section being queried\n@return Whether this section has a valid autosize range, and a valid end frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
void Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeHasEndFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeHasEndFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeHasEndFrame(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetAutoSizeHasEndFrame

// Begin Class UMovieSceneSectionExtensions Function GetAutoSizeHasStartFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics
{
	struct MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms
	{
		UMovieSceneSection* Section;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a start frame.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return Whether this section has a valid autosize range, and a valid start frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a start frame.\n\n@param Section        The section being queried\n@return Whether this section has a valid autosize range, and a valid start frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
void Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeHasStartFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeHasStartFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeHasStartFrame(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetAutoSizeHasStartFrame

// Begin Class UMovieSceneSectionExtensions Function GetAutoSizeStartFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics
{
	struct MovieSceneSectionExtensions_eventGetAutoSizeStartFrame_Parms
	{
		UMovieSceneSection* Section;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get start frame of the AutoSize. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return The start frame of the AutoSize data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get start frame of the AutoSize. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.\n\n@param Section        The section being queried\n@return The start frame of the AutoSize data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeStartFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeStartFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeStartFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeStartFrame(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetAutoSizeStartFrame

// Begin Class UMovieSceneSectionExtensions Function GetAutoSizeStartFrameSeconds
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics
{
	struct MovieSceneSectionExtensions_eventGetAutoSizeStartFrameSeconds_Parms
	{
		UMovieSceneSection* Section;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get start time of the AutoSize in seconds. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return The start frame of the AutoSize data in seconds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get start time of the AutoSize in seconds. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.\n\n@param Section        The section being queried\n@return The start frame of the AutoSize data in seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeStartFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeStartFrameSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeStartFrameSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetAutoSizeStartFrameSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetAutoSizeStartFrameSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeStartFrameSeconds)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeStartFrameSeconds(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetAutoSizeStartFrameSeconds

// Begin Class UMovieSceneSectionExtensions Function GetChannel
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics
{
	struct MovieSceneSectionExtensions_eventGetChannel_Parms
	{
		UMovieSceneSection* Section;
		FName ChannelName;
		UMovieSceneScriptingChannel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09* Get channel from specified section and channel name\n\x09*\n\x09* @param Section        The section to use.\n\x09* @param ChannelName\x09The name of the channel.\n\x09* @return The channel if it exists \n\x09*/" },
		{ "DeterminesOutputType", "TrackType" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get channel from specified section and channel name\n\n@param Section        The section to use.\n@param ChannelName    The name of the channel.\n@return The channel if it exists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannel_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannel_Parms, ChannelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelName_MetaData), NewProp_ChannelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannel_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::NewProp_ChannelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetChannel", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::MovieSceneSectionExtensions_eventGetChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::MovieSceneSectionExtensions_eventGetChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetChannel)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ChannelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneScriptingChannel**)Z_Param__Result=UMovieSceneSectionExtensions::GetChannel(Z_Param_Section,Z_Param_Out_ChannelName);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetChannel

// Begin Class UMovieSceneSectionExtensions Function GetChannelsByType
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics
{
	struct MovieSceneSectionExtensions_eventGetChannelsByType_Parms
	{
		UMovieSceneSection* Section;
		TSubclassOf<UMovieSceneScriptingChannel> ChannelType;
		TArray<UMovieSceneScriptingChannel*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09* Find all channels that belong to the specified UMovieSceneSection that match the specific type. This will filter out any children who do not inherit\n\x09* from the specified type for you.\n\x09*\n\x09* @param Section        The section to use.\n\x09* @param ChannelType\x09The class type to look for.\n\x09* @return An array containing any key channels that match the type specified\n\x09*/" },
		{ "DeterminesOutputType", "TrackType" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all channels that belong to the specified UMovieSceneSection that match the specific type. This will filter out any children who do not inherit\nfrom the specified type for you.\n\n@param Section        The section to use.\n@param ChannelType    The class type to look for.\n@return An array containing any key channels that match the type specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChannelType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannelsByType_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ChannelType = { "ChannelType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannelsByType_Parms, ChannelType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannelsByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ChannelType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetChannelsByType", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::MovieSceneSectionExtensions_eventGetChannelsByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::MovieSceneSectionExtensions_eventGetChannelsByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetChannelsByType)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_OBJECT(UClass,Z_Param_ChannelType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingChannel*>*)Z_Param__Result=UMovieSceneSectionExtensions::GetChannelsByType(Z_Param_Section,Z_Param_ChannelType);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetChannelsByType

// Begin Class UMovieSceneSectionExtensions Function GetEndFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics
{
	struct MovieSceneSectionExtensions_eventGetEndFrame_Parms
	{
		UMovieSceneSection* Section;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get end frame. Will throw an exception if section has no end frame, use HasEndFrame to check first.\n\x09 *\n\x09 * @param Section        The section within which to get the end frame\n\x09 * @return End frame of this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get end frame. Will throw an exception if section has no end frame, use HasEndFrame to check first.\n\n@param Section        The section within which to get the end frame\n@return End frame of this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetEndFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetEndFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::MovieSceneSectionExtensions_eventGetEndFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::MovieSceneSectionExtensions_eventGetEndFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetEndFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetEndFrame(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetEndFrame

// Begin Class UMovieSceneSectionExtensions Function GetEndFrameSeconds
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics
{
	struct MovieSceneSectionExtensions_eventGetEndFrameSeconds_Parms
	{
		UMovieSceneSection* Section;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get end time in seconds. Will throw an exception if section has no end frame, use HasEndFrame to check first.\n\x09 *\n\x09 * @param Section        The section within which to get the end time\n\x09 * @return End time of this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get end time in seconds. Will throw an exception if section has no end frame, use HasEndFrame to check first.\n\n@param Section        The section within which to get the end time\n@return End time of this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetEndFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetEndFrameSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetEndFrameSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetEndFrameSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetEndFrameSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetEndFrameSeconds)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovieSceneSectionExtensions::GetEndFrameSeconds(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetEndFrameSeconds

// Begin Class UMovieSceneSectionExtensions Function GetParentSequenceFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics
{
	struct MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms
	{
		UMovieSceneSubSection* Section;
		int32 InFrame;
		UMovieSceneSequence* ParentSequence;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get the frame in the space of its parent sequence\n\x09 *\n\x09 * @param Section        The section that the InFrame is local to\n\x09 * @param InFrame The desired local frame\n\x09 * @param ParentSequence The parent sequence to traverse from\n\x09 * @return The frame at the parent sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the frame in the space of its parent sequence\n\n@param Section        The section that the InFrame is local to\n@param InFrame The desired local frame\n@param ParentSequence The parent sequence to traverse from\n@return The frame at the parent sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSubSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_InFrame = { "InFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms, InFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_ParentSequence = { "ParentSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms, ParentSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_InFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_ParentSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetParentSequenceFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetParentSequenceFrame)
{
	P_GET_OBJECT(UMovieSceneSubSection,Z_Param_Section);
	P_GET_PROPERTY(FIntProperty,Z_Param_InFrame);
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_ParentSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetParentSequenceFrame(Z_Param_Section,Z_Param_InFrame,Z_Param_ParentSequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetParentSequenceFrame

// Begin Class UMovieSceneSectionExtensions Function GetStartFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics
{
	struct MovieSceneSectionExtensions_eventGetStartFrame_Parms
	{
		UMovieSceneSection* Section;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get start frame. Will throw an exception if section has no start frame, use HasStartFrame to check first.\n\x09 *\n\x09 * @param Section        The section within which to get the start frame\n\x09 * @return Start frame of this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get start frame. Will throw an exception if section has no start frame, use HasStartFrame to check first.\n\n@param Section        The section within which to get the start frame\n@return Start frame of this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetStartFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetStartFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::MovieSceneSectionExtensions_eventGetStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::MovieSceneSectionExtensions_eventGetStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetStartFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetStartFrame(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetStartFrame

// Begin Class UMovieSceneSectionExtensions Function GetStartFrameSeconds
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics
{
	struct MovieSceneSectionExtensions_eventGetStartFrameSeconds_Parms
	{
		UMovieSceneSection* Section;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get start time in seconds. Will throw an exception if section has no start frame, use HasStartFrame to check first.\n\x09 *\n\x09 * @param Section        The section within which to get the start time\n\x09 * @return Start time of this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get start time in seconds. Will throw an exception if section has no start frame, use HasStartFrame to check first.\n\n@param Section        The section within which to get the start time\n@return Start time of this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetStartFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetStartFrameSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetStartFrameSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetStartFrameSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetStartFrameSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetStartFrameSeconds)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovieSceneSectionExtensions::GetStartFrameSeconds(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function GetStartFrameSeconds

// Begin Class UMovieSceneSectionExtensions Function HasEndFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics
{
	struct MovieSceneSectionExtensions_eventHasEndFrame_Parms
	{
		UMovieSceneSection* Section;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Has end frame\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return Whether this section has a valid end frame (else infinite)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Has end frame\n\n@param Section        The section being queried\n@return Whether this section has a valid end frame (else infinite)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventHasEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
void Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSectionExtensions_eventHasEndFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventHasEndFrame_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "HasEndFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::MovieSceneSectionExtensions_eventHasEndFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::MovieSceneSectionExtensions_eventHasEndFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execHasEndFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovieSceneSectionExtensions::HasEndFrame(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function HasEndFrame

// Begin Class UMovieSceneSectionExtensions Function HasStartFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics
{
	struct MovieSceneSectionExtensions_eventHasStartFrame_Parms
	{
		UMovieSceneSection* Section;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Has start frame\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return Whether this section has a valid start frame (else infinite)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Has start frame\n\n@param Section        The section being queried\n@return Whether this section has a valid start frame (else infinite)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventHasStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
void Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSectionExtensions_eventHasStartFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventHasStartFrame_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "HasStartFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::MovieSceneSectionExtensions_eventHasStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::MovieSceneSectionExtensions_eventHasStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execHasStartFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovieSceneSectionExtensions::HasStartFrame(Z_Param_Section);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function HasStartFrame

// Begin Class UMovieSceneSectionExtensions Function SetEndFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics
{
	struct MovieSceneSectionExtensions_eventSetEndFrame_Parms
	{
		UMovieSceneSection* Section;
		int32 EndFrame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set end frame\n\x09 *\n\x09 * @param Section        The section within which to set the end frame\n\x09 * @param EndFrame The desired start frame for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set end frame\n\n@param Section        The section within which to set the end frame\n@param EndFrame The desired start frame for this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrame_Parms, EndFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_EndFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetEndFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::MovieSceneSectionExtensions_eventSetEndFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::MovieSceneSectionExtensions_eventSetEndFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetEndFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSectionExtensions::SetEndFrame(Z_Param_Section,Z_Param_EndFrame);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function SetEndFrame

// Begin Class UMovieSceneSectionExtensions Function SetEndFrameBounded
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics
{
	struct MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms
	{
		UMovieSceneSection* Section;
		bool bIsBounded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n     * Set end frame bounded\n\x09 *\n\x09 * @param Section        The section to set whether the end frame is bounded or not\n\x09 * @param IsBounded The desired bounded state of the end frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set end frame bounded\n\n@param Section        The section to set whether the end frame is bounded or not\n@param IsBounded The desired bounded state of the end frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static void NewProp_bIsBounded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBounded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
void Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_bIsBounded_SetBit(void* Obj)
{
	((MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms*)Obj)->bIsBounded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_bIsBounded = { "bIsBounded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_bIsBounded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_bIsBounded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetEndFrameBounded", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetEndFrameBounded)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_UBOOL(Z_Param_bIsBounded);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSectionExtensions::SetEndFrameBounded(Z_Param_Section,Z_Param_bIsBounded);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function SetEndFrameBounded

// Begin Class UMovieSceneSectionExtensions Function SetEndFrameSeconds
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics
{
	struct MovieSceneSectionExtensions_eventSetEndFrameSeconds_Parms
	{
		UMovieSceneSection* Section;
		float EndTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set end time in seconds\n\x09 *\n\x09 * @param Section        The section within which to set the end time\n\x09 * @param EndTime The desired end time for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set end time in seconds\n\n@param Section        The section within which to set the end time\n@param EndTime The desired end time for this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrameSeconds_Parms, EndTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_EndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetEndFrameSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::MovieSceneSectionExtensions_eventSetEndFrameSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::MovieSceneSectionExtensions_eventSetEndFrameSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetEndFrameSeconds)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSectionExtensions::SetEndFrameSeconds(Z_Param_Section,Z_Param_EndTime);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function SetEndFrameSeconds

// Begin Class UMovieSceneSectionExtensions Function SetRange
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics
{
	struct MovieSceneSectionExtensions_eventSetRange_Parms
	{
		UMovieSceneSection* Section;
		int32 StartFrame;
		int32 EndFrame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set range\n\x09 *\n\x09 * @param Section        The section within which to set the range\n\x09 * @param StartFrame The desired start frame for this section\n\x09 * @param EndFrame The desired end frame for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set range\n\n@param Section        The section within which to set the range\n@param StartFrame The desired start frame for this section\n@param EndFrame The desired end frame for this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRange_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRange_Parms, StartFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRange_Parms, EndFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_StartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_EndFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetRange", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::MovieSceneSectionExtensions_eventSetRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::MovieSceneSectionExtensions_eventSetRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetRange)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSectionExtensions::SetRange(Z_Param_Section,Z_Param_StartFrame,Z_Param_EndFrame);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function SetRange

// Begin Class UMovieSceneSectionExtensions Function SetRangeSeconds
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics
{
	struct MovieSceneSectionExtensions_eventSetRangeSeconds_Parms
	{
		UMovieSceneSection* Section;
		float StartTime;
		float EndTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set range in seconds\n\x09 *\n\x09 * @param Section        The section within which to set the range\n\x09 * @param StartTime The desired start frame for this section\n\x09 * @param EndTime The desired end frame for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set range in seconds\n\n@param Section        The section within which to set the range\n@param StartTime The desired start frame for this section\n@param EndTime The desired end frame for this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRangeSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRangeSeconds_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRangeSeconds_Parms, EndTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_EndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetRangeSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::MovieSceneSectionExtensions_eventSetRangeSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::MovieSceneSectionExtensions_eventSetRangeSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetRangeSeconds)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSectionExtensions::SetRangeSeconds(Z_Param_Section,Z_Param_StartTime,Z_Param_EndTime);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function SetRangeSeconds

// Begin Class UMovieSceneSectionExtensions Function SetStartFrame
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics
{
	struct MovieSceneSectionExtensions_eventSetStartFrame_Parms
	{
		UMovieSceneSection* Section;
		int32 StartFrame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set start frame\n\x09 *\n\x09 * @param Section        The section within which to set the start frame\n\x09 * @param StartFrame The desired start frame for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set start frame\n\n@param Section        The section within which to set the start frame\n@param StartFrame The desired start frame for this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrame_Parms, StartFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_StartFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetStartFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::MovieSceneSectionExtensions_eventSetStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::MovieSceneSectionExtensions_eventSetStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetStartFrame)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSectionExtensions::SetStartFrame(Z_Param_Section,Z_Param_StartFrame);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function SetStartFrame

// Begin Class UMovieSceneSectionExtensions Function SetStartFrameBounded
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics
{
	struct MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms
	{
		UMovieSceneSection* Section;
		bool bIsBounded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set start frame bounded\n\x09 *\n\x09 * @param Section        The section to set whether the start frame is bounded or not\n\x09 * @param IsBounded The desired bounded state of the start frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set start frame bounded\n\n@param Section        The section to set whether the start frame is bounded or not\n@param IsBounded The desired bounded state of the start frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static void NewProp_bIsBounded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBounded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
void Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_bIsBounded_SetBit(void* Obj)
{
	((MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms*)Obj)->bIsBounded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_bIsBounded = { "bIsBounded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_bIsBounded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_bIsBounded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetStartFrameBounded", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetStartFrameBounded)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_UBOOL(Z_Param_bIsBounded);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSectionExtensions::SetStartFrameBounded(Z_Param_Section,Z_Param_bIsBounded);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function SetStartFrameBounded

// Begin Class UMovieSceneSectionExtensions Function SetStartFrameSeconds
struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics
{
	struct MovieSceneSectionExtensions_eventSetStartFrameSeconds_Parms
	{
		UMovieSceneSection* Section;
		float StartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set start time in seconds\n\x09 *\n\x09 * @param Section        The section within which to set the start time\n\x09 * @param StartTime The desired start time for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set start time in seconds\n\n@param Section        The section within which to set the start time\n@param StartTime The desired start time for this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrameSeconds_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetStartFrameSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::MovieSceneSectionExtensions_eventSetStartFrameSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::MovieSceneSectionExtensions_eventSetStartFrameSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetStartFrameSeconds)
{
	P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSectionExtensions::SetStartFrameSeconds(Z_Param_Section,Z_Param_StartTime);
	P_NATIVE_END;
}
// End Class UMovieSceneSectionExtensions Function SetStartFrameSeconds

// Begin Class UMovieSceneSectionExtensions
void UMovieSceneSectionExtensions::StaticRegisterNativesUMovieSceneSectionExtensions()
{
	UClass* Class = UMovieSceneSectionExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllChannels", &UMovieSceneSectionExtensions::execGetAllChannels },
		{ "GetAutoSizeEndFrame", &UMovieSceneSectionExtensions::execGetAutoSizeEndFrame },
		{ "GetAutoSizeEndFrameSeconds", &UMovieSceneSectionExtensions::execGetAutoSizeEndFrameSeconds },
		{ "GetAutoSizeHasEndFrame", &UMovieSceneSectionExtensions::execGetAutoSizeHasEndFrame },
		{ "GetAutoSizeHasStartFrame", &UMovieSceneSectionExtensions::execGetAutoSizeHasStartFrame },
		{ "GetAutoSizeStartFrame", &UMovieSceneSectionExtensions::execGetAutoSizeStartFrame },
		{ "GetAutoSizeStartFrameSeconds", &UMovieSceneSectionExtensions::execGetAutoSizeStartFrameSeconds },
		{ "GetChannel", &UMovieSceneSectionExtensions::execGetChannel },
		{ "GetChannelsByType", &UMovieSceneSectionExtensions::execGetChannelsByType },
		{ "GetEndFrame", &UMovieSceneSectionExtensions::execGetEndFrame },
		{ "GetEndFrameSeconds", &UMovieSceneSectionExtensions::execGetEndFrameSeconds },
		{ "GetParentSequenceFrame", &UMovieSceneSectionExtensions::execGetParentSequenceFrame },
		{ "GetStartFrame", &UMovieSceneSectionExtensions::execGetStartFrame },
		{ "GetStartFrameSeconds", &UMovieSceneSectionExtensions::execGetStartFrameSeconds },
		{ "HasEndFrame", &UMovieSceneSectionExtensions::execHasEndFrame },
		{ "HasStartFrame", &UMovieSceneSectionExtensions::execHasStartFrame },
		{ "SetEndFrame", &UMovieSceneSectionExtensions::execSetEndFrame },
		{ "SetEndFrameBounded", &UMovieSceneSectionExtensions::execSetEndFrameBounded },
		{ "SetEndFrameSeconds", &UMovieSceneSectionExtensions::execSetEndFrameSeconds },
		{ "SetRange", &UMovieSceneSectionExtensions::execSetRange },
		{ "SetRangeSeconds", &UMovieSceneSectionExtensions::execSetRangeSeconds },
		{ "SetStartFrame", &UMovieSceneSectionExtensions::execSetStartFrame },
		{ "SetStartFrameBounded", &UMovieSceneSectionExtensions::execSetStartFrameBounded },
		{ "SetStartFrameSeconds", &UMovieSceneSectionExtensions::execSetStartFrameSeconds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSectionExtensions);
UClass* Z_Construct_UClass_UMovieSceneSectionExtensions_NoRegister()
{
	return UMovieSceneSectionExtensions::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSectionExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneSections for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneSections for scripting" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels, "GetAllChannels" }, // 2589488814
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame, "GetAutoSizeEndFrame" }, // 2791928851
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds, "GetAutoSizeEndFrameSeconds" }, // 140005507
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame, "GetAutoSizeHasEndFrame" }, // 223181100
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame, "GetAutoSizeHasStartFrame" }, // 2576108790
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame, "GetAutoSizeStartFrame" }, // 826488084
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds, "GetAutoSizeStartFrameSeconds" }, // 1179263352
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel, "GetChannel" }, // 3359336749
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType, "GetChannelsByType" }, // 2508131389
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame, "GetEndFrame" }, // 1740390970
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds, "GetEndFrameSeconds" }, // 767082012
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame, "GetParentSequenceFrame" }, // 3638526926
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame, "GetStartFrame" }, // 2668302098
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds, "GetStartFrameSeconds" }, // 2922136242
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame, "HasEndFrame" }, // 1360471651
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame, "HasStartFrame" }, // 4272676123
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame, "SetEndFrame" }, // 2947612668
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded, "SetEndFrameBounded" }, // 1579464843
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds, "SetEndFrameSeconds" }, // 724968646
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange, "SetRange" }, // 3470690858
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds, "SetRangeSeconds" }, // 3146273713
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame, "SetStartFrame" }, // 869390360
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded, "SetStartFrameBounded" }, // 641566716
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds, "SetStartFrameSeconds" }, // 1726874297
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSectionExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::ClassParams = {
	&UMovieSceneSectionExtensions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSectionExtensions()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSectionExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSectionExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSectionExtensions.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneSectionExtensions>()
{
	return UMovieSceneSectionExtensions::StaticClass();
}
UMovieSceneSectionExtensions::UMovieSceneSectionExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSectionExtensions);
UMovieSceneSectionExtensions::~UMovieSceneSectionExtensions() {}
// End Class UMovieSceneSectionExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSectionExtensions, UMovieSceneSectionExtensions::StaticClass, TEXT("UMovieSceneSectionExtensions"), &Z_Registration_Info_UClass_UMovieSceneSectionExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSectionExtensions), 643664085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_3956765055(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
