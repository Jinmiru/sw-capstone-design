// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneQuaternionInterpolationRotationSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneQuaternionInterpolationRotationSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneQuaternionInterpolationRotationSystem
void UMovieSceneQuaternionInterpolationRotationSystem::StaticRegisterNativesUMovieSceneQuaternionInterpolationRotationSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneQuaternionInterpolationRotationSystem);
UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_NoRegister()
{
	return UMovieSceneQuaternionInterpolationRotationSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneQuaternionInterpolationRotationSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneQuaternionInterpolationRotationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneQuaternionInterpolationRotationSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::ClassParams = {
	&UMovieSceneQuaternionInterpolationRotationSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneQuaternionInterpolationRotationSystem>()
{
	return UMovieSceneQuaternionInterpolationRotationSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneQuaternionInterpolationRotationSystem);
UMovieSceneQuaternionInterpolationRotationSystem::~UMovieSceneQuaternionInterpolationRotationSystem() {}
// End Class UMovieSceneQuaternionInterpolationRotationSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionInterpolationRotationSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem, UMovieSceneQuaternionInterpolationRotationSystem::StaticClass, TEXT("UMovieSceneQuaternionInterpolationRotationSystem"), &Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneQuaternionInterpolationRotationSystem), 615792065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionInterpolationRotationSystem_h_1293956675(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionInterpolationRotationSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionInterpolationRotationSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
