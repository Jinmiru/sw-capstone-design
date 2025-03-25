// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Public/ExtensionLibraries/MovieSceneMaterialTrackExtensions.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneMaterialTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialTrackExtensions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentMaterialInfo();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrackExtensions();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieSceneMaterialTrackExtensions Function GetMaterialIndex
struct Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics
{
	struct MovieSceneMaterialTrackExtensions_eventGetMaterialIndex_Parms
	{
		UMovieSceneComponentMaterialTrack* Track;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetMaterialInfo instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventGetMaterialIndex_Parms, Track), Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMaterialTrackExtensions, nullptr, "GetMaterialIndex", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::MovieSceneMaterialTrackExtensions_eventGetMaterialIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::MovieSceneMaterialTrackExtensions_eventGetMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMaterialTrackExtensions::execGetMaterialIndex)
{
	P_GET_OBJECT(UMovieSceneComponentMaterialTrack,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneMaterialTrackExtensions::GetMaterialIndex(Z_Param_Track);
	P_NATIVE_END;
}
// End Class UMovieSceneMaterialTrackExtensions Function GetMaterialIndex

// Begin Class UMovieSceneMaterialTrackExtensions Function GetMaterialInfo
struct Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics
{
	struct MovieSceneMaterialTrackExtensions_eventGetMaterialInfo_Parms
	{
		UMovieSceneComponentMaterialTrack* Track;
		FComponentMaterialInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get material info of the component that is animated by the material track.\n\x09 * @param Track The track to use\n\x09 * @return The material info.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetMaterialInfo instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventGetMaterialInfo_Parms, Track), Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventGetMaterialInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FComponentMaterialInfo, METADATA_PARAMS(0, nullptr) }; // 3517514751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMaterialTrackExtensions, nullptr, "GetMaterialInfo", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::MovieSceneMaterialTrackExtensions_eventGetMaterialInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::MovieSceneMaterialTrackExtensions_eventGetMaterialInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMaterialTrackExtensions::execGetMaterialInfo)
{
	P_GET_OBJECT(UMovieSceneComponentMaterialTrack,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FComponentMaterialInfo*)Z_Param__Result=UMovieSceneMaterialTrackExtensions::GetMaterialInfo(Z_Param_Track);
	P_NATIVE_END;
}
// End Class UMovieSceneMaterialTrackExtensions Function GetMaterialInfo

// Begin Class UMovieSceneMaterialTrackExtensions Function SetMaterialIndex
struct Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics
{
	struct MovieSceneMaterialTrackExtensions_eventSetMaterialIndex_Parms
	{
		UMovieSceneComponentMaterialTrack* Track;
		int32 MaterialIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetMaterialInfo instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventSetMaterialIndex_Parms, Track), Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventSetMaterialIndex_Parms, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMaterialTrackExtensions, nullptr, "SetMaterialIndex", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::MovieSceneMaterialTrackExtensions_eventSetMaterialIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::MovieSceneMaterialTrackExtensions_eventSetMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMaterialTrackExtensions::execSetMaterialIndex)
{
	P_GET_OBJECT(UMovieSceneComponentMaterialTrack,Z_Param_Track);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneMaterialTrackExtensions::SetMaterialIndex(Z_Param_Track,Z_Param_MaterialIndex);
	P_NATIVE_END;
}
// End Class UMovieSceneMaterialTrackExtensions Function SetMaterialIndex

// Begin Class UMovieSceneMaterialTrackExtensions Function SetMaterialInfo
struct Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics
{
	struct MovieSceneMaterialTrackExtensions_eventSetMaterialInfo_Parms
	{
		UMovieSceneComponentMaterialTrack* Track;
		FComponentMaterialInfo MaterialInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set material info of the component that is animated by the material track.\n\x09 * @param Track The track to use\n\x09 * @param MaterialInfo The desired material info to animate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventSetMaterialInfo_Parms, Track), Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::NewProp_MaterialInfo = { "MaterialInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventSetMaterialInfo_Parms, MaterialInfo), Z_Construct_UScriptStruct_FComponentMaterialInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInfo_MetaData), NewProp_MaterialInfo_MetaData) }; // 3517514751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::NewProp_MaterialInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMaterialTrackExtensions, nullptr, "SetMaterialInfo", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::MovieSceneMaterialTrackExtensions_eventSetMaterialInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::MovieSceneMaterialTrackExtensions_eventSetMaterialInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneMaterialTrackExtensions::execSetMaterialInfo)
{
	P_GET_OBJECT(UMovieSceneComponentMaterialTrack,Z_Param_Track);
	P_GET_STRUCT_REF(FComponentMaterialInfo,Z_Param_Out_MaterialInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneMaterialTrackExtensions::SetMaterialInfo(Z_Param_Track,Z_Param_Out_MaterialInfo);
	P_NATIVE_END;
}
// End Class UMovieSceneMaterialTrackExtensions Function SetMaterialInfo

// Begin Class UMovieSceneMaterialTrackExtensions
void UMovieSceneMaterialTrackExtensions::StaticRegisterNativesUMovieSceneMaterialTrackExtensions()
{
	UClass* Class = UMovieSceneMaterialTrackExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMaterialIndex", &UMovieSceneMaterialTrackExtensions::execGetMaterialIndex },
		{ "GetMaterialInfo", &UMovieSceneMaterialTrackExtensions::execGetMaterialInfo },
		{ "SetMaterialIndex", &UMovieSceneMaterialTrackExtensions::execSetMaterialIndex },
		{ "SetMaterialInfo", &UMovieSceneMaterialTrackExtensions::execSetMaterialInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMaterialTrackExtensions);
UClass* Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_NoRegister()
{
	return UMovieSceneMaterialTrackExtensions::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneMaterialTrack for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneMaterialTrack for scripting" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex, "GetMaterialIndex" }, // 601883911
		{ &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo, "GetMaterialInfo" }, // 2565733043
		{ &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex, "SetMaterialIndex" }, // 3632266203
		{ &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo, "SetMaterialInfo" }, // 934544484
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialTrackExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::ClassParams = {
	&UMovieSceneMaterialTrackExtensions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMaterialTrackExtensions()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneMaterialTrackExtensions>()
{
	return UMovieSceneMaterialTrackExtensions::StaticClass();
}
UMovieSceneMaterialTrackExtensions::UMovieSceneMaterialTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialTrackExtensions);
UMovieSceneMaterialTrackExtensions::~UMovieSceneMaterialTrackExtensions() {}
// End Class UMovieSceneMaterialTrackExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMaterialTrackExtensions, UMovieSceneMaterialTrackExtensions::StaticClass, TEXT("UMovieSceneMaterialTrackExtensions"), &Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMaterialTrackExtensions), 1301534214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h_1980670830(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
