// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneDoubleSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneDoubleChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoubleSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneDoubleSection
void UMovieSceneDoubleSection::StaticRegisterNativesUMovieSceneDoubleSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoubleSection);
UClass* Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister()
{
	return UMovieSceneDoubleSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDoubleSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A double precision floating point section\n */" },
		{ "IncludePath", "Sections/MovieSceneDoubleSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDoubleSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A double precision floating point section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleCurve_MetaData[] = {
		{ "Comment", "/** Double data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDoubleSection.h" },
		{ "ToolTip", "Double data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoubleSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDoubleSection_Statics::NewProp_DoubleCurve = { "DoubleCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDoubleSection, DoubleCurve), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleCurve_MetaData), NewProp_DoubleCurve_MetaData) }; // 3417982846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDoubleSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDoubleSection_Statics::NewProp_DoubleCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneDoubleSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneDoubleSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneDoubleSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoubleSection_Statics::ClassParams = {
	&UMovieSceneDoubleSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneDoubleSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDoubleSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDoubleSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDoubleSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoubleSection.OuterSingleton, Z_Construct_UClass_UMovieSceneDoubleSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDoubleSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoubleSection>()
{
	return UMovieSceneDoubleSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoubleSection);
UMovieSceneDoubleSection::~UMovieSceneDoubleSection() {}
// End Class UMovieSceneDoubleSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDoubleSection, UMovieSceneDoubleSection::StaticClass, TEXT("UMovieSceneDoubleSection"), &Z_Registration_Info_UClass_UMovieSceneDoubleSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoubleSection), 2728486212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_1762363234(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
