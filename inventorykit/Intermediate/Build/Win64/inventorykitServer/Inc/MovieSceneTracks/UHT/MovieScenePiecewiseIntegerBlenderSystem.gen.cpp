// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieScenePiecewiseIntegerBlenderSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePiecewiseIntegerBlenderSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePiecewiseIntegerBlenderSystem
void UMovieScenePiecewiseIntegerBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseIntegerBlenderSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePiecewiseIntegerBlenderSystem);
UClass* Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_NoRegister()
{
	return UMovieScenePiecewiseIntegerBlenderSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "Systems/MovieScenePiecewiseIntegerBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePiecewiseIntegerBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePiecewiseIntegerBlenderSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_Statics::ClassParams = {
	&UMovieScenePiecewiseIntegerBlenderSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem()
{
	if (!Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePiecewiseIntegerBlenderSystem>()
{
	return UMovieScenePiecewiseIntegerBlenderSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePiecewiseIntegerBlenderSystem);
UMovieScenePiecewiseIntegerBlenderSystem::~UMovieScenePiecewiseIntegerBlenderSystem() {}
// End Class UMovieScenePiecewiseIntegerBlenderSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseIntegerBlenderSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem, UMovieScenePiecewiseIntegerBlenderSystem::StaticClass, TEXT("UMovieScenePiecewiseIntegerBlenderSystem"), &Z_Registration_Info_UClass_UMovieScenePiecewiseIntegerBlenderSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePiecewiseIntegerBlenderSystem), 2123049133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseIntegerBlenderSystem_h_3739237270(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseIntegerBlenderSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseIntegerBlenderSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
