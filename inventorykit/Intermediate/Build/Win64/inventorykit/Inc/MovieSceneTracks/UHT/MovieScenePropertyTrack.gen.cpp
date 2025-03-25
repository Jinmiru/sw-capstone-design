// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieScenePropertyTrack.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieScenePropertyBinding.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertyBinding();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePropertyTrack
void UMovieScenePropertyTrack::StaticRegisterNativesUMovieScenePropertyTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePropertyTrack);
UClass* Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister()
{
	return UMovieScenePropertyTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePropertyTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for tracks that animate an object property\n */" },
		{ "IncludePath", "Tracks/MovieScenePropertyTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Base class for tracks that animate an object property" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueTrackName_MetaData[] = {
		{ "Comment", "/** Unique name for this track to afford multiple tracks on a given object (i.e. for array properties) */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Unique name for this track to afford multiple tracks on a given object (i.e. for array properties)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** Name of the property being changed */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Name of the property being changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[] = {
		{ "Comment", "/** Path to the property from the source object being changed */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Path to the property from the source object being changed" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionToKey_MetaData[] = {
		{ "Comment", "/** Section we should Key */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "Section we should Key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "Comment", "/** All the sections in this list */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePropertyTrack.h" },
		{ "ToolTip", "All the sections in this list" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_UniqueTrackName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyPath;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionToKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePropertyTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_UniqueTrackName = { "UniqueTrackName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, UniqueTrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueTrackName_MetaData), NewProp_UniqueTrackName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, PropertyName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, PropertyPath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyPath_MetaData), NewProp_PropertyPath_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_SectionToKey = { "SectionToKey", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, SectionToKey), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionToKey_MetaData), NewProp_SectionToKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyBinding = { "PropertyBinding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, PropertyBinding), Z_Construct_UScriptStruct_FMovieScenePropertyBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyBinding_MetaData), NewProp_PropertyBinding_MetaData) }; // 509261761
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePropertyTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePropertyTrack_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_UniqueTrackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyPath,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_SectionToKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_PropertyBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertyTrack_Statics::NewProp_Sections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScenePropertyTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePropertyTrack_Statics::ClassParams = {
	&UMovieScenePropertyTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScenePropertyTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::PropPointers),
	0,
	0x00A800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePropertyTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePropertyTrack()
{
	if (!Z_Registration_Info_UClass_UMovieScenePropertyTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePropertyTrack.OuterSingleton, Z_Construct_UClass_UMovieScenePropertyTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePropertyTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePropertyTrack>()
{
	return UMovieScenePropertyTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePropertyTrack);
UMovieScenePropertyTrack::~UMovieScenePropertyTrack() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScenePropertyTrack)
// End Class UMovieScenePropertyTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePropertyTrack, UMovieScenePropertyTrack::StaticClass, TEXT("UMovieScenePropertyTrack"), &Z_Registration_Info_UClass_UMovieScenePropertyTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePropertyTrack), 2141978245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_2083958288(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePropertyTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
