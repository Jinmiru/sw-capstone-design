// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTags/Private/InternalGameplayTagContainerNetSerializer.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternalGameplayTagContainerNetSerializer() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper();
UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References

// Begin ScriptStruct FGameplayTagContainerNetSerializerSerializationHelper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper;
class UScriptStruct* FGameplayTagContainerNetSerializerSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagContainerNetSerializerSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagContainerNetSerializerSerializationHelper>()
{
	return FGameplayTagContainerNetSerializerSerializationHelper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/InternalGameplayTagContainerNetSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "ModuleRelativePath", "Private/InternalGameplayTagContainerNetSerializer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagContainerNetSerializerSerializationHelper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags_Inner = { "GameplayTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagContainerNetSerializerSerializationHelper, GameplayTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	nullptr,
	&NewStructOps,
	"GameplayTagContainerNetSerializerSerializationHelper",
	Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::PropPointers),
	sizeof(FGameplayTagContainerNetSerializerSerializationHelper),
	alignof(FGameplayTagContainerNetSerializerSerializationHelper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.InnerSingleton;
}
// End ScriptStruct FGameplayTagContainerNetSerializerSerializationHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayTagContainerNetSerializerSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewStructOps, TEXT("GameplayTagContainerNetSerializerSerializationHelper"), &Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagContainerNetSerializerSerializationHelper), 2381445194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h_2490553491(TEXT("/Script/GameplayTags"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
