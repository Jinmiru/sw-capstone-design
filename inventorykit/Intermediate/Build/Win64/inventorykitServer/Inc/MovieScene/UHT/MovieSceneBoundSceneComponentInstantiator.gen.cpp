// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneBoundSceneComponentInstantiator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoundSceneComponentInstantiator() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneBoundSceneComponentInstantiator
void UMovieSceneBoundSceneComponentInstantiator::StaticRegisterNativesUMovieSceneBoundSceneComponentInstantiator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBoundSceneComponentInstantiator);
UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister()
{
	return UMovieSceneBoundSceneComponentInstantiator::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneBoundSceneComponentInstantiator.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneBoundSceneComponentInstantiator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBoundSceneComponentInstantiator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::ClassParams = {
	&UMovieSceneBoundSceneComponentInstantiator::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.OuterSingleton, Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBoundSceneComponentInstantiator>()
{
	return UMovieSceneBoundSceneComponentInstantiator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoundSceneComponentInstantiator);
UMovieSceneBoundSceneComponentInstantiator::~UMovieSceneBoundSceneComponentInstantiator() {}
// End Class UMovieSceneBoundSceneComponentInstantiator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator, UMovieSceneBoundSceneComponentInstantiator::StaticClass, TEXT("UMovieSceneBoundSceneComponentInstantiator"), &Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBoundSceneComponentInstantiator), 3667418131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_1137867857(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
