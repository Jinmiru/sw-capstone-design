// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMProfilingInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMProfilingInfo() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMProfilingInfo();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMInstructionVisitInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMInstructionVisitInfo;
class UScriptStruct* FRigVMInstructionVisitInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMInstructionVisitInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMInstructionVisitInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMInstructionVisitInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMInstructionVisitInfo.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMInstructionVisitInfo>()
{
	return FRigVMInstructionVisitInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMProfilingInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMInstructionVisitInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMInstructionVisitInfo",
	nullptr,
	0,
	sizeof(FRigVMInstructionVisitInfo),
	alignof(FRigVMInstructionVisitInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMInstructionVisitInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMInstructionVisitInfo.InnerSingleton, Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMInstructionVisitInfo.InnerSingleton;
}
// End ScriptStruct FRigVMInstructionVisitInfo

// Begin ScriptStruct FRigVMProfilingInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMProfilingInfo;
class UScriptStruct* FRigVMProfilingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMProfilingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMProfilingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMProfilingInfo, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMProfilingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMProfilingInfo.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMProfilingInfo>()
{
	return FRigVMProfilingInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMProfilingInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMProfilingInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMProfilingInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMProfilingInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMProfilingInfo",
	nullptr,
	0,
	sizeof(FRigVMProfilingInfo),
	alignof(FRigVMProfilingInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMProfilingInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMProfilingInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMProfilingInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMProfilingInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMProfilingInfo.InnerSingleton, Z_Construct_UScriptStruct_FRigVMProfilingInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMProfilingInfo.InnerSingleton;
}
// End ScriptStruct FRigVMProfilingInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMProfilingInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMInstructionVisitInfo::StaticStruct, Z_Construct_UScriptStruct_FRigVMInstructionVisitInfo_Statics::NewStructOps, TEXT("RigVMInstructionVisitInfo"), &Z_Registration_Info_UScriptStruct_RigVMInstructionVisitInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMInstructionVisitInfo), 3093871U) },
		{ FRigVMProfilingInfo::StaticStruct, Z_Construct_UScriptStruct_FRigVMProfilingInfo_Statics::NewStructOps, TEXT("RigVMProfilingInfo"), &Z_Registration_Info_UScriptStruct_RigVMProfilingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMProfilingInfo), 831656437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMProfilingInfo_h_1103767302(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMProfilingInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMProfilingInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
