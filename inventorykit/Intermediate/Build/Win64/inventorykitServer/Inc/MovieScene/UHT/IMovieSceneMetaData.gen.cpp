// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/IMovieSceneMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneMetaData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneMetaDataInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneMetaDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneMetaDataInterface
void UMovieSceneMetaDataInterface::StaticRegisterNativesUMovieSceneMetaDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMetaDataInterface);
UClass* Z_Construct_UClass_UMovieSceneMetaDataInterface_NoRegister()
{
	return UMovieSceneMetaDataInterface::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMetaDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IMovieSceneMetaData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneMetaDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneMetaDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMetaDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMetaDataInterface_Statics::ClassParams = {
	&UMovieSceneMetaDataInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMetaDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMetaDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMetaDataInterface()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMetaDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMetaDataInterface.OuterSingleton, Z_Construct_UClass_UMovieSceneMetaDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMetaDataInterface.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneMetaDataInterface>()
{
	return UMovieSceneMetaDataInterface::StaticClass();
}
UMovieSceneMetaDataInterface::UMovieSceneMetaDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMetaDataInterface);
UMovieSceneMetaDataInterface::~UMovieSceneMetaDataInterface() {}
// End Interface UMovieSceneMetaDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMetaDataInterface, UMovieSceneMetaDataInterface::StaticClass, TEXT("UMovieSceneMetaDataInterface"), &Z_Registration_Info_UClass_UMovieSceneMetaDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMetaDataInterface), 3072860066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_3542378240(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneMetaData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
