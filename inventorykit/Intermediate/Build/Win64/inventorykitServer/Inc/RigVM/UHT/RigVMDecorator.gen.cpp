// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDecorator() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDecorator();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMDecorator
static_assert(std::is_polymorphic<FRigVMDecorator>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMDecorator cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDecorator;
class UScriptStruct* FRigVMDecorator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDecorator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDecorator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDecorator, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDecorator"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDecorator.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDecorator>()
{
	return FRigVMDecorator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for all RigVM decorators.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDecorator.h" },
		{ "ToolTip", "The base class for all RigVM decorators." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDecorator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDecorator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMDecorator",
	nullptr,
	0,
	sizeof(FRigVMDecorator),
	alignof(FRigVMDecorator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDecorator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDecorator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDecorator()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDecorator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDecorator.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDecorator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDecorator.InnerSingleton;
}
// End ScriptStruct FRigVMDecorator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDecorator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDecorator::StaticStruct, Z_Construct_UScriptStruct_FRigVMDecorator_Statics::NewStructOps, TEXT("RigVMDecorator"), &Z_Registration_Info_UScriptStruct_RigVMDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDecorator), 723703225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDecorator_h_2425682614(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDecorator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDecorator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
