// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/OodleNetworkFaultHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOodleNetworkFaultHandler() {}

// Begin Cross Module References
OODLENETWORKHANDLERCOMPONENT_API UEnum* Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult();
UPackage* Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
// End Cross Module References

// Begin Enum EOodleNetResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOodleNetResult;
static UEnum* EOodleNetResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult, (UObject*)Z_Construct_UPackage__Script_OodleNetworkHandlerComponent(), TEXT("EOodleNetResult"));
	}
	return Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton;
}
template<> OODLENETWORKHANDLERCOMPONENT_API UEnum* StaticEnum<EOodleNetResult>()
{
	return EOodleNetResult_StaticEnum();
}
struct Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Oodle net error types, for NetConnection fault handling\n */" },
		{ "ModuleRelativePath", "Public/OodleNetworkFaultHandler.h" },
		{ "OodleBadDecompressedLength.Comment", "/** Oodle Packet decompressed length overflow */" },
		{ "OodleBadDecompressedLength.Name", "EOodleNetResult::OodleBadDecompressedLength" },
		{ "OodleBadDecompressedLength.ToolTip", "Oodle Packet decompressed length overflow" },
		{ "OodleDecodeFailed.Comment", "/** Oodle Packet decoding failed */" },
		{ "OodleDecodeFailed.Name", "EOodleNetResult::OodleDecodeFailed" },
		{ "OodleDecodeFailed.ToolTip", "Oodle Packet decoding failed" },
		{ "OodleNoDictionary.Comment", "/** Oodle Dictionary missing */" },
		{ "OodleNoDictionary.Name", "EOodleNetResult::OodleNoDictionary" },
		{ "OodleNoDictionary.ToolTip", "Oodle Dictionary missing" },
		{ "OodleSerializePayloadFail.Comment", "/** Oodle Packet payload serialization failed */" },
		{ "OodleSerializePayloadFail.Name", "EOodleNetResult::OodleSerializePayloadFail" },
		{ "OodleSerializePayloadFail.ToolTip", "Oodle Packet payload serialization failed" },
		{ "Success.Name", "EOodleNetResult::Success" },
		{ "ToolTip", "Oodle net error types, for NetConnection fault handling" },
		{ "Unknown.Name", "EOodleNetResult::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOodleNetResult::Unknown", (int64)EOodleNetResult::Unknown },
		{ "EOodleNetResult::Success", (int64)EOodleNetResult::Success },
		{ "EOodleNetResult::OodleDecodeFailed", (int64)EOodleNetResult::OodleDecodeFailed },
		{ "EOodleNetResult::OodleSerializePayloadFail", (int64)EOodleNetResult::OodleSerializePayloadFail },
		{ "EOodleNetResult::OodleBadDecompressedLength", (int64)EOodleNetResult::OodleBadDecompressedLength },
		{ "EOodleNetResult::OodleNoDictionary", (int64)EOodleNetResult::OodleNoDictionary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OodleNetworkHandlerComponent,
	nullptr,
	"EOodleNetResult",
	"EOodleNetResult",
	Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult()
{
	if (!Z_Registration_Info_UEnum_EOodleNetResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOodleNetResult.InnerSingleton, Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOodleNetResult.InnerSingleton;
}
// End Enum EOodleNetResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkFaultHandler_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOodleNetResult_StaticEnum, TEXT("EOodleNetResult"), &Z_Registration_Info_UEnum_EOodleNetResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1697347911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkFaultHandler_h_3384052690(TEXT("/Script/OodleNetworkHandlerComponent"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkFaultHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkFaultHandler_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
