// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_GameplayTags() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags_NoRegister();
GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryTest_GameplayTags
void UEnvQueryTest_GameplayTags::StaticRegisterNativesUEnvQueryTest_GameplayTags()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_GameplayTags);
UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags_NoRegister()
{
	return UEnvQueryTest_GameplayTags::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * EnvQueryTest_GameplayTags attempts to cast items to IGameplayTagAssetInterface and test their tags with TagQueryToMatch.\n * The behavior of IGameplayTagAssetInterface-less items is configured by bRejectIncompatibleItems.\n */" },
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ToolTip", "EnvQueryTest_GameplayTags attempts to cast items to IGameplayTagAssetInterface and test their tags with TagQueryToMatch.\nThe behavior of IGameplayTagAssetInterface-less items is configured by bRejectIncompatibleItems." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQueryToMatch_MetaData[] = {
		{ "Category", "GameplayTagCheck" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRejectIncompatibleItems_MetaData[] = {
		{ "Category", "GameplayTagCheck" },
		{ "Comment", "// This controls how to treat actors that do not implement IGameplayTagAssetInterface.\n// When set to True, actors that do not implement the interface will be ignored, meaning\n// they will not be scored and will not be considered when filtering.\n// When set to False, actors that do not implement the interface will be included in\n// filter and score operations with a zero score.\n" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ToolTip", "This controls how to treat actors that do not implement IGameplayTagAssetInterface.\nWhen set to True, actors that do not implement the interface will be ignored, meaning\nthey will not be scored and will not be considered when filtering.\nWhen set to False, actors that do not implement the interface will be included in\nfilter and score operations with a zero score." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatedToUseQuery_MetaData[] = {
		{ "Comment", "// Used to determine whether the file format needs to be updated to move data into TagQueryToMatch or not.\n" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ToolTip", "Used to determine whether the file format needs to be updated to move data into TagQueryToMatch or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToMatch_MetaData[] = {
		{ "Comment", "// Deprecated property.  Used only to load old data into TagQueryToMatch.\n" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ToolTip", "Deprecated property.  Used only to load old data into TagQueryToMatch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Comment", "// Deprecated property.  Used only to load old data into TagQueryToMatch.\n" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h" },
		{ "ToolTip", "Deprecated property.  Used only to load old data into TagQueryToMatch." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagQueryToMatch;
	static void NewProp_bRejectIncompatibleItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRejectIncompatibleItems;
	static void NewProp_bUpdatedToUseQuery_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatedToUseQuery;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TagsToMatch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TagsToMatch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_GameplayTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagQueryToMatch = { "TagQueryToMatch", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_GameplayTags, TagQueryToMatch), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQueryToMatch_MetaData), NewProp_TagQueryToMatch_MetaData) }; // 572225232
void Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bRejectIncompatibleItems_SetBit(void* Obj)
{
	((UEnvQueryTest_GameplayTags*)Obj)->bRejectIncompatibleItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bRejectIncompatibleItems = { "bRejectIncompatibleItems", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_GameplayTags), &Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bRejectIncompatibleItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRejectIncompatibleItems_MetaData), NewProp_bRejectIncompatibleItems_MetaData) };
void Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery_SetBit(void* Obj)
{
	((UEnvQueryTest_GameplayTags*)Obj)->bUpdatedToUseQuery = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery = { "bUpdatedToUseQuery", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_GameplayTags), &Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatedToUseQuery_MetaData), NewProp_bUpdatedToUseQuery_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch = { "TagsToMatch", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_GameplayTags, TagsToMatch), Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToMatch_MetaData), NewProp_TagsToMatch_MetaData) }; // 357007300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_GameplayTags, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagQueryToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bRejectIncompatibleItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_bUpdatedToUseQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_TagsToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::NewProp_GameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::ClassParams = {
	&UEnvQueryTest_GameplayTags::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_GameplayTags()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_GameplayTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_GameplayTags>()
{
	return UEnvQueryTest_GameplayTags::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_GameplayTags);
UEnvQueryTest_GameplayTags::~UEnvQueryTest_GameplayTags() {}
// End Class UEnvQueryTest_GameplayTags

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_GameplayTags_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_GameplayTags, UEnvQueryTest_GameplayTags::StaticClass, TEXT("UEnvQueryTest_GameplayTags"), &Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_GameplayTags), 922256050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_GameplayTags_h_1976430866(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_GameplayTags_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_GameplayTags_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
