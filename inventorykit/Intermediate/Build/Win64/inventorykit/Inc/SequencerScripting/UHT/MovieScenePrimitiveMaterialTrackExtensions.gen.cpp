// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Public/ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneMaterialTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTrackExtensions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentMaterialInfo();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieScenePrimitiveMaterialTrackExtensions Function GetMaterialIndex
struct Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics
{
	struct MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialIndex_Parms
	{
		UMovieScenePrimitiveMaterialTrack* Track;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetMaterialInfo instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialIndex_Parms, Track), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions, nullptr, "GetMaterialIndex", nullptr, nullptr, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieScenePrimitiveMaterialTrackExtensions::execGetMaterialIndex)
{
	P_GET_OBJECT(UMovieScenePrimitiveMaterialTrack,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialIndex(Z_Param_Track);
	P_NATIVE_END;
}
// End Class UMovieScenePrimitiveMaterialTrackExtensions Function GetMaterialIndex

// Begin Class UMovieScenePrimitiveMaterialTrackExtensions Function GetMaterialInfo
struct Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics
{
	struct MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialInfo_Parms
	{
		UMovieScenePrimitiveMaterialTrack* Track;
		FComponentMaterialInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get material info of the component that is animated by the material track.\n\x09 * @param Track The track to use\n\x09 * @return The material info.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetMaterialInfo instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get material info of the component that is animated by the material track.\n@param Track The track to use\n@return The material info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialInfo_Parms, Track), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FComponentMaterialInfo, METADATA_PARAMS(0, nullptr) }; // 3517514751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions, nullptr, "GetMaterialInfo", nullptr, nullptr, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieScenePrimitiveMaterialTrackExtensions::execGetMaterialInfo)
{
	P_GET_OBJECT(UMovieScenePrimitiveMaterialTrack,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FComponentMaterialInfo*)Z_Param__Result=UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialInfo(Z_Param_Track);
	P_NATIVE_END;
}
// End Class UMovieScenePrimitiveMaterialTrackExtensions Function GetMaterialInfo

// Begin Class UMovieScenePrimitiveMaterialTrackExtensions Function SetMaterialIndex
struct Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics
{
	struct MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialIndex_Parms
	{
		UMovieScenePrimitiveMaterialTrack* Track;
		int32 MaterialIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetMaterialInfo instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialIndex_Parms, Track), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialIndex_Parms, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions, nullptr, "SetMaterialIndex", nullptr, nullptr, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieScenePrimitiveMaterialTrackExtensions::execSetMaterialIndex)
{
	P_GET_OBJECT(UMovieScenePrimitiveMaterialTrack,Z_Param_Track);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialIndex(Z_Param_Track,Z_Param_MaterialIndex);
	P_NATIVE_END;
}
// End Class UMovieScenePrimitiveMaterialTrackExtensions Function SetMaterialIndex

// Begin Class UMovieScenePrimitiveMaterialTrackExtensions Function SetMaterialInfo
struct Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics
{
	struct MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialInfo_Parms
	{
		UMovieScenePrimitiveMaterialTrack* Track;
		FComponentMaterialInfo MaterialInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set material info of the component that is animated by the material track.\n\x09 * @param Track The track to use\n\x09 * @param MaterialInfo The desired material info to animate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set material info of the component that is animated by the material track.\n@param Track The track to use\n@param MaterialInfo The desired material info to animate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialInfo_Parms, Track), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::NewProp_MaterialInfo = { "MaterialInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialInfo_Parms, MaterialInfo), Z_Construct_UScriptStruct_FComponentMaterialInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInfo_MetaData), NewProp_MaterialInfo_MetaData) }; // 3517514751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::NewProp_MaterialInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions, nullptr, "SetMaterialInfo", nullptr, nullptr, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieScenePrimitiveMaterialTrackExtensions::execSetMaterialInfo)
{
	P_GET_OBJECT(UMovieScenePrimitiveMaterialTrack,Z_Param_Track);
	P_GET_STRUCT_REF(FComponentMaterialInfo,Z_Param_Out_MaterialInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialInfo(Z_Param_Track,Z_Param_Out_MaterialInfo);
	P_NATIVE_END;
}
// End Class UMovieScenePrimitiveMaterialTrackExtensions Function SetMaterialInfo

// Begin Class UMovieScenePrimitiveMaterialTrackExtensions
void UMovieScenePrimitiveMaterialTrackExtensions::StaticRegisterNativesUMovieScenePrimitiveMaterialTrackExtensions()
{
	UClass* Class = UMovieScenePrimitiveMaterialTrackExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMaterialIndex", &UMovieScenePrimitiveMaterialTrackExtensions::execGetMaterialIndex },
		{ "GetMaterialInfo", &UMovieScenePrimitiveMaterialTrackExtensions::execGetMaterialInfo },
		{ "SetMaterialIndex", &UMovieScenePrimitiveMaterialTrackExtensions::execSetMaterialIndex },
		{ "SetMaterialInfo", &UMovieScenePrimitiveMaterialTrackExtensions::execSetMaterialInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePrimitiveMaterialTrackExtensions);
UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_NoRegister()
{
	return UMovieScenePrimitiveMaterialTrackExtensions::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieScenePrimitiveMaterialTrack for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieScenePrimitiveMaterialTrack for scripting" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex, "GetMaterialIndex" }, // 381537281
		{ &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo, "GetMaterialInfo" }, // 4081676028
		{ &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex, "SetMaterialIndex" }, // 4057703577
		{ &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo, "SetMaterialInfo" }, // 2918166297
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePrimitiveMaterialTrackExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::ClassParams = {
	&UMovieScenePrimitiveMaterialTrackExtensions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions()
{
	if (!Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.OuterSingleton, Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieScenePrimitiveMaterialTrackExtensions>()
{
	return UMovieScenePrimitiveMaterialTrackExtensions::StaticClass();
}
UMovieScenePrimitiveMaterialTrackExtensions::UMovieScenePrimitiveMaterialTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePrimitiveMaterialTrackExtensions);
UMovieScenePrimitiveMaterialTrackExtensions::~UMovieScenePrimitiveMaterialTrackExtensions() {}
// End Class UMovieScenePrimitiveMaterialTrackExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions, UMovieScenePrimitiveMaterialTrackExtensions::StaticClass, TEXT("UMovieScenePrimitiveMaterialTrackExtensions"), &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePrimitiveMaterialTrackExtensions), 2898670987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_4147877536(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
