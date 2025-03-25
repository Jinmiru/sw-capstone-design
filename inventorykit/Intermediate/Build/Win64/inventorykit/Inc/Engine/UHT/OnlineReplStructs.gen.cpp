// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineReplStructs() {}

// Begin Cross Module References
COREONLINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FUniqueNetIdRepl
static_assert(std::is_polymorphic<FUniqueNetIdRepl>() == std::is_polymorphic<FUniqueNetIdWrapper>(), "USTRUCT FUniqueNetIdRepl cannot be polymorphic unless super FUniqueNetIdWrapper is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniqueNetIdRepl;
class UScriptStruct* FUniqueNetIdRepl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdRepl, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("UniqueNetIdRepl"));
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUniqueNetIdRepl>()
{
	return FUniqueNetIdRepl::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper for opaque type FUniqueNetId\n *\n * Makes sure that the opaque aspects of FUniqueNetId are properly handled/serialized \n * over network RPC and actor replication\n */" },
		{ "DisplayName", "Unique Net Id" },
		{ "ModuleRelativePath", "Classes/GameFramework/OnlineReplStructs.h" },
		{ "ToolTip", "Wrapper for opaque type FUniqueNetId\n\nMakes sure that the opaque aspects of FUniqueNetId are properly handled/serialized\nover network RPC and actor replication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationBytes_MetaData[] = {
		{ "Comment", "/** Network serialized data cache */" },
		{ "ModuleRelativePath", "Classes/GameFramework/OnlineReplStructs.h" },
		{ "ToolTip", "Network serialized data cache" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicationBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniqueNetIdRepl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_Inner = { "ReplicationBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes = { "ReplicationBytes", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniqueNetIdRepl, ReplicationBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationBytes_MetaData), NewProp_ReplicationBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FUniqueNetIdWrapper,
	&NewStructOps,
	"UniqueNetIdRepl",
	Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers),
	sizeof(FUniqueNetIdRepl),
	alignof(FUniqueNetIdRepl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.InnerSingleton, Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.InnerSingleton;
}
// End ScriptStruct FUniqueNetIdRepl

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUniqueNetIdRepl::StaticStruct, Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewStructOps, TEXT("UniqueNetIdRepl"), &Z_Registration_Info_UScriptStruct_UniqueNetIdRepl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniqueNetIdRepl), 3410776867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h_275563131(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
