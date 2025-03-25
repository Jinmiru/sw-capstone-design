// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/WeightAndEasingEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightAndEasingEvaluatorSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneHierarchicalEasingInstantiatorSystem
void UMovieSceneHierarchicalEasingInstantiatorSystem::StaticRegisterNativesUMovieSceneHierarchicalEasingInstantiatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneHierarchicalEasingInstantiatorSystem);
UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister()
{
	return UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that creates hierarchical easing channels for any newly introduced HierarchicalEasingProvider components\n */" },
		{ "IncludePath", "Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that creates hierarchical easing channels for any newly introduced HierarchicalEasingProvider components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatorSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EvaluatorSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneHierarchicalEasingInstantiatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::NewProp_EvaluatorSystem = { "EvaluatorSystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneHierarchicalEasingInstantiatorSystem, EvaluatorSystem), Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluatorSystem_MetaData), NewProp_EvaluatorSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::NewProp_EvaluatorSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::ClassParams = {
	&UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneHierarchicalEasingInstantiatorSystem>()
{
	return UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneHierarchicalEasingInstantiatorSystem);
UMovieSceneHierarchicalEasingInstantiatorSystem::~UMovieSceneHierarchicalEasingInstantiatorSystem() {}
// End Class UMovieSceneHierarchicalEasingInstantiatorSystem

// Begin Class UMovieSceneHierarchicalEasingFinalizationSystem
void UMovieSceneHierarchicalEasingFinalizationSystem::StaticRegisterNativesUMovieSceneHierarchicalEasingFinalizationSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneHierarchicalEasingFinalizationSystem);
UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_NoRegister()
{
	return UMovieSceneHierarchicalEasingFinalizationSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that finalizes creation of easing channels by allocating new channels for hierarchical blend targets if necessary\n * This is required in order to solve the problem that the hierarchical instantiator needs to run before the property instantiator,\n * but we can't allocate channels for blend targets until _after_ the property instantiator (which sets up the relevant BlendTarget components)\n * \n */" },
		{ "IncludePath", "Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that finalizes creation of easing channels by allocating new channels for hierarchical blend targets if necessary\nThis is required in order to solve the problem that the hierarchical instantiator needs to run before the property instantiator,\nbut we can't allocate channels for blend targets until _after_ the property instantiator (which sets up the relevant BlendTarget components)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantiatorSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstantiatorSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneHierarchicalEasingFinalizationSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::NewProp_InstantiatorSystem = { "InstantiatorSystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneHierarchicalEasingFinalizationSystem, InstantiatorSystem), Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantiatorSystem_MetaData), NewProp_InstantiatorSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::NewProp_InstantiatorSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::ClassParams = {
	&UMovieSceneHierarchicalEasingFinalizationSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneHierarchicalEasingFinalizationSystem>()
{
	return UMovieSceneHierarchicalEasingFinalizationSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneHierarchicalEasingFinalizationSystem);
UMovieSceneHierarchicalEasingFinalizationSystem::~UMovieSceneHierarchicalEasingFinalizationSystem() {}
// End Class UMovieSceneHierarchicalEasingFinalizationSystem

// Begin Class UWeightAndEasingEvaluatorSystem
void UWeightAndEasingEvaluatorSystem::StaticRegisterNativesUWeightAndEasingEvaluatorSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightAndEasingEvaluatorSystem);
UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister()
{
	return UWeightAndEasingEvaluatorSystem::StaticClass();
}
struct Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that combines manual weights and easings and propagates them to entities with matching EasingChannelID components\n */" },
		{ "IncludePath", "Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that combines manual weights and easings and propagates them to entities with matching EasingChannelID components" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeightAndEasingEvaluatorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::ClassParams = {
	&UWeightAndEasingEvaluatorSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem()
{
	if (!Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UWeightAndEasingEvaluatorSystem>()
{
	return UWeightAndEasingEvaluatorSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightAndEasingEvaluatorSystem);
UWeightAndEasingEvaluatorSystem::~UWeightAndEasingEvaluatorSystem() {}
// End Class UWeightAndEasingEvaluatorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem, UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass, TEXT("UMovieSceneHierarchicalEasingInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneHierarchicalEasingInstantiatorSystem), 3169262624U) },
		{ Z_Construct_UClass_UMovieSceneHierarchicalEasingFinalizationSystem, UMovieSceneHierarchicalEasingFinalizationSystem::StaticClass, TEXT("UMovieSceneHierarchicalEasingFinalizationSystem"), &Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneHierarchicalEasingFinalizationSystem), 2465465318U) },
		{ Z_Construct_UClass_UWeightAndEasingEvaluatorSystem, UWeightAndEasingEvaluatorSystem::StaticClass, TEXT("UWeightAndEasingEvaluatorSystem"), &Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightAndEasingEvaluatorSystem), 442025840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h_2251517739(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
