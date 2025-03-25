// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ProfilerMessages/Public/ProfilerServiceMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilerServiceMessages() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe();
PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe();
UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
// End Cross Module References

// Begin ScriptStruct FProfilerServiceAuthorize
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize;
class UScriptStruct* FProfilerServiceAuthorize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceAuthorize, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceAuthorize"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceAuthorize>()
{
	return FProfilerServiceAuthorize::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Profiler Service authorization message. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Profiler Service authorization message." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Session ID. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Session ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Instance ID. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Instance ID." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceAuthorize>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceAuthorize, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceAuthorize, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServiceAuthorize",
	Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers),
	sizeof(FProfilerServiceAuthorize),
	alignof(FProfilerServiceAuthorize),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.InnerSingleton;
}
// End ScriptStruct FProfilerServiceAuthorize

// Begin ScriptStruct FProfilerServiceData2
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceData2;
class UScriptStruct* FProfilerServiceData2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceData2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceData2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceData2, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceData2"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceData2.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceData2>()
{
	return FProfilerServiceData2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServiceData2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Profiler Service data. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Profiler Service data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Instance ID. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Instance ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Stats frame. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Stats frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressedSize_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Size of the compressed data. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Size of the compressed data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSize_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Size of the uncompressed data. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Size of the uncompressed data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Profiler data encoded as string of hexes, cannot use TArray<uint8> because of the Message Bus limitation. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Profiler data encoded as string of hexes, cannot use TArray<uint8> because of the Message Bus limitation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Frame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressedSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HexData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceData2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceData2, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceData2, Frame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize = { "CompressedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceData2, CompressedSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressedSize_MetaData), NewProp_CompressedSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize = { "UncompressedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceData2, UncompressedSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncompressedSize_MetaData), NewProp_UncompressedSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData = { "HexData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceData2, HexData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexData_MetaData), NewProp_HexData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServiceData2",
	Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers),
	sizeof(FProfilerServiceData2),
	alignof(FProfilerServiceData2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceData2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceData2.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceData2.InnerSingleton;
}
// End ScriptStruct FProfilerServiceData2

// Begin ScriptStruct FProfilerServicePreviewAck
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck;
class UScriptStruct* FProfilerServicePreviewAck::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreviewAck, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreviewAck"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServicePreviewAck>()
{
	return FProfilerServicePreviewAck::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePreviewAck>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServicePreviewAck, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServicePreviewAck",
	Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers),
	sizeof(FProfilerServicePreviewAck),
	alignof(FProfilerServicePreviewAck),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.InnerSingleton;
}
// End ScriptStruct FProfilerServicePreviewAck

// Begin ScriptStruct FProfilerServiceFileChunk
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk;
class UScriptStruct* FProfilerServiceFileChunk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceFileChunk, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceFileChunk"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceFileChunk>()
{
	return FProfilerServiceFileChunk::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for copying a file through the network, as well as for synchronization.\n * Unfortunately assumes that InstanceId and Filename are transfered without errors.\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Implements a message for copying a file through the network, as well as for synchronization.\nUnfortunately assumes that InstanceId and Filename are transfered without errors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The ID of the instance where this message should be sent. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The ID of the instance where this message should be sent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The file containing this file chunk. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The file containing this file chunk." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Data to be sent through message bus. Message bug doesn't support TArray<>, so we encode the data as HexString. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Data to be sent through message bus. Message bug doesn't support TArray<>, so we encode the data as HexString." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** FProfilerFileChunkHeader stored in the array. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "FProfilerFileChunkHeader stored in the array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkHash_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Hash of this data and header. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Hash of this data and header." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HexData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Header_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Header;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChunkHash_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceFileChunk>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceFileChunk, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceFileChunk, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData = { "HexData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceFileChunk, HexData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexData_MetaData), NewProp_HexData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_Inner = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceFileChunk, Header), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_Inner = { "ChunkHash", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash = { "ChunkHash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceFileChunk, ChunkHash), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkHash_MetaData), NewProp_ChunkHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServiceFileChunk",
	Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers),
	sizeof(FProfilerServiceFileChunk),
	alignof(FProfilerServiceFileChunk),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.InnerSingleton;
}
// End ScriptStruct FProfilerServiceFileChunk

// Begin ScriptStruct FProfilerServicePing
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServicePing;
class UScriptStruct* FProfilerServicePing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServicePing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePing, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePing"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePing.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServicePing>()
{
	return FProfilerServicePing::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServicePing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServicePing",
	nullptr,
	0,
	sizeof(FProfilerServicePing),
	alignof(FProfilerServicePing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServicePing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServicePing.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServicePing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePing.InnerSingleton;
}
// End ScriptStruct FProfilerServicePing

// Begin ScriptStruct FProfilerServicePong
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServicePong;
class UScriptStruct* FProfilerServicePong::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePong.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServicePong.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePong, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePong"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePong.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServicePong>()
{
	return FProfilerServicePong::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServicePong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePong>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePong_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServicePong",
	nullptr,
	0,
	sizeof(FProfilerServicePong),
	alignof(FProfilerServicePong),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePong_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServicePong_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePong.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServicePong.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServicePong_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePong.InnerSingleton;
}
// End ScriptStruct FProfilerServicePong

// Begin ScriptStruct FProfilerServiceSubscribe
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe;
class UScriptStruct* FProfilerServiceSubscribe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceSubscribe, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceSubscribe"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceSubscribe>()
{
	return FProfilerServiceSubscribe::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceSubscribe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceSubscribe, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceSubscribe, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServiceSubscribe",
	Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers),
	sizeof(FProfilerServiceSubscribe),
	alignof(FProfilerServiceSubscribe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.InnerSingleton;
}
// End ScriptStruct FProfilerServiceSubscribe

// Begin ScriptStruct FProfilerServiceUnsubscribe
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe;
class UScriptStruct* FProfilerServiceUnsubscribe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceUnsubscribe"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceUnsubscribe>()
{
	return FProfilerServiceUnsubscribe::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceUnsubscribe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceUnsubscribe, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceUnsubscribe, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServiceUnsubscribe",
	Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers),
	sizeof(FProfilerServiceUnsubscribe),
	alignof(FProfilerServiceUnsubscribe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.InnerSingleton;
}
// End ScriptStruct FProfilerServiceUnsubscribe

// Begin ScriptStruct FProfilerServiceCapture
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceCapture;
class UScriptStruct* FProfilerServiceCapture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceCapture, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceCapture"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceCapture>()
{
	return FProfilerServiceCapture::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequestedCaptureState_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The data capture state that should be set. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The data capture state that should be set." },
	};
#endif // WITH_METADATA
	static void NewProp_bRequestedCaptureState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestedCaptureState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceCapture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_SetBit(void* Obj)
{
	((FProfilerServiceCapture*)Obj)->bRequestedCaptureState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState = { "bRequestedCaptureState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProfilerServiceCapture), &Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequestedCaptureState_MetaData), NewProp_bRequestedCaptureState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServiceCapture",
	Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers),
	sizeof(FProfilerServiceCapture),
	alignof(FProfilerServiceCapture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.InnerSingleton;
}
// End ScriptStruct FProfilerServiceCapture

// Begin ScriptStruct FProfilerServicePreview
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServicePreview;
class UScriptStruct* FProfilerServicePreview::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePreview.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServicePreview.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreview, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreview"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePreview.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServicePreview>()
{
	return FProfilerServicePreview::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServicePreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequestedPreviewState_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**\n\x09 * The data preview state that should be set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The data preview state that should be set." },
	};
#endif // WITH_METADATA
	static void NewProp_bRequestedPreviewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestedPreviewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePreview>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_SetBit(void* Obj)
{
	((FProfilerServicePreview*)Obj)->bRequestedPreviewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState = { "bRequestedPreviewState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProfilerServicePreview), &Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequestedPreviewState_MetaData), NewProp_bRequestedPreviewState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServicePreview",
	Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers),
	sizeof(FProfilerServicePreview),
	alignof(FProfilerServicePreview),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePreview.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServicePreview.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePreview.InnerSingleton;
}
// End ScriptStruct FProfilerServicePreview

// Begin ScriptStruct FProfilerServiceRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceRequest;
class UScriptStruct* FProfilerServiceRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceRequest, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceRequest>()
{
	return FProfilerServiceRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Request @see EProfilerRequestType. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Request @see EProfilerRequestType." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfilerServiceRequest, Request), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
	nullptr,
	&NewStructOps,
	"ProfilerServiceRequest",
	Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers),
	sizeof(FProfilerServiceRequest),
	alignof(FProfilerServiceRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.InnerSingleton;
}
// End ScriptStruct FProfilerServiceRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ProfilerMessages_Public_ProfilerServiceMessages_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProfilerServiceAuthorize::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewStructOps, TEXT("ProfilerServiceAuthorize"), &Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceAuthorize), 2392226385U) },
		{ FProfilerServiceData2::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewStructOps, TEXT("ProfilerServiceData2"), &Z_Registration_Info_UScriptStruct_ProfilerServiceData2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceData2), 3400864986U) },
		{ FProfilerServicePreviewAck::StaticStruct, Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewStructOps, TEXT("ProfilerServicePreviewAck"), &Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServicePreviewAck), 709170147U) },
		{ FProfilerServiceFileChunk::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewStructOps, TEXT("ProfilerServiceFileChunk"), &Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceFileChunk), 574073271U) },
		{ FProfilerServicePing::StaticStruct, Z_Construct_UScriptStruct_FProfilerServicePing_Statics::NewStructOps, TEXT("ProfilerServicePing"), &Z_Registration_Info_UScriptStruct_ProfilerServicePing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServicePing), 196290077U) },
		{ FProfilerServicePong::StaticStruct, Z_Construct_UScriptStruct_FProfilerServicePong_Statics::NewStructOps, TEXT("ProfilerServicePong"), &Z_Registration_Info_UScriptStruct_ProfilerServicePong, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServicePong), 3291108515U) },
		{ FProfilerServiceSubscribe::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewStructOps, TEXT("ProfilerServiceSubscribe"), &Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceSubscribe), 2169921384U) },
		{ FProfilerServiceUnsubscribe::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewStructOps, TEXT("ProfilerServiceUnsubscribe"), &Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceUnsubscribe), 1723443150U) },
		{ FProfilerServiceCapture::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewStructOps, TEXT("ProfilerServiceCapture"), &Z_Registration_Info_UScriptStruct_ProfilerServiceCapture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceCapture), 1907150068U) },
		{ FProfilerServicePreview::StaticStruct, Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewStructOps, TEXT("ProfilerServicePreview"), &Z_Registration_Info_UScriptStruct_ProfilerServicePreview, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServicePreview), 80069406U) },
		{ FProfilerServiceRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewStructOps, TEXT("ProfilerServiceRequest"), &Z_Registration_Info_UScriptStruct_ProfilerServiceRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceRequest), 1222420252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ProfilerMessages_Public_ProfilerServiceMessages_h_65474180(TEXT("/Script/ProfilerMessages"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ProfilerMessages_Public_ProfilerServiceMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ProfilerMessages_Public_ProfilerServiceMessages_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
