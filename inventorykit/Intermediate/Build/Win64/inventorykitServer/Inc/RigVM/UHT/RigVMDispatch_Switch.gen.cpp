// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/RigVMDispatch_Switch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_Switch() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMDispatch_SwitchInt32
static_assert(std::is_polymorphic<FRigVMDispatch_SwitchInt32>() == std::is_polymorphic<FRigVMDispatch_CoreBase>(), "USTRUCT FRigVMDispatch_SwitchInt32 cannot be polymorphic unless super FRigVMDispatch_CoreBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_SwitchInt32;
class UScriptStruct* FRigVMDispatch_SwitchInt32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_SwitchInt32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_SwitchInt32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_SwitchInt32"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_SwitchInt32.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_SwitchInt32>()
{
	return FRigVMDispatch_SwitchInt32::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/*\n * Run a branch based on an integer index\n */" },
		{ "DisplayName", "Switch" },
		{ "Keywords", "Case" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_Switch.h" },
		{ "NodeColor", "0,1,0,1" },
		{ "ToolTip", "* Run a branch based on an integer index" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_SwitchInt32>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase,
	&NewStructOps,
	"RigVMDispatch_SwitchInt32",
	nullptr,
	0,
	sizeof(FRigVMDispatch_SwitchInt32),
	alignof(FRigVMDispatch_SwitchInt32),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_SwitchInt32.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_SwitchInt32.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_SwitchInt32.InnerSingleton;
}
// End ScriptStruct FRigVMDispatch_SwitchInt32

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Switch_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDispatch_SwitchInt32::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32_Statics::NewStructOps, TEXT("RigVMDispatch_SwitchInt32"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_SwitchInt32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_SwitchInt32), 1319620917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Switch_h_741050403(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Switch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Switch_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
