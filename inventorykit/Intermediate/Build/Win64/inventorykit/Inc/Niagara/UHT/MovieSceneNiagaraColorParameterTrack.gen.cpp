// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/Parameters/MovieSceneNiagaraColorParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraColorParameterTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UMovieSceneNiagaraColorParameterTrack
void UMovieSceneNiagaraColorParameterTrack::StaticRegisterNativesUMovieSceneNiagaraColorParameterTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraColorParameterTrack);
UClass* Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_NoRegister()
{
	return UMovieSceneNiagaraColorParameterTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A track for animating color niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraColorParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraColorParameterTrack.h" },
		{ "ToolTip", "A track for animating color niagara parameters." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraColorParameterTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraParameterTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneNiagaraColorParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::ClassParams = {
	&UMovieSceneNiagaraColorParameterTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraColorParameterTrack>()
{
	return UMovieSceneNiagaraColorParameterTrack::StaticClass();
}
UMovieSceneNiagaraColorParameterTrack::UMovieSceneNiagaraColorParameterTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraColorParameterTrack);
UMovieSceneNiagaraColorParameterTrack::~UMovieSceneNiagaraColorParameterTrack() {}
// End Class UMovieSceneNiagaraColorParameterTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraColorParameterTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraColorParameterTrack, UMovieSceneNiagaraColorParameterTrack::StaticClass, TEXT("UMovieSceneNiagaraColorParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraColorParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraColorParameterTrack), 3490810717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraColorParameterTrack_h_2826313213(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraColorParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraColorParameterTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
