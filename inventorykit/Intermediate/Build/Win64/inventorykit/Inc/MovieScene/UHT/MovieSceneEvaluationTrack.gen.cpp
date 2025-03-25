// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTrack() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EEvaluationMethod();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum EEvaluationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEvaluationMethod;
static UEnum* EEvaluationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EEvaluationMethod, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EEvaluationMethod"));
	}
	return Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EEvaluationMethod>()
{
	return EEvaluationMethod_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration to determine how a track should be evaluated */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "Static.Comment", "/** Evaluation only ever occurs at a single time. Delta is irrelevant. Example: Basic curve eval, animation */" },
		{ "Static.Name", "EEvaluationMethod::Static" },
		{ "Static.ToolTip", "Evaluation only ever occurs at a single time. Delta is irrelevant. Example: Basic curve eval, animation" },
		{ "Swept.Comment", "/** Evaluation from one frame to the next must consider the entire swept delta range on the track. Example: Events */" },
		{ "Swept.Name", "EEvaluationMethod::Swept" },
		{ "Swept.ToolTip", "Evaluation from one frame to the next must consider the entire swept delta range on the track. Example: Events" },
		{ "ToolTip", "Enumeration to determine how a track should be evaluated" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEvaluationMethod::Static", (int64)EEvaluationMethod::Static },
		{ "EEvaluationMethod::Swept", (int64)EEvaluationMethod::Swept },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EEvaluationMethod",
	"EEvaluationMethod",
	Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EEvaluationMethod()
{
	if (!Z_Registration_Info_UEnum_EEvaluationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEvaluationMethod.InnerSingleton, Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEvaluationMethod.InnerSingleton;
}
// End Enum EEvaluationMethod

// Begin ScriptStruct FMovieSceneEvaluationTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack;
class UScriptStruct* FMovieSceneEvaluationTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTrack"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationTrack>()
{
	return FMovieSceneEvaluationTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Evaluation track that is stored within an evaluation template for a sequence.\n * Contains user-defined evaluation templates, and an optional track implementation\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation track that is stored within an evaluation template for a sequence.\nContains user-defined evaluation templates, and an optional track implementation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[] = {
		{ "Comment", "/** ID of the possessable or spawnable within the UMovieScene this track belongs to, if any. Zero guid where this relates to a root track. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "ID of the possessable or spawnable within the UMovieScene this track belongs to, if any. Zero guid where this relates to a root track." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationPriority_MetaData[] = {
		{ "Comment", "/** Evaluation priority. Highest is evaluated first */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation priority. Highest is evaluated first" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationMethod_MetaData[] = {
		{ "Comment", "/** Evaluation method - static or swept */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation method - static or swept" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTrack_MetaData[] = {
		{ "Comment", "/** The movie scene track that created this evaluation track. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "The movie scene track that created this evaluation track." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildTemplates_MetaData[] = {
		{ "Comment", "/** Domain-specific evaluation templates (normally 1 per section) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Domain-specific evaluation templates (normally 1 per section)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackTemplate_MetaData[] = {
		{ "Comment", "/** Domain-specific track implementation override. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Domain-specific track implementation override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationGroup_MetaData[] = {
		{ "Comment", "/** Flush group that determines whether this track belongs to a group of tracks */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Flush group that determines whether this track belongs to a group of tracks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPreroll_MetaData[] = {
		{ "Comment", "/** Whether this track is evaluated in preroll */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Whether this track is evaluated in preroll" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPostroll_MetaData[] = {
		{ "Comment", "/** Whether this track is evaluated in postroll */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Whether this track is evaluated in postroll" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTearDownPriority_MetaData[] = {
		{ "Comment", "/** Whether track should be given priority when being torn down */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Whether track should be given priority when being torn down" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_EvaluationPriority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationMethod;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceTrack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildTemplates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildTemplates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTemplate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EvaluationGroup;
	static void NewProp_bEvaluateInPreroll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPreroll;
	static void NewProp_bEvaluateInPostroll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPostroll;
	static void NewProp_bTearDownPriority_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTearDownPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBindingID_MetaData), NewProp_ObjectBindingID_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority = { "EvaluationPriority", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationPriority_MetaData), NewProp_EvaluationPriority_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod = { "EvaluationMethod", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationMethod), Z_Construct_UEnum_MovieScene_EEvaluationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationMethod_MetaData), NewProp_EvaluationMethod_MetaData) }; // 770252406
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack = { "SourceTrack", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, SourceTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTrack_MetaData), NewProp_SourceTrack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_Inner = { "ChildTemplates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr, METADATA_PARAMS(0, nullptr) }; // 83311583
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates = { "ChildTemplates", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, ChildTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildTemplates_MetaData), NewProp_ChildTemplates_MetaData) }; // 83311583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate = { "TrackTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, TrackTemplate), Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackTemplate_MetaData), NewProp_TrackTemplate_MetaData) }; // 1972943098
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup = { "EvaluationGroup", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationGroup_MetaData), NewProp_EvaluationGroup_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_SetBit(void* Obj)
{
	((FMovieSceneEvaluationTrack*)Obj)->bEvaluateInPreroll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll = { "bEvaluateInPreroll", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneEvaluationTrack), &Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateInPreroll_MetaData), NewProp_bEvaluateInPreroll_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_SetBit(void* Obj)
{
	((FMovieSceneEvaluationTrack*)Obj)->bEvaluateInPostroll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll = { "bEvaluateInPostroll", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneEvaluationTrack), &Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateInPostroll_MetaData), NewProp_bEvaluateInPostroll_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority_SetBit(void* Obj)
{
	((FMovieSceneEvaluationTrack*)Obj)->bTearDownPriority = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority = { "bTearDownPriority", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneEvaluationTrack), &Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTearDownPriority_MetaData), NewProp_bTearDownPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationTrack",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationTrack),
	alignof(FMovieSceneEvaluationTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEvaluationMethod_StaticEnum, TEXT("EEvaluationMethod"), &Z_Registration_Info_UEnum_EEvaluationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 770252406U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEvaluationTrack::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewStructOps, TEXT("MovieSceneEvaluationTrack"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationTrack), 3356863472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_2396637151(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
