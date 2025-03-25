// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/IMovieSceneBlenderSystemSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneBlenderSystemSupport() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystemSupport();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystemSupport_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneBlenderSystemSupport
void UMovieSceneBlenderSystemSupport::StaticRegisterNativesUMovieSceneBlenderSystemSupport()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBlenderSystemSupport);
UClass* Z_Construct_UClass_UMovieSceneBlenderSystemSupport_NoRegister()
{
	return UMovieSceneBlenderSystemSupport::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/IMovieSceneBlenderSystemSupport.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneBlenderSystemSupport>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::ClassParams = {
	&UMovieSceneBlenderSystemSupport::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBlenderSystemSupport()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBlenderSystemSupport.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBlenderSystemSupport.OuterSingleton, Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBlenderSystemSupport.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBlenderSystemSupport>()
{
	return UMovieSceneBlenderSystemSupport::StaticClass();
}
UMovieSceneBlenderSystemSupport::UMovieSceneBlenderSystemSupport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBlenderSystemSupport);
UMovieSceneBlenderSystemSupport::~UMovieSceneBlenderSystemSupport() {}
// End Interface UMovieSceneBlenderSystemSupport

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBlenderSystemSupport, UMovieSceneBlenderSystemSupport::StaticClass, TEXT("UMovieSceneBlenderSystemSupport"), &Z_Registration_Info_UClass_UMovieSceneBlenderSystemSupport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBlenderSystemSupport), 489326844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_4012747034(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
