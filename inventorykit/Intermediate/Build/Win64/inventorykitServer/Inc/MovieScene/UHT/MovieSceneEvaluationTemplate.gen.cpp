// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneTemplateGenerationLedger
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger;
class UScriptStruct* FMovieSceneTemplateGenerationLedger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTemplateGenerationLedger"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTemplateGenerationLedger>()
{
	return FMovieSceneTemplateGenerationLedger::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTrackIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackSignatureToTrackIdentifier_MetaData[] = {
		{ "Comment", "/** Map of track signature to array of track identifiers that it created */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of track signature to array of track identifiers that it created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSectionRanges_MetaData[] = {
		{ "Comment", "/** Map of sub section ranges that exist in a template */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of sub section ranges that exist in a template" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastTrackIdentifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TrackSignatureToTrackIdentifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubSectionRanges_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubSectionRanges_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SubSectionRanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier = { "LastTrackIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, LastTrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTrackIdentifier_MetaData), NewProp_LastTrackIdentifier_MetaData) }; // 3653032415
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_ValueProp = { "TrackSignatureToTrackIdentifier", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(0, nullptr) }; // 3653032415
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp = { "TrackSignatureToTrackIdentifier_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier = { "TrackSignatureToTrackIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, TrackSignatureToTrackIdentifier), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackSignatureToTrackIdentifier_MetaData), NewProp_TrackSignatureToTrackIdentifier_MetaData) }; // 3653032415
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_ValueProp = { "SubSectionRanges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(0, nullptr) }; // 83459642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_Key_KeyProp = { "SubSectionRanges_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges = { "SubSectionRanges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, SubSectionRanges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSectionRanges_MetaData), NewProp_SubSectionRanges_MetaData) }; // 83459642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTemplateGenerationLedger",
	Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers),
	sizeof(FMovieSceneTemplateGenerationLedger),
	alignof(FMovieSceneTemplateGenerationLedger),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.InnerSingleton;
}
// End ScriptStruct FMovieSceneTemplateGenerationLedger

// Begin ScriptStruct FMovieSceneSubSectionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData;
class UScriptStruct* FMovieSceneSubSectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSectionData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSectionData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSubSectionData>()
{
	return FMovieSceneSubSectionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Data that represents a single sub-section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Data that represents a single sub-section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "Comment", "/** The sub section itself */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "The sub section itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingId_MetaData[] = {
		{ "Comment", "/** The object binding that the sub section belongs to (usually zero) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "The object binding that the sub section belongs to (usually zero)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Comment", "/** Evaluation flags for the section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Evaluation flags for the section" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSectionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSectionData, Section), Z_Construct_UClass_UMovieSceneSubSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId = { "ObjectBindingId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSectionData, ObjectBindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBindingId_MetaData), NewProp_ObjectBindingId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSectionData, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 1683700086
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSubSectionData",
	Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers),
	sizeof(FMovieSceneSubSectionData),
	alignof(FMovieSceneSubSectionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.InnerSingleton;
}
// End ScriptStruct FMovieSceneSubSectionData

// Begin ScriptStruct FMovieSceneEvaluationTemplateSerialNumber
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber;
class UScriptStruct* FMovieSceneEvaluationTemplateSerialNumber::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTemplateSerialNumber"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationTemplateSerialNumber>()
{
	return FMovieSceneEvaluationTemplateSerialNumber::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Sereal number used to identify evaluation template state that can only ever increase over its lifetime.\n * Only to be stored internally on FMovieSceneEvaluationTemplate.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Sereal number used to identify evaluation template state that can only ever increase over its lifetime.\nOnly to be stored internally on FMovieSceneEvaluationTemplate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Comment", "/** The internal value of the serial number */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "The internal value of the serial number" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplateSerialNumber>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTemplateSerialNumber, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationTemplateSerialNumber",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationTemplateSerialNumber),
	alignof(FMovieSceneEvaluationTemplateSerialNumber),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationTemplateSerialNumber

// Begin ScriptStruct FMovieSceneEvaluationTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate;
class UScriptStruct* FMovieSceneEvaluationTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationTemplate>()
{
	return FMovieSceneEvaluationTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Template that is used for efficient runtime evaluation of a movie scene sequence. Potentially serialized into the asset.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Template that is used for efficient runtime evaluation of a movie scene sequence. Potentially serialized into the asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "Comment", "/** Map of evaluation tracks from identifier to track */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of evaluation tracks from identifier to track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceSignature_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateSerialNumber_MetaData[] = {
		{ "Comment", "/** Serial number that is incremented every time this template is re-generated through FMovieSceneEvaluationTemplateGenerator */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Serial number that is incremented every time this template is re-generated through FMovieSceneEvaluationTemplateGenerator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateLedger_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceSignature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateSerialNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateLedger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_ValueProp = { "Tracks", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack, METADATA_PARAMS(0, nullptr) }; // 3356863472
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_Key_KeyProp = { "Tracks_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(0, nullptr) }; // 3653032415
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, Tracks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) }; // 3653032415 3356863472
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature = { "SequenceSignature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, SequenceSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceSignature_MetaData), NewProp_SequenceSignature_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber = { "TemplateSerialNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TemplateSerialNumber), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateSerialNumber_MetaData), NewProp_TemplateSerialNumber_MetaData) }; // 122790458
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger = { "TemplateLedger", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TemplateLedger), Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateLedger_MetaData), NewProp_TemplateLedger_MetaData) }; // 4055715611
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationTemplate",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationTemplate),
	alignof(FMovieSceneEvaluationTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTemplateGenerationLedger::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewStructOps, TEXT("MovieSceneTemplateGenerationLedger"), &Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTemplateGenerationLedger), 4055715611U) },
		{ FMovieSceneSubSectionData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewStructOps, TEXT("MovieSceneSubSectionData"), &Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSubSectionData), 811534663U) },
		{ FMovieSceneEvaluationTemplateSerialNumber::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewStructOps, TEXT("MovieSceneEvaluationTemplateSerialNumber"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationTemplateSerialNumber), 122790458U) },
		{ FMovieSceneEvaluationTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewStructOps, TEXT("MovieSceneEvaluationTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationTemplate), 2591460375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h_1388960148(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
