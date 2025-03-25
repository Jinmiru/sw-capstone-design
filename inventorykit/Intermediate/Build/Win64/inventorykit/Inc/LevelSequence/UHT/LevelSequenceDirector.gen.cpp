// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/LevelSequenceDirector.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceDirector() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceDirector();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceDirector_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin Class ULevelSequenceDirector Function GetBoundActor
struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics
{
	struct LevelSequenceDirector_eventGetBoundActor_Parms
	{
		FMovieSceneObjectBindingID ObjectBinding;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Resolve the first valid Actor binding inside this sub-sequence that relates to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the first valid Actor binding inside this sub-sequence that relates to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActor_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ObjectBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundActor", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::LevelSequenceDirector_eventGetBoundActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::LevelSequenceDirector_eventGetBoundActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundActor)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetBoundActor(Z_Param_ObjectBinding);
	P_NATIVE_END;
}
// End Class ULevelSequenceDirector Function GetBoundActor

// Begin Class ULevelSequenceDirector Function GetBoundActors
struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics
{
	struct LevelSequenceDirector_eventGetBoundActors_Parms
	{
		FMovieSceneObjectBindingID ObjectBinding;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Resolve the actor bindings inside this sub-sequence that relate to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the actor bindings inside this sub-sequence that relate to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActors_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ObjectBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundActors", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::LevelSequenceDirector_eventGetBoundActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::LevelSequenceDirector_eventGetBoundActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundActors)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetBoundActors(Z_Param_ObjectBinding);
	P_NATIVE_END;
}
// End Class ULevelSequenceDirector Function GetBoundActors

// Begin Class ULevelSequenceDirector Function GetBoundObject
struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics
{
	struct LevelSequenceDirector_eventGetBoundObject_Parms
	{
		FMovieSceneObjectBindingID ObjectBinding;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Resolve the first valid binding inside this sub-sequence that relates to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the first valid binding inside this sub-sequence that relates to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObject_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ObjectBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundObject", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::LevelSequenceDirector_eventGetBoundObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::LevelSequenceDirector_eventGetBoundObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundObject)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetBoundObject(Z_Param_ObjectBinding);
	P_NATIVE_END;
}
// End Class ULevelSequenceDirector Function GetBoundObject

// Begin Class ULevelSequenceDirector Function GetBoundObjects
struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics
{
	struct LevelSequenceDirector_eventGetBoundObjects_Parms
	{
		FMovieSceneObjectBindingID ObjectBinding;
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Resolve the bindings inside this sub-sequence that relate to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the bindings inside this sub-sequence that relate to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObjects_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ObjectBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundObjects", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::LevelSequenceDirector_eventGetBoundObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::LevelSequenceDirector_eventGetBoundObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundObjects)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetBoundObjects(Z_Param_ObjectBinding);
	P_NATIVE_END;
}
// End Class ULevelSequenceDirector Function GetBoundObjects

// Begin Class ULevelSequenceDirector Function GetCurrentTime
struct Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics
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

	struct LevelSequenceDirector_eventGetCurrentTime_Parms
	{
		FQualifiedFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Get the current time for this director's sub-sequence (or the root sequence, if this is a root sequence director)\n\x09 * @return The current playback position of this director's sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Get the current time for this director's sub-sequence (or the root sequence, if this is a root sequence director)\n@return The current playback position of this director's sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetCurrentTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetCurrentTime", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::LevelSequenceDirector_eventGetCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::LevelSequenceDirector_eventGetCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceDirector::execGetCurrentTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetCurrentTime();
	P_NATIVE_END;
}
// End Class ULevelSequenceDirector Function GetCurrentTime

// Begin Class ULevelSequenceDirector Function GetMasterSequenceTime
struct Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics
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

	struct LevelSequenceDirector_eventGetMasterSequenceTime_Parms
	{
		FQualifiedFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRootSequenceTime" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetMasterSequenceTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetMasterSequenceTime", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::LevelSequenceDirector_eventGetMasterSequenceTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::LevelSequenceDirector_eventGetMasterSequenceTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceDirector::execGetMasterSequenceTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetMasterSequenceTime();
	P_NATIVE_END;
}
// End Class ULevelSequenceDirector Function GetMasterSequenceTime

// Begin Class ULevelSequenceDirector Function GetRootSequenceTime
struct Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics
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

	struct LevelSequenceDirector_eventGetRootSequenceTime_Parms
	{
		FQualifiedFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Get the current time for the outermost (root) sequence\n\x09 * @return The current playback position of the outermost (root) sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Get the current time for the outermost (root) sequence\n@return The current playback position of the outermost (root) sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetRootSequenceTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetRootSequenceTime", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::LevelSequenceDirector_eventGetRootSequenceTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::LevelSequenceDirector_eventGetRootSequenceTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceDirector::execGetRootSequenceTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetRootSequenceTime();
	P_NATIVE_END;
}
// End Class ULevelSequenceDirector Function GetRootSequenceTime

// Begin Class ULevelSequenceDirector Function GetSequence
struct Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics
{
	struct LevelSequenceDirector_eventGetSequence_Parms
	{
		UMovieSceneSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/*\n\x09 * Get the current sequence that this director is playing back within \n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "* Get the current sequence that this director is playing back within" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetSequence", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::LevelSequenceDirector_eventGetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::LevelSequenceDirector_eventGetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceDirector::execGetSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneSequence**)Z_Param__Result=P_THIS->GetSequence();
	P_NATIVE_END;
}
// End Class ULevelSequenceDirector Function GetSequence

// Begin Class ULevelSequenceDirector Function OnCreated
static FName NAME_ULevelSequenceDirector_OnCreated = FName(TEXT("OnCreated"));
void ULevelSequenceDirector::OnCreated()
{
	ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceDirector_OnCreated),NULL);
}
struct Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/** Called when this director is created */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Called when this director is created" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "OnCreated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULevelSequenceDirector_OnCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULevelSequenceDirector Function OnCreated

// Begin Class ULevelSequenceDirector
void ULevelSequenceDirector::StaticRegisterNativesULevelSequenceDirector()
{
	UClass* Class = ULevelSequenceDirector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoundActor", &ULevelSequenceDirector::execGetBoundActor },
		{ "GetBoundActors", &ULevelSequenceDirector::execGetBoundActors },
		{ "GetBoundObject", &ULevelSequenceDirector::execGetBoundObject },
		{ "GetBoundObjects", &ULevelSequenceDirector::execGetBoundObjects },
		{ "GetCurrentTime", &ULevelSequenceDirector::execGetCurrentTime },
		{ "GetMasterSequenceTime", &ULevelSequenceDirector::execGetMasterSequenceTime },
		{ "GetRootSequenceTime", &ULevelSequenceDirector::execGetRootSequenceTime },
		{ "GetSequence", &ULevelSequenceDirector::execGetSequence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceDirector);
UClass* Z_Construct_UClass_ULevelSequenceDirector_NoRegister()
{
	return ULevelSequenceDirector::StaticClass();
}
struct Z_Construct_UClass_ULevelSequenceDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceDirector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSequenceID_MetaData[] = {
		{ "Comment", "/** The Sequence ID for the sequence this director is playing back within - has to be stored as an int32 so that it is reinstanced correctly*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "The Sequence ID for the sequence this director is playing back within - has to be stored as an int32 so that it is reinstanced correctly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakLinker_MetaData[] = {
		{ "Comment", "/** The linker inside which the sequence is evaluating. Only valid in game or in PIE/Simulate. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "The linker inside which the sequence is evaluating. Only valid in game or in PIE/Simulate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceID_MetaData[] = {
		{ "Comment", "/** Instance ID of the sequence. Only valid in game or in PIE/Simulate. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Instance ID of the sequence. Only valid in game or in PIE/Simulate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceSerial_MetaData[] = {
		{ "Comment", "/** Instance serial of the sequence. Only valid in game or in PIE/Simulate. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Instance serial of the sequence. Only valid in game or in PIE/Simulate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "/** Pointer to the player that's playing back this director's sequence. Only valid in game or in PIE/Simulate. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Pointer to the player that's playing back this director's sequence. Only valid in game or in PIE/Simulate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieScenePlayerIndex_MetaData[] = {
		{ "Comment", "/** Native player interface index - stored by index so that it can be reinstanced correctly */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Native player interface index - stored by index so that it can be reinstanced correctly" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubSequenceID;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakLinker;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_InstanceID;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_InstanceSerial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovieScenePlayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor, "GetBoundActor" }, // 2120717
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors, "GetBoundActors" }, // 3587376272
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject, "GetBoundObject" }, // 655519392
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects, "GetBoundObjects" }, // 577122605
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime, "GetCurrentTime" }, // 2795112620
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime, "GetMasterSequenceTime" }, // 4290908919
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime, "GetRootSequenceTime" }, // 38523187
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetSequence, "GetSequence" }, // 3627398513
		{ &Z_Construct_UFunction_ULevelSequenceDirector_OnCreated, "OnCreated" }, // 3118471970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID = { "SubSequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceDirector, SubSequenceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSequenceID_MetaData), NewProp_SubSequenceID_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_WeakLinker = { "WeakLinker", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceDirector, WeakLinker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakLinker_MetaData), NewProp_WeakLinker_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_InstanceID = { "InstanceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceDirector, InstanceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceID_MetaData), NewProp_InstanceID_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_InstanceSerial = { "InstanceSerial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceDirector, InstanceSerial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceSerial_MetaData), NewProp_InstanceSerial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceDirector, Player), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex = { "MovieScenePlayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceDirector, MovieScenePlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieScenePlayerIndex_MetaData), NewProp_MovieScenePlayerIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_WeakLinker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_InstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_InstanceSerial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelSequenceDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceDirector_Statics::ClassParams = {
	&ULevelSequenceDirector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelSequenceDirector()
{
	if (!Z_Registration_Info_UClass_ULevelSequenceDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceDirector.OuterSingleton, Z_Construct_UClass_ULevelSequenceDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelSequenceDirector.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceDirector>()
{
	return ULevelSequenceDirector::StaticClass();
}
ULevelSequenceDirector::ULevelSequenceDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceDirector);
ULevelSequenceDirector::~ULevelSequenceDirector() {}
// End Class ULevelSequenceDirector

// Begin Class ULegacyLevelSequenceDirectorBlueprint
void ULegacyLevelSequenceDirectorBlueprint::StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyLevelSequenceDirectorBlueprint);
UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister()
{
	return ULegacyLevelSequenceDirectorBlueprint::StaticClass();
}
struct Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSequenceDirector.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegacyLevelSequenceDirectorBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::ClassParams = {
	&ULegacyLevelSequenceDirectorBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint()
{
	if (!Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.OuterSingleton, Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ULegacyLevelSequenceDirectorBlueprint>()
{
	return ULegacyLevelSequenceDirectorBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyLevelSequenceDirectorBlueprint);
ULegacyLevelSequenceDirectorBlueprint::~ULegacyLevelSequenceDirectorBlueprint() {}
// End Class ULegacyLevelSequenceDirectorBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceDirector, ULevelSequenceDirector::StaticClass, TEXT("ULevelSequenceDirector"), &Z_Registration_Info_UClass_ULevelSequenceDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceDirector), 4125109029U) },
		{ Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint, ULegacyLevelSequenceDirectorBlueprint::StaticClass, TEXT("ULegacyLevelSequenceDirectorBlueprint"), &Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyLevelSequenceDirectorBlueprint), 2391952247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_4072166099(TEXT("/Script/LevelSequence"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
