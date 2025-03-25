// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMStruct.h"
#include "RigVM/Public/RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMStruct() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStructMutable();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMStruct;
class UScriptStruct* FRigVMStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStruct, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMStruct.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMStruct>()
{
	return FRigVMStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for all RigVM enabled structs.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStruct.h" },
		{ "ToolTip", "The base class for all RigVM enabled structs." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMStruct",
	nullptr,
	0,
	sizeof(FRigVMStruct),
	alignof(FRigVMStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMStruct.InnerSingleton, Z_Construct_UScriptStruct_FRigVMStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMStruct.InnerSingleton;
}
// End ScriptStruct FRigVMStruct

// Begin ScriptStruct FRigVMStructMutable
static_assert(std::is_polymorphic<FRigVMStructMutable>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMStructMutable cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMStructMutable;
class UScriptStruct* FRigVMStructMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMStructMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMStructMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStructMutable, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMStructMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMStructMutable.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMStructMutable>()
{
	return FRigVMStructMutable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMStructMutable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base mutable class for all RigVM enabled structs.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStruct.h" },
		{ "ToolTip", "The base mutable class for all RigVM enabled structs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * This property is used to chain multiple mutable nodes together\n\x09 */" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStruct.h" },
		{ "Output", "" },
		{ "ToolTip", "* This property is used to chain multiple mutable nodes together" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMStructMutable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMStructMutable, ExecuteContext), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2576597148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewProp_ExecuteContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMStructMutable",
	Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::PropPointers),
	sizeof(FRigVMStructMutable),
	alignof(FRigVMStructMutable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMStructMutable()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMStructMutable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMStructMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMStructMutable.InnerSingleton;
}
// End ScriptStruct FRigVMStructMutable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMStruct::StaticStruct, Z_Construct_UScriptStruct_FRigVMStruct_Statics::NewStructOps, TEXT("RigVMStruct"), &Z_Registration_Info_UScriptStruct_RigVMStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMStruct), 422948451U) },
		{ FRigVMStructMutable::StaticStruct, Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewStructOps, TEXT("RigVMStructMutable"), &Z_Registration_Info_UScriptStruct_RigVMStructMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMStructMutable), 2579967980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h_353212022(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
