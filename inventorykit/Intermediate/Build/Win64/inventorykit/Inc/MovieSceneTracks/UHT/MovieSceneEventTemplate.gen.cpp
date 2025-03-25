// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneEventTemplate.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneEventSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTemplate() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneEventSectionTemplate
static_assert(std::is_polymorphic<FMovieSceneEventSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneEventSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate;
class UScriptStruct* FMovieSceneEventSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventSectionTemplate>()
{
	return FMovieSceneEventSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
	static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventSectionTemplate, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventData_MetaData), NewProp_EventData_MetaData) }; // 1810676249
void Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
{
	((FMovieSceneEventSectionTemplate*)Obj)->bFireEventsWhenForwards = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneEventSectionTemplate), &Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFireEventsWhenForwards_MetaData), NewProp_bFireEventsWhenForwards_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
{
	((FMovieSceneEventSectionTemplate*)Obj)->bFireEventsWhenBackwards = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneEventSectionTemplate), &Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFireEventsWhenBackwards_MetaData), NewProp_bFireEventsWhenBackwards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneEventSectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneEventSectionTemplate),
	alignof(FMovieSceneEventSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneEventSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneEventTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEventSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneEventSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventSectionTemplate), 4241070126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneEventTemplate_h_3605726683(TEXT("/Script/MovieSceneTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneEventTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneEventTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
