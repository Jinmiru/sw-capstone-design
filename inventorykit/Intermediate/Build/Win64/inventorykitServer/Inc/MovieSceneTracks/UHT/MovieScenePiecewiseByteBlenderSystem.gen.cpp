// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieScenePiecewiseByteBlenderSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePiecewiseByteBlenderSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePiecewiseByteBlenderSystem
void UMovieScenePiecewiseByteBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseByteBlenderSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePiecewiseByteBlenderSystem);
UClass* Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_NoRegister()
{
	return UMovieScenePiecewiseByteBlenderSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieScenePiecewiseByteBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePiecewiseByteBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePiecewiseByteBlenderSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::ClassParams = {
	&UMovieScenePiecewiseByteBlenderSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem()
{
	if (!Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePiecewiseByteBlenderSystem>()
{
	return UMovieScenePiecewiseByteBlenderSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePiecewiseByteBlenderSystem);
UMovieScenePiecewiseByteBlenderSystem::~UMovieScenePiecewiseByteBlenderSystem() {}
// End Class UMovieScenePiecewiseByteBlenderSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseByteBlenderSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem, UMovieScenePiecewiseByteBlenderSystem::StaticClass, TEXT("UMovieScenePiecewiseByteBlenderSystem"), &Z_Registration_Info_UClass_UMovieScenePiecewiseByteBlenderSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePiecewiseByteBlenderSystem), 475265793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseByteBlenderSystem_h_3476277238(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseByteBlenderSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseByteBlenderSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
