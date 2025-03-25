// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneSkeletalAnimationSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneSkeletalAnimationSystem
void UMovieSceneSkeletalAnimationSystem::StaticRegisterNativesUMovieSceneSkeletalAnimationSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSkeletalAnimationSystem);
UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_NoRegister()
{
	return UMovieSceneSkeletalAnimationSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "IncludePath", "Systems/MovieSceneSkeletalAnimationSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneSkeletalAnimationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSkeletalAnimationSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::ClassParams = {
	&UMovieSceneSkeletalAnimationSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSkeletalAnimationSystem>()
{
	return UMovieSceneSkeletalAnimationSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationSystem);
UMovieSceneSkeletalAnimationSystem::~UMovieSceneSkeletalAnimationSystem() {}
// End Class UMovieSceneSkeletalAnimationSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneSkeletalAnimationSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem, UMovieSceneSkeletalAnimationSystem::StaticClass, TEXT("UMovieSceneSkeletalAnimationSystem"), &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSkeletalAnimationSystem), 253879874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneSkeletalAnimationSystem_h_1106306650(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneSkeletalAnimationSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneSkeletalAnimationSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
