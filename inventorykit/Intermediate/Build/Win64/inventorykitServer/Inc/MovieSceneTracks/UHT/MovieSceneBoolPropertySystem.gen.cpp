// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneBoolPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoolPropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolPropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolPropertySystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneBoolPropertySystem
void UMovieSceneBoolPropertySystem::StaticRegisterNativesUMovieSceneBoolPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBoolPropertySystem);
UClass* Z_Construct_UClass_UMovieSceneBoolPropertySystem_NoRegister()
{
	return UMovieSceneBoolPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneBoolPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneBoolPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBoolPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::ClassParams = {
	&UMovieSceneBoolPropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBoolPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBoolPropertySystem>()
{
	return UMovieSceneBoolPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoolPropertySystem);
UMovieSceneBoolPropertySystem::~UMovieSceneBoolPropertySystem() {}
// End Class UMovieSceneBoolPropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBoolPropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBoolPropertySystem, UMovieSceneBoolPropertySystem::StaticClass, TEXT("UMovieSceneBoolPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBoolPropertySystem), 543705920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBoolPropertySystem_h_1171915196(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBoolPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBoolPropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
