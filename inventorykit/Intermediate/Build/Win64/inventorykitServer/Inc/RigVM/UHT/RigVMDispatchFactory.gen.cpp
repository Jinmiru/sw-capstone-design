// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMDispatchFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatchFactory() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMDispatchFactory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatchFactory;
class UScriptStruct* FRigVMDispatchFactory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatchFactory, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatchFactory"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatchFactory>()
{
	return FRigVMDispatchFactory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A factory to generate a template and its dispatch functions\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDispatchFactory.h" },
		{ "ToolTip", "A factory to generate a template and its dispatch functions" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatchFactory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMDispatchFactory",
	nullptr,
	0,
	sizeof(FRigVMDispatchFactory),
	alignof(FRigVMDispatchFactory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.InnerSingleton;
}
// End ScriptStruct FRigVMDispatchFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDispatchFactory_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDispatchFactory::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::NewStructOps, TEXT("RigVMDispatchFactory"), &Z_Registration_Info_UScriptStruct_RigVMDispatchFactory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatchFactory), 1977971583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDispatchFactory_h_820967995(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDispatchFactory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDispatchFactory_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
