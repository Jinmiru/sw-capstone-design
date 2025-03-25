// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTags/Public/GameplayTagRedirectors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagRedirectors() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect();
UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References

// Begin ScriptStruct FGameplayTagRedirect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagRedirect;
class UScriptStruct* FGameplayTagRedirect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagRedirect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagRedirect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagRedirect, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagRedirect"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagRedirect.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagRedirect>()
{
	return FGameplayTagRedirect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A single redirect from a deleted tag to the new tag that should replace it */" },
		{ "ModuleRelativePath", "Public/GameplayTagRedirectors.h" },
		{ "ToolTip", "A single redirect from a deleted tag to the new tag that should replace it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldTagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/GameplayTagRedirectors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/GameplayTagRedirectors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OldTagName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewTagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagRedirect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName = { "OldTagName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagRedirect, OldTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldTagName_MetaData), NewProp_OldTagName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName = { "NewTagName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagRedirect, NewTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTagName_MetaData), NewProp_NewTagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	nullptr,
	&NewStructOps,
	"GameplayTagRedirect",
	Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers),
	sizeof(FGameplayTagRedirect),
	alignof(FGameplayTagRedirect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagRedirect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagRedirect.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagRedirect.InnerSingleton;
}
// End ScriptStruct FGameplayTagRedirect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayTagRedirect::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewStructOps, TEXT("GameplayTagRedirect"), &Z_Registration_Info_UScriptStruct_GameplayTagRedirect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagRedirect), 1444178698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h_2452587607(TEXT("/Script/GameplayTags"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
