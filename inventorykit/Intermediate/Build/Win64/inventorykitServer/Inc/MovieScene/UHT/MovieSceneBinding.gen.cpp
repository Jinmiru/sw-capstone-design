// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBinding() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBinding;
class UScriptStruct* FMovieSceneBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBinding, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBinding.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBinding>()
{
	return FMovieSceneBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A set of tracks bound to runtime objects\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "A set of tracks bound to runtime objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[] = {
		{ "Comment", "/** Object binding guid for runtime objects */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "Object binding guid for runtime objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingName_MetaData[] = {
		{ "Comment", "/** Display name */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "Display name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_Inner_MetaData[] = {
		{ "Comment", "/** All tracks in this binding */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "All tracks in this binding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "Comment", "/** All tracks in this binding */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "All tracks in this binding" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortingOrder_MetaData[] = {
		{ "Comment", "/** The desired sorting order for this binding in Sequencer */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "The desired sorting order for this binding in Sequencer" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BindingName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBinding, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectGuid_MetaData), NewProp_ObjectGuid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBinding, BindingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingName_MetaData), NewProp_BindingName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_Inner_MetaData), NewProp_Tracks_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBinding, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBinding, SortingOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortingOrder_MetaData), NewProp_SortingOrder_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneBinding",
	Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers),
	sizeof(FMovieSceneBinding),
	alignof(FMovieSceneBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBinding.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBinding.InnerSingleton;
}
// End ScriptStruct FMovieSceneBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneBinding::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewStructOps, TEXT("MovieSceneBinding"), &Z_Registration_Info_UScriptStruct_MovieSceneBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBinding), 22787615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_4226982462(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
