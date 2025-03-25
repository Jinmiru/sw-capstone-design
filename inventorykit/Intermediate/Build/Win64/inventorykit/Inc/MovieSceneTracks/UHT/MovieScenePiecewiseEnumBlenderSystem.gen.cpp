// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieScenePiecewiseEnumBlenderSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePiecewiseEnumBlenderSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePiecewiseEnumBlenderSystem
void UMovieScenePiecewiseEnumBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseEnumBlenderSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePiecewiseEnumBlenderSystem);
UClass* Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem_NoRegister()
{
	return UMovieScenePiecewiseEnumBlenderSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieScenePiecewiseEnumBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePiecewiseEnumBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePiecewiseEnumBlenderSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem_Statics::ClassParams = {
	&UMovieScenePiecewiseEnumBlenderSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem()
{
	if (!Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePiecewiseEnumBlenderSystem>()
{
	return UMovieScenePiecewiseEnumBlenderSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePiecewiseEnumBlenderSystem);
UMovieScenePiecewiseEnumBlenderSystem::~UMovieScenePiecewiseEnumBlenderSystem() {}
// End Class UMovieScenePiecewiseEnumBlenderSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseEnumBlenderSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePiecewiseEnumBlenderSystem, UMovieScenePiecewiseEnumBlenderSystem::StaticClass, TEXT("UMovieScenePiecewiseEnumBlenderSystem"), &Z_Registration_Info_UClass_UMovieScenePiecewiseEnumBlenderSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePiecewiseEnumBlenderSystem), 1803123487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseEnumBlenderSystem_h_1667537210(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseEnumBlenderSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseEnumBlenderSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
