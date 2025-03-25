// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneCustomPrimitiveDataSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCustomPrimitiveDataSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneCustomPrimitiveDataSystem
void UMovieSceneCustomPrimitiveDataSystem::StaticRegisterNativesUMovieSceneCustomPrimitiveDataSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCustomPrimitiveDataSystem);
UClass* Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_NoRegister()
{
	return UMovieSceneCustomPrimitiveDataSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System responsible for tracking and animating custom primitive data entities.\n * Operates on the following component types from FMovieSceneTracksComponentTypes:\n *\n * Instantiation: Tracks any ScalarParameterName with a CustomPrimitiveData tag on a BoundObject where that BoundObject is a Primitive Component.\n *                Manages adding BlendChannelInputs and Outputs where multiple entities animate the same custom primitive data index.\n *\n * Evaluation:    Visits any BoundObject with the supported parameter name and either a BlendChannelOutput component\n *                or no BlendChannelInput, and applies the resulting parameter to the Custom Primitive Data on the Primitive Component.\n */" },
		{ "IncludePath", "Systems/MovieSceneCustomPrimitiveDataSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneCustomPrimitiveDataSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System responsible for tracking and animating custom primitive data entities.\nOperates on the following component types from FMovieSceneTracksComponentTypes:\n\nInstantiation: Tracks any ScalarParameterName with a CustomPrimitiveData tag on a BoundObject where that BoundObject is a Primitive Component.\n               Manages adding BlendChannelInputs and Outputs where multiple entities animate the same custom primitive data index.\n\nEvaluation:    Visits any BoundObject with the supported parameter name and either a BlendChannelOutput component\n               or no BlendChannelInput, and applies the resulting parameter to the Custom Primitive Data on the Primitive Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleBlenderSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneCustomPrimitiveDataSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoubleBlenderSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCustomPrimitiveDataSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::NewProp_DoubleBlenderSystem = { "DoubleBlenderSystem", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCustomPrimitiveDataSystem, DoubleBlenderSystem), Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleBlenderSystem_MetaData), NewProp_DoubleBlenderSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::NewProp_DoubleBlenderSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::ClassParams = {
	&UMovieSceneCustomPrimitiveDataSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCustomPrimitiveDataSystem>()
{
	return UMovieSceneCustomPrimitiveDataSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCustomPrimitiveDataSystem);
UMovieSceneCustomPrimitiveDataSystem::~UMovieSceneCustomPrimitiveDataSystem() {}
// End Class UMovieSceneCustomPrimitiveDataSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneCustomPrimitiveDataSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSystem, UMovieSceneCustomPrimitiveDataSystem::StaticClass, TEXT("UMovieSceneCustomPrimitiveDataSystem"), &Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCustomPrimitiveDataSystem), 3640410297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneCustomPrimitiveDataSystem_h_1316969106(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneCustomPrimitiveDataSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneCustomPrimitiveDataSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
