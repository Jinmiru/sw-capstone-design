// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneActorReferenceTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieScenePropertyTemplate.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceTemplate() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneActorReferenceSectionTemplate
static_assert(std::is_polymorphic<FMovieSceneActorReferenceSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneActorReferenceSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceSectionTemplate;
class UScriptStruct* FMovieSceneActorReferenceSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneActorReferenceSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneActorReferenceSectionTemplate>()
{
	return FMovieSceneActorReferenceSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneActorReferenceTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneActorReferenceTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneActorReferenceTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorReferenceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneActorReferenceSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::NewProp_PropertyData = { "PropertyData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneActorReferenceSectionTemplate, PropertyData), Z_Construct_UScriptStruct_FMovieScenePropertySectionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyData_MetaData), NewProp_PropertyData_MetaData) }; // 3666510910
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::NewProp_ActorReferenceData = { "ActorReferenceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneActorReferenceSectionTemplate, ActorReferenceData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReferenceData_MetaData), NewProp_ActorReferenceData_MetaData) }; // 359755361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::NewProp_PropertyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::NewProp_ActorReferenceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneActorReferenceSectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneActorReferenceSectionTemplate),
	alignof(FMovieSceneActorReferenceSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneActorReferenceSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneActorReferenceTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneActorReferenceSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneActorReferenceSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneActorReferenceSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneActorReferenceSectionTemplate), 2484229408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneActorReferenceTemplate_h_2043496911(TEXT("/Script/MovieSceneTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneActorReferenceTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneActorReferenceTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
