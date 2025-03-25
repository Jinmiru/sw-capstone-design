// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/RigVMDispatch_Select.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_Select() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMDispatch_SelectInt32
static_assert(std::is_polymorphic<FRigVMDispatch_SelectInt32>() == std::is_polymorphic<FRigVMDispatch_CoreBase>(), "USTRUCT FRigVMDispatch_SelectInt32 cannot be polymorphic unless super FRigVMDispatch_CoreBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32;
class UScriptStruct* FRigVMDispatch_SelectInt32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_SelectInt32"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_SelectInt32>()
{
	return FRigVMDispatch_SelectInt32::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/*\n * Pick from a list of values based on an integer index\n */" },
		{ "DisplayName", "Select" },
		{ "Keywords", "Switch,Case" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_Select.h" },
		{ "NodeColor", "0,1,0,1" },
		{ "ToolTip", "* Pick from a list of values based on an integer index" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_SelectInt32>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase,
	&NewStructOps,
	"RigVMDispatch_SelectInt32",
	nullptr,
	0,
	sizeof(FRigVMDispatch_SelectInt32),
	alignof(FRigVMDispatch_SelectInt32),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.InnerSingleton;
}
// End ScriptStruct FRigVMDispatch_SelectInt32

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Select_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDispatch_SelectInt32::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::NewStructOps, TEXT("RigVMDispatch_SelectInt32"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_SelectInt32), 3470724591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Select_h_3715955352(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Select_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_Select_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
