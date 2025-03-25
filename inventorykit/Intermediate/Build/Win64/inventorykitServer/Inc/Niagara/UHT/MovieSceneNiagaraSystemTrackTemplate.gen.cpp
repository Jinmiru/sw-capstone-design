// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraSystemTrackTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FMovieSceneNiagaraSystemTrackTemplate
static_assert(std::is_polymorphic<FMovieSceneNiagaraSystemTrackTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneNiagaraSystemTrackTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate;
class UScriptStruct* FMovieSceneNiagaraSystemTrackTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraSystemTrackTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraSystemTrackTemplate>()
{
	return FMovieSceneNiagaraSystemTrackTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraSystemTrackTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneNiagaraSystemTrackTemplate",
	nullptr,
	0,
	sizeof(FMovieSceneNiagaraSystemTrackTemplate),
	alignof(FMovieSceneNiagaraSystemTrackTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneNiagaraSystemTrackTemplate

// Begin ScriptStruct FMovieSceneNiagaraSystemTrackImplementation
static_assert(std::is_polymorphic<FMovieSceneNiagaraSystemTrackImplementation>() == std::is_polymorphic<FMovieSceneTrackImplementation>(), "USTRUCT FMovieSceneNiagaraSystemTrackImplementation cannot be polymorphic unless super FMovieSceneTrackImplementation is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation;
class UScriptStruct* FMovieSceneNiagaraSystemTrackImplementation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraSystemTrackImplementation"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraSystemTrackImplementation>()
{
	return FMovieSceneNiagaraSystemTrackImplementation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionEndFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionStartBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionEvaluateBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionEndBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgeUpdateMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowScalability_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnSectionStartFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnSectionEndFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnSectionStartBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnSectionStartBehavior;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnSectionEvaluateBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnSectionEvaluateBehavior;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnSectionEndBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnSectionEndBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgeUpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AgeUpdateMode;
	static void NewProp_bAllowScalability_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowScalability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraSystemTrackImplementation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame = { "SpawnSectionStartFrame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSectionStartFrame_MetaData), NewProp_SpawnSectionStartFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame = { "SpawnSectionEndFrame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSectionEndFrame_MetaData), NewProp_SpawnSectionEndFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior = { "SpawnSectionStartBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSectionStartBehavior_MetaData), NewProp_SpawnSectionStartBehavior_MetaData) }; // 78137209
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior = { "SpawnSectionEvaluateBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEvaluateBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSectionEvaluateBehavior_MetaData), NewProp_SpawnSectionEvaluateBehavior_MetaData) }; // 707415321
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior = { "SpawnSectionEndBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSectionEndBehavior_MetaData), NewProp_SpawnSectionEndBehavior_MetaData) }; // 2894984328
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode = { "AgeUpdateMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, AgeUpdateMode), Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgeUpdateMode_MetaData), NewProp_AgeUpdateMode_MetaData) }; // 1196070179
void Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability_SetBit(void* Obj)
{
	((FMovieSceneNiagaraSystemTrackImplementation*)Obj)->bAllowScalability = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability = { "bAllowScalability", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneNiagaraSystemTrackImplementation), &Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowScalability_MetaData), NewProp_bAllowScalability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FMovieSceneTrackImplementation,
	&NewStructOps,
	"MovieSceneNiagaraSystemTrackImplementation",
	Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers),
	sizeof(FMovieSceneNiagaraSystemTrackImplementation),
	alignof(FMovieSceneNiagaraSystemTrackImplementation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.InnerSingleton;
}
// End ScriptStruct FMovieSceneNiagaraSystemTrackImplementation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_MovieSceneNiagaraSystemTrackTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneNiagaraSystemTrackTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::NewStructOps, TEXT("MovieSceneNiagaraSystemTrackTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraSystemTrackTemplate), 3030734877U) },
		{ FMovieSceneNiagaraSystemTrackImplementation::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewStructOps, TEXT("MovieSceneNiagaraSystemTrackImplementation"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraSystemTrackImplementation), 833832830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_MovieSceneNiagaraSystemTrackTemplate_h_1368937427(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_MovieSceneNiagaraSystemTrackTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_MovieSceneNiagaraSystemTrackTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
