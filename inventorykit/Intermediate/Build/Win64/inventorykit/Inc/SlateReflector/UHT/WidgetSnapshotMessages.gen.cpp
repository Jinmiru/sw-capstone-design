// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/SlateReflector/Private/WidgetSnapshotMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSnapshotMessages() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
SLATEREFLECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest();
SLATEREFLECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse();
UPackage* Z_Construct_UPackage__Script_SlateReflector();
// End Cross Module References

// Begin ScriptStruct FWidgetSnapshotRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest;
class UScriptStruct* FWidgetSnapshotRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest, (UObject*)Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotRequest"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.OuterSingleton;
}
template<> SLATEREFLECTOR_API UScriptStruct* StaticStruct<FWidgetSnapshotRequest>()
{
	return FWidgetSnapshotRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is used to request a widget snapshot from a remote target.\n */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "Implements a message that is used to request a widget snapshot from a remote target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The instance ID of the remote target we want to receive a snapshot from */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The instance ID of the remote target we want to receive a snapshot from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotRequestId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The request ID of this snapshot (used to identify the correct response from the target) */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The request ID of this snapshot (used to identify the correct response from the target)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInstanceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotRequestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSnapshotRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId = { "TargetInstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetSnapshotRequest, TargetInstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInstanceId_MetaData), NewProp_TargetInstanceId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId = { "SnapshotRequestId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetSnapshotRequest, SnapshotRequestId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotRequestId_MetaData), NewProp_SnapshotRequestId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateReflector,
	nullptr,
	&NewStructOps,
	"WidgetSnapshotRequest",
	Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers),
	sizeof(FWidgetSnapshotRequest),
	alignof(FWidgetSnapshotRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.InnerSingleton, Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.InnerSingleton;
}
// End ScriptStruct FWidgetSnapshotRequest

// Begin ScriptStruct FWidgetSnapshotResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse;
class UScriptStruct* FWidgetSnapshotResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotResponse, (UObject*)Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotResponse"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.OuterSingleton;
}
template<> SLATEREFLECTOR_API UScriptStruct* StaticStruct<FWidgetSnapshotResponse>()
{
	return FWidgetSnapshotResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is used to receive a widget snapshot from a remote target.\n */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "Implements a message that is used to receive a widget snapshot from a remote target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotRequestId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The request ID of this snapshot (used to identify the correct response from the target) */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The request ID of this snapshot (used to identify the correct response from the target)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The snapshot data, to be used by FWidgetSnapshotData::LoadSnapshotFromBuffer */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The snapshot data, to be used by FWidgetSnapshotData::LoadSnapshotFromBuffer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotRequestId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnapshotData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SnapshotData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSnapshotResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId = { "SnapshotRequestId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetSnapshotResponse, SnapshotRequestId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotRequestId_MetaData), NewProp_SnapshotRequestId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_Inner = { "SnapshotData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData = { "SnapshotData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetSnapshotResponse, SnapshotData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotData_MetaData), NewProp_SnapshotData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateReflector,
	nullptr,
	&NewStructOps,
	"WidgetSnapshotResponse",
	Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers),
	sizeof(FWidgetSnapshotResponse),
	alignof(FWidgetSnapshotResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.InnerSingleton, Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.InnerSingleton;
}
// End ScriptStruct FWidgetSnapshotResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetSnapshotRequest::StaticStruct, Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewStructOps, TEXT("WidgetSnapshotRequest"), &Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetSnapshotRequest), 1277506560U) },
		{ FWidgetSnapshotResponse::StaticStruct, Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewStructOps, TEXT("WidgetSnapshotResponse"), &Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetSnapshotResponse), 2639769326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h_195075866(TEXT("/Script/SlateReflector"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
