// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQuery() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQuery
void UEnvQuery::StaticRegisterNativesUEnvQuery()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQuery);
UClass* Z_Construct_UClass_UEnvQuery_NoRegister()
{
	return UEnvQuery::StaticClass();
}
struct Z_Construct_UClass_UEnvQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvironmentQuery/EnvQuery.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdGraph_MetaData[] = {
		{ "Comment", "/** Graph for query */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
		{ "ToolTip", "Graph for query" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdGraph;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QueryName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQuery>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph = { "EdGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdGraph_MetaData), NewProp_EdGraph_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName = { "QueryName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery, QueryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryName_MetaData), NewProp_QueryName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEnvQueryOption_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQuery, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQuery_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQuery_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQuery_Statics::ClassParams = {
	&UEnvQuery::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQuery_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQuery_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQuery()
{
	if (!Z_Registration_Info_UClass_UEnvQuery.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQuery.OuterSingleton, Z_Construct_UClass_UEnvQuery_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQuery.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQuery>()
{
	return UEnvQuery::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQuery);
UEnvQuery::~UEnvQuery() {}
// End Class UEnvQuery

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQuery, UEnvQuery::StaticClass, TEXT("UEnvQuery"), &Z_Registration_Info_UClass_UEnvQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQuery), 1751172873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_2069621185(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
