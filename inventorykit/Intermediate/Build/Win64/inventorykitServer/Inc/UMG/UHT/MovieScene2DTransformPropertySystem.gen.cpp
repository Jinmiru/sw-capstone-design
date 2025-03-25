// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformPropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem();
UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UMovieScene2DTransformPropertySystem
void UMovieScene2DTransformPropertySystem::StaticRegisterNativesUMovieScene2DTransformPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene2DTransformPropertySystem);
UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem_NoRegister()
{
	return UMovieScene2DTransformPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/MovieScene2DTransformPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene2DTransformPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::ClassParams = {
	&UMovieScene2DTransformPropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UMovieScene2DTransformPropertySystem>()
{
	return UMovieScene2DTransformPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformPropertySystem);
UMovieScene2DTransformPropertySystem::~UMovieScene2DTransformPropertySystem() {}
// End Class UMovieScene2DTransformPropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene2DTransformPropertySystem, UMovieScene2DTransformPropertySystem::StaticClass, TEXT("UMovieScene2DTransformPropertySystem"), &Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene2DTransformPropertySystem), 2213342478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h_2531423903(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
