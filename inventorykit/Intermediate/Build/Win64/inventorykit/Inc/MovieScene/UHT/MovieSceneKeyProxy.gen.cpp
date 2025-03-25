// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneKeyProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneKeyProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneKeyProxy();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneKeyProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneKeyProxy
void UMovieSceneKeyProxy::StaticRegisterNativesUMovieSceneKeyProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneKeyProxy);
UClass* Z_Construct_UClass_UMovieSceneKeyProxy_NoRegister()
{
	return UMovieSceneKeyProxy::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneKeyProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneKeyProxy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneKeyProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneKeyProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneKeyProxy_Statics::ClassParams = {
	&UMovieSceneKeyProxy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneKeyProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneKeyProxy()
{
	if (!Z_Registration_Info_UClass_UMovieSceneKeyProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneKeyProxy.OuterSingleton, Z_Construct_UClass_UMovieSceneKeyProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneKeyProxy.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneKeyProxy>()
{
	return UMovieSceneKeyProxy::StaticClass();
}
UMovieSceneKeyProxy::UMovieSceneKeyProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneKeyProxy);
UMovieSceneKeyProxy::~UMovieSceneKeyProxy() {}
// End Interface UMovieSceneKeyProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneKeyProxy, UMovieSceneKeyProxy::StaticClass, TEXT("UMovieSceneKeyProxy"), &Z_Registration_Info_UClass_UMovieSceneKeyProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneKeyProxy), 2592212589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_1774273067(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
