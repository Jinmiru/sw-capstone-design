// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/MovieSceneTracksComponentTypes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneCameraShakeSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTracksComponentTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintComponentData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelVisibilityComponentData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioComponentData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioInputData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseParams();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FPerlinNoiseParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerlinNoiseParams;
class UScriptStruct* FPerlinNoiseParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerlinNoiseParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerlinNoiseParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerlinNoiseParams, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("PerlinNoiseParams"));
	}
	return Z_Registration_Info_UScriptStruct_PerlinNoiseParams.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FPerlinNoiseParams>()
{
	return FPerlinNoiseParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for Perlin Noise channels */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for Perlin Noise channels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** The frequency of the noise, i.e. how many times per second does the noise peak */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "The frequency of the noise, i.e. how many times per second does the noise peak" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** The amplitude of the noise, which will vary between [-Amplitude, +Amplitude] */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "The amplitude of the noise, which will vary between [-Amplitude, +Amplitude]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** Starting offset, in seconds, into the noise pattern */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Starting offset, in seconds, into the noise pattern" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerlinNoiseParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerlinNoiseParams, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerlinNoiseParams, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerlinNoiseParams, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"PerlinNoiseParams",
	Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::PropPointers),
	sizeof(FPerlinNoiseParams),
	alignof(FPerlinNoiseParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseParams()
{
	if (!Z_Registration_Info_UScriptStruct_PerlinNoiseParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerlinNoiseParams.InnerSingleton, Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerlinNoiseParams.InnerSingleton;
}
// End ScriptStruct FPerlinNoiseParams

// Begin ScriptStruct FLevelVisibilityComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData;
class UScriptStruct* FLevelVisibilityComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelVisibilityComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("LevelVisibilityComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FLevelVisibilityComponentData>()
{
	return FLevelVisibilityComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the level visibility system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for the level visibility system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelVisibilityComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelVisibilityComponentData, Section), Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"LevelVisibilityComponentData",
	Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers),
	sizeof(FLevelVisibilityComponentData),
	alignof(FLevelVisibilityComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelVisibilityComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.InnerSingleton, Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.InnerSingleton;
}
// End ScriptStruct FLevelVisibilityComponentData

// Begin ScriptStruct FMovieSceneDataLayerComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData;
class UScriptStruct* FMovieSceneDataLayerComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneDataLayerComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneDataLayerComponentData>()
{
	return FMovieSceneDataLayerComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the data layer system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for the data layer system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDataLayerComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDataLayerComponentData, Section), Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneDataLayerComponentData",
	Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers),
	sizeof(FMovieSceneDataLayerComponentData),
	alignof(FMovieSceneDataLayerComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.InnerSingleton;
}
// End ScriptStruct FMovieSceneDataLayerComponentData

// Begin ScriptStruct FConstraintComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintComponentData;
class UScriptStruct* FConstraintComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ConstraintComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FConstraintComponentData>()
{
	return FConstraintComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the constraint system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for the constraint system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewProp_ConstraintID = { "ConstraintID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintComponentData, ConstraintID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintID_MetaData), NewProp_ConstraintID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewProp_ConstraintID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"ConstraintComponentData",
	Z_Construct_UScriptStruct_FConstraintComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintComponentData_Statics::PropPointers),
	sizeof(FConstraintComponentData),
	alignof(FConstraintComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintComponentData.InnerSingleton, Z_Construct_UScriptStruct_FConstraintComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintComponentData.InnerSingleton;
}
// End ScriptStruct FConstraintComponentData

// Begin ScriptStruct FMovieSceneSkeletalAnimationComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData;
class UScriptStruct* FMovieSceneSkeletalAnimationComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimationComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneSkeletalAnimationComponentData>()
{
	return FMovieSceneSkeletalAnimationComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for a skeletal mesh animation */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for a skeletal mesh animation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationComponentData, Section), Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneSkeletalAnimationComponentData",
	Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::PropPointers),
	sizeof(FMovieSceneSkeletalAnimationComponentData),
	alignof(FMovieSceneSkeletalAnimationComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.InnerSingleton;
}
// End ScriptStruct FMovieSceneSkeletalAnimationComponentData

// Begin ScriptStruct FMovieSceneAudioComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneAudioComponentData;
class UScriptStruct* FMovieSceneAudioComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAudioComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneAudioComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneAudioComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAudioComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneAudioComponentData>()
{
	return FMovieSceneAudioComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for audio tracks */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for audio tracks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAudioComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneAudioComponentData, Section), Z_Construct_UClass_UMovieSceneAudioSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneAudioComponentData",
	Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::PropPointers),
	sizeof(FMovieSceneAudioComponentData),
	alignof(FMovieSceneAudioComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAudioComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneAudioComponentData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAudioComponentData.InnerSingleton;
}
// End ScriptStruct FMovieSceneAudioComponentData

// Begin ScriptStruct FMovieSceneCameraShakeComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeComponentData;
class UScriptStruct* FMovieSceneCameraShakeComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeComponentData>()
{
	return FMovieSceneCameraShakeComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for camera shakes */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for camera shakes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionData_MetaData[] = {
		{ "Comment", "/** The shake data from the section that created this component */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "The shake data from the section that created this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[] = {
		{ "Comment", "/** The range of the section that created this component */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "The range of the section that created this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionSignature_MetaData[] = {
		{ "Comment", "/** The signature of the source section at the time the shake instance was created */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "The signature of the source section at the time the shake instance was created" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionSignature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::NewProp_SectionData = { "SectionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCameraShakeComponentData, SectionData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionData_MetaData), NewProp_SectionData_MetaData) }; // 913563034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCameraShakeComponentData, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionStartTime_MetaData), NewProp_SectionStartTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCameraShakeComponentData, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionEndTime_MetaData), NewProp_SectionEndTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::NewProp_SectionSignature = { "SectionSignature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCameraShakeComponentData, SectionSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionSignature_MetaData), NewProp_SectionSignature_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::NewProp_SectionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::NewProp_SectionStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::NewProp_SectionEndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::NewProp_SectionSignature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneCameraShakeComponentData",
	Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::PropPointers),
	sizeof(FMovieSceneCameraShakeComponentData),
	alignof(FMovieSceneCameraShakeComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeComponentData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeComponentData.InnerSingleton;
}
// End ScriptStruct FMovieSceneCameraShakeComponentData

// Begin ScriptStruct FMovieSceneCameraShakeInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeInstanceData;
class UScriptStruct* FMovieSceneCameraShakeInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeInstanceData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeInstanceData>()
{
	return FMovieSceneCameraShakeInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Component data for camera shakes created by the shake system\n * This is separate from FMovieSceneCameraShakeComponentData because that\n * one it imported from source shake sections, and our component data here\n * will be preserved on reimported entities.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for camera shakes created by the shake system\nThis is separate from FMovieSceneCameraShakeComponentData because that\none it imported from source shake sections, and our component data here\nwill be preserved on reimported entities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeInstance_MetaData[] = {
		{ "Comment", "/** Shake instance created by the shake evaluation system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Shake instance created by the shake evaluation system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionSignature_MetaData[] = {
		{ "Comment", "/** The signature of the source section at the time the shake instance was created */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "The signature of the source section at the time the shake instance was created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManagedByPreviewer_MetaData[] = {
		{ "Comment", "/** Whether this instance is managed by a shake previewer */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Whether this instance is managed by a shake previewer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShakeInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionSignature;
	static void NewProp_bManagedByPreviewer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManagedByPreviewer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::NewProp_ShakeInstance = { "ShakeInstance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCameraShakeInstanceData, ShakeInstance), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeInstance_MetaData), NewProp_ShakeInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::NewProp_SectionSignature = { "SectionSignature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCameraShakeInstanceData, SectionSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionSignature_MetaData), NewProp_SectionSignature_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::NewProp_bManagedByPreviewer_SetBit(void* Obj)
{
	((FMovieSceneCameraShakeInstanceData*)Obj)->bManagedByPreviewer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::NewProp_bManagedByPreviewer = { "bManagedByPreviewer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneCameraShakeInstanceData), &Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::NewProp_bManagedByPreviewer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManagedByPreviewer_MetaData), NewProp_bManagedByPreviewer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::NewProp_ShakeInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::NewProp_SectionSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::NewProp_bManagedByPreviewer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneCameraShakeInstanceData",
	Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::PropPointers),
	sizeof(FMovieSceneCameraShakeInstanceData),
	alignof(FMovieSceneCameraShakeInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeInstanceData.InnerSingleton;
}
// End ScriptStruct FMovieSceneCameraShakeInstanceData

// Begin ScriptStruct FMovieSceneAudioInputData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneAudioInputData;
class UScriptStruct* FMovieSceneAudioInputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAudioInputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneAudioInputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioInputData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneAudioInputData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAudioInputData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneAudioInputData>()
{
	return FMovieSceneAudioInputData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Component data for audio tracks inputs\n * This provides the names of the inputs whose values are stored on the\n * same entity using the DoubleResult, StringResult, BoolResult, and\n * IntegerResult components.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for audio tracks inputs\nThis provides the names of the inputs whose values are stored on the\nsame entity using the DoubleResult, StringResult, BoolResult, and\nIntegerResult components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatInputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FloatInputs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StringInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoolInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IntInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAudioInputData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::NewProp_FloatInputs = { "FloatInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(FloatInputs, FMovieSceneAudioInputData), STRUCT_OFFSET(FMovieSceneAudioInputData, FloatInputs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatInputs_MetaData), NewProp_FloatInputs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::NewProp_StringInput = { "StringInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneAudioInputData, StringInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringInput_MetaData), NewProp_StringInput_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::NewProp_BoolInput = { "BoolInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneAudioInputData, BoolInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolInput_MetaData), NewProp_BoolInput_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::NewProp_IntInput = { "IntInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneAudioInputData, IntInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntInput_MetaData), NewProp_IntInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::NewProp_FloatInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::NewProp_StringInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::NewProp_BoolInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::NewProp_IntInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneAudioInputData",
	Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::PropPointers),
	sizeof(FMovieSceneAudioInputData),
	alignof(FMovieSceneAudioInputData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioInputData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAudioInputData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneAudioInputData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAudioInputData.InnerSingleton;
}
// End ScriptStruct FMovieSceneAudioInputData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerlinNoiseParams::StaticStruct, Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewStructOps, TEXT("PerlinNoiseParams"), &Z_Registration_Info_UScriptStruct_PerlinNoiseParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerlinNoiseParams), 325962293U) },
		{ FLevelVisibilityComponentData::StaticStruct, Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewStructOps, TEXT("LevelVisibilityComponentData"), &Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelVisibilityComponentData), 1293068943U) },
		{ FMovieSceneDataLayerComponentData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewStructOps, TEXT("MovieSceneDataLayerComponentData"), &Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDataLayerComponentData), 958519287U) },
		{ FConstraintComponentData::StaticStruct, Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewStructOps, TEXT("ConstraintComponentData"), &Z_Registration_Info_UScriptStruct_ConstraintComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintComponentData), 2303200942U) },
		{ FMovieSceneSkeletalAnimationComponentData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewStructOps, TEXT("MovieSceneSkeletalAnimationComponentData"), &Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSkeletalAnimationComponentData), 3356273111U) },
		{ FMovieSceneAudioComponentData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneAudioComponentData_Statics::NewStructOps, TEXT("MovieSceneAudioComponentData"), &Z_Registration_Info_UScriptStruct_MovieSceneAudioComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneAudioComponentData), 1173727125U) },
		{ FMovieSceneCameraShakeComponentData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData_Statics::NewStructOps, TEXT("MovieSceneCameraShakeComponentData"), &Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCameraShakeComponentData), 1407214716U) },
		{ FMovieSceneCameraShakeInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData_Statics::NewStructOps, TEXT("MovieSceneCameraShakeInstanceData"), &Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCameraShakeInstanceData), 1106805422U) },
		{ FMovieSceneAudioInputData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneAudioInputData_Statics::NewStructOps, TEXT("MovieSceneAudioInputData"), &Z_Registration_Info_UScriptStruct_MovieSceneAudioInputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneAudioInputData), 3184007032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_1465339713(TEXT("/Script/MovieSceneTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
