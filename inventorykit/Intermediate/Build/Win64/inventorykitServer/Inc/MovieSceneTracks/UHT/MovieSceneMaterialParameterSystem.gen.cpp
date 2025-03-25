// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneMaterialParameterSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneMaterialParameterInstantiatorSystem
void UMovieSceneMaterialParameterInstantiatorSystem::StaticRegisterNativesUMovieSceneMaterialParameterInstantiatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMaterialParameterInstantiatorSystem);
UClass* Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_NoRegister()
{
	return UMovieSceneMaterialParameterInstantiatorSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System responsible for tracking material parameter entities.\n *\n * Tracks any BoundMaterial with a MaterialParameterInfo, as well as deprecated ScalarParameterName,\n * ColorParameterName or VectorParameterName.\n * Manages adding BlendChannelInputs and Outputs where multiple entities animate the same parameter\n * on the same bound material.\n * BoundMaterials may be a UMaterialInstanceDynamic, or a UMaterialParameterCollectionInstance.\n */" },
		{ "IncludePath", "Systems/MovieSceneMaterialParameterSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialParameterSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System responsible for tracking material parameter entities.\n\nTracks any BoundMaterial with a MaterialParameterInfo, as well as deprecated ScalarParameterName,\nColorParameterName or VectorParameterName.\nManages adding BlendChannelInputs and Outputs where multiple entities animate the same parameter\non the same bound material.\nBoundMaterials may be a UMaterialInstanceDynamic, or a UMaterialParameterCollectionInstance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleBlenderSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialParameterSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoubleBlenderSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialParameterInstantiatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::NewProp_DoubleBlenderSystem = { "DoubleBlenderSystem", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMaterialParameterInstantiatorSystem, DoubleBlenderSystem), Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleBlenderSystem_MetaData), NewProp_DoubleBlenderSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::NewProp_DoubleBlenderSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::ClassParams = {
	&UMovieSceneMaterialParameterInstantiatorSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMaterialParameterInstantiatorSystem>()
{
	return UMovieSceneMaterialParameterInstantiatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialParameterInstantiatorSystem);
UMovieSceneMaterialParameterInstantiatorSystem::~UMovieSceneMaterialParameterInstantiatorSystem() {}
// End Class UMovieSceneMaterialParameterInstantiatorSystem

// Begin Class UMovieSceneMaterialParameterEvaluationSystem
void UMovieSceneMaterialParameterEvaluationSystem::StaticRegisterNativesUMovieSceneMaterialParameterEvaluationSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMaterialParameterEvaluationSystem);
UClass* Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem_NoRegister()
{
	return UMovieSceneMaterialParameterEvaluationSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System responsible for animating material parameter entities.\n *\n * Visits any BoundMaterial with the supported parameter names and either a BlendChannelOutput component\n * or no BlendChannelInput, and applies the resulting parameter to the bound material instance.\n */" },
		{ "IncludePath", "Systems/MovieSceneMaterialParameterSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialParameterSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System responsible for animating material parameter entities.\n\nVisits any BoundMaterial with the supported parameter names and either a BlendChannelOutput component\nor no BlendChannelInput, and applies the resulting parameter to the bound material instance." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialParameterEvaluationSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem_Statics::ClassParams = {
	&UMovieSceneMaterialParameterEvaluationSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMaterialParameterEvaluationSystem>()
{
	return UMovieSceneMaterialParameterEvaluationSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialParameterEvaluationSystem);
UMovieSceneMaterialParameterEvaluationSystem::~UMovieSceneMaterialParameterEvaluationSystem() {}
// End Class UMovieSceneMaterialParameterEvaluationSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMaterialParameterInstantiatorSystem, UMovieSceneMaterialParameterInstantiatorSystem::StaticClass, TEXT("UMovieSceneMaterialParameterInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneMaterialParameterInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMaterialParameterInstantiatorSystem), 1227191130U) },
		{ Z_Construct_UClass_UMovieSceneMaterialParameterEvaluationSystem, UMovieSceneMaterialParameterEvaluationSystem::StaticClass, TEXT("UMovieSceneMaterialParameterEvaluationSystem"), &Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMaterialParameterEvaluationSystem), 3413342265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterSystem_h_821687543(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
