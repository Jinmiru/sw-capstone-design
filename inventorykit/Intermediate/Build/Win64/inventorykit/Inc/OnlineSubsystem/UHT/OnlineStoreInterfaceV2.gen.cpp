// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Interfaces/OnlineStoreInterfaceV2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineStoreInterfaceV2() {}

// Begin Cross Module References
ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
// End Cross Module References

// Begin Enum EInAppPurchaseState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInAppPurchaseState;
static UEnum* EInAppPurchaseState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInAppPurchaseState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInAppPurchaseState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("EInAppPurchaseState"));
	}
	return Z_Registration_Info_UEnum_EInAppPurchaseState.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UEnum* StaticEnum<EInAppPurchaseState::Type>()
{
	return EInAppPurchaseState_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlreadyOwned.DisplayName", "AlreadyOwned" },
		{ "AlreadyOwned.Name", "EInAppPurchaseState::AlreadyOwned" },
		{ "BlueprintType", "true" },
		{ "Cancelled.DisplayName", "Cancelled" },
		{ "Cancelled.Name", "EInAppPurchaseState::Cancelled" },
		{ "Comment", "/**\n * Possible result states of an in-app purchase transaction\n */" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "EInAppPurchaseState::Failed" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EInAppPurchaseState::Invalid" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterfaceV2.h" },
		{ "NotAllowed.DisplayName", "NotAllowed" },
		{ "NotAllowed.Name", "EInAppPurchaseState::NotAllowed" },
		{ "Restored.DisplayName", "Restored" },
		{ "Restored.Name", "EInAppPurchaseState::Restored" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "EInAppPurchaseState::Success" },
		{ "ToolTip", "Possible result states of an in-app purchase transaction" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EInAppPurchaseState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInAppPurchaseState::Unknown", (int64)EInAppPurchaseState::Unknown },
		{ "EInAppPurchaseState::Success", (int64)EInAppPurchaseState::Success },
		{ "EInAppPurchaseState::Failed", (int64)EInAppPurchaseState::Failed },
		{ "EInAppPurchaseState::Cancelled", (int64)EInAppPurchaseState::Cancelled },
		{ "EInAppPurchaseState::Invalid", (int64)EInAppPurchaseState::Invalid },
		{ "EInAppPurchaseState::NotAllowed", (int64)EInAppPurchaseState::NotAllowed },
		{ "EInAppPurchaseState::Restored", (int64)EInAppPurchaseState::Restored },
		{ "EInAppPurchaseState::AlreadyOwned", (int64)EInAppPurchaseState::AlreadyOwned },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystem,
	nullptr,
	"EInAppPurchaseState",
	"EInAppPurchaseState::Type",
	Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState()
{
	if (!Z_Registration_Info_UEnum_EInAppPurchaseState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInAppPurchaseState.InnerSingleton, Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInAppPurchaseState.InnerSingleton;
}
// End Enum EInAppPurchaseState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterfaceV2_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInAppPurchaseState_StaticEnum, TEXT("EInAppPurchaseState"), &Z_Registration_Info_UEnum_EInAppPurchaseState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2146206634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterfaceV2_h_3888614035(TEXT("/Script/OnlineSubsystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterfaceV2_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterfaceV2_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
