// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneComponentMaterialSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComponentMaterialSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneComponentMaterialSystem
void UMovieSceneComponentMaterialSystem::StaticRegisterNativesUMovieSceneComponentMaterialSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComponentMaterialSystem);
UClass* Z_Construct_UClass_UMovieSceneComponentMaterialSystem_NoRegister()
{
	return UMovieSceneComponentMaterialSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "IncludePath", "Systems/MovieSceneComponentMaterialSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentMaterialSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentMaterialSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComponentMaterialSystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1017378651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::ClassParams = {
	&UMovieSceneComponentMaterialSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneComponentMaterialSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentMaterialSystem>()
{
	return UMovieSceneComponentMaterialSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentMaterialSystem);
UMovieSceneComponentMaterialSystem::~UMovieSceneComponentMaterialSystem() {}
// End Class UMovieSceneComponentMaterialSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComponentMaterialSystem, UMovieSceneComponentMaterialSystem::StaticClass, TEXT("UMovieSceneComponentMaterialSystem"), &Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComponentMaterialSystem), 3181070077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_738054048(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
