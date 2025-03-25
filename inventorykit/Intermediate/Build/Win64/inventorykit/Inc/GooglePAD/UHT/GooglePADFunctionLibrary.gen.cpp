// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GooglePAD/Classes/GooglePADFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGooglePADFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GOOGLEPAD_API UClass* Z_Construct_UClass_UGooglePADFunctionLibrary();
GOOGLEPAD_API UClass* Z_Construct_UClass_UGooglePADFunctionLibrary_NoRegister();
GOOGLEPAD_API UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus();
GOOGLEPAD_API UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus();
GOOGLEPAD_API UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus();
GOOGLEPAD_API UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode();
GOOGLEPAD_API UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod();
UPackage* Z_Construct_UPackage__Script_GooglePAD();
// End Cross Module References

// Begin Enum EGooglePADErrorCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGooglePADErrorCode;
static UEnum* EGooglePADErrorCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGooglePADErrorCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGooglePADErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, (UObject*)Z_Construct_UPackage__Script_GooglePAD(), TEXT("EGooglePADErrorCode"));
	}
	return Z_Registration_Info_UEnum_EGooglePADErrorCode.OuterSingleton;
}
template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADErrorCode>()
{
	return EGooglePADErrorCode_StaticEnum();
}
struct Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssetPack_ACCESS_DENIED.Comment", "// Download not permitted under current device circumstances, e.g. app in\n// background or device not signed into a Google account.\n" },
		{ "AssetPack_ACCESS_DENIED.Name", "EGooglePADErrorCode::AssetPack_ACCESS_DENIED" },
		{ "AssetPack_ACCESS_DENIED.ToolTip", "Download not permitted under current device circumstances, e.g. app in\nbackground or device not signed into a Google account." },
		{ "AssetPack_API_NOT_AVAILABLE.Comment", "// The Asset Pack API is unavailable.\n" },
		{ "AssetPack_API_NOT_AVAILABLE.Name", "EGooglePADErrorCode::AssetPack_API_NOT_AVAILABLE" },
		{ "AssetPack_API_NOT_AVAILABLE.ToolTip", "The Asset Pack API is unavailable." },
		{ "AssetPack_APP_NOT_OWNED.Comment", "// The app isn't owned by any user on this device. An app is \"owned\" if it has been acquired from the Play Store.\n" },
		{ "AssetPack_APP_NOT_OWNED.Name", "EGooglePADErrorCode::AssetPack_APP_NOT_OWNED" },
		{ "AssetPack_APP_NOT_OWNED.ToolTip", "The app isn't owned by any user on this device. An app is \"owned\" if it has been acquired from the Play Store." },
		{ "AssetPack_APP_UNAVAILABLE.Comment", "// The requesting app is unavailable.\n" },
		{ "AssetPack_APP_UNAVAILABLE.Name", "EGooglePADErrorCode::AssetPack_APP_UNAVAILABLE" },
		{ "AssetPack_APP_UNAVAILABLE.ToolTip", "The requesting app is unavailable." },
		{ "AssetPack_CONFIRMATION_NOT_REQUIRED.Comment", "// Returned if showConfirmationDialog is called but no asset packs are waiting for user confirmation.\n" },
		{ "AssetPack_CONFIRMATION_NOT_REQUIRED.Name", "EGooglePADErrorCode::AssetPack_CONFIRMATION_NOT_REQUIRED" },
		{ "AssetPack_CONFIRMATION_NOT_REQUIRED.ToolTip", "Returned if showConfirmationDialog is called but no asset packs are waiting for user confirmation." },
		{ "AssetPack_DOWNLOAD_NOT_FOUND.Comment", "// The requested download isn't found.\n" },
		{ "AssetPack_DOWNLOAD_NOT_FOUND.Name", "EGooglePADErrorCode::AssetPack_DOWNLOAD_NOT_FOUND" },
		{ "AssetPack_DOWNLOAD_NOT_FOUND.ToolTip", "The requested download isn't found." },
		{ "AssetPack_INITIALIZATION_FAILED.Comment", "// There was an error initializing the Asset Pack API.\n" },
		{ "AssetPack_INITIALIZATION_FAILED.Name", "EGooglePADErrorCode::AssetPack_INITIALIZATION_FAILED" },
		{ "AssetPack_INITIALIZATION_FAILED.ToolTip", "There was an error initializing the Asset Pack API." },
		{ "AssetPack_INITIALIZATION_NEEDED.Comment", "// The requested operation failed: need to call AssetPackManager_init() first.\n" },
		{ "AssetPack_INITIALIZATION_NEEDED.Name", "EGooglePADErrorCode::AssetPack_INITIALIZATION_NEEDED" },
		{ "AssetPack_INITIALIZATION_NEEDED.ToolTip", "The requested operation failed: need to call AssetPackManager_init() first." },
		{ "AssetPack_INSUFFICIENT_STORAGE.Comment", "// Asset Packs download failed due to insufficient storage.\n" },
		{ "AssetPack_INSUFFICIENT_STORAGE.Name", "EGooglePADErrorCode::AssetPack_INSUFFICIENT_STORAGE" },
		{ "AssetPack_INSUFFICIENT_STORAGE.ToolTip", "Asset Packs download failed due to insufficient storage." },
		{ "AssetPack_INTERNAL_ERROR.Comment", "// Unknown error downloading Asset Pack.\n" },
		{ "AssetPack_INTERNAL_ERROR.Name", "EGooglePADErrorCode::AssetPack_INTERNAL_ERROR" },
		{ "AssetPack_INTERNAL_ERROR.ToolTip", "Unknown error downloading Asset Pack." },
		{ "AssetPack_INVALID_REQUEST.Comment", "// The request is invalid.\n" },
		{ "AssetPack_INVALID_REQUEST.Name", "EGooglePADErrorCode::AssetPack_INVALID_REQUEST" },
		{ "AssetPack_INVALID_REQUEST.ToolTip", "The request is invalid." },
		{ "AssetPack_NETWORK_ERROR.Comment", "// Network error. Unable to obtain Asset Pack details.\n" },
		{ "AssetPack_NETWORK_ERROR.Name", "EGooglePADErrorCode::AssetPack_NETWORK_ERROR" },
		{ "AssetPack_NETWORK_ERROR.ToolTip", "Network error. Unable to obtain Asset Pack details." },
		{ "AssetPack_NETWORK_UNRESTRICTED.Comment", "// Returned if showCellularDataConfirmation is called but no Asset Packs are waiting for Wi-Fi.\n" },
		{ "AssetPack_NETWORK_UNRESTRICTED.Name", "EGooglePADErrorCode::AssetPack_NETWORK_UNRESTRICTED" },
		{ "AssetPack_NETWORK_UNRESTRICTED.ToolTip", "Returned if showCellularDataConfirmation is called but no Asset Packs are waiting for Wi-Fi." },
		{ "AssetPack_NO_ERROR.Comment", "// There was no error with the request.\n" },
		{ "AssetPack_NO_ERROR.Name", "EGooglePADErrorCode::AssetPack_NO_ERROR" },
		{ "AssetPack_NO_ERROR.ToolTip", "There was no error with the request." },
		{ "AssetPack_PLAY_STORE_NOT_FOUND.Comment", "// The Play Store app is either not installed or not the official version.\n" },
		{ "AssetPack_PLAY_STORE_NOT_FOUND.Name", "EGooglePADErrorCode::AssetPack_PLAY_STORE_NOT_FOUND" },
		{ "AssetPack_PLAY_STORE_NOT_FOUND.ToolTip", "The Play Store app is either not installed or not the official version." },
		{ "AssetPack_UNAVAILABLE.Comment", "// The requested Asset Pack isn't available for this app version.\n" },
		{ "AssetPack_UNAVAILABLE.Name", "EGooglePADErrorCode::AssetPack_UNAVAILABLE" },
		{ "AssetPack_UNAVAILABLE.ToolTip", "The requested Asset Pack isn't available for this app version." },
		{ "AssetPack_UNRECOGNIZED_INSTALLATION.Comment", "// Returned if the app was not installed by Play.\n" },
		{ "AssetPack_UNRECOGNIZED_INSTALLATION.Name", "EGooglePADErrorCode::AssetPack_UNRECOGNIZED_INSTALLATION" },
		{ "AssetPack_UNRECOGNIZED_INSTALLATION.ToolTip", "Returned if the app was not installed by Play." },
		{ "BlueprintType", "true" },
		{ "Comment", "// An error code associated with Asset Pack operations.\n" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "An error code associated with Asset Pack operations." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGooglePADErrorCode::AssetPack_NO_ERROR", (int64)EGooglePADErrorCode::AssetPack_NO_ERROR },
		{ "EGooglePADErrorCode::AssetPack_APP_UNAVAILABLE", (int64)EGooglePADErrorCode::AssetPack_APP_UNAVAILABLE },
		{ "EGooglePADErrorCode::AssetPack_UNAVAILABLE", (int64)EGooglePADErrorCode::AssetPack_UNAVAILABLE },
		{ "EGooglePADErrorCode::AssetPack_INVALID_REQUEST", (int64)EGooglePADErrorCode::AssetPack_INVALID_REQUEST },
		{ "EGooglePADErrorCode::AssetPack_DOWNLOAD_NOT_FOUND", (int64)EGooglePADErrorCode::AssetPack_DOWNLOAD_NOT_FOUND },
		{ "EGooglePADErrorCode::AssetPack_API_NOT_AVAILABLE", (int64)EGooglePADErrorCode::AssetPack_API_NOT_AVAILABLE },
		{ "EGooglePADErrorCode::AssetPack_NETWORK_ERROR", (int64)EGooglePADErrorCode::AssetPack_NETWORK_ERROR },
		{ "EGooglePADErrorCode::AssetPack_ACCESS_DENIED", (int64)EGooglePADErrorCode::AssetPack_ACCESS_DENIED },
		{ "EGooglePADErrorCode::AssetPack_INSUFFICIENT_STORAGE", (int64)EGooglePADErrorCode::AssetPack_INSUFFICIENT_STORAGE },
		{ "EGooglePADErrorCode::AssetPack_PLAY_STORE_NOT_FOUND", (int64)EGooglePADErrorCode::AssetPack_PLAY_STORE_NOT_FOUND },
		{ "EGooglePADErrorCode::AssetPack_NETWORK_UNRESTRICTED", (int64)EGooglePADErrorCode::AssetPack_NETWORK_UNRESTRICTED },
		{ "EGooglePADErrorCode::AssetPack_INTERNAL_ERROR", (int64)EGooglePADErrorCode::AssetPack_INTERNAL_ERROR },
		{ "EGooglePADErrorCode::AssetPack_INITIALIZATION_NEEDED", (int64)EGooglePADErrorCode::AssetPack_INITIALIZATION_NEEDED },
		{ "EGooglePADErrorCode::AssetPack_INITIALIZATION_FAILED", (int64)EGooglePADErrorCode::AssetPack_INITIALIZATION_FAILED },
		{ "EGooglePADErrorCode::AssetPack_APP_NOT_OWNED", (int64)EGooglePADErrorCode::AssetPack_APP_NOT_OWNED },
		{ "EGooglePADErrorCode::AssetPack_CONFIRMATION_NOT_REQUIRED", (int64)EGooglePADErrorCode::AssetPack_CONFIRMATION_NOT_REQUIRED },
		{ "EGooglePADErrorCode::AssetPack_UNRECOGNIZED_INSTALLATION", (int64)EGooglePADErrorCode::AssetPack_UNRECOGNIZED_INSTALLATION },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GooglePAD,
	nullptr,
	"EGooglePADErrorCode",
	"EGooglePADErrorCode",
	Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode()
{
	if (!Z_Registration_Info_UEnum_EGooglePADErrorCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGooglePADErrorCode.InnerSingleton, Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGooglePADErrorCode.InnerSingleton;
}
// End Enum EGooglePADErrorCode

// Begin Enum EGooglePADDownloadStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGooglePADDownloadStatus;
static UEnum* EGooglePADDownloadStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGooglePADDownloadStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGooglePADDownloadStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus, (UObject*)Z_Construct_UPackage__Script_GooglePAD(), TEXT("EGooglePADDownloadStatus"));
	}
	return Z_Registration_Info_UEnum_EGooglePADDownloadStatus.OuterSingleton;
}
template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADDownloadStatus>()
{
	return EGooglePADDownloadStatus_StaticEnum();
}
struct Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssetPack_DOWNLOAD_CANCELED.Comment", "// Asset Pack download has been canceled.\n" },
		{ "AssetPack_DOWNLOAD_CANCELED.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_CANCELED" },
		{ "AssetPack_DOWNLOAD_CANCELED.ToolTip", "Asset Pack download has been canceled." },
		{ "AssetPack_DOWNLOAD_COMPLETED.Comment", "// Download and transfer are complete; the assets are available to the app.\n" },
		{ "AssetPack_DOWNLOAD_COMPLETED.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_COMPLETED" },
		{ "AssetPack_DOWNLOAD_COMPLETED.ToolTip", "Download and transfer are complete; the assets are available to the app." },
		{ "AssetPack_DOWNLOAD_FAILED.Comment", "// An AssetPackManager_requestDownload() has failed.\n" },
		{ "AssetPack_DOWNLOAD_FAILED.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_FAILED" },
		{ "AssetPack_DOWNLOAD_FAILED.ToolTip", "An AssetPackManager_requestDownload() has failed." },
		{ "AssetPack_DOWNLOAD_PENDING.Comment", "// An AssetPackManager_requestDownload() async request is pending.\n" },
		{ "AssetPack_DOWNLOAD_PENDING.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_PENDING" },
		{ "AssetPack_DOWNLOAD_PENDING.ToolTip", "An AssetPackManager_requestDownload() async request is pending." },
		{ "AssetPack_DOWNLOADING.Comment", "// The Asset Pack download is in progress.\n" },
		{ "AssetPack_DOWNLOADING.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOADING" },
		{ "AssetPack_DOWNLOADING.ToolTip", "The Asset Pack download is in progress." },
		{ "AssetPack_INFO_FAILED.Comment", "// An AssetPackManager_requestInfo() async request has failed.\n" },
		{ "AssetPack_INFO_FAILED.Name", "EGooglePADDownloadStatus::AssetPack_INFO_FAILED" },
		{ "AssetPack_INFO_FAILED.ToolTip", "An AssetPackManager_requestInfo() async request has failed." },
		{ "AssetPack_INFO_PENDING.Comment", "// An AssetPackManager_requestInfo() async request started, but the result isn't known yet.\n" },
		{ "AssetPack_INFO_PENDING.Name", "EGooglePADDownloadStatus::AssetPack_INFO_PENDING" },
		{ "AssetPack_INFO_PENDING.ToolTip", "An AssetPackManager_requestInfo() async request started, but the result isn't known yet." },
		{ "AssetPack_NOT_INSTALLED.Comment", "// The Asset Pack isn't installed.\n" },
		{ "AssetPack_NOT_INSTALLED.Name", "EGooglePADDownloadStatus::AssetPack_NOT_INSTALLED" },
		{ "AssetPack_NOT_INSTALLED.ToolTip", "The Asset Pack isn't installed." },
		{ "AssetPack_REMOVAL_FAILED.Comment", "// An AssetPackManager_requestRemoval() async request has failed.\n" },
		{ "AssetPack_REMOVAL_FAILED.Name", "EGooglePADDownloadStatus::AssetPack_REMOVAL_FAILED" },
		{ "AssetPack_REMOVAL_FAILED.ToolTip", "An AssetPackManager_requestRemoval() async request has failed." },
		{ "AssetPack_REMOVAL_PENDING.Comment", "// An AssetPackManager_requestRemoval() async request started.\n" },
		{ "AssetPack_REMOVAL_PENDING.Name", "EGooglePADDownloadStatus::AssetPack_REMOVAL_PENDING" },
		{ "AssetPack_REMOVAL_PENDING.ToolTip", "An AssetPackManager_requestRemoval() async request started." },
		{ "AssetPack_REQUIRES_USER_CONFIRMATION.Comment", "// The Asset Pack download is waiting for user confirmation to proceed.\n" },
		{ "AssetPack_REQUIRES_USER_CONFIRMATION.Name", "EGooglePADDownloadStatus::AssetPack_REQUIRES_USER_CONFIRMATION" },
		{ "AssetPack_REQUIRES_USER_CONFIRMATION.ToolTip", "The Asset Pack download is waiting for user confirmation to proceed." },
		{ "AssetPack_TRANSFERRING.Comment", "// The Asset Pack is being transferred to the app.\n" },
		{ "AssetPack_TRANSFERRING.Name", "EGooglePADDownloadStatus::AssetPack_TRANSFERRING" },
		{ "AssetPack_TRANSFERRING.ToolTip", "The Asset Pack is being transferred to the app." },
		{ "AssetPack_UNKNOWN.Comment", "// Nothing is known about the Asset Pack.\n" },
		{ "AssetPack_UNKNOWN.Name", "EGooglePADDownloadStatus::AssetPack_UNKNOWN" },
		{ "AssetPack_UNKNOWN.ToolTip", "Nothing is known about the Asset Pack." },
		{ "AssetPack_WAITING_FOR_WIFI.Comment", "// The Asset Pack download is waiting for Wi-Fi to proceed.\n" },
		{ "AssetPack_WAITING_FOR_WIFI.Name", "EGooglePADDownloadStatus::AssetPack_WAITING_FOR_WIFI" },
		{ "AssetPack_WAITING_FOR_WIFI.ToolTip", "The Asset Pack download is waiting for Wi-Fi to proceed." },
		{ "BlueprintType", "true" },
		{ "Comment", "// The status associated with Asset Pack download operations.\n" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "The status associated with Asset Pack download operations." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGooglePADDownloadStatus::AssetPack_UNKNOWN", (int64)EGooglePADDownloadStatus::AssetPack_UNKNOWN },
		{ "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_PENDING", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOAD_PENDING },
		{ "EGooglePADDownloadStatus::AssetPack_DOWNLOADING", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOADING },
		{ "EGooglePADDownloadStatus::AssetPack_TRANSFERRING", (int64)EGooglePADDownloadStatus::AssetPack_TRANSFERRING },
		{ "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_COMPLETED", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOAD_COMPLETED },
		{ "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_FAILED", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOAD_FAILED },
		{ "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_CANCELED", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOAD_CANCELED },
		{ "EGooglePADDownloadStatus::AssetPack_WAITING_FOR_WIFI", (int64)EGooglePADDownloadStatus::AssetPack_WAITING_FOR_WIFI },
		{ "EGooglePADDownloadStatus::AssetPack_NOT_INSTALLED", (int64)EGooglePADDownloadStatus::AssetPack_NOT_INSTALLED },
		{ "EGooglePADDownloadStatus::AssetPack_INFO_PENDING", (int64)EGooglePADDownloadStatus::AssetPack_INFO_PENDING },
		{ "EGooglePADDownloadStatus::AssetPack_INFO_FAILED", (int64)EGooglePADDownloadStatus::AssetPack_INFO_FAILED },
		{ "EGooglePADDownloadStatus::AssetPack_REMOVAL_PENDING", (int64)EGooglePADDownloadStatus::AssetPack_REMOVAL_PENDING },
		{ "EGooglePADDownloadStatus::AssetPack_REMOVAL_FAILED", (int64)EGooglePADDownloadStatus::AssetPack_REMOVAL_FAILED },
		{ "EGooglePADDownloadStatus::AssetPack_REQUIRES_USER_CONFIRMATION", (int64)EGooglePADDownloadStatus::AssetPack_REQUIRES_USER_CONFIRMATION },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GooglePAD,
	nullptr,
	"EGooglePADDownloadStatus",
	"EGooglePADDownloadStatus",
	Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus()
{
	if (!Z_Registration_Info_UEnum_EGooglePADDownloadStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGooglePADDownloadStatus.InnerSingleton, Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGooglePADDownloadStatus.InnerSingleton;
}
// End Enum EGooglePADDownloadStatus

// Begin Enum EGooglePADStorageMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGooglePADStorageMethod;
static UEnum* EGooglePADStorageMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGooglePADStorageMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGooglePADStorageMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod, (UObject*)Z_Construct_UPackage__Script_GooglePAD(), TEXT("EGooglePADStorageMethod"));
	}
	return Z_Registration_Info_UEnum_EGooglePADStorageMethod.OuterSingleton;
}
template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADStorageMethod>()
{
	return EGooglePADStorageMethod_StaticEnum();
}
struct Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssetPack_STORAGE_APK.Comment", "// The Asset Pack is installed as an APK containing packed asset files. Assets can be accessed via AAssetManager.\n" },
		{ "AssetPack_STORAGE_APK.Name", "EGooglePADStorageMethod::AssetPack_STORAGE_APK" },
		{ "AssetPack_STORAGE_APK.ToolTip", "The Asset Pack is installed as an APK containing packed asset files. Assets can be accessed via AAssetManager." },
		{ "AssetPack_STORAGE_FILES.Comment", "// The Asset Pack is unpacked into a folder containing individual asset files. Assets can be accessed via standard File APIs.\n" },
		{ "AssetPack_STORAGE_FILES.Name", "EGooglePADStorageMethod::AssetPack_STORAGE_FILES" },
		{ "AssetPack_STORAGE_FILES.ToolTip", "The Asset Pack is unpacked into a folder containing individual asset files. Assets can be accessed via standard File APIs." },
		{ "AssetPack_STORAGE_NOT_INSTALLED.Comment", "// The Asset Pack is not installed.\n" },
		{ "AssetPack_STORAGE_NOT_INSTALLED.Name", "EGooglePADStorageMethod::AssetPack_STORAGE_NOT_INSTALLED" },
		{ "AssetPack_STORAGE_NOT_INSTALLED.ToolTip", "The Asset Pack is not installed." },
		{ "AssetPack_STORAGE_UNKNOWN.Comment", "// Nothing is known, perhaps due to an error.\n" },
		{ "AssetPack_STORAGE_UNKNOWN.Name", "EGooglePADStorageMethod::AssetPack_STORAGE_UNKNOWN" },
		{ "AssetPack_STORAGE_UNKNOWN.ToolTip", "Nothing is known, perhaps due to an error." },
		{ "BlueprintType", "true" },
		{ "Comment", "// The method used to store an Asset Pack on the device.\n" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "The method used to store an Asset Pack on the device." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGooglePADStorageMethod::AssetPack_STORAGE_FILES", (int64)EGooglePADStorageMethod::AssetPack_STORAGE_FILES },
		{ "EGooglePADStorageMethod::AssetPack_STORAGE_APK", (int64)EGooglePADStorageMethod::AssetPack_STORAGE_APK },
		{ "EGooglePADStorageMethod::AssetPack_STORAGE_UNKNOWN", (int64)EGooglePADStorageMethod::AssetPack_STORAGE_UNKNOWN },
		{ "EGooglePADStorageMethod::AssetPack_STORAGE_NOT_INSTALLED", (int64)EGooglePADStorageMethod::AssetPack_STORAGE_NOT_INSTALLED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GooglePAD,
	nullptr,
	"EGooglePADStorageMethod",
	"EGooglePADStorageMethod",
	Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod()
{
	if (!Z_Registration_Info_UEnum_EGooglePADStorageMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGooglePADStorageMethod.InnerSingleton, Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGooglePADStorageMethod.InnerSingleton;
}
// End Enum EGooglePADStorageMethod

// Begin Enum EGooglePADCellularDataConfirmStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus;
static UEnum* EGooglePADCellularDataConfirmStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus, (UObject*)Z_Construct_UPackage__Script_GooglePAD(), TEXT("EGooglePADCellularDataConfirmStatus"));
	}
	return Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.OuterSingleton;
}
template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADCellularDataConfirmStatus>()
{
	return EGooglePADCellularDataConfirmStatus_StaticEnum();
}
struct Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssetPack_CONFIRM_PENDING.Comment", "// AssetPackManager_showCellularDataConfirmation() has been called, but the user hasn't made a choice.\n" },
		{ "AssetPack_CONFIRM_PENDING.Name", "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_PENDING" },
		{ "AssetPack_CONFIRM_PENDING.ToolTip", "AssetPackManager_showCellularDataConfirmation() has been called, but the user hasn't made a choice." },
		{ "AssetPack_CONFIRM_UNKNOWN.Comment", "// AssetPackManager_showCellularDataConfirmation() has not been called.\n" },
		{ "AssetPack_CONFIRM_UNKNOWN.Name", "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_UNKNOWN" },
		{ "AssetPack_CONFIRM_UNKNOWN.ToolTip", "AssetPackManager_showCellularDataConfirmation() has not been called." },
		{ "AssetPack_CONFIRM_USER_APPROVED.Comment", "// The user approved of downloading Asset Packs over cellular data.\n" },
		{ "AssetPack_CONFIRM_USER_APPROVED.Name", "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_APPROVED" },
		{ "AssetPack_CONFIRM_USER_APPROVED.ToolTip", "The user approved of downloading Asset Packs over cellular data." },
		{ "AssetPack_CONFIRM_USER_CANCELED.Comment", "// The user declined to download Asset Packs over cellular data.\n" },
		{ "AssetPack_CONFIRM_USER_CANCELED.Name", "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_CANCELED" },
		{ "AssetPack_CONFIRM_USER_CANCELED.ToolTip", "The user declined to download Asset Packs over cellular data." },
		{ "BlueprintType", "true" },
		{ "Comment", "// The status associated with a request to display a cellular data confirmation dialog.\n" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "The status associated with a request to display a cellular data confirmation dialog." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_UNKNOWN", (int64)EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_UNKNOWN },
		{ "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_PENDING", (int64)EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_PENDING },
		{ "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_APPROVED", (int64)EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_APPROVED },
		{ "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_CANCELED", (int64)EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_CANCELED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GooglePAD,
	nullptr,
	"EGooglePADCellularDataConfirmStatus",
	"EGooglePADCellularDataConfirmStatus",
	Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus()
{
	if (!Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.InnerSingleton, Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.InnerSingleton;
}
// End Enum EGooglePADCellularDataConfirmStatus

// Begin Enum EGooglePADConfirmationDialogStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus;
static UEnum* EGooglePADConfirmationDialogStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus, (UObject*)Z_Construct_UPackage__Script_GooglePAD(), TEXT("EGooglePADConfirmationDialogStatus"));
	}
	return Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.OuterSingleton;
}
template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADConfirmationDialogStatus>()
{
	return EGooglePADConfirmationDialogStatus_StaticEnum();
}
struct Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssetPack_CONFIRMATION_DIALOG_APPROVED.Comment", "// The user approved of downloading asset packs.\n" },
		{ "AssetPack_CONFIRMATION_DIALOG_APPROVED.Name", "EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_APPROVED" },
		{ "AssetPack_CONFIRMATION_DIALOG_APPROVED.ToolTip", "The user approved of downloading asset packs." },
		{ "AssetPack_CONFIRMATION_DIALOG_CANCELED.Comment", "// The user declined to download asset packs.\n" },
		{ "AssetPack_CONFIRMATION_DIALOG_CANCELED.Name", "EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_CANCELED" },
		{ "AssetPack_CONFIRMATION_DIALOG_CANCELED.ToolTip", "The user declined to download asset packs." },
		{ "AssetPack_CONFIRMATION_DIALOG_PENDING.Comment", "// AssetPackManager_showConfirmationDialog() has been called, but the user hasn't made a choice.\n" },
		{ "AssetPack_CONFIRMATION_DIALOG_PENDING.Name", "EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_PENDING" },
		{ "AssetPack_CONFIRMATION_DIALOG_PENDING.ToolTip", "AssetPackManager_showConfirmationDialog() has been called, but the user hasn't made a choice." },
		{ "AssetPack_CONFIRMATION_DIALOG_UNKNOWN.Comment", "// AssetPackManager_showConfirmationDialog() has not been called.\n" },
		{ "AssetPack_CONFIRMATION_DIALOG_UNKNOWN.Name", "EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_UNKNOWN" },
		{ "AssetPack_CONFIRMATION_DIALOG_UNKNOWN.ToolTip", "AssetPackManager_showConfirmationDialog() has not been called." },
		{ "BlueprintType", "true" },
		{ "Comment", "// The status associated with a request to display a confirmation dialog.\n" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "The status associated with a request to display a confirmation dialog." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_UNKNOWN", (int64)EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_UNKNOWN },
		{ "EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_PENDING", (int64)EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_PENDING },
		{ "EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_APPROVED", (int64)EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_APPROVED },
		{ "EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_CANCELED", (int64)EGooglePADConfirmationDialogStatus::AssetPack_CONFIRMATION_DIALOG_CANCELED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GooglePAD,
	nullptr,
	"EGooglePADConfirmationDialogStatus",
	"EGooglePADConfirmationDialogStatus",
	Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus()
{
	if (!Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.InnerSingleton, Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.InnerSingleton;
}
// End Enum EGooglePADConfirmationDialogStatus

// Begin Class UGooglePADFunctionLibrary Function CancelDownload
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics
{
	struct GooglePADFunctionLibrary_eventCancelDownload_Parms
	{
		TArray<FString> AssetPacks;
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Cancel download of a set of asset packs */" },
		{ "DisplayName", "Cancel Download" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Cancel download of a set of asset packs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPacks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPacks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks_Inner = { "AssetPacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks = { "AssetPacks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventCancelDownload_Parms, AssetPacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPacks_MetaData), NewProp_AssetPacks_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventCancelDownload_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "CancelDownload", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::GooglePADFunctionLibrary_eventCancelDownload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::GooglePADFunctionLibrary_eventCancelDownload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execCancelDownload)
{
	P_GET_TARRAY(FString,Z_Param_AssetPacks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::CancelDownload(Z_Param_AssetPacks);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function CancelDownload

// Begin Class UGooglePADFunctionLibrary Function GetAssetPackLocation
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics
{
	struct GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms
	{
		FString Name;
		int32 Location;
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get location handle of requested asset pack (release when done) */" },
		{ "DisplayName", "Get AssetPack Location" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get location handle of requested asset pack (release when done)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms, Location), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetAssetPackLocation", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetAssetPackLocation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::GetAssetPackLocation(Z_Param_Name,Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function GetAssetPackLocation

// Begin Class UGooglePADFunctionLibrary Function GetAssetsPath
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics
{
	struct GooglePADFunctionLibrary_eventGetAssetsPath_Parms
	{
		int32 Location;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get asset path from from location  */" },
		{ "DisplayName", "Get Assets Path" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get asset path from from location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetsPath_Parms, Location), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetsPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetAssetsPath", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::GooglePADFunctionLibrary_eventGetAssetsPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::GooglePADFunctionLibrary_eventGetAssetsPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetAssetsPath)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UGooglePADFunctionLibrary::GetAssetsPath(Z_Param_Location);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function GetAssetsPath

// Begin Class UGooglePADFunctionLibrary Function GetBytesDownloaded
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics
{
	struct GooglePADFunctionLibrary_eventGetBytesDownloaded_Parms
	{
		int32 State;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get the number of bytes downloaded from a download state */" },
		{ "DisplayName", "Get Bytes Downloaded" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get the number of bytes downloaded from a download state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_State;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetBytesDownloaded_Parms, State), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetBytesDownloaded_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetBytesDownloaded", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::GooglePADFunctionLibrary_eventGetBytesDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::GooglePADFunctionLibrary_eventGetBytesDownloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetBytesDownloaded)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UGooglePADFunctionLibrary::GetBytesDownloaded(Z_Param_State);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function GetBytesDownloaded

// Begin Class UGooglePADFunctionLibrary Function GetDownloadState
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics
{
	struct GooglePADFunctionLibrary_eventGetDownloadState_Parms
	{
		FString Name;
		int32 State;
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get download state handle of an asset pack (release when done) */" },
		{ "DisplayName", "Get Download State" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get download state handle of an asset pack (release when done)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_State;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadState_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadState_Parms, State), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadState_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetDownloadState", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::GooglePADFunctionLibrary_eventGetDownloadState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::GooglePADFunctionLibrary_eventGetDownloadState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetDownloadState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::GetDownloadState(Z_Param_Name,Z_Param_Out_State);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function GetDownloadState

// Begin Class UGooglePADFunctionLibrary Function GetDownloadStatus
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics
{
	struct GooglePADFunctionLibrary_eventGetDownloadStatus_Parms
	{
		int32 State;
		EGooglePADDownloadStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get download status from a download state */" },
		{ "DisplayName", "Get Download Status" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get download status from a download state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_State;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadStatus_Parms, State), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadStatus_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus, METADATA_PARAMS(0, nullptr) }; // 2390674691
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetDownloadStatus", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::GooglePADFunctionLibrary_eventGetDownloadStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::GooglePADFunctionLibrary_eventGetDownloadStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetDownloadStatus)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADDownloadStatus*)Z_Param__Result=UGooglePADFunctionLibrary::GetDownloadStatus(Z_Param_State);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function GetDownloadStatus

// Begin Class UGooglePADFunctionLibrary Function GetShowCellularDataConfirmationStatus
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics
{
	struct GooglePADFunctionLibrary_eventGetShowCellularDataConfirmationStatus_Parms
	{
		EGooglePADCellularDataConfirmStatus Status;
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get status of cellular confirmation dialog (DEPRECIATED) */" },
		{ "DisplayName", "Get Cellular Data Confirmation Status" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get status of cellular confirmation dialog (DEPRECIATED)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetShowCellularDataConfirmationStatus_Parms, Status), Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus, METADATA_PARAMS(0, nullptr) }; // 3931173871
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetShowCellularDataConfirmationStatus_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetShowCellularDataConfirmationStatus", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::GooglePADFunctionLibrary_eventGetShowCellularDataConfirmationStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::GooglePADFunctionLibrary_eventGetShowCellularDataConfirmationStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetShowCellularDataConfirmationStatus)
{
	P_GET_ENUM_REF(EGooglePADCellularDataConfirmStatus,Z_Param_Out_Status);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus((EGooglePADCellularDataConfirmStatus&)(Z_Param_Out_Status));
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function GetShowCellularDataConfirmationStatus

// Begin Class UGooglePADFunctionLibrary Function GetShowConfirmationDialogStatus
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics
{
	struct GooglePADFunctionLibrary_eventGetShowConfirmationDialogStatus_Parms
	{
		EGooglePADConfirmationDialogStatus Status;
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Gets the status of confirmation dialog requests */" },
		{ "DisplayName", "Get Cellular Data Confirmation Status" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Gets the status of confirmation dialog requests" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetShowConfirmationDialogStatus_Parms, Status), Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus, METADATA_PARAMS(0, nullptr) }; // 983617556
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetShowConfirmationDialogStatus_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetShowConfirmationDialogStatus", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::GooglePADFunctionLibrary_eventGetShowConfirmationDialogStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::GooglePADFunctionLibrary_eventGetShowConfirmationDialogStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetShowConfirmationDialogStatus)
{
	P_GET_ENUM_REF(EGooglePADConfirmationDialogStatus,Z_Param_Out_Status);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::GetShowConfirmationDialogStatus((EGooglePADConfirmationDialogStatus&)(Z_Param_Out_Status));
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function GetShowConfirmationDialogStatus

// Begin Class UGooglePADFunctionLibrary Function GetStorageMethod
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics
{
	struct GooglePADFunctionLibrary_eventGetStorageMethod_Parms
	{
		int32 Location;
		EGooglePADStorageMethod ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get storage method from location  */" },
		{ "DisplayName", "Get Storage Method" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get storage method from location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetStorageMethod_Parms, Location), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetStorageMethod_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod, METADATA_PARAMS(0, nullptr) }; // 763366458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetStorageMethod", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::GooglePADFunctionLibrary_eventGetStorageMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::GooglePADFunctionLibrary_eventGetStorageMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetStorageMethod)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADStorageMethod*)Z_Param__Result=UGooglePADFunctionLibrary::GetStorageMethod(Z_Param_Location);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function GetStorageMethod

// Begin Class UGooglePADFunctionLibrary Function GetTotalBytesToDownload
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics
{
	struct GooglePADFunctionLibrary_eventGetTotalBytesToDownload_Parms
	{
		int32 State;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get the total number of bytes to download from a download state */" },
		{ "DisplayName", "Get Total Bytes To Download" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get the total number of bytes to download from a download state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_State;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetTotalBytesToDownload_Parms, State), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetTotalBytesToDownload_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetTotalBytesToDownload", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::GooglePADFunctionLibrary_eventGetTotalBytesToDownload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::GooglePADFunctionLibrary_eventGetTotalBytesToDownload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetTotalBytesToDownload)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UGooglePADFunctionLibrary::GetTotalBytesToDownload(Z_Param_State);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function GetTotalBytesToDownload

// Begin Class UGooglePADFunctionLibrary Function ReleaseAssetPackLocation
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics
{
	struct GooglePADFunctionLibrary_eventReleaseAssetPackLocation_Parms
	{
		int32 Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Release location resources */" },
		{ "DisplayName", "Release AssetPack Location" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Release location resources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventReleaseAssetPackLocation_Parms, Location), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "ReleaseAssetPackLocation", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::GooglePADFunctionLibrary_eventReleaseAssetPackLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::GooglePADFunctionLibrary_eventReleaseAssetPackLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execReleaseAssetPackLocation)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGooglePADFunctionLibrary::ReleaseAssetPackLocation(Z_Param_Location);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function ReleaseAssetPackLocation

// Begin Class UGooglePADFunctionLibrary Function ReleaseDownloadState
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics
{
	struct GooglePADFunctionLibrary_eventReleaseDownloadState_Parms
	{
		int32 State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Release download state resources */" },
		{ "DisplayName", "Release Download State" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Release download state resources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventReleaseDownloadState_Parms, State), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "ReleaseDownloadState", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::GooglePADFunctionLibrary_eventReleaseDownloadState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::GooglePADFunctionLibrary_eventReleaseDownloadState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execReleaseDownloadState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGooglePADFunctionLibrary::ReleaseDownloadState(Z_Param_State);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function ReleaseDownloadState

// Begin Class UGooglePADFunctionLibrary Function RequestDownload
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics
{
	struct GooglePADFunctionLibrary_eventRequestDownload_Parms
	{
		TArray<FString> AssetPacks;
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Request download of a set of asset packs */" },
		{ "DisplayName", "Request Download" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Request download of a set of asset packs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPacks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPacks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks_Inner = { "AssetPacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks = { "AssetPacks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestDownload_Parms, AssetPacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPacks_MetaData), NewProp_AssetPacks_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestDownload_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "RequestDownload", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::GooglePADFunctionLibrary_eventRequestDownload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::GooglePADFunctionLibrary_eventRequestDownload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execRequestDownload)
{
	P_GET_TARRAY(FString,Z_Param_AssetPacks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::RequestDownload(Z_Param_AssetPacks);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function RequestDownload

// Begin Class UGooglePADFunctionLibrary Function RequestInfo
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics
{
	struct GooglePADFunctionLibrary_eventRequestInfo_Parms
	{
		TArray<FString> AssetPacks;
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Request information about a set of asset packs */" },
		{ "DisplayName", "Request Info" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Request information about a set of asset packs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPacks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPacks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks_Inner = { "AssetPacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks = { "AssetPacks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestInfo_Parms, AssetPacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPacks_MetaData), NewProp_AssetPacks_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestInfo_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "RequestInfo", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::GooglePADFunctionLibrary_eventRequestInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::GooglePADFunctionLibrary_eventRequestInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execRequestInfo)
{
	P_GET_TARRAY(FString,Z_Param_AssetPacks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::RequestInfo(Z_Param_AssetPacks);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function RequestInfo

// Begin Class UGooglePADFunctionLibrary Function RequestRemoval
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics
{
	struct GooglePADFunctionLibrary_eventRequestRemoval_Parms
	{
		FString Name;
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Request removal of an asset pack */" },
		{ "DisplayName", "Request Removal" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Request removal of an asset pack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestRemoval_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestRemoval_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "RequestRemoval", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::GooglePADFunctionLibrary_eventRequestRemoval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::GooglePADFunctionLibrary_eventRequestRemoval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execRequestRemoval)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::RequestRemoval(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function RequestRemoval

// Begin Class UGooglePADFunctionLibrary Function ShowCellularDataConfirmation
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics
{
	struct GooglePADFunctionLibrary_eventShowCellularDataConfirmation_Parms
	{
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Show confirmation dialog requesting data download over cellular network (DEPRECIATED) */" },
		{ "DisplayName", "Show Cellular Data Confirmation" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Show confirmation dialog requesting data download over cellular network (DEPRECIATED)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventShowCellularDataConfirmation_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "ShowCellularDataConfirmation", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::GooglePADFunctionLibrary_eventShowCellularDataConfirmation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::GooglePADFunctionLibrary_eventShowCellularDataConfirmation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execShowCellularDataConfirmation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::ShowCellularDataConfirmation();
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function ShowCellularDataConfirmation

// Begin Class UGooglePADFunctionLibrary Function ShowConfirmationDialog
struct Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics
{
	struct GooglePADFunctionLibrary_eventShowConfirmationDialog_Parms
	{
		EGooglePADErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Show confirmation dialog to start all asset pack downloads in either REQUIRES_USER_CONFIRMATION or WAITING_FOR_WIFI state. */" },
		{ "DisplayName", "Show Confirmation dialog" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Show confirmation dialog to start all asset pack downloads in either REQUIRES_USER_CONFIRMATION or WAITING_FOR_WIFI state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventShowConfirmationDialog_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(0, nullptr) }; // 1023847928
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "ShowConfirmationDialog", nullptr, nullptr, Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::GooglePADFunctionLibrary_eventShowConfirmationDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::GooglePADFunctionLibrary_eventShowConfirmationDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGooglePADFunctionLibrary::execShowConfirmationDialog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::ShowConfirmationDialog();
	P_NATIVE_END;
}
// End Class UGooglePADFunctionLibrary Function ShowConfirmationDialog

// Begin Class UGooglePADFunctionLibrary
void UGooglePADFunctionLibrary::StaticRegisterNativesUGooglePADFunctionLibrary()
{
	UClass* Class = UGooglePADFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelDownload", &UGooglePADFunctionLibrary::execCancelDownload },
		{ "GetAssetPackLocation", &UGooglePADFunctionLibrary::execGetAssetPackLocation },
		{ "GetAssetsPath", &UGooglePADFunctionLibrary::execGetAssetsPath },
		{ "GetBytesDownloaded", &UGooglePADFunctionLibrary::execGetBytesDownloaded },
		{ "GetDownloadState", &UGooglePADFunctionLibrary::execGetDownloadState },
		{ "GetDownloadStatus", &UGooglePADFunctionLibrary::execGetDownloadStatus },
		{ "GetShowCellularDataConfirmationStatus", &UGooglePADFunctionLibrary::execGetShowCellularDataConfirmationStatus },
		{ "GetShowConfirmationDialogStatus", &UGooglePADFunctionLibrary::execGetShowConfirmationDialogStatus },
		{ "GetStorageMethod", &UGooglePADFunctionLibrary::execGetStorageMethod },
		{ "GetTotalBytesToDownload", &UGooglePADFunctionLibrary::execGetTotalBytesToDownload },
		{ "ReleaseAssetPackLocation", &UGooglePADFunctionLibrary::execReleaseAssetPackLocation },
		{ "ReleaseDownloadState", &UGooglePADFunctionLibrary::execReleaseDownloadState },
		{ "RequestDownload", &UGooglePADFunctionLibrary::execRequestDownload },
		{ "RequestInfo", &UGooglePADFunctionLibrary::execRequestInfo },
		{ "RequestRemoval", &UGooglePADFunctionLibrary::execRequestRemoval },
		{ "ShowCellularDataConfirmation", &UGooglePADFunctionLibrary::execShowCellularDataConfirmation },
		{ "ShowConfirmationDialog", &UGooglePADFunctionLibrary::execShowConfirmationDialog },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGooglePADFunctionLibrary);
UClass* Z_Construct_UClass_UGooglePADFunctionLibrary_NoRegister()
{
	return UGooglePADFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UGooglePADFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GooglePADFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload, "CancelDownload" }, // 823606127
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation, "GetAssetPackLocation" }, // 2825391863
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath, "GetAssetsPath" }, // 1237428527
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded, "GetBytesDownloaded" }, // 3147693667
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState, "GetDownloadState" }, // 2101940570
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus, "GetDownloadStatus" }, // 4243022236
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus, "GetShowCellularDataConfirmationStatus" }, // 3285192621
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus, "GetShowConfirmationDialogStatus" }, // 2081345088
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod, "GetStorageMethod" }, // 3858326577
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload, "GetTotalBytesToDownload" }, // 4041300820
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation, "ReleaseAssetPackLocation" }, // 2204695660
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState, "ReleaseDownloadState" }, // 3495306177
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload, "RequestDownload" }, // 564226166
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo, "RequestInfo" }, // 1356716485
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval, "RequestRemoval" }, // 717288600
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation, "ShowCellularDataConfirmation" }, // 23981255
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog, "ShowConfirmationDialog" }, // 3838542841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGooglePADFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GooglePAD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::ClassParams = {
	&UGooglePADFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGooglePADFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UGooglePADFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGooglePADFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGooglePADFunctionLibrary.OuterSingleton;
}
template<> GOOGLEPAD_API UClass* StaticClass<UGooglePADFunctionLibrary>()
{
	return UGooglePADFunctionLibrary::StaticClass();
}
UGooglePADFunctionLibrary::UGooglePADFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGooglePADFunctionLibrary);
UGooglePADFunctionLibrary::~UGooglePADFunctionLibrary() {}
// End Class UGooglePADFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGooglePADErrorCode_StaticEnum, TEXT("EGooglePADErrorCode"), &Z_Registration_Info_UEnum_EGooglePADErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1023847928U) },
		{ EGooglePADDownloadStatus_StaticEnum, TEXT("EGooglePADDownloadStatus"), &Z_Registration_Info_UEnum_EGooglePADDownloadStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2390674691U) },
		{ EGooglePADStorageMethod_StaticEnum, TEXT("EGooglePADStorageMethod"), &Z_Registration_Info_UEnum_EGooglePADStorageMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 763366458U) },
		{ EGooglePADCellularDataConfirmStatus_StaticEnum, TEXT("EGooglePADCellularDataConfirmStatus"), &Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3931173871U) },
		{ EGooglePADConfirmationDialogStatus_StaticEnum, TEXT("EGooglePADConfirmationDialogStatus"), &Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 983617556U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGooglePADFunctionLibrary, UGooglePADFunctionLibrary::StaticClass, TEXT("UGooglePADFunctionLibrary"), &Z_Registration_Info_UClass_UGooglePADFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGooglePADFunctionLibrary), 1977717456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_1215612622(TEXT("/Script/GooglePAD"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
