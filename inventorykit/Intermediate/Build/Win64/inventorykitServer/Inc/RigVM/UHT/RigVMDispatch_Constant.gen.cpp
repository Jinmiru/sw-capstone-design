// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/RigVMDispatch_Constant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_Constant() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_Constant();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMDispatch_Constant
static_assert(std::is_polymorphic<FRigVMDispatch_Constant>() == std::is_polymorphic<FRigVMDispatch_CoreBase>(), "USTRUCT FRigVMDispatch_Constant cannot be polymorphic unless super FRigVMDispatch_CoreBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_Constant;
class UScriptStruct* FRigVMDispatch_Constant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_Constant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_Constant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_Constant, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_Constant"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_Constant.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_Constant>()
{
	return FRigVMDispatch_Constant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDispatch_Constant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Core" },
		{ "DisplayName", "Constant" },
		{ "Keywords", "Value,Reroute" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_Constant.h" },
		{ "NodeColor", "1,1,1,1" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_Constant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_Constant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase,
	&NewStructOps,
	"RigVMDispatch_Constant",
	nullptr,
	0,
	sizeof(FRigVMDispatch_Constant),
	alignof(FRigVMDispatch_Constant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_Constant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_Constant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_Constant()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_Constant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_Constant.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_Constant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_Constant.InnerSingleton;
}
// End ScriptStruct FRigVMDispatch_Constant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Constant_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDispatch_Constant::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_Constant_Statics::NewStructOps, TEXT("RigVMDispatch_Constant"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_Constant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_Constant), 2447550712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Constant_h_1237325220(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Constant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Constant_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
