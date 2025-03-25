// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceInstanceData() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneSequenceInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData;
class UScriptStruct* FMovieSceneSequenceInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceInstanceData>()
{
	return FMovieSceneSequenceInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract base class that defines instance data for sub sequences\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceInstanceData.h" },
		{ "ToolTip", "Abstract base class that defines instance data for sub sequences" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequenceInstanceData",
	nullptr,
	0,
	sizeof(FMovieSceneSequenceInstanceData),
	alignof(FMovieSceneSequenceInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequenceInstanceData

// Begin ScriptStruct FMovieSceneSequenceInstanceDataPtr
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr;
class UScriptStruct* FMovieSceneSequenceInstanceDataPtr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceInstanceDataPtr"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceInstanceDataPtr>()
{
	return FMovieSceneSequenceInstanceDataPtr::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceInstanceData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceDataPtr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequenceInstanceDataPtr",
	nullptr,
	0,
	sizeof(FMovieSceneSequenceInstanceDataPtr),
	alignof(FMovieSceneSequenceInstanceDataPtr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequenceInstanceDataPtr

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSequenceInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::NewStructOps, TEXT("MovieSceneSequenceInstanceData"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceInstanceData), 763608371U) },
		{ FMovieSceneSequenceInstanceDataPtr::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::NewStructOps, TEXT("MovieSceneSequenceInstanceDataPtr"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceInstanceDataPtr), 2645484279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h_2308950671(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
