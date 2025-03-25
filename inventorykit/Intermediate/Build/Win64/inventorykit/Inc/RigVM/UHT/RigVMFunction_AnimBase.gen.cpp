// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Animation/RigVMFunction_AnimBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_AnimBase() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_AnimBase
static_assert(std::is_polymorphic<FRigVMFunction_AnimBase>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_AnimBase cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AnimBase;
class UScriptStruct* FRigVMFunction_AnimBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AnimBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AnimBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AnimBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AnimBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AnimBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AnimBase>()
{
	return FRigVMFunction_AnimBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_AnimBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimBase.h" },
		{ "NodeColor", "0.05 0.05 0.25" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AnimBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AnimBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_AnimBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_AnimBase),
	alignof(FRigVMFunction_AnimBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AnimBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_AnimBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AnimBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AnimBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AnimBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AnimBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_AnimBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_AnimBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AnimBase_Statics::NewStructOps, TEXT("RigVMFunction_AnimBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AnimBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AnimBase), 2519351510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimBase_h_2980666164(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
