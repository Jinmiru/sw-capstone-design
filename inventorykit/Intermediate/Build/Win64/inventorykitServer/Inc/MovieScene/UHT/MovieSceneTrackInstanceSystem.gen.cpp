// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstanceSystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneTrackInstanceEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry;
class UScriptStruct* FMovieSceneTrackInstanceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackInstanceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackInstanceEntry>()
{
	return FMovieSceneTrackInstanceEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject = { "BoundObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceEntry, BoundObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundObject_MetaData), NewProp_BoundObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance = { "TrackInstance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceEntry, TrackInstance), Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackInstance_MetaData), NewProp_TrackInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_BoundObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewProp_TrackInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTrackInstanceEntry",
	Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::PropPointers),
	sizeof(FMovieSceneTrackInstanceEntry),
	alignof(FMovieSceneTrackInstanceEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry.InnerSingleton;
}
// End ScriptStruct FMovieSceneTrackInstanceEntry

// Begin Class UMovieSceneTrackInstanceInstantiator
void UMovieSceneTrackInstanceInstantiator::StaticRegisterNativesUMovieSceneTrackInstanceInstantiator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackInstanceInstantiator);
UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister()
{
	return UMovieSceneTrackInstanceInstantiator::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackInstanceInstantiator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::ClassParams = {
	&UMovieSceneTrackInstanceInstantiator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackInstanceInstantiator>()
{
	return UMovieSceneTrackInstanceInstantiator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackInstanceInstantiator);
UMovieSceneTrackInstanceInstantiator::~UMovieSceneTrackInstanceInstantiator() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTrackInstanceInstantiator)
// End Class UMovieSceneTrackInstanceInstantiator

// Begin Class UMovieSceneTrackInstanceSystem
void UMovieSceneTrackInstanceSystem::StaticRegisterNativesUMovieSceneTrackInstanceSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackInstanceSystem);
UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister()
{
	return UMovieSceneTrackInstanceSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instantiator_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instantiator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackInstanceSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator = { "Instantiator", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTrackInstanceSystem, Instantiator), Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instantiator_MetaData), NewProp_Instantiator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::NewProp_Instantiator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::ClassParams = {
	&UMovieSceneTrackInstanceSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackInstanceSystem>()
{
	return UMovieSceneTrackInstanceSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackInstanceSystem);
UMovieSceneTrackInstanceSystem::~UMovieSceneTrackInstanceSystem() {}
// End Class UMovieSceneTrackInstanceSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTrackInstanceEntry::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics::NewStructOps, TEXT("MovieSceneTrackInstanceEntry"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackInstanceEntry), 3528520208U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator, UMovieSceneTrackInstanceInstantiator::StaticClass, TEXT("UMovieSceneTrackInstanceInstantiator"), &Z_Registration_Info_UClass_UMovieSceneTrackInstanceInstantiator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackInstanceInstantiator), 1424338048U) },
		{ Z_Construct_UClass_UMovieSceneTrackInstanceSystem, UMovieSceneTrackInstanceSystem::StaticClass, TEXT("UMovieSceneTrackInstanceSystem"), &Z_Registration_Info_UClass_UMovieSceneTrackInstanceSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackInstanceSystem), 2724072852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_3290172497(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
