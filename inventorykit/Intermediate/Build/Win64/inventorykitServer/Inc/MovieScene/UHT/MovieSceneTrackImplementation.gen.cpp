// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackImplementation() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneTrackImplementation
static_assert(std::is_polymorphic<FMovieSceneTrackImplementation>() == std::is_polymorphic<FMovieSceneEvalTemplateBase>(), "USTRUCT FMovieSceneTrackImplementation cannot be polymorphic unless super FMovieSceneEvalTemplateBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementation;
class UScriptStruct* FMovieSceneTrackImplementation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackImplementation, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackImplementation"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementation.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackImplementation>()
{
	return FMovieSceneTrackImplementation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that allows the implementation of setup/teardown/initialization/evaluation logic at the track level.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackImplementation.h" },
		{ "ToolTip", "Structure that allows the implementation of setup/teardown/initialization/evaluation logic at the track level." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase,
	&NewStructOps,
	"MovieSceneTrackImplementation",
	nullptr,
	0,
	sizeof(FMovieSceneTrackImplementation),
	alignof(FMovieSceneTrackImplementation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementation.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementation.InnerSingleton;
}
// End ScriptStruct FMovieSceneTrackImplementation

// Begin ScriptStruct FMovieSceneTrackImplementationPtr
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementationPtr;
class UScriptStruct* FMovieSceneTrackImplementationPtr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementationPtr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementationPtr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackImplementationPtr"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementationPtr.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackImplementationPtr>()
{
	return FMovieSceneTrackImplementationPtr::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Custom serialized type that attempts to store a track implementation template in inline memory if possible */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackImplementation.h" },
		{ "ToolTip", "Custom serialized type that attempts to store a track implementation template in inline memory if possible" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementationPtr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTrackImplementationPtr",
	nullptr,
	0,
	sizeof(FMovieSceneTrackImplementationPtr),
	alignof(FMovieSceneTrackImplementationPtr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementationPtr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementationPtr.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementationPtr.InnerSingleton;
}
// End ScriptStruct FMovieSceneTrackImplementationPtr

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackImplementation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTrackImplementation::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::NewStructOps, TEXT("MovieSceneTrackImplementation"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackImplementation), 235277202U) },
		{ FMovieSceneTrackImplementationPtr::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::NewStructOps, TEXT("MovieSceneTrackImplementationPtr"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackImplementationPtr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackImplementationPtr), 1972943098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackImplementation_h_3405459579(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackImplementation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackImplementation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
