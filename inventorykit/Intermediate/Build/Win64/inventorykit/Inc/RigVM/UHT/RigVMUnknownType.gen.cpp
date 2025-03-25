// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMUnknownType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMUnknownType() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMUnknownType();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMUnknownType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMUnknownType;
class UScriptStruct* FRigVMUnknownType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMUnknownType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMUnknownType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMUnknownType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMUnknownType"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMUnknownType.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMUnknownType>()
{
	return FRigVMUnknownType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMUnknownType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The unknown type is used to identify untyped nodes\n */" },
		{ "DisplayName", "Wildcard" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUnknownType.h" },
		{ "ToolTip", "The unknown type is used to identify untyped nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUnknownType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMUnknownType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMUnknownType, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewProp_Hash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMUnknownType",
	Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::PropPointers),
	sizeof(FRigVMUnknownType),
	alignof(FRigVMUnknownType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMUnknownType()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMUnknownType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMUnknownType.InnerSingleton, Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMUnknownType.InnerSingleton;
}
// End ScriptStruct FRigVMUnknownType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUnknownType_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMUnknownType::StaticStruct, Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewStructOps, TEXT("RigVMUnknownType"), &Z_Registration_Info_UScriptStruct_RigVMUnknownType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMUnknownType), 2770367565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUnknownType_h_756874312(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUnknownType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMUnknownType_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
