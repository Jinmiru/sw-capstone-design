// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieScene3DTransformPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformPropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformPropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformPropertySystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScene3DTransformPropertySystem
void UMovieScene3DTransformPropertySystem::StaticRegisterNativesUMovieScene3DTransformPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DTransformPropertySystem);
UClass* Z_Construct_UClass_UMovieScene3DTransformPropertySystem_NoRegister()
{
	return UMovieScene3DTransformPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieScene3DTransformPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScene3DTransformPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DTransformPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::ClassParams = {
	&UMovieScene3DTransformPropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene3DTransformPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieScene3DTransformPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DTransformPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene3DTransformPropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DTransformPropertySystem>()
{
	return UMovieScene3DTransformPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformPropertySystem);
UMovieScene3DTransformPropertySystem::~UMovieScene3DTransformPropertySystem() {}
// End Class UMovieScene3DTransformPropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScene3DTransformPropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DTransformPropertySystem, UMovieScene3DTransformPropertySystem::StaticClass, TEXT("UMovieScene3DTransformPropertySystem"), &Z_Registration_Info_UClass_UMovieScene3DTransformPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DTransformPropertySystem), 641818649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScene3DTransformPropertySystem_h_2411799409(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScene3DTransformPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScene3DTransformPropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
