// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PerceivedActors() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryGenerator_PerceivedActors
void UEnvQueryGenerator_PerceivedActors::StaticRegisterNativesUEnvQueryGenerator_PerceivedActors()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_PerceivedActors);
UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_NoRegister()
{
	return UEnvQueryGenerator_PerceivedActors::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Gathers actors perceived by context */" },
		{ "DisplayName", "Perceived Actors" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "Gathers actors perceived by context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedActorClass_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If set will be used to filter results */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "If set will be used to filter results" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Additional distance limit imposed on the items generated. Perception's range limit still applies. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "Additional distance limit imposed on the items generated. Perception's range limit still applies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenerContext_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The perception listener to use as a source of information */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "The perception listener to use as a source of information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseToUse_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If set will be used to filter gathered results so that only actors perceived with a given sense are considered */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "If set will be used to filter gathered results so that only actors perceived with a given sense are considered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeKnownActors_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/**\n\x09 * Indicates whether to include all actors known via perception (TRUE) or just the ones actively being perceived \n\x09 * at the moment (example \"currently visible\" as opposed to \"seen and the perception stimulus haven't expired yet\").\n\x09 * @see FAIStimulus.bExpired\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PerceivedActors.h" },
		{ "ToolTip", "Indicates whether to include all actors known via perception (TRUE) or just the ones actively being perceived\nat the moment (example \"currently visible\" as opposed to \"seen and the perception stimulus haven't expired yet\").\n@see FAIStimulus.bExpired" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ListenerContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
	static void NewProp_bIncludeKnownActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeKnownActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_PerceivedActors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass = { "AllowedActorClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, AllowedActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedActorClass_MetaData), NewProp_AllowedActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, SearchRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) }; // 1384630506
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext = { "ListenerContext", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, ListenerContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenerContext_MetaData), NewProp_ListenerContext_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_PerceivedActors, SenseToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseToUse_MetaData), NewProp_SenseToUse_MetaData) };
void Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_SetBit(void* Obj)
{
	((UEnvQueryGenerator_PerceivedActors*)Obj)->bIncludeKnownActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors = { "bIncludeKnownActors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryGenerator_PerceivedActors), &Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeKnownActors_MetaData), NewProp_bIncludeKnownActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_AllowedActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_ListenerContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_SenseToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::NewProp_bIncludeKnownActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::ClassParams = {
	&UEnvQueryGenerator_PerceivedActors::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_PerceivedActors>()
{
	return UEnvQueryGenerator_PerceivedActors::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_PerceivedActors);
UEnvQueryGenerator_PerceivedActors::~UEnvQueryGenerator_PerceivedActors() {}
// End Class UEnvQueryGenerator_PerceivedActors

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_PerceivedActors, UEnvQueryGenerator_PerceivedActors::StaticClass, TEXT("UEnvQueryGenerator_PerceivedActors"), &Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_PerceivedActors), 137355781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h_3112210999(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PerceivedActors_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
