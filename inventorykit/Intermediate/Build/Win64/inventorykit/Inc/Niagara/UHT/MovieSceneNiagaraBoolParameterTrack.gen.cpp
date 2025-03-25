// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/Parameters/MovieSceneNiagaraBoolParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraBoolParameterTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UMovieSceneNiagaraBoolParameterTrack
void UMovieSceneNiagaraBoolParameterTrack::StaticRegisterNativesUMovieSceneNiagaraBoolParameterTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraBoolParameterTrack);
UClass* Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_NoRegister()
{
	return UMovieSceneNiagaraBoolParameterTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A track for animating boolean niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraBoolParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraBoolParameterTrack.h" },
		{ "ToolTip", "A track for animating boolean niagara parameters." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraBoolParameterTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraParameterTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneNiagaraBoolParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::ClassParams = {
	&UMovieSceneNiagaraBoolParameterTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraBoolParameterTrack>()
{
	return UMovieSceneNiagaraBoolParameterTrack::StaticClass();
}
UMovieSceneNiagaraBoolParameterTrack::UMovieSceneNiagaraBoolParameterTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraBoolParameterTrack);
UMovieSceneNiagaraBoolParameterTrack::~UMovieSceneNiagaraBoolParameterTrack() {}
// End Class UMovieSceneNiagaraBoolParameterTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack, UMovieSceneNiagaraBoolParameterTrack::StaticClass, TEXT("UMovieSceneNiagaraBoolParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraBoolParameterTrack), 1827676011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_327147792(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
