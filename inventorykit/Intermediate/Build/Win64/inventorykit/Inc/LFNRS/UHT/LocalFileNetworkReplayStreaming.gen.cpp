// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NetworkReplayStreaming/LocalFileNetworkReplayStreaming/Public/LocalFileNetworkReplayStreaming.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalFileNetworkReplayStreaming() {}

// Begin Cross Module References
LOCALFILENETWORKREPLAYSTREAMING_API UEnum* Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult();
UPackage* Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming();
// End Cross Module References

// Begin Enum ELocalFileReplayResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocalFileReplayResult;
static UEnum* ELocalFileReplayResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult, (UObject*)Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming(), TEXT("ELocalFileReplayResult"));
	}
	return Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton;
}
template<> LOCALFILENETWORKREPLAYSTREAMING_API UEnum* StaticEnum<ELocalFileReplayResult>()
{
	return ELocalFileReplayResult_StaticEnum();
}
struct Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CompressBuffer.Name", "ELocalFileReplayResult::CompressBuffer" },
		{ "CompressionNotSupported.Name", "ELocalFileReplayResult::CompressionNotSupported" },
		{ "DecompressBuffer.Name", "ELocalFileReplayResult::DecompressBuffer" },
		{ "DecryptBuffer.Name", "ELocalFileReplayResult::DecryptBuffer" },
		{ "EncryptBuffer.Name", "ELocalFileReplayResult::EncryptBuffer" },
		{ "EncryptionNotSupported.Name", "ELocalFileReplayResult::EncryptionNotSupported" },
		{ "FileWriter.Name", "ELocalFileReplayResult::FileWriter" },
		{ "InvalidName.Name", "ELocalFileReplayResult::InvalidName" },
		{ "InvalidReplayInfo.Name", "ELocalFileReplayResult::InvalidReplayInfo" },
		{ "ModuleRelativePath", "Public/LocalFileNetworkReplayStreaming.h" },
		{ "StreamChunkIndexMismatch.Name", "ELocalFileReplayResult::StreamChunkIndexMismatch" },
		{ "Success.Name", "ELocalFileReplayResult::Success" },
		{ "Unknown.Name", "ELocalFileReplayResult::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocalFileReplayResult::Success", (int64)ELocalFileReplayResult::Success },
		{ "ELocalFileReplayResult::InvalidReplayInfo", (int64)ELocalFileReplayResult::InvalidReplayInfo },
		{ "ELocalFileReplayResult::StreamChunkIndexMismatch", (int64)ELocalFileReplayResult::StreamChunkIndexMismatch },
		{ "ELocalFileReplayResult::DecompressBuffer", (int64)ELocalFileReplayResult::DecompressBuffer },
		{ "ELocalFileReplayResult::CompressionNotSupported", (int64)ELocalFileReplayResult::CompressionNotSupported },
		{ "ELocalFileReplayResult::DecryptBuffer", (int64)ELocalFileReplayResult::DecryptBuffer },
		{ "ELocalFileReplayResult::EncryptionNotSupported", (int64)ELocalFileReplayResult::EncryptionNotSupported },
		{ "ELocalFileReplayResult::EncryptBuffer", (int64)ELocalFileReplayResult::EncryptBuffer },
		{ "ELocalFileReplayResult::CompressBuffer", (int64)ELocalFileReplayResult::CompressBuffer },
		{ "ELocalFileReplayResult::InvalidName", (int64)ELocalFileReplayResult::InvalidName },
		{ "ELocalFileReplayResult::FileWriter", (int64)ELocalFileReplayResult::FileWriter },
		{ "ELocalFileReplayResult::Unknown", (int64)ELocalFileReplayResult::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming,
	nullptr,
	"ELocalFileReplayResult",
	"ELocalFileReplayResult",
	Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult()
{
	if (!Z_Registration_Info_UEnum_ELocalFileReplayResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocalFileReplayResult.InnerSingleton, Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocalFileReplayResult.InnerSingleton;
}
// End Enum ELocalFileReplayResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocalFileReplayResult_StaticEnum, TEXT("ELocalFileReplayResult"), &Z_Registration_Info_UEnum_ELocalFileReplayResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1677809902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h_497477228(TEXT("/Script/LocalFileNetworkReplayStreaming"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
