// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/MovieSceneWidgetMaterialSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialSystem();
UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UMovieSceneWidgetMaterialSystem
void UMovieSceneWidgetMaterialSystem::StaticRegisterNativesUMovieSceneWidgetMaterialSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneWidgetMaterialSystem);
UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_NoRegister()
{
	return UMovieSceneWidgetMaterialSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "IncludePath", "Animation/MovieSceneWidgetMaterialSystem.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWidgetMaterialSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneWidgetMaterialSystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1017378651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::ClassParams = {
	&UMovieSceneWidgetMaterialSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UMovieSceneWidgetMaterialSystem>()
{
	return UMovieSceneWidgetMaterialSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneWidgetMaterialSystem);
UMovieSceneWidgetMaterialSystem::~UMovieSceneWidgetMaterialSystem() {}
// End Class UMovieSceneWidgetMaterialSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneWidgetMaterialSystem, UMovieSceneWidgetMaterialSystem::StaticClass, TEXT("UMovieSceneWidgetMaterialSystem"), &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneWidgetMaterialSystem), 1411064338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h_2274999124(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
