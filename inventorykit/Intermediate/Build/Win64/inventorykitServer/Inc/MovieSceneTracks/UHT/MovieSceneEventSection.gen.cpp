// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneEventSection.h"
#include "Runtime/Engine/Classes/Curves/NameCurve.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneChannelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurve();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FEventPayload();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventParameters();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneEventParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventParameters;
class UScriptStruct* FMovieSceneEventParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventParameters, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventParameters>()
{
	return FMovieSceneEventParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneEventParameters",
	nullptr,
	0,
	sizeof(FMovieSceneEventParameters),
	alignof(FMovieSceneEventParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.InnerSingleton;
}
// End ScriptStruct FMovieSceneEventParameters

// Begin ScriptStruct FEventPayload
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventPayload;
class UScriptStruct* FEventPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventPayload, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EventPayload"));
	}
	return Z_Registration_Info_UScriptStruct_EventPayload.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FEventPayload>()
{
	return FEventPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEventPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** The name of the event to trigger */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "The name of the event to trigger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** The event parameters */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The event parameters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventPayload, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventPayload, Parameters), Z_Construct_UScriptStruct_FMovieSceneEventParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1253092260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"EventPayload",
	Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers),
	sizeof(FEventPayload),
	alignof(FEventPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEventPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEventPayload()
{
	if (!Z_Registration_Info_UScriptStruct_EventPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventPayload.InnerSingleton, Z_Construct_UScriptStruct_FEventPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EventPayload.InnerSingleton;
}
// End ScriptStruct FEventPayload

// Begin ScriptStruct FMovieSceneEventSectionData
static_assert(std::is_polymorphic<FMovieSceneEventSectionData>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneEventSectionData cannot be polymorphic unless super FMovieSceneChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData;
class UScriptStruct* FMovieSceneEventSectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventSectionData>()
{
	return FMovieSceneEventSectionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A curve of events */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "A curve of events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyTimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventSectionData, Times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Times_MetaData), NewProp_Times_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEventPayload, METADATA_PARAMS(0, nullptr) }; // 2907620303
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyValues_MetaData), NewProp_KeyValues_MetaData) }; // 2907620303
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyHandles_MetaData), NewProp_KeyHandles_MetaData) }; // 3777546645
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyTimes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyTimes_MetaData), NewProp_KeyTimes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyHandles,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneChannel,
	&NewStructOps,
	"MovieSceneEventSectionData",
	Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers),
	sizeof(FMovieSceneEventSectionData),
	alignof(FMovieSceneEventSectionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.InnerSingleton;
}
// End ScriptStruct FMovieSceneEventSectionData

// Begin Class UMovieSceneEventSection
void UMovieSceneEventSection::StaticRegisterNativesUMovieSceneEventSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventSection);
UClass* Z_Construct_UClass_UMovieSceneEventSection_NoRegister()
{
	return UMovieSceneEventSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEventSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a section in movie scene event tracks.\n */" },
		{ "IncludePath", "Sections/MovieSceneEventSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "Implements a section in movie scene event tracks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Events;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneEventSection, Events_DEPRECATED), Z_Construct_UScriptStruct_FNameCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) }; // 1971777300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneEventSection, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventData_MetaData), NewProp_EventData_MetaData) }; // 1810676249
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneEventSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventSection_Statics::ClassParams = {
	&UMovieSceneEventSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEventSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEventSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEventSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventSection.OuterSingleton, Z_Construct_UClass_UMovieSceneEventSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEventSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventSection>()
{
	return UMovieSceneEventSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventSection);
UMovieSceneEventSection::~UMovieSceneEventSection() {}
// End Class UMovieSceneEventSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEventParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::NewStructOps, TEXT("MovieSceneEventParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneEventParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventParameters), 1253092260U) },
		{ FEventPayload::StaticStruct, Z_Construct_UScriptStruct_FEventPayload_Statics::NewStructOps, TEXT("EventPayload"), &Z_Registration_Info_UScriptStruct_EventPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventPayload), 2907620303U) },
		{ FMovieSceneEventSectionData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewStructOps, TEXT("MovieSceneEventSectionData"), &Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventSectionData), 1810676249U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventSection, UMovieSceneEventSection::StaticClass, TEXT("UMovieSceneEventSection"), &Z_Registration_Info_UClass_UMovieSceneEventSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventSection), 329634083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_2031094977(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
