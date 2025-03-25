// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowConnection() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowConnection();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowConnection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowConnection;
class UScriptStruct* FDataflowConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConnection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowConnection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowConnection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowConnection>()
{
	return FDataflowConnection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//\n// Input Output Base\n//\n" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowConnection.h" },
		{ "ToolTip", "Input Output Base" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowConnection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowConnection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	nullptr,
	&NewStructOps,
	"DataflowConnection",
	nullptr,
	0,
	sizeof(FDataflowConnection),
	alignof(FDataflowConnection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConnection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowConnection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowConnection()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowConnection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowConnection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowConnection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowConnection.InnerSingleton;
}
// End ScriptStruct FDataflowConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowConnection::StaticStruct, Z_Construct_UScriptStruct_FDataflowConnection_Statics::NewStructOps, TEXT("DataflowConnection"), &Z_Registration_Info_UScriptStruct_DataflowConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowConnection), 4124935467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h_1834014515(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
