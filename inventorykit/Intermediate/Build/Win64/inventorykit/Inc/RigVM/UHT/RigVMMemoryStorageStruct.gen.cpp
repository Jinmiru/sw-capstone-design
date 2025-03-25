// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMMemoryStorageStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMMemoryStorageStruct() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMMemoryStorageStruct
static_assert(std::is_polymorphic<FRigVMMemoryStorageStruct>() == std::is_polymorphic<FInstancedPropertyBag>(), "USTRUCT FRigVMMemoryStorageStruct cannot be polymorphic unless super FInstancedPropertyBag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMMemoryStorageStruct;
class UScriptStruct* FRigVMMemoryStorageStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMMemoryStorageStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMMemoryStorageStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMMemoryStorageStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMMemoryStorageStruct.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMMemoryStorageStruct>()
{
	return FRigVMMemoryStorageStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorageStruct.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMMemoryStorageStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FInstancedPropertyBag,
	&NewStructOps,
	"RigVMMemoryStorageStruct",
	nullptr,
	0,
	sizeof(FRigVMMemoryStorageStruct),
	alignof(FRigVMMemoryStorageStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMMemoryStorageStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMMemoryStorageStruct.InnerSingleton, Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMMemoryStorageStruct.InnerSingleton;
}
// End ScriptStruct FRigVMMemoryStorageStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorageStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMMemoryStorageStruct::StaticStruct, Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct_Statics::NewStructOps, TEXT("RigVMMemoryStorageStruct"), &Z_Registration_Info_UScriptStruct_RigVMMemoryStorageStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMMemoryStorageStruct), 713948944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorageStruct_h_3412397668(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorageStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorageStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
