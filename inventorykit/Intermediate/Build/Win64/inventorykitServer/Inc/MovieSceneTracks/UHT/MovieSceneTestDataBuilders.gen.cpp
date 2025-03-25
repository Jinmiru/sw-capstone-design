// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tests/MovieSceneTestDataBuilders.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTestDataBuilders() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTestSequence();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTestSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneTestSequence
void UMovieSceneTestSequence::StaticRegisterNativesUMovieSceneTestSequence()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTestSequence);
UClass* Z_Construct_UClass_UMovieSceneTestSequence_NoRegister()
{
	return UMovieSceneTestSequence::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTestSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple type of sequence for use in automated tests.\n *\n * Bound objects are specified manually on the sequence and will be simply returned when\n * bindings are resolved.\n */" },
		{ "IncludePath", "Tests/MovieSceneTestDataBuilders.h" },
		{ "ModuleRelativePath", "Public/Tests/MovieSceneTestDataBuilders.h" },
		{ "ToolTip", "Simple type of sequence for use in automated tests.\n\nBound objects are specified manually on the sequence and will be simply returned when\nbindings are resolved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** The movie scene */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tests/MovieSceneTestDataBuilders.h" },
		{ "ToolTip", "The movie scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/MovieSceneTestDataBuilders.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingGuids_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/MovieSceneTestDataBuilders.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingGuids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingGuids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTestSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTestSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieScene_MetaData), NewProp_MovieScene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects_Inner = { "BoundObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects = { "BoundObjects", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTestSequence, BoundObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundObjects_MetaData), NewProp_BoundObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids_Inner = { "BindingGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids = { "BindingGuids", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTestSequence, BindingGuids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingGuids_MetaData), NewProp_BindingGuids_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTestSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_MovieScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTestSequence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneTestSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTestSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::ClassParams = {
	&UMovieSceneTestSequence::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneTestSequence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTestSequence_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTestSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTestSequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTestSequence()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTestSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTestSequence.OuterSingleton, Z_Construct_UClass_UMovieSceneTestSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTestSequence.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTestSequence>()
{
	return UMovieSceneTestSequence::StaticClass();
}
UMovieSceneTestSequence::UMovieSceneTestSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTestSequence);
UMovieSceneTestSequence::~UMovieSceneTestSequence() {}
// End Class UMovieSceneTestSequence

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTestSequence, UMovieSceneTestSequence::StaticClass, TEXT("UMovieSceneTestSequence"), &Z_Registration_Info_UClass_UMovieSceneTestSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTestSequence), 3863652553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_944820549(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
