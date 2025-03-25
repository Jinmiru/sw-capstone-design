// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneChannelData.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneActorReferenceKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey;
class UScriptStruct* FMovieSceneActorReferenceKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneActorReferenceKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneActorReferenceKey>()
{
	return FMovieSceneActorReferenceKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Object;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneActorReferenceKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneActorReferenceKey, Object), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) }; // 2701874266
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneActorReferenceKey, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneActorReferenceKey, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneActorReferenceKey",
	Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers),
	sizeof(FMovieSceneActorReferenceKey),
	alignof(FMovieSceneActorReferenceKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.InnerSingleton;
}
// End ScriptStruct FMovieSceneActorReferenceKey

// Begin ScriptStruct FMovieSceneActorReferenceData
static_assert(std::is_polymorphic<FMovieSceneActorReferenceData>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneActorReferenceData cannot be polymorphic unless super FMovieSceneChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData;
class UScriptStruct* FMovieSceneActorReferenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneActorReferenceData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneActorReferenceData>()
{
	return FMovieSceneActorReferenceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A curve of events */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "A curve of events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Sorted array of key times */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Sorted array of key times" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** Default value used when there are no keys */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Default value used when there are no keys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneActorReferenceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyTimes_MetaData), NewProp_KeyTimes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneActorReferenceData, DefaultValue), Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) }; // 3745651854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey, METADATA_PARAMS(0, nullptr) }; // 3745651854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyValues_MetaData), NewProp_KeyValues_MetaData) }; // 3745651854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyHandles_MetaData), NewProp_KeyHandles_MetaData) }; // 3777546645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneChannel,
	&NewStructOps,
	"MovieSceneActorReferenceData",
	Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers),
	sizeof(FMovieSceneActorReferenceData),
	alignof(FMovieSceneActorReferenceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.InnerSingleton;
}
// End ScriptStruct FMovieSceneActorReferenceData

// Begin Class UMovieSceneActorReferenceSection
void UMovieSceneActorReferenceSection::StaticRegisterNativesUMovieSceneActorReferenceSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneActorReferenceSection);
UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister()
{
	return UMovieSceneActorReferenceSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single actor reference point section\n */" },
		{ "IncludePath", "Sections/MovieSceneActorReferenceSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "A single actor reference point section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorGuidIndexCurve_MetaData[] = {
		{ "Comment", "/** Curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorGuidStrings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorReferenceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGuidIndexCurve;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorGuidStrings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorGuidStrings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneActorReferenceSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData = { "ActorReferenceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorReferenceData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReferenceData_MetaData), NewProp_ActorReferenceData_MetaData) }; // 359755361
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve = { "ActorGuidIndexCurve", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidIndexCurve_DEPRECATED), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorGuidIndexCurve_MetaData), NewProp_ActorGuidIndexCurve_MetaData) }; // 1346212987
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_Inner = { "ActorGuidStrings", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings = { "ActorGuidStrings", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidStrings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorGuidStrings_MetaData), NewProp_ActorGuidStrings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::ClassParams = {
	&UMovieSceneActorReferenceSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.OuterSingleton, Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneActorReferenceSection>()
{
	return UMovieSceneActorReferenceSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneActorReferenceSection);
UMovieSceneActorReferenceSection::~UMovieSceneActorReferenceSection() {}
// End Class UMovieSceneActorReferenceSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneActorReferenceKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewStructOps, TEXT("MovieSceneActorReferenceKey"), &Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneActorReferenceKey), 3745651854U) },
		{ FMovieSceneActorReferenceData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewStructOps, TEXT("MovieSceneActorReferenceData"), &Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneActorReferenceData), 359755361U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneActorReferenceSection, UMovieSceneActorReferenceSection::StaticClass, TEXT("UMovieSceneActorReferenceSection"), &Z_Registration_Info_UClass_UMovieSceneActorReferenceSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneActorReferenceSection), 3679566486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_1379053107(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
