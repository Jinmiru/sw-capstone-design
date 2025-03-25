// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowInputOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowInputOutput() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowConnection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowInput();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowOutput();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowInput
static_assert(std::is_polymorphic<FDataflowInput>() == std::is_polymorphic<FDataflowConnection>(), "USTRUCT FDataflowInput cannot be polymorphic unless super FDataflowConnection is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowInput;
class UScriptStruct* FDataflowInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowInput, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowInput"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowInput.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowInput>()
{
	return FDataflowInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowInputOutput.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowConnection,
	&NewStructOps,
	"DataflowInput",
	nullptr,
	0,
	sizeof(FDataflowInput),
	alignof(FDataflowInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowInput()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowInput.InnerSingleton, Z_Construct_UScriptStruct_FDataflowInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowInput.InnerSingleton;
}
// End ScriptStruct FDataflowInput

// Begin ScriptStruct FDataflowOutput
static_assert(std::is_polymorphic<FDataflowOutput>() == std::is_polymorphic<FDataflowConnection>(), "USTRUCT FDataflowOutput cannot be polymorphic unless super FDataflowConnection is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowOutput;
class UScriptStruct* FDataflowOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowOutput, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowOutput"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowOutput.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowOutput>()
{
	return FDataflowOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowInputOutput.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowConnection,
	&NewStructOps,
	"DataflowOutput",
	nullptr,
	0,
	sizeof(FDataflowOutput),
	alignof(FDataflowOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowOutput()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowOutput.InnerSingleton, Z_Construct_UScriptStruct_FDataflowOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowOutput.InnerSingleton;
}
// End ScriptStruct FDataflowOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowInput::StaticStruct, Z_Construct_UScriptStruct_FDataflowInput_Statics::NewStructOps, TEXT("DataflowInput"), &Z_Registration_Info_UScriptStruct_DataflowInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowInput), 726871886U) },
		{ FDataflowOutput::StaticStruct, Z_Construct_UScriptStruct_FDataflowOutput_Statics::NewStructOps, TEXT("DataflowOutput"), &Z_Registration_Info_UScriptStruct_DataflowOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowOutput), 3055930960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h_3434679727(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
