// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneObjectPropertySection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneObjectPathChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPropertySection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneObjectPropertySection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneObjectPropertySection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneObjectPropertySection
void UMovieSceneObjectPropertySection::StaticRegisterNativesUMovieSceneObjectPropertySection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneObjectPropertySection);
UClass* Z_Construct_UClass_UMovieSceneObjectPropertySection_NoRegister()
{
	return UMovieSceneObjectPropertySection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneObjectPropertySection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneObjectPropertySection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneObjectPropertySection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneObjectPropertySection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::NewProp_ObjectChannel = { "ObjectChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneObjectPropertySection, ObjectChannel), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectChannel_MetaData), NewProp_ObjectChannel_MetaData) }; // 1924608816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::NewProp_ObjectChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneObjectPropertySection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::ClassParams = {
	&UMovieSceneObjectPropertySection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneObjectPropertySection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.OuterSingleton, Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneObjectPropertySection>()
{
	return UMovieSceneObjectPropertySection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneObjectPropertySection);
UMovieSceneObjectPropertySection::~UMovieSceneObjectPropertySection() {}
// End Class UMovieSceneObjectPropertySection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneObjectPropertySection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneObjectPropertySection, UMovieSceneObjectPropertySection::StaticClass, TEXT("UMovieSceneObjectPropertySection"), &Z_Registration_Info_UClass_UMovieSceneObjectPropertySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneObjectPropertySection), 1815931606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneObjectPropertySection_h_2078036786(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneObjectPropertySection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneObjectPropertySection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
