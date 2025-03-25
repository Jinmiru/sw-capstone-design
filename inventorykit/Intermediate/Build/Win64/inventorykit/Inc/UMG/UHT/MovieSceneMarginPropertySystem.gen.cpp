// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Private/Animation/MovieSceneMarginPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginPropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem();
UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UMovieSceneMarginPropertySystem
void UMovieSceneMarginPropertySystem::StaticRegisterNativesUMovieSceneMarginPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMarginPropertySystem);
UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem_NoRegister()
{
	return UMovieSceneMarginPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/MovieSceneMarginPropertySystem.h" },
		{ "ModuleRelativePath", "Private/Animation/MovieSceneMarginPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMarginPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::ClassParams = {
	&UMovieSceneMarginPropertySystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UMovieSceneMarginPropertySystem>()
{
	return UMovieSceneMarginPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMarginPropertySystem);
UMovieSceneMarginPropertySystem::~UMovieSceneMarginPropertySystem() {}
// End Class UMovieSceneMarginPropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMarginPropertySystem, UMovieSceneMarginPropertySystem::StaticClass, TEXT("UMovieSceneMarginPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMarginPropertySystem), 2964521186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h_1158197764(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
