// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSectionParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSectionParameters() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum EMovieSceneSubSectionFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneSubSectionFlags;
static UEnum* EMovieSceneSubSectionFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneSubSectionFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneSubSectionFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneSubSectionFlags"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneSubSectionFlags.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneSubSectionFlags>()
{
	return EMovieSceneSubSectionFlags_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnyRestoreStateOverride.Name", "EMovieSceneSubSectionFlags::AnyRestoreStateOverride" },
		{ "BlendHierarchicalBias.Comment", "/** Blend this sub sequence's hierarchical bias level using a higher -> lower override. Values from higher biases will override those in lower biases until a combined weight of 1 is reached. */" },
		{ "BlendHierarchicalBias.Name", "EMovieSceneSubSectionFlags::BlendHierarchicalBias" },
		{ "BlendHierarchicalBias.ToolTip", "Blend this sub sequence's hierarchical bias level using a higher -> lower override. Values from higher biases will override those in lower biases until a combined weight of 1 is reached." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Flag structure that can be applied to any sub-section allowing control over various\n * behaviors for the nested sub-sequence.\n */" },
		{ "IgnoreHierarchicalBias.Comment", "/** Everything inside this sub-sequence should ignore hierarchical bias and always be relevant */" },
		{ "IgnoreHierarchicalBias.Name", "EMovieSceneSubSectionFlags::IgnoreHierarchicalBias" },
		{ "IgnoreHierarchicalBias.ToolTip", "Everything inside this sub-sequence should ignore hierarchical bias and always be relevant" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "None.Name", "EMovieSceneSubSectionFlags::None" },
		{ "OverrideKeepState.Comment", "/** When set, everything within the sub-section (including further sub-sections) should be keep-state. Mutually exclusive with OverrideRestoreState. */" },
		{ "OverrideKeepState.Name", "EMovieSceneSubSectionFlags::OverrideKeepState" },
		{ "OverrideKeepState.ToolTip", "When set, everything within the sub-section (including further sub-sections) should be keep-state. Mutually exclusive with OverrideRestoreState." },
		{ "OverrideRestoreState.Comment", "/** When set, everything within the sub-section (including further sub-sections) should be restore-state. Mutually exclusive with OverrideKeepState. */" },
		{ "OverrideRestoreState.Name", "EMovieSceneSubSectionFlags::OverrideRestoreState" },
		{ "OverrideRestoreState.ToolTip", "When set, everything within the sub-section (including further sub-sections) should be restore-state. Mutually exclusive with OverrideKeepState." },
		{ "ToolTip", "Flag structure that can be applied to any sub-section allowing control over various\nbehaviors for the nested sub-sequence." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneSubSectionFlags::None", (int64)EMovieSceneSubSectionFlags::None },
		{ "EMovieSceneSubSectionFlags::OverrideKeepState", (int64)EMovieSceneSubSectionFlags::OverrideKeepState },
		{ "EMovieSceneSubSectionFlags::OverrideRestoreState", (int64)EMovieSceneSubSectionFlags::OverrideRestoreState },
		{ "EMovieSceneSubSectionFlags::IgnoreHierarchicalBias", (int64)EMovieSceneSubSectionFlags::IgnoreHierarchicalBias },
		{ "EMovieSceneSubSectionFlags::BlendHierarchicalBias", (int64)EMovieSceneSubSectionFlags::BlendHierarchicalBias },
		{ "EMovieSceneSubSectionFlags::AnyRestoreStateOverride", (int64)EMovieSceneSubSectionFlags::AnyRestoreStateOverride },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneSubSectionFlags",
	"EMovieSceneSubSectionFlags",
	Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneSubSectionFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneSubSectionFlags.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneSubSectionFlags.InnerSingleton;
}
// End Enum EMovieSceneSubSectionFlags

// Begin ScriptStruct FMovieSceneSectionParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSectionParameters;
class UScriptStruct* FMovieSceneSectionParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSectionParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionParameters, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSectionParameters.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSectionParameters>()
{
	return FMovieSceneSectionParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "/** Number of frames (in display rate) to skip at the beginning of the sub-sequence. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Number of frames (in display rate) to skip at the beginning of the sub-sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanLoop_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "/** Whether this section supports looping the sub-sequence. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Whether this section supports looping the sub-sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "/** Number of frames (in display rate) to skip at the beginning of the sub-sequence. */" },
		{ "EditCondition", "bCanLoop" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Number of frames (in display rate) to skip at the beginning of the sub-sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "/** Number of frames (in display rate) to offset the first loop of the sub-sequence. */" },
		{ "EditCondition", "bCanLoop" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Number of frames (in display rate) to offset the first loop of the sub-sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Playback time scaling factor. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Playback time scaling factor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HierarchicalBias_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Hierachical bias. Higher bias will take precedence. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Hierachical bias. Higher bias will take precedence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Sub-section flags defining how to deal with this sub-sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Sub-section flags defining how to deal with this sub-sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostrollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static void NewProp_bCanLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstLoopStartFrameOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HierarchicalBias;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrerollTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostrollTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop_SetBit(void* Obj)
{
	((FMovieSceneSectionParameters*)Obj)->bCanLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop = { "bCanLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneSectionParameters), &Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanLoop_MetaData), NewProp_bCanLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrameOffset_MetaData), NewProp_EndFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstLoopStartFrameOffset_MetaData), NewProp_FirstLoopStartFrameOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, TimeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScale_MetaData), NewProp_TimeScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias = { "HierarchicalBias", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, HierarchicalBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HierarchicalBias_MetaData), NewProp_HierarchicalBias_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, Flags), Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 2440461908
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, StartOffset_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime = { "PrerollTime", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, PrerollTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerollTime_MetaData), NewProp_PrerollTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime = { "PostrollTime", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, PostrollTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostrollTime_MetaData), NewProp_PostrollTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_EndFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_FirstLoopStartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSectionParameters",
	Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers),
	sizeof(FMovieSceneSectionParameters),
	alignof(FMovieSceneSectionParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSectionParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSectionParameters.InnerSingleton;
}
// End ScriptStruct FMovieSceneSectionParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneSubSectionFlags_StaticEnum, TEXT("EMovieSceneSubSectionFlags"), &Z_Registration_Info_UEnum_EMovieSceneSubSectionFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2440461908U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSectionParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewStructOps, TEXT("MovieSceneSectionParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneSectionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSectionParameters), 3539368825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h_2429295260(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
