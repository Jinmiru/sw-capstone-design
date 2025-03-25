// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Debug/RigVMFunction_DebugBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_DebugBase() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStructMutable();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_DebugBase
static_assert(std::is_polymorphic<FRigVMFunction_DebugBase>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_DebugBase cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase;
class UScriptStruct* FRigVMFunction_DebugBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugBase>()
{
	return FRigVMFunction_DebugBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugBase.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_DebugBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_DebugBase),
	alignof(FRigVMFunction_DebugBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_DebugBase

// Begin ScriptStruct FRigVMFunction_DebugBaseMutable
static_assert(std::is_polymorphic<FRigVMFunction_DebugBaseMutable>() == std::is_polymorphic<FRigVMStructMutable>(), "USTRUCT FRigVMFunction_DebugBaseMutable cannot be polymorphic unless super FRigVMStructMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable;
class UScriptStruct* FRigVMFunction_DebugBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugBaseMutable>()
{
	return FRigVMFunction_DebugBaseMutable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugBase.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugBaseMutable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStructMutable,
	&NewStructOps,
	"RigVMFunction_DebugBaseMutable",
	nullptr,
	0,
	sizeof(FRigVMFunction_DebugBaseMutable),
	alignof(FRigVMFunction_DebugBaseMutable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_DebugBaseMutable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_DebugBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::NewStructOps, TEXT("RigVMFunction_DebugBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugBase), 849100896U) },
		{ FRigVMFunction_DebugBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::NewStructOps, TEXT("RigVMFunction_DebugBaseMutable"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugBaseMutable), 2048418648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h_1822748187(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
