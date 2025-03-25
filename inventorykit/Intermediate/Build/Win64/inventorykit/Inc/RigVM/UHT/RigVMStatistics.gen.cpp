// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMStatistics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMStatistics() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCodeStatistics();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMMemoryStatistics();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStatistics();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMMemoryStatistics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMMemoryStatistics;
class UScriptStruct* FRigVMMemoryStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMMemoryStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMMemoryStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMMemoryStatistics, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMMemoryStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMMemoryStatistics.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMMemoryStatistics>()
{
	return FRigVMMemoryStatistics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisterCount_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataBytes_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalBytes_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegisterCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMMemoryStatistics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::NewProp_RegisterCount = { "RegisterCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMMemoryStatistics, RegisterCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisterCount_MetaData), NewProp_RegisterCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::NewProp_DataBytes = { "DataBytes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMMemoryStatistics, DataBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataBytes_MetaData), NewProp_DataBytes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMMemoryStatistics, TotalBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalBytes_MetaData), NewProp_TotalBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::NewProp_RegisterCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::NewProp_DataBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::NewProp_TotalBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMMemoryStatistics",
	Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::PropPointers),
	sizeof(FRigVMMemoryStatistics),
	alignof(FRigVMMemoryStatistics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMMemoryStatistics()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMMemoryStatistics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMMemoryStatistics.InnerSingleton, Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMMemoryStatistics.InnerSingleton;
}
// End ScriptStruct FRigVMMemoryStatistics

// Begin ScriptStruct FRigVMByteCodeStatistics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMByteCodeStatistics;
class UScriptStruct* FRigVMByteCodeStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMByteCodeStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMByteCodeStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMByteCodeStatistics, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMByteCodeStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMByteCodeStatistics.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMByteCodeStatistics>()
{
	return FRigVMByteCodeStatistics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstructionCount_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataBytes_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstructionCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMByteCodeStatistics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::NewProp_InstructionCount = { "InstructionCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMByteCodeStatistics, InstructionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstructionCount_MetaData), NewProp_InstructionCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::NewProp_DataBytes = { "DataBytes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMByteCodeStatistics, DataBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataBytes_MetaData), NewProp_DataBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::NewProp_InstructionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::NewProp_DataBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMByteCodeStatistics",
	Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::PropPointers),
	sizeof(FRigVMByteCodeStatistics),
	alignof(FRigVMByteCodeStatistics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCodeStatistics()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMByteCodeStatistics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMByteCodeStatistics.InnerSingleton, Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMByteCodeStatistics.InnerSingleton;
}
// End ScriptStruct FRigVMByteCodeStatistics

// Begin ScriptStruct FRigVMStatistics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMStatistics;
class UScriptStruct* FRigVMStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStatistics, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMStatistics.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMStatistics>()
{
	return FRigVMStatistics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMStatistics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BytesForCDO_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BytesPerInstance_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiteralMemory_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkMemory_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMemory_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BytesForCaching_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteCode_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStatistics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesForCDO;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesPerInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LiteralMemory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkMemory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugMemory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesForCaching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ByteCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMStatistics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_BytesForCDO = { "BytesForCDO", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMStatistics, BytesForCDO), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BytesForCDO_MetaData), NewProp_BytesForCDO_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_BytesPerInstance = { "BytesPerInstance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMStatistics, BytesPerInstance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BytesPerInstance_MetaData), NewProp_BytesPerInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_LiteralMemory = { "LiteralMemory", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMStatistics, LiteralMemory), Z_Construct_UScriptStruct_FRigVMMemoryStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiteralMemory_MetaData), NewProp_LiteralMemory_MetaData) }; // 2675316523
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_WorkMemory = { "WorkMemory", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMStatistics, WorkMemory), Z_Construct_UScriptStruct_FRigVMMemoryStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkMemory_MetaData), NewProp_WorkMemory_MetaData) }; // 2675316523
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_DebugMemory = { "DebugMemory", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMStatistics, DebugMemory), Z_Construct_UScriptStruct_FRigVMMemoryStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMemory_MetaData), NewProp_DebugMemory_MetaData) }; // 2675316523
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_BytesForCaching = { "BytesForCaching", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMStatistics, BytesForCaching), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BytesForCaching_MetaData), NewProp_BytesForCaching_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_ByteCode = { "ByteCode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMStatistics, ByteCode), Z_Construct_UScriptStruct_FRigVMByteCodeStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteCode_MetaData), NewProp_ByteCode_MetaData) }; // 634123559
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMStatistics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_BytesForCDO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_BytesPerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_LiteralMemory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_WorkMemory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_DebugMemory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_BytesForCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewProp_ByteCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStatistics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMStatistics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMStatistics",
	Z_Construct_UScriptStruct_FRigVMStatistics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStatistics_Statics::PropPointers),
	sizeof(FRigVMStatistics),
	alignof(FRigVMStatistics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMStatistics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMStatistics()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMStatistics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMStatistics.InnerSingleton, Z_Construct_UScriptStruct_FRigVMStatistics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMStatistics.InnerSingleton;
}
// End ScriptStruct FRigVMStatistics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStatistics_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMMemoryStatistics::StaticStruct, Z_Construct_UScriptStruct_FRigVMMemoryStatistics_Statics::NewStructOps, TEXT("RigVMMemoryStatistics"), &Z_Registration_Info_UScriptStruct_RigVMMemoryStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMMemoryStatistics), 2675316523U) },
		{ FRigVMByteCodeStatistics::StaticStruct, Z_Construct_UScriptStruct_FRigVMByteCodeStatistics_Statics::NewStructOps, TEXT("RigVMByteCodeStatistics"), &Z_Registration_Info_UScriptStruct_RigVMByteCodeStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMByteCodeStatistics), 634123559U) },
		{ FRigVMStatistics::StaticStruct, Z_Construct_UScriptStruct_FRigVMStatistics_Statics::NewStructOps, TEXT("RigVMStatistics"), &Z_Registration_Info_UScriptStruct_RigVMStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMStatistics), 1804553051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStatistics_h_1832336604(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStatistics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStatistics_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
