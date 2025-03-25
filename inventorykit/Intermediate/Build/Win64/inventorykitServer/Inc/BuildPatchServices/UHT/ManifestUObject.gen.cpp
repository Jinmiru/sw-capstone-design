// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Online/BuildPatchServices/Private/Data/ManifestUObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManifestUObject() {}

// Begin Cross Module References
BUILDPATCHSERVICES_API UClass* Z_Construct_UClass_UBuildPatchManifest();
BUILDPATCHSERVICES_API UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister();
BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData();
BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData();
BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData();
BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData();
BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
// End Cross Module References

// Begin ScriptStruct FCustomFieldData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomFieldData;
class UScriptStruct* FCustomFieldData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomFieldData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomFieldData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomFieldData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("CustomFieldData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomFieldData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FCustomFieldData>()
{
	return FCustomFieldData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomFieldData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomFieldData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomFieldData, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomFieldData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomFieldData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
	nullptr,
	&NewStructOps,
	"CustomFieldData",
	Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers),
	sizeof(FCustomFieldData),
	alignof(FCustomFieldData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomFieldData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData()
{
	if (!Z_Registration_Info_UScriptStruct_CustomFieldData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomFieldData.InnerSingleton, Z_Construct_UScriptStruct_FCustomFieldData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomFieldData.InnerSingleton;
}
// End ScriptStruct FCustomFieldData

// Begin ScriptStruct FSHAHashData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SHAHashData;
class UScriptStruct* FSHAHashData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SHAHashData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SHAHashData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSHAHashData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("SHAHashData"));
	}
	return Z_Registration_Info_UScriptStruct_SHAHashData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FSHAHashData>()
{
	return FSHAHashData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSHAHashData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSHAHashData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Hash, FSHAHashData), STRUCT_OFFSET(FSHAHashData, Hash), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSHAHashData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
	nullptr,
	&NewStructOps,
	"SHAHashData",
	Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers),
	sizeof(FSHAHashData),
	alignof(FSHAHashData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHAHashData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSHAHashData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData()
{
	if (!Z_Registration_Info_UScriptStruct_SHAHashData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SHAHashData.InnerSingleton, Z_Construct_UScriptStruct_FSHAHashData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SHAHashData.InnerSingleton;
}
// End ScriptStruct FSHAHashData

// Begin ScriptStruct FChunkInfoData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkInfoData;
class UScriptStruct* FChunkInfoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkInfoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkInfoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkInfoData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkInfoData"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkInfoData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FChunkInfoData>()
{
	return FChunkInfoData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChunkInfoData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupNumber_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Hash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShaHash;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkInfoData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkInfoData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkInfoData, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash = { "ShaHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkInfoData, ShaHash), Z_Construct_UScriptStruct_FSHAHashData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaHash_MetaData), NewProp_ShaHash_MetaData) }; // 3011534199
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkInfoData, FileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileSize_MetaData), NewProp_FileSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber = { "GroupNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkInfoData, GroupNumber), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupNumber_MetaData), NewProp_GroupNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
	nullptr,
	&NewStructOps,
	"ChunkInfoData",
	Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers),
	sizeof(FChunkInfoData),
	alignof(FChunkInfoData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkInfoData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkInfoData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkInfoData.InnerSingleton, Z_Construct_UScriptStruct_FChunkInfoData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChunkInfoData.InnerSingleton;
}
// End ScriptStruct FChunkInfoData

// Begin ScriptStruct FChunkPartData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkPartData;
class UScriptStruct* FChunkPartData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkPartData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkPartData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkPartData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkPartData"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkPartData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FChunkPartData>()
{
	return FChunkPartData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChunkPartData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkPartData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkPartData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkPartData, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkPartData, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkPartData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
	nullptr,
	&NewStructOps,
	"ChunkPartData",
	Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers),
	sizeof(FChunkPartData),
	alignof(FChunkPartData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkPartData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkPartData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkPartData.InnerSingleton, Z_Construct_UScriptStruct_FChunkPartData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChunkPartData.InnerSingleton;
}
// End ScriptStruct FChunkPartData

// Begin ScriptStruct FFileManifestData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FileManifestData;
class UScriptStruct* FFileManifestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileManifestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FileManifestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileManifestData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("FileManifestData"));
	}
	return Z_Registration_Info_UScriptStruct_FileManifestData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FFileManifestData>()
{
	return FFileManifestData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFileManifestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileChunkParts_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstallTags_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnixExecutable_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SymlinkTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompressed_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileHash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileChunkParts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FileChunkParts;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstallTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstallTags;
	static void NewProp_bIsUnixExecutable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnixExecutable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SymlinkTarget;
	static void NewProp_bIsReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
	static void NewProp_bIsCompressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileManifestData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileManifestData, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash = { "FileHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileManifestData, FileHash), Z_Construct_UScriptStruct_FSHAHashData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileHash_MetaData), NewProp_FileHash_MetaData) }; // 3011534199
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_Inner = { "FileChunkParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChunkPartData, METADATA_PARAMS(0, nullptr) }; // 2659591351
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts = { "FileChunkParts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileManifestData, FileChunkParts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileChunkParts_MetaData), NewProp_FileChunkParts_MetaData) }; // 2659591351
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_Inner = { "InstallTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags = { "InstallTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileManifestData, InstallTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstallTags_MetaData), NewProp_InstallTags_MetaData) };
void Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_SetBit(void* Obj)
{
	((FFileManifestData*)Obj)->bIsUnixExecutable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable = { "bIsUnixExecutable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFileManifestData), &Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnixExecutable_MetaData), NewProp_bIsUnixExecutable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget = { "SymlinkTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileManifestData, SymlinkTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SymlinkTarget_MetaData), NewProp_SymlinkTarget_MetaData) };
void Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
{
	((FFileManifestData*)Obj)->bIsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFileManifestData), &Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadOnly_MetaData), NewProp_bIsReadOnly_MetaData) };
void Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_SetBit(void* Obj)
{
	((FFileManifestData*)Obj)->bIsCompressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed = { "bIsCompressed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFileManifestData), &Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCompressed_MetaData), NewProp_bIsCompressed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileManifestData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
	nullptr,
	&NewStructOps,
	"FileManifestData",
	Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers),
	sizeof(FFileManifestData),
	alignof(FFileManifestData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFileManifestData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData()
{
	if (!Z_Registration_Info_UScriptStruct_FileManifestData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FileManifestData.InnerSingleton, Z_Construct_UScriptStruct_FFileManifestData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FileManifestData.InnerSingleton;
}
// End ScriptStruct FFileManifestData

// Begin Class UBuildPatchManifest
void UBuildPatchManifest::StaticRegisterNativesUBuildPatchManifest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildPatchManifest);
UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister()
{
	return UBuildPatchManifest::StaticClass();
}
struct Z_Construct_UClass_UBuildPatchManifest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ManifestUObject.h" },
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManifestFileVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFileData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchExe_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchCommand_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrereqIds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrereqName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrereqPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrereqArgs_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileManifestList_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkList_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomFields_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ManifestFileVersion;
	static void NewProp_bIsFileData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFileData;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LaunchExe;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LaunchCommand;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrereqIds_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_PrereqIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrereqName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrereqPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrereqArgs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileManifestList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FileManifestList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomFields_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomFields;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildPatchManifest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion = { "ManifestFileVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, ManifestFileVersion), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManifestFileVersion_MetaData), NewProp_ManifestFileVersion_MetaData) };
void Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_SetBit(void* Obj)
{
	((UBuildPatchManifest*)Obj)->bIsFileData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData = { "bIsFileData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuildPatchManifest), &Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFileData_MetaData), NewProp_bIsFileData_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, AppName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppName_MetaData), NewProp_AppName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, BuildVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildVersion_MetaData), NewProp_BuildVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe = { "LaunchExe", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, LaunchExe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchExe_MetaData), NewProp_LaunchExe_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand = { "LaunchCommand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, LaunchCommand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchCommand_MetaData), NewProp_LaunchCommand_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_ElementProp = { "PrereqIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds = { "PrereqIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, PrereqIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrereqIds_MetaData), NewProp_PrereqIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName = { "PrereqName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, PrereqName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrereqName_MetaData), NewProp_PrereqName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath = { "PrereqPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, PrereqPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrereqPath_MetaData), NewProp_PrereqPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs = { "PrereqArgs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, PrereqArgs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrereqArgs_MetaData), NewProp_PrereqArgs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_Inner = { "FileManifestList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFileManifestData, METADATA_PARAMS(0, nullptr) }; // 637191941
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList = { "FileManifestList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, FileManifestList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileManifestList_MetaData), NewProp_FileManifestList_MetaData) }; // 637191941
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_Inner = { "ChunkList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChunkInfoData, METADATA_PARAMS(0, nullptr) }; // 3834025739
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList = { "ChunkList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, ChunkList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkList_MetaData), NewProp_ChunkList_MetaData) }; // 3834025739
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_Inner = { "CustomFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomFieldData, METADATA_PARAMS(0, nullptr) }; // 1032589194
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields = { "CustomFields", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildPatchManifest, CustomFields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomFields_MetaData), NewProp_CustomFields_MetaData) }; // 1032589194
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBuildPatchManifest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildPatchManifest_Statics::ClassParams = {
	&UBuildPatchManifest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildPatchManifest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildPatchManifest()
{
	if (!Z_Registration_Info_UClass_UBuildPatchManifest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildPatchManifest.OuterSingleton, Z_Construct_UClass_UBuildPatchManifest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildPatchManifest.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UClass* StaticClass<UBuildPatchManifest>()
{
	return UBuildPatchManifest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildPatchManifest);
// End Class UBuildPatchManifest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCustomFieldData::StaticStruct, Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewStructOps, TEXT("CustomFieldData"), &Z_Registration_Info_UScriptStruct_CustomFieldData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomFieldData), 1032589194U) },
		{ FSHAHashData::StaticStruct, Z_Construct_UScriptStruct_FSHAHashData_Statics::NewStructOps, TEXT("SHAHashData"), &Z_Registration_Info_UScriptStruct_SHAHashData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSHAHashData), 3011534199U) },
		{ FChunkInfoData::StaticStruct, Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewStructOps, TEXT("ChunkInfoData"), &Z_Registration_Info_UScriptStruct_ChunkInfoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkInfoData), 3834025739U) },
		{ FChunkPartData::StaticStruct, Z_Construct_UScriptStruct_FChunkPartData_Statics::NewStructOps, TEXT("ChunkPartData"), &Z_Registration_Info_UScriptStruct_ChunkPartData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkPartData), 2659591351U) },
		{ FFileManifestData::StaticStruct, Z_Construct_UScriptStruct_FFileManifestData_Statics::NewStructOps, TEXT("FileManifestData"), &Z_Registration_Info_UScriptStruct_FileManifestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileManifestData), 637191941U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildPatchManifest, UBuildPatchManifest::StaticClass, TEXT("UBuildPatchManifest"), &Z_Registration_Info_UClass_UBuildPatchManifest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildPatchManifest), 3070050654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_504609446(TEXT("/Script/BuildPatchServices"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
