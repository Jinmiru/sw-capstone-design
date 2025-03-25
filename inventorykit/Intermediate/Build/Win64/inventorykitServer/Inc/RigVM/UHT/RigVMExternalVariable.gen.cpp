// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMExternalVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMExternalVariable() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExternalVariable();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExternalVariableDef();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMExternalVariableDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMExternalVariableDef;
class UScriptStruct* FRigVMExternalVariableDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExternalVariableDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMExternalVariableDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExternalVariableDef, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMExternalVariableDef"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMExternalVariableDef.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMExternalVariableDef>()
{
	return FRigVMExternalVariableDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMExternalVariableDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The external variable can be used to map external / unowned\n * memory into the VM and back out\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExternalVariable.h" },
		{ "ToolTip", "The external variable can be used to map external / unowned\nmemory into the VM and back out" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMExternalVariableDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMExternalVariableDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMExternalVariableDef",
	nullptr,
	0,
	sizeof(FRigVMExternalVariableDef),
	alignof(FRigVMExternalVariableDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExternalVariableDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMExternalVariableDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMExternalVariableDef()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExternalVariableDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMExternalVariableDef.InnerSingleton, Z_Construct_UScriptStruct_FRigVMExternalVariableDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMExternalVariableDef.InnerSingleton;
}
// End ScriptStruct FRigVMExternalVariableDef

// Begin ScriptStruct FRigVMExternalVariable
static_assert(std::is_polymorphic<FRigVMExternalVariable>() == std::is_polymorphic<FRigVMExternalVariableDef>(), "USTRUCT FRigVMExternalVariable cannot be polymorphic unless super FRigVMExternalVariableDef is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMExternalVariable;
class UScriptStruct* FRigVMExternalVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExternalVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMExternalVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExternalVariable, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMExternalVariable"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMExternalVariable.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMExternalVariable>()
{
	return FRigVMExternalVariable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExternalVariable.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMExternalVariable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMExternalVariableDef,
	&NewStructOps,
	"RigVMExternalVariable",
	nullptr,
	0,
	sizeof(FRigVMExternalVariable),
	alignof(FRigVMExternalVariable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMExternalVariable()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExternalVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMExternalVariable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMExternalVariable.InnerSingleton;
}
// End ScriptStruct FRigVMExternalVariable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExternalVariable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMExternalVariableDef::StaticStruct, Z_Construct_UScriptStruct_FRigVMExternalVariableDef_Statics::NewStructOps, TEXT("RigVMExternalVariableDef"), &Z_Registration_Info_UScriptStruct_RigVMExternalVariableDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMExternalVariableDef), 2941630793U) },
		{ FRigVMExternalVariable::StaticStruct, Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::NewStructOps, TEXT("RigVMExternalVariable"), &Z_Registration_Info_UScriptStruct_RigVMExternalVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMExternalVariable), 2881080269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExternalVariable_h_2173953519(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExternalVariable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMExternalVariable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
