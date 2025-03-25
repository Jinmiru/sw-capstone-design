// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NetworkReplayStreaming/HttpNetworkReplayStreaming/Public/HttpNetworkReplayStreaming.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpNetworkReplayStreaming() {}

// Begin Cross Module References
HTTPNETWORKREPLAYSTREAMING_API UEnum* Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult();
UPackage* Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
// End Cross Module References

// Begin Enum EHttpReplayResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpReplayResult;
static UEnum* EHttpReplayResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult, (UObject*)Z_Construct_UPackage__Script_HttpNetworkReplayStreaming(), TEXT("EHttpReplayResult"));
	}
	return Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
}
template<> HTTPNETWORKREPLAYSTREAMING_API UEnum* StaticEnum<EHttpReplayResult>()
{
	return EHttpReplayResult_StaticEnum();
}
struct Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CompressionFailed.Name", "EHttpReplayResult::CompressionFailed" },
		{ "DataUnavailable.Name", "EHttpReplayResult::DataUnavailable" },
		{ "DecompressionFailed.Name", "EHttpReplayResult::DecompressionFailed" },
		{ "FailedJsonParse.Name", "EHttpReplayResult::FailedJsonParse" },
		{ "InvalidHttpResponse.Name", "EHttpReplayResult::InvalidHttpResponse" },
		{ "InvalidPayload.Name", "EHttpReplayResult::InvalidPayload" },
		{ "ModuleRelativePath", "Public/HttpNetworkReplayStreaming.h" },
		{ "Success.Name", "EHttpReplayResult::Success" },
		{ "Unknown.Name", "EHttpReplayResult::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHttpReplayResult::Success", (int64)EHttpReplayResult::Success },
		{ "EHttpReplayResult::FailedJsonParse", (int64)EHttpReplayResult::FailedJsonParse },
		{ "EHttpReplayResult::DataUnavailable", (int64)EHttpReplayResult::DataUnavailable },
		{ "EHttpReplayResult::InvalidHttpResponse", (int64)EHttpReplayResult::InvalidHttpResponse },
		{ "EHttpReplayResult::CompressionFailed", (int64)EHttpReplayResult::CompressionFailed },
		{ "EHttpReplayResult::DecompressionFailed", (int64)EHttpReplayResult::DecompressionFailed },
		{ "EHttpReplayResult::InvalidPayload", (int64)EHttpReplayResult::InvalidPayload },
		{ "EHttpReplayResult::Unknown", (int64)EHttpReplayResult::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HttpNetworkReplayStreaming,
	nullptr,
	"EHttpReplayResult",
	"EHttpReplayResult",
	Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult()
{
	if (!Z_Registration_Info_UEnum_EHttpReplayResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpReplayResult.InnerSingleton, Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHttpReplayResult.InnerSingleton;
}
// End Enum EHttpReplayResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_HttpNetworkReplayStreaming_Public_HttpNetworkReplayStreaming_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHttpReplayResult_StaticEnum, TEXT("EHttpReplayResult"), &Z_Registration_Info_UEnum_EHttpReplayResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4294077479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_HttpNetworkReplayStreaming_Public_HttpNetworkReplayStreaming_h_1651779438(TEXT("/Script/HttpNetworkReplayStreaming"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_HttpNetworkReplayStreaming_Public_HttpNetworkReplayStreaming_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_HttpNetworkReplayStreaming_Public_HttpNetworkReplayStreaming_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
