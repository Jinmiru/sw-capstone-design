// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneEventSystems.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventSystems() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPtrs();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerData();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneEventTriggerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData;
class UScriptStruct* FMovieSceneEventTriggerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventTriggerData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventTriggerData>()
{
	return FMovieSceneEventTriggerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ptrs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ptrs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventTriggerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs = { "Ptrs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventTriggerData, Ptrs), Z_Construct_UScriptStruct_FMovieSceneEventPtrs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ptrs_MetaData), NewProp_Ptrs_MetaData) }; // 2388886979
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventTriggerData, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBindingID_MetaData), NewProp_ObjectBindingID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_Ptrs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewProp_ObjectBindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneEventTriggerData",
	Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::PropPointers),
	sizeof(FMovieSceneEventTriggerData),
	alignof(FMovieSceneEventTriggerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData.InnerSingleton;
}
// End ScriptStruct FMovieSceneEventTriggerData

// Begin Class UMovieSceneEventSystem
void UMovieSceneEventSystem::StaticRegisterNativesUMovieSceneEventSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventSystem);
UClass* Z_Construct_UClass_UMovieSceneEventSystem_NoRegister()
{
	return UMovieSceneEventSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEventSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Systems that triggers events based on one-shot FMovieSceneEventComponent components\n * Works by iterating all pending instances of TMovieSceneComponentID<FMovieSceneEventComponent> and triggering inline.\n * Does not dispatch any async tasks\n */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Systems that triggers events based on one-shot FMovieSceneEventComponent components\nWorks by iterating all pending instances of TMovieSceneComponentID<FMovieSceneEventComponent> and triggering inline.\nDoes not dispatch any async tasks" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneEventSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventSystem_Statics::ClassParams = {
	&UMovieSceneEventSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEventSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEventSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEventSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneEventSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEventSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventSystem>()
{
	return UMovieSceneEventSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventSystem);
UMovieSceneEventSystem::~UMovieSceneEventSystem() {}
// End Class UMovieSceneEventSystem

// Begin Class UMovieScenePreSpawnEventSystem
void UMovieScenePreSpawnEventSystem::StaticRegisterNativesUMovieScenePreSpawnEventSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePreSpawnEventSystem);
UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister()
{
	return UMovieScenePreSpawnEventSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** System that triggers events before any spawnables */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that triggers events before any spawnables" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePreSpawnEventSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::ClassParams = {
	&UMovieScenePreSpawnEventSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem()
{
	if (!Z_Registration_Info_UClass_UMovieScenePreSpawnEventSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePreSpawnEventSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePreSpawnEventSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePreSpawnEventSystem>()
{
	return UMovieScenePreSpawnEventSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePreSpawnEventSystem);
UMovieScenePreSpawnEventSystem::~UMovieScenePreSpawnEventSystem() {}
// End Class UMovieScenePreSpawnEventSystem

// Begin Class UMovieScenePostSpawnEventSystem
void UMovieScenePostSpawnEventSystem::StaticRegisterNativesUMovieScenePostSpawnEventSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePostSpawnEventSystem);
UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister()
{
	return UMovieScenePostSpawnEventSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** System that triggers events after any spawnables */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that triggers events after any spawnables" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePostSpawnEventSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::ClassParams = {
	&UMovieScenePostSpawnEventSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem()
{
	if (!Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePostSpawnEventSystem>()
{
	return UMovieScenePostSpawnEventSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePostSpawnEventSystem);
UMovieScenePostSpawnEventSystem::~UMovieScenePostSpawnEventSystem() {}
// End Class UMovieScenePostSpawnEventSystem

// Begin Class UMovieScenePostEvalEventSystem
void UMovieScenePostEvalEventSystem::StaticRegisterNativesUMovieScenePostEvalEventSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePostEvalEventSystem);
UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister()
{
	return UMovieScenePostEvalEventSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** System that triggers events right at the end of evaluation */" },
		{ "IncludePath", "Systems/MovieSceneEventSystems.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneEventSystems.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that triggers events right at the end of evaluation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePostEvalEventSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::ClassParams = {
	&UMovieScenePostEvalEventSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem()
{
	if (!Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePostEvalEventSystem>()
{
	return UMovieScenePostEvalEventSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePostEvalEventSystem);
UMovieScenePostEvalEventSystem::~UMovieScenePostEvalEventSystem() {}
// End Class UMovieScenePostEvalEventSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEventTriggerData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics::NewStructOps, TEXT("MovieSceneEventTriggerData"), &Z_Registration_Info_UScriptStruct_MovieSceneEventTriggerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventTriggerData), 1757499261U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventSystem, UMovieSceneEventSystem::StaticClass, TEXT("UMovieSceneEventSystem"), &Z_Registration_Info_UClass_UMovieSceneEventSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventSystem), 3307327113U) },
		{ Z_Construct_UClass_UMovieScenePreSpawnEventSystem, UMovieScenePreSpawnEventSystem::StaticClass, TEXT("UMovieScenePreSpawnEventSystem"), &Z_Registration_Info_UClass_UMovieScenePreSpawnEventSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePreSpawnEventSystem), 3501077327U) },
		{ Z_Construct_UClass_UMovieScenePostSpawnEventSystem, UMovieScenePostSpawnEventSystem::StaticClass, TEXT("UMovieScenePostSpawnEventSystem"), &Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePostSpawnEventSystem), 1207107083U) },
		{ Z_Construct_UClass_UMovieScenePostEvalEventSystem, UMovieScenePostEvalEventSystem::StaticClass, TEXT("UMovieScenePostEvalEventSystem"), &Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePostEvalEventSystem), 1132016366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_1201625951(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
