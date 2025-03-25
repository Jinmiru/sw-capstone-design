// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMFunction_MathBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathBase() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStructMutable();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_MathBase
static_assert(std::is_polymorphic<FRigVMFunction_MathBase>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_MathBase cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBase;
class UScriptStruct* FRigVMFunction_MathBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBase>()
{
	return FRigVMFunction_MathBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBase.h" },
		{ "NodeColor", "0.05 0.25 0.05" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_MathBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathBase),
	alignof(FRigVMFunction_MathBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathBase

// Begin ScriptStruct FRigVMFunction_MathMutableBase
static_assert(std::is_polymorphic<FRigVMFunction_MathMutableBase>() == std::is_polymorphic<FRigVMStructMutable>(), "USTRUCT FRigVMFunction_MathMutableBase cannot be polymorphic unless super FRigVMStructMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathMutableBase;
class UScriptStruct* FRigVMFunction_MathMutableBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMutableBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathMutableBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathMutableBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMutableBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathMutableBase>()
{
	return FRigVMFunction_MathMutableBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBase.h" },
		{ "NodeColor", "0.05 0.25 0.05" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathMutableBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStructMutable,
	&NewStructOps,
	"RigVMFunction_MathMutableBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathMutableBase),
	alignof(FRigVMFunction_MathMutableBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathMutableBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathMutableBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathMutableBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathMutableBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_MathBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBase_Statics::NewStructOps, TEXT("RigVMFunction_MathBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBase), 1357466119U) },
		{ FRigVMFunction_MathMutableBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase_Statics::NewStructOps, TEXT("RigVMFunction_MathMutableBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathMutableBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathMutableBase), 221528972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBase_h_4283117102(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
