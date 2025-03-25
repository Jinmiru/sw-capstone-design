// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/MovieSceneNiagaraSystemTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraSystemTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemTrack();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraTrack();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UMovieSceneNiagaraSystemTrack
void UMovieSceneNiagaraSystemTrack::StaticRegisterNativesUMovieSceneNiagaraSystemTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraSystemTrack);
UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_NoRegister()
{
	return UMovieSceneNiagaraSystemTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovieScene/MovieSceneNiagaraSystemTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemTrack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraSystemTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneNiagaraSystemTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::ClassParams = {
	&UMovieSceneNiagaraSystemTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraSystemTrack>()
{
	return UMovieSceneNiagaraSystemTrack::StaticClass();
}
UMovieSceneNiagaraSystemTrack::UMovieSceneNiagaraSystemTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraSystemTrack);
UMovieSceneNiagaraSystemTrack::~UMovieSceneNiagaraSystemTrack() {}
// End Class UMovieSceneNiagaraSystemTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraSystemTrack, UMovieSceneNiagaraSystemTrack::StaticClass, TEXT("UMovieSceneNiagaraSystemTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraSystemTrack), 685420502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemTrack_h_3762583163(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
