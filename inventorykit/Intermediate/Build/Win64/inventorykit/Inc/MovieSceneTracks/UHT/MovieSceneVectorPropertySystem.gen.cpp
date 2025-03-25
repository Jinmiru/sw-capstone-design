// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneVectorPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVectorPropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneFloatVectorPropertySystem
void UMovieSceneFloatVectorPropertySystem::StaticRegisterNativesUMovieSceneFloatVectorPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFloatVectorPropertySystem);
UClass* Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_NoRegister()
{
	return UMovieSceneFloatVectorPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneVectorPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneVectorPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFloatVectorPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_Statics::ClassParams = {
	&UMovieSceneFloatVectorPropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFloatVectorPropertySystem>()
{
	return UMovieSceneFloatVectorPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFloatVectorPropertySystem);
UMovieSceneFloatVectorPropertySystem::~UMovieSceneFloatVectorPropertySystem() {}
// End Class UMovieSceneFloatVectorPropertySystem

// Begin Class UMovieSceneDoubleVectorPropertySystem
void UMovieSceneDoubleVectorPropertySystem::StaticRegisterNativesUMovieSceneDoubleVectorPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoubleVectorPropertySystem);
UClass* Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_NoRegister()
{
	return UMovieSceneDoubleVectorPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneVectorPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneVectorPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoubleVectorPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_Statics::ClassParams = {
	&UMovieSceneDoubleVectorPropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoubleVectorPropertySystem>()
{
	return UMovieSceneDoubleVectorPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoubleVectorPropertySystem);
UMovieSceneDoubleVectorPropertySystem::~UMovieSceneDoubleVectorPropertySystem() {}
// End Class UMovieSceneDoubleVectorPropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVectorPropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFloatVectorPropertySystem, UMovieSceneFloatVectorPropertySystem::StaticClass, TEXT("UMovieSceneFloatVectorPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneFloatVectorPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFloatVectorPropertySystem), 3652567362U) },
		{ Z_Construct_UClass_UMovieSceneDoubleVectorPropertySystem, UMovieSceneDoubleVectorPropertySystem::StaticClass, TEXT("UMovieSceneDoubleVectorPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneDoubleVectorPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoubleVectorPropertySystem), 1056217116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVectorPropertySystem_h_637604780(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVectorPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVectorPropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
