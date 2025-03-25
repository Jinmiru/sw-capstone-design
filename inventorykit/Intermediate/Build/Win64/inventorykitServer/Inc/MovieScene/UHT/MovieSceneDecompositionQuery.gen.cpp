// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneDecompositionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDecompositionQuery() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneValueDecomposer();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneValueDecomposer
void UMovieSceneValueDecomposer::StaticRegisterNativesUMovieSceneValueDecomposer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneValueDecomposer);
UClass* Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister()
{
	return UMovieSceneValueDecomposer::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneValueDecomposer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneDecompositionQuery.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneValueDecomposer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::ClassParams = {
	&UMovieSceneValueDecomposer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneValueDecomposer()
{
	if (!Z_Registration_Info_UClass_UMovieSceneValueDecomposer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneValueDecomposer.OuterSingleton, Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneValueDecomposer.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneValueDecomposer>()
{
	return UMovieSceneValueDecomposer::StaticClass();
}
UMovieSceneValueDecomposer::UMovieSceneValueDecomposer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneValueDecomposer);
UMovieSceneValueDecomposer::~UMovieSceneValueDecomposer() {}
// End Interface UMovieSceneValueDecomposer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneValueDecomposer, UMovieSceneValueDecomposer::StaticClass, TEXT("UMovieSceneValueDecomposer"), &Z_Registration_Info_UClass_UMovieSceneValueDecomposer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneValueDecomposer), 2513564584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_2707047825(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
