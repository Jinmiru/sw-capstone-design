// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieScenePropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertySystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePropertySystem
void UMovieScenePropertySystem::StaticRegisterNativesUMovieScenePropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePropertySystem);
UClass* Z_Construct_UClass_UMovieScenePropertySystem_NoRegister()
{
	return UMovieScenePropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Abstract base class for any property system that deals with a property registered with FBuiltInComponentTypes::PropertyRegistry */" },
		{ "IncludePath", "Systems/MovieScenePropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract base class for any property system that deals with a property registered with FBuiltInComponentTypes::PropertyRegistry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantiatorSystem_MetaData[] = {
		{ "Comment", "/** Pointer to the property instantiator system for retrieving property stats */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePropertySystem.h" },
		{ "ToolTip", "Pointer to the property instantiator system for retrieving property stats" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstantiatorSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem = { "InstantiatorSystem", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePropertySystem, InstantiatorSystem), Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantiatorSystem_MetaData), NewProp_InstantiatorSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePropertySystem_Statics::NewProp_InstantiatorSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScenePropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScenePropertySystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieScenePropertySystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1017378651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePropertySystem_Statics::ClassParams = {
	&UMovieScenePropertySystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieScenePropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePropertySystem.OuterSingleton, Z_Construct_UClass_UMovieScenePropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePropertySystem>()
{
	return UMovieScenePropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePropertySystem);
UMovieScenePropertySystem::~UMovieScenePropertySystem() {}
// End Class UMovieScenePropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePropertySystem, UMovieScenePropertySystem::StaticClass, TEXT("UMovieScenePropertySystem"), &Z_Registration_Info_UClass_UMovieScenePropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePropertySystem), 2960482479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_1427453653(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
