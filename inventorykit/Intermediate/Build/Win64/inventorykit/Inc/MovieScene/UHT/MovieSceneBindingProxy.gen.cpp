// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneBindingProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingProxy() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneBindingProxy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBindingProxy;
class UScriptStruct* FMovieSceneBindingProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBindingProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingProxy, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBindingProxy"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingProxy.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBindingProxy>()
{
	return FMovieSceneBindingProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// Movie Scene Binding Proxy represents the binding ID (an FGuid) and the corresponding sequence that it relates to. \n// This is primarily used for scripting where there is no support for FMovieSceneSequenceID and use cases where \n// managing multiple bindings with their corresponding sequences is necessary.\n//\n" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingProxy.h" },
		{ "ToolTip", "Movie Scene Binding Proxy represents the binding ID (an FGuid) and the corresponding sequence that it relates to.\nThis is primarily used for scripting where there is no support for FMovieSceneSequenceID and use cases where\nmanaging multiple bindings with their corresponding sequences is necessary." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingID_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBindingProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::NewProp_BindingID = { "BindingID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingProxy, BindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingID_MetaData), NewProp_BindingID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingProxy, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::NewProp_BindingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::NewProp_Sequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneBindingProxy",
	Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::PropPointers),
	sizeof(FMovieSceneBindingProxy),
	alignof(FMovieSceneBindingProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBindingProxy.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingProxy.InnerSingleton;
}
// End ScriptStruct FMovieSceneBindingProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingProxy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneBindingProxy::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBindingProxy_Statics::NewStructOps, TEXT("MovieSceneBindingProxy"), &Z_Registration_Info_UScriptStruct_MovieSceneBindingProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBindingProxy), 2936931176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingProxy_h_422051337(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingProxy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
