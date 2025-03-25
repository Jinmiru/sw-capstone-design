// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneChannelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChannelData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleLookupTable();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneKeyHandleMap
static_assert(std::is_polymorphic<FMovieSceneKeyHandleMap>() == std::is_polymorphic<FKeyHandleLookupTable>(), "USTRUCT FMovieSceneKeyHandleMap cannot be polymorphic unless super FKeyHandleLookupTable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap;
class UScriptStruct* FMovieSceneKeyHandleMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneKeyHandleMap"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneKeyHandleMap>()
{
	return FMovieSceneKeyHandleMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A map of key handles that is copyable, but does not copy data on copy */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneChannelData.h" },
		{ "ToolTip", "A map of key handles that is copyable, but does not copy data on copy" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneKeyHandleMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	Z_Construct_UScriptStruct_FKeyHandleLookupTable,
	&NewStructOps,
	"MovieSceneKeyHandleMap",
	nullptr,
	0,
	sizeof(FMovieSceneKeyHandleMap),
	alignof(FMovieSceneKeyHandleMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.InnerSingleton;
}
// End ScriptStruct FMovieSceneKeyHandleMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneKeyHandleMap::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::NewStructOps, TEXT("MovieSceneKeyHandleMap"), &Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneKeyHandleMap), 3777546645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h_3490500918(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
