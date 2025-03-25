// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/BoolChannelEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoolChannelEvaluatorSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UBoolChannelEvaluatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UBoolChannelEvaluatorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UBoolChannelEvaluatorSystem
void UBoolChannelEvaluatorSystem::StaticRegisterNativesUBoolChannelEvaluatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoolChannelEvaluatorSystem);
UClass* Z_Construct_UClass_UBoolChannelEvaluatorSystem_NoRegister()
{
	return UBoolChannelEvaluatorSystem::StaticClass();
}
struct Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating bool channels.\n */" },
		{ "IncludePath", "Systems/BoolChannelEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/BoolChannelEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating bool channels." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoolChannelEvaluatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::ClassParams = {
	&UBoolChannelEvaluatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoolChannelEvaluatorSystem()
{
	if (!Z_Registration_Info_UClass_UBoolChannelEvaluatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoolChannelEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UBoolChannelEvaluatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoolChannelEvaluatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UBoolChannelEvaluatorSystem>()
{
	return UBoolChannelEvaluatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoolChannelEvaluatorSystem);
UBoolChannelEvaluatorSystem::~UBoolChannelEvaluatorSystem() {}
// End Class UBoolChannelEvaluatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_BoolChannelEvaluatorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoolChannelEvaluatorSystem, UBoolChannelEvaluatorSystem::StaticClass, TEXT("UBoolChannelEvaluatorSystem"), &Z_Registration_Info_UClass_UBoolChannelEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoolChannelEvaluatorSystem), 2144709433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_BoolChannelEvaluatorSystem_h_657676573(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_BoolChannelEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_BoolChannelEvaluatorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
