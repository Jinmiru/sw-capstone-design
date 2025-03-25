// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCompiledDataManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledData();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledData_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntityComponentField();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneSequenceCompilerMaskStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct;
class UScriptStruct* FMovieSceneSequenceCompilerMaskStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceCompilerMaskStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceCompilerMaskStruct>()
{
	return FMovieSceneSequenceCompilerMaskStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Flag struct necessary while flag enums are not supported on UPROPERTY */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "Flag struct necessary while flag enums are not supported on UPROPERTY" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluationTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluationTemplateField_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEntityComponentField_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHierarchy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHierarchy;
	static void NewProp_bEvaluationTemplate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluationTemplate;
	static void NewProp_bEvaluationTemplateField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluationTemplateField;
	static void NewProp_bEntityComponentField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEntityComponentField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceCompilerMaskStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_SetBit(void* Obj)
{
	((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bHierarchy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy = { "bHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHierarchy_MetaData), NewProp_bHierarchy_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_SetBit(void* Obj)
{
	((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bEvaluationTemplate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate = { "bEvaluationTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluationTemplate_MetaData), NewProp_bEvaluationTemplate_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_SetBit(void* Obj)
{
	((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bEvaluationTemplateField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField = { "bEvaluationTemplateField", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluationTemplateField_MetaData), NewProp_bEvaluationTemplateField_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_SetBit(void* Obj)
{
	((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bEntityComponentField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField = { "bEntityComponentField", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEntityComponentField_MetaData), NewProp_bEntityComponentField_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequenceCompilerMaskStruct",
	Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers),
	sizeof(FMovieSceneSequenceCompilerMaskStruct),
	alignof(FMovieSceneSequenceCompilerMaskStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequenceCompilerMaskStruct

// Begin ScriptStruct FMovieSceneCompiledSequenceFlagStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct;
class UScriptStruct* FMovieSceneCompiledSequenceFlagStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneCompiledSequenceFlagStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneCompiledSequenceFlagStruct>()
{
	return FMovieSceneCompiledSequenceFlagStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Flags generated at compile time for a given sequence */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "Flags generated at compile time for a given sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParentSequenceRequiresLowerFence_MetaData[] = {
		{ "Comment", "/** True if this sequence should include a fence on the lower bound of any sub sequence's that include it */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "True if this sequence should include a fence on the lower bound of any sub sequence's that include it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParentSequenceRequiresUpperFence_MetaData[] = {
		{ "Comment", "/** True if this sequence should include a fence on the upper bound of any sub sequence's that include it */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "True if this sequence should include a fence on the upper bound of any sub sequence's that include it" },
	};
#endif // WITH_METADATA
	static void NewProp_bParentSequenceRequiresLowerFence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentSequenceRequiresLowerFence;
	static void NewProp_bParentSequenceRequiresUpperFence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentSequenceRequiresUpperFence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCompiledSequenceFlagStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence_SetBit(void* Obj)
{
	((FMovieSceneCompiledSequenceFlagStruct*)Obj)->bParentSequenceRequiresLowerFence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence = { "bParentSequenceRequiresLowerFence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneCompiledSequenceFlagStruct), &Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParentSequenceRequiresLowerFence_MetaData), NewProp_bParentSequenceRequiresLowerFence_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence_SetBit(void* Obj)
{
	((FMovieSceneCompiledSequenceFlagStruct*)Obj)->bParentSequenceRequiresUpperFence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence = { "bParentSequenceRequiresUpperFence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneCompiledSequenceFlagStruct), &Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParentSequenceRequiresUpperFence_MetaData), NewProp_bParentSequenceRequiresUpperFence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneCompiledSequenceFlagStruct",
	Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::PropPointers),
	sizeof(FMovieSceneCompiledSequenceFlagStruct),
	alignof(FMovieSceneCompiledSequenceFlagStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneCompiledSequenceFlagStruct

// Begin Class UMovieSceneCompiledData
void UMovieSceneCompiledData::StaticRegisterNativesUMovieSceneCompiledData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCompiledData);
UClass* Z_Construct_UClass_UMovieSceneCompiledData_NoRegister()
{
	return UMovieSceneCompiledData::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCompiledData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Used for serialization only */" },
		{ "IncludePath", "Compilation/MovieSceneCompiledDataManager.h" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "Used for serialization only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationTemplate_MetaData[] = {
		{ "Comment", "/** 352 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "352 Bytes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[] = {
		{ "Comment", "/** 352 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "352 Bytes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponentField_MetaData[] = {
		{ "Comment", "/** 272 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "272 Bytes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackTemplateField_MetaData[] = {
		{ "Comment", "/** 64 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "64 Bytes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeterminismFences_MetaData[] = {
		{ "Comment", "/** 16 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "16 Bytes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompiledSignature_MetaData[] = {
		{ "Comment", "/** 16 bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "16 bytes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompilerVersion_MetaData[] = {
		{ "Comment", "/** 16 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "16 Bytes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMask_MetaData[] = {
		{ "Comment", "/** 1 Byte */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "1 Byte" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedMask_MetaData[] = {
		{ "Comment", "/** 1 Byte */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "1 Byte" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedFlags_MetaData[] = {
		{ "Comment", "/** 1 Byte */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "1 Byte" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityComponentField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTemplateField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeterminismFences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeterminismFences;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledSignature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompilerVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllocatedMask;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccumulatedFlags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccumulatedFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCompiledData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate = { "EvaluationTemplate", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, EvaluationTemplate), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationTemplate_MetaData), NewProp_EvaluationTemplate_MetaData) }; // 2591460375
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, Hierarchy), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hierarchy_MetaData), NewProp_Hierarchy_MetaData) }; // 1395539713
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField = { "EntityComponentField", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, EntityComponentField), Z_Construct_UScriptStruct_FMovieSceneEntityComponentField, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityComponentField_MetaData), NewProp_EntityComponentField_MetaData) }; // 277914820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField = { "TrackTemplateField", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, TrackTemplateField), Z_Construct_UScriptStruct_FMovieSceneEvaluationField, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackTemplateField_MetaData), NewProp_TrackTemplateField_MetaData) }; // 1259474316
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_Inner = { "DeterminismFences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences = { "DeterminismFences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, DeterminismFences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeterminismFences_MetaData), NewProp_DeterminismFences_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature = { "CompiledSignature", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, CompiledSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompiledSignature_MetaData), NewProp_CompiledSignature_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion = { "CompilerVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, CompilerVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompilerVersion_MetaData), NewProp_CompilerVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask = { "AccumulatedMask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, AccumulatedMask), Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedMask_MetaData), NewProp_AccumulatedMask_MetaData) }; // 2208491637
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask = { "AllocatedMask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, AllocatedMask), Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocatedMask_MetaData), NewProp_AllocatedMask_MetaData) }; // 2208491637
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags = { "AccumulatedFlags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledData, AccumulatedFlags), Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedFlags_MetaData), NewProp_AccumulatedFlags_MetaData) }; // 3490904233
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneCompiledData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::ClassParams = {
	&UMovieSceneCompiledData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCompiledData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCompiledData()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCompiledData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCompiledData.OuterSingleton, Z_Construct_UClass_UMovieSceneCompiledData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCompiledData.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCompiledData>()
{
	return UMovieSceneCompiledData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCompiledData);
UMovieSceneCompiledData::~UMovieSceneCompiledData() {}
// End Class UMovieSceneCompiledData

// Begin Class UMovieSceneCompiledDataManager
void UMovieSceneCompiledDataManager::StaticRegisterNativesUMovieSceneCompiledDataManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCompiledDataManager);
UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister()
{
	return UMovieSceneCompiledDataManager::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Compilation/MovieSceneCompiledDataManager.h" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackTemplates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackTemplateFields_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponentFields_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchies_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Hierarchies_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Hierarchies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTemplates_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackTemplates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TrackTemplates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTemplateFields_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackTemplateFields_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TrackTemplateFields;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityComponentFields_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntityComponentFields_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EntityComponentFields;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCompiledDataManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_ValueProp = { "Hierarchies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, METADATA_PARAMS(0, nullptr) }; // 1395539713
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_Key_KeyProp = { "Hierarchies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies = { "Hierarchies", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledDataManager, Hierarchies), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hierarchies_MetaData), NewProp_Hierarchies_MetaData) }; // 1395539713
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_ValueProp = { "TrackTemplates", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, METADATA_PARAMS(0, nullptr) }; // 2591460375
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_Key_KeyProp = { "TrackTemplates_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates = { "TrackTemplates", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledDataManager, TrackTemplates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackTemplates_MetaData), NewProp_TrackTemplates_MetaData) }; // 2591460375
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_ValueProp = { "TrackTemplateFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationField, METADATA_PARAMS(0, nullptr) }; // 1259474316
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_Key_KeyProp = { "TrackTemplateFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields = { "TrackTemplateFields", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledDataManager, TrackTemplateFields), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackTemplateFields_MetaData), NewProp_TrackTemplateFields_MetaData) }; // 1259474316
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_ValueProp = { "EntityComponentFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneEntityComponentField, METADATA_PARAMS(0, nullptr) }; // 277914820
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_Key_KeyProp = { "EntityComponentFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields = { "EntityComponentFields", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCompiledDataManager, EntityComponentFields), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityComponentFields_MetaData), NewProp_EntityComponentFields_MetaData) }; // 277914820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::ClassParams = {
	&UMovieSceneCompiledDataManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.OuterSingleton, Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCompiledDataManager>()
{
	return UMovieSceneCompiledDataManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCompiledDataManager);
UMovieSceneCompiledDataManager::~UMovieSceneCompiledDataManager() {}
// End Class UMovieSceneCompiledDataManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSequenceCompilerMaskStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewStructOps, TEXT("MovieSceneSequenceCompilerMaskStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceCompilerMaskStruct), 2208491637U) },
		{ FMovieSceneCompiledSequenceFlagStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewStructOps, TEXT("MovieSceneCompiledSequenceFlagStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCompiledSequenceFlagStruct), 1763178606U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCompiledData, UMovieSceneCompiledData::StaticClass, TEXT("UMovieSceneCompiledData"), &Z_Registration_Info_UClass_UMovieSceneCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCompiledData), 1211900881U) },
		{ Z_Construct_UClass_UMovieSceneCompiledDataManager, UMovieSceneCompiledDataManager::StaticClass, TEXT("UMovieSceneCompiledDataManager"), &Z_Registration_Info_UClass_UMovieSceneCompiledDataManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCompiledDataManager), 2698667621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_2460817282(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
