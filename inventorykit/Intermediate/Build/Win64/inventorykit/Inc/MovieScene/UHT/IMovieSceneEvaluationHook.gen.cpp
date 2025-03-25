// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/IMovieSceneEvaluationHook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneEvaluationHook() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneEvaluationHook
void UMovieSceneEvaluationHook::StaticRegisterNativesUMovieSceneEvaluationHook()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEvaluationHook);
UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister()
{
	return UMovieSceneEvaluationHook::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEvaluationHook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/IMovieSceneEvaluationHook.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneEvaluationHook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::ClassParams = {
	&UMovieSceneEvaluationHook::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEvaluationHook()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEvaluationHook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEvaluationHook.OuterSingleton, Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEvaluationHook.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEvaluationHook>()
{
	return UMovieSceneEvaluationHook::StaticClass();
}
UMovieSceneEvaluationHook::UMovieSceneEvaluationHook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEvaluationHook);
UMovieSceneEvaluationHook::~UMovieSceneEvaluationHook() {}
// End Interface UMovieSceneEvaluationHook

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEvaluationHook, UMovieSceneEvaluationHook::StaticClass, TEXT("UMovieSceneEvaluationHook"), &Z_Registration_Info_UClass_UMovieSceneEvaluationHook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEvaluationHook), 624418442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_3294370070(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
