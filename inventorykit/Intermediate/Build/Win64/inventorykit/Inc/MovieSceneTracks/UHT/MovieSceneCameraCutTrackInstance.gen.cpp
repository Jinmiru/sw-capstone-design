// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/TrackInstances/MovieSceneCameraCutTrackInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTrackInstance() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneCameraCutTrackInstance
void UMovieSceneCameraCutTrackInstance::StaticRegisterNativesUMovieSceneCameraCutTrackInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraCutTrackInstance);
UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_NoRegister()
{
	return UMovieSceneCameraCutTrackInstance::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Track instance used to animate camera cuts.\n */" },
		{ "IncludePath", "TrackInstances/MovieSceneCameraCutTrackInstance.h" },
		{ "ModuleRelativePath", "Public/TrackInstances/MovieSceneCameraCutTrackInstance.h" },
		{ "ToolTip", "Track instance used to animate camera cuts." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraCutTrackInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::ClassParams = {
	&UMovieSceneCameraCutTrackInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraCutTrackInstance>()
{
	return UMovieSceneCameraCutTrackInstance::StaticClass();
}
UMovieSceneCameraCutTrackInstance::UMovieSceneCameraCutTrackInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraCutTrackInstance);
UMovieSceneCameraCutTrackInstance::~UMovieSceneCameraCutTrackInstance() {}
// End Class UMovieSceneCameraCutTrackInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraCutTrackInstance, UMovieSceneCameraCutTrackInstance::StaticClass, TEXT("UMovieSceneCameraCutTrackInstance"), &Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraCutTrackInstance), 1633685194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_783340497(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
