// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleClient() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EContentBundleClientState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldContentState();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EContentBundleClientState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentBundleClientState;
static UEnum* EContentBundleClientState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleClientState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EContentBundleClientState"));
	}
	return Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EContentBundleClientState>()
{
	return EContentBundleClientState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EContentBundleClientState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ContentInjectionRequested.Name", "EContentBundleClientState::ContentInjectionRequested" },
		{ "ContentRemovalRequested.Name", "EContentBundleClientState::ContentRemovalRequested" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleClient.h" },
		{ "Registered.Name", "EContentBundleClientState::Registered" },
		{ "RegistrationFailed.Comment", "// Failed state\n" },
		{ "RegistrationFailed.Name", "EContentBundleClientState::RegistrationFailed" },
		{ "RegistrationFailed.ToolTip", "Failed state" },
		{ "Unregistered.Name", "EContentBundleClientState::Unregistered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EContentBundleClientState::Unregistered", (int64)EContentBundleClientState::Unregistered },
		{ "EContentBundleClientState::Registered", (int64)EContentBundleClientState::Registered },
		{ "EContentBundleClientState::ContentInjectionRequested", (int64)EContentBundleClientState::ContentInjectionRequested },
		{ "EContentBundleClientState::ContentRemovalRequested", (int64)EContentBundleClientState::ContentRemovalRequested },
		{ "EContentBundleClientState::RegistrationFailed", (int64)EContentBundleClientState::RegistrationFailed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EContentBundleClientState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EContentBundleClientState",
	"EContentBundleClientState",
	Z_Construct_UEnum_Engine_EContentBundleClientState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EContentBundleClientState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EContentBundleClientState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EContentBundleClientState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EContentBundleClientState()
{
	if (!Z_Registration_Info_UEnum_EContentBundleClientState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentBundleClientState.InnerSingleton, Z_Construct_UEnum_Engine_EContentBundleClientState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EContentBundleClientState.InnerSingleton;
}
// End Enum EContentBundleClientState

// Begin Enum EWorldContentState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldContentState;
static UEnum* EWorldContentState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldContentState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorldContentState"));
	}
	return Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EWorldContentState>()
{
	return EWorldContentState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EWorldContentState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ContentBundleInjected.Name", "EWorldContentState::ContentBundleInjected" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleClient.h" },
		{ "NoContent.Name", "EWorldContentState::NoContent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldContentState::NoContent", (int64)EWorldContentState::NoContent },
		{ "EWorldContentState::ContentBundleInjected", (int64)EWorldContentState::ContentBundleInjected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldContentState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EWorldContentState",
	"EWorldContentState",
	Z_Construct_UEnum_Engine_EWorldContentState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldContentState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldContentState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EWorldContentState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EWorldContentState()
{
	if (!Z_Registration_Info_UEnum_EWorldContentState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldContentState.InnerSingleton, Z_Construct_UEnum_Engine_EWorldContentState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldContentState.InnerSingleton;
}
// End Enum EWorldContentState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleClient_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EContentBundleClientState_StaticEnum, TEXT("EContentBundleClientState"), &Z_Registration_Info_UEnum_EContentBundleClientState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 216022579U) },
		{ EWorldContentState_StaticEnum, TEXT("EWorldContentState"), &Z_Registration_Info_UEnum_EWorldContentState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2525964983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleClient_h_2141513989(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleClient_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
