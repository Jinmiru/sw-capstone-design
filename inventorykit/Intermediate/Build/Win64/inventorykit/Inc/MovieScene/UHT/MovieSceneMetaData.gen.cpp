// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMetaData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneMetaData();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneMetaData_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneMetaDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneMetaData Function GetAuthor
struct Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics
{
	struct MovieSceneMetaData_eventGetAuthor_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Meta Data" },
		{ "Comment", "/**\n\x09 * @return The author for this metadata\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ToolTip", "@return The author for this metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMetaData_eventGetAuthor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMetaData, nullptr, "GetAuthor", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::MovieSceneMetaData_eventGetAuthor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::MovieSceneMetaData_eventGetAuthor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMetaData::execGetAuthor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAuthor();
	P_NATIVE_END;
}
// End Class UMovieSceneMetaData Function GetAuthor

// Begin Class UMovieSceneMetaData Function GetCreated
struct Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics
{
	struct MovieSceneMetaData_eventGetCreated_Parms
	{
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Meta Data" },
		{ "Comment", "/**\n\x09 * @return The created date for this metadata\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ToolTip", "@return The created date for this metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMetaData_eventGetCreated_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMetaData, nullptr, "GetCreated", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::MovieSceneMetaData_eventGetCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::MovieSceneMetaData_eventGetCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMetaData_GetCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMetaData_GetCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMetaData::execGetCreated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=P_THIS->GetCreated();
	P_NATIVE_END;
}
// End Class UMovieSceneMetaData Function GetCreated

// Begin Class UMovieSceneMetaData Function GetNotes
struct Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics
{
	struct MovieSceneMetaData_eventGetNotes_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Meta Data" },
		{ "Comment", "/**\n\x09 * @return The notes for this metadata\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ToolTip", "@return The notes for this metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMetaData_eventGetNotes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMetaData, nullptr, "GetNotes", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::MovieSceneMetaData_eventGetNotes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::MovieSceneMetaData_eventGetNotes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMetaData_GetNotes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMetaData_GetNotes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMetaData::execGetNotes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNotes();
	P_NATIVE_END;
}
// End Class UMovieSceneMetaData Function GetNotes

// Begin Class UMovieSceneMetaData Function SetAuthor
struct Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics
{
	struct MovieSceneMetaData_eventSetAuthor_Parms
	{
		FString InAuthor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Meta Data" },
		{ "Comment", "/**\n\x09 * Set this metadata's author\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ToolTip", "Set this metadata's author" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InAuthor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::NewProp_InAuthor = { "InAuthor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMetaData_eventSetAuthor_Parms, InAuthor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::NewProp_InAuthor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMetaData, nullptr, "SetAuthor", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::MovieSceneMetaData_eventSetAuthor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::MovieSceneMetaData_eventSetAuthor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMetaData::execSetAuthor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InAuthor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAuthor(Z_Param_InAuthor);
	P_NATIVE_END;
}
// End Class UMovieSceneMetaData Function SetAuthor

// Begin Class UMovieSceneMetaData Function SetCreated
struct Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics
{
	struct MovieSceneMetaData_eventSetCreated_Parms
	{
		FDateTime InCreated;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Meta Data" },
		{ "Comment", "/**\n\x09 * Set this metadata's created date\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ToolTip", "Set this metadata's created date" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCreated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::NewProp_InCreated = { "InCreated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMetaData_eventSetCreated_Parms, InCreated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::NewProp_InCreated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMetaData, nullptr, "SetCreated", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::MovieSceneMetaData_eventSetCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::MovieSceneMetaData_eventSetCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMetaData_SetCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMetaData_SetCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMetaData::execSetCreated)
{
	P_GET_STRUCT(FDateTime,Z_Param_InCreated);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCreated(Z_Param_InCreated);
	P_NATIVE_END;
}
// End Class UMovieSceneMetaData Function SetCreated

// Begin Class UMovieSceneMetaData Function SetNotes
struct Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics
{
	struct MovieSceneMetaData_eventSetNotes_Parms
	{
		FString InNotes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Meta Data" },
		{ "Comment", "/**\n\x09 * Set this metadata's notes\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ToolTip", "Set this metadata's notes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNotes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::NewProp_InNotes = { "InNotes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMetaData_eventSetNotes_Parms, InNotes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::NewProp_InNotes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMetaData, nullptr, "SetNotes", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::MovieSceneMetaData_eventSetNotes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::MovieSceneMetaData_eventSetNotes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMetaData_SetNotes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMetaData_SetNotes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMetaData::execSetNotes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNotes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNotes(Z_Param_InNotes);
	P_NATIVE_END;
}
// End Class UMovieSceneMetaData Function SetNotes

// Begin Class UMovieSceneMetaData
void UMovieSceneMetaData::StaticRegisterNativesUMovieSceneMetaData()
{
	UClass* Class = UMovieSceneMetaData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAuthor", &UMovieSceneMetaData::execGetAuthor },
		{ "GetCreated", &UMovieSceneMetaData::execGetCreated },
		{ "GetNotes", &UMovieSceneMetaData::execGetNotes },
		{ "SetAuthor", &UMovieSceneMetaData::execSetAuthor },
		{ "SetCreated", &UMovieSceneMetaData::execSetCreated },
		{ "SetNotes", &UMovieSceneMetaData::execSetNotes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMetaData);
UClass* Z_Construct_UClass_UMovieSceneMetaData_NoRegister()
{
	return UMovieSceneMetaData::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Movie scene meta-data that is stored on UMovieScene assets\n * Meta-data is retrieved through ULevelSequence::FindMetaData<ULevelSequenceMetaData>()\n */" },
		{ "IncludePath", "MovieSceneMetaData.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie scene meta-data that is stored on UMovieScene assets\nMeta-data is retrieved through ULevelSequence::FindMetaData<ULevelSequenceMetaData>()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[] = {
		{ "Category", "Meta Data" },
		{ "Comment", "/** The author that created this metadata */" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ToolTip", "The author that created this metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[] = {
		{ "Category", "Meta Data" },
		{ "Comment", "/** The created date at which the metadata was initiated */" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ToolTip", "The created date at which the metadata was initiated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[] = {
		{ "Category", "Meta Data" },
		{ "Comment", "/** Notes for the metadata */" },
		{ "ModuleRelativePath", "Public/MovieSceneMetaData.h" },
		{ "ToolTip", "Notes for the metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Created;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Notes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneMetaData_GetAuthor, "GetAuthor" }, // 1949647024
		{ &Z_Construct_UFunction_UMovieSceneMetaData_GetCreated, "GetCreated" }, // 2706406533
		{ &Z_Construct_UFunction_UMovieSceneMetaData_GetNotes, "GetNotes" }, // 2699303172
		{ &Z_Construct_UFunction_UMovieSceneMetaData_SetAuthor, "SetAuthor" }, // 4207451730
		{ &Z_Construct_UFunction_UMovieSceneMetaData_SetCreated, "SetCreated" }, // 3660692650
		{ &Z_Construct_UFunction_UMovieSceneMetaData_SetNotes, "SetNotes" }, // 65520487
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneMetaData_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMetaData, Author), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Author_MetaData), NewProp_Author_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMetaData_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMetaData, Created), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Created_MetaData), NewProp_Created_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneMetaData_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMetaData, Notes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Notes_MetaData), NewProp_Notes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMetaData_Statics::NewProp_Author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMetaData_Statics::NewProp_Created,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMetaData_Statics::NewProp_Notes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMetaData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneMetaData_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneMetaDataInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneMetaData, IMovieSceneMetaDataInterface), false },  // 3072860066
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMetaData_Statics::ClassParams = {
	&UMovieSceneMetaData::StaticClass,
	"EditorSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneMetaData_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMetaData_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000804A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMetaData()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMetaData.OuterSingleton, Z_Construct_UClass_UMovieSceneMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMetaData.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneMetaData>()
{
	return UMovieSceneMetaData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMetaData);
UMovieSceneMetaData::~UMovieSceneMetaData() {}
// End Class UMovieSceneMetaData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMetaData, UMovieSceneMetaData::StaticClass, TEXT("UMovieSceneMetaData"), &Z_Registration_Info_UClass_UMovieSceneMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMetaData), 3816336393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_3727586275(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
