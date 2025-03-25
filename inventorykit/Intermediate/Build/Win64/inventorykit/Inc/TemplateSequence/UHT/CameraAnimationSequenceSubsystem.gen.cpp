// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/CameraAnimationSequenceSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimationSequenceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_NoRegister();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationEntitySystemLinker();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationEntitySystemLinker_NoRegister();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem_NoRegister();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSpawnableSystem();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSpawnableSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References

// Begin Class UCameraAnimationSpawnableSystem
void UCameraAnimationSpawnableSystem::StaticRegisterNativesUCameraAnimationSpawnableSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationSpawnableSystem);
UClass* Z_Construct_UClass_UCameraAnimationSpawnableSystem_NoRegister()
{
	return UCameraAnimationSpawnableSystem::StaticClass();
}
struct Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CameraAnimationSequenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSpawnableSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::ClassParams = {
	&UCameraAnimationSpawnableSystem::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraAnimationSpawnableSystem()
{
	if (!Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.OuterSingleton, Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationSpawnableSystem>()
{
	return UCameraAnimationSpawnableSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSpawnableSystem);
UCameraAnimationSpawnableSystem::~UCameraAnimationSpawnableSystem() {}
// End Class UCameraAnimationSpawnableSystem

// Begin Class UCameraAnimationBoundObjectInstantiator
void UCameraAnimationBoundObjectInstantiator::StaticRegisterNativesUCameraAnimationBoundObjectInstantiator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationBoundObjectInstantiator);
UClass* Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_NoRegister()
{
	return UCameraAnimationBoundObjectInstantiator::StaticClass();
}
struct Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CameraAnimationSequenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationBoundObjectInstantiator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::ClassParams = {
	&UCameraAnimationBoundObjectInstantiator::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator()
{
	if (!Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.OuterSingleton, Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationBoundObjectInstantiator>()
{
	return UCameraAnimationBoundObjectInstantiator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationBoundObjectInstantiator);
UCameraAnimationBoundObjectInstantiator::~UCameraAnimationBoundObjectInstantiator() {}
// End Class UCameraAnimationBoundObjectInstantiator

// Begin Class UCameraAnimationEntitySystemLinker
void UCameraAnimationEntitySystemLinker::StaticRegisterNativesUCameraAnimationEntitySystemLinker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationEntitySystemLinker);
UClass* Z_Construct_UClass_UCameraAnimationEntitySystemLinker_NoRegister()
{
	return UCameraAnimationEntitySystemLinker::StaticClass();
}
struct Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CameraAnimationSequenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationEntitySystemLinker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystemLinker,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::ClassParams = {
	&UCameraAnimationEntitySystemLinker::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraAnimationEntitySystemLinker()
{
	if (!Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.OuterSingleton, Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationEntitySystemLinker>()
{
	return UCameraAnimationEntitySystemLinker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationEntitySystemLinker);
UCameraAnimationEntitySystemLinker::~UCameraAnimationEntitySystemLinker() {}
// End Class UCameraAnimationEntitySystemLinker

// Begin Class UCameraAnimationSequenceSubsystem
void UCameraAnimationSequenceSubsystem::StaticRegisterNativesUCameraAnimationSequenceSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationSequenceSubsystem);
UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem_NoRegister()
{
	return UCameraAnimationSequenceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World subsystem that holds global objects for handling camera animation sequences.\n */" },
		{ "IncludePath", "CameraAnimationSequenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ToolTip", "World subsystem that holds global objects for handling camera animation sequences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Linker_MetaData[] = {
		{ "Comment", "/** The global Sequencer linker that contains all the shakes and camera animations */" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ToolTip", "The global Sequencer linker that contains all the shakes and camera animations" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Linker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSequenceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker = { "Linker", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraAnimationSequenceSubsystem, Linker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Linker_MetaData), NewProp_Linker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::ClassParams = {
	&UCameraAnimationSequenceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem()
{
	if (!Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton, Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationSequenceSubsystem>()
{
	return UCameraAnimationSequenceSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSequenceSubsystem);
// End Class UCameraAnimationSequenceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAnimationSpawnableSystem, UCameraAnimationSpawnableSystem::StaticClass, TEXT("UCameraAnimationSpawnableSystem"), &Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationSpawnableSystem), 4171540863U) },
		{ Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator, UCameraAnimationBoundObjectInstantiator::StaticClass, TEXT("UCameraAnimationBoundObjectInstantiator"), &Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationBoundObjectInstantiator), 3308944252U) },
		{ Z_Construct_UClass_UCameraAnimationEntitySystemLinker, UCameraAnimationEntitySystemLinker::StaticClass, TEXT("UCameraAnimationEntitySystemLinker"), &Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationEntitySystemLinker), 1052275695U) },
		{ Z_Construct_UClass_UCameraAnimationSequenceSubsystem, UCameraAnimationSequenceSubsystem::StaticClass, TEXT("UCameraAnimationSequenceSubsystem"), &Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationSequenceSubsystem), 971111334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_848200475(TEXT("/Script/TemplateSequence"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
