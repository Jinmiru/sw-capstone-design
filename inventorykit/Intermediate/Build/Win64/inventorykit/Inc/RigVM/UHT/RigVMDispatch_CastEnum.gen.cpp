// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/RigVMDispatch_CastEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_CastEnum() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CastIntToEnum();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMDispatch_CastEnumToInt
static_assert(std::is_polymorphic<FRigVMDispatch_CastEnumToInt>() == std::is_polymorphic<FRigVMDispatchFactory>(), "USTRUCT FRigVMDispatch_CastEnumToInt cannot be polymorphic unless super FRigVMDispatchFactory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_CastEnumToInt;
class UScriptStruct* FRigVMDispatch_CastEnumToInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CastEnumToInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_CastEnumToInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_CastEnumToInt"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_CastEnumToInt.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_CastEnumToInt>()
{
	return FRigVMDispatch_CastEnumToInt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Enum" },
		{ "DisplayName", "Cast" },
		{ "Keywords", "As" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_CastEnum.h" },
		{ "NodeColor", "1,1,1,1" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_CastEnumToInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMDispatchFactory,
	&NewStructOps,
	"RigVMDispatch_CastEnumToInt",
	nullptr,
	0,
	sizeof(FRigVMDispatch_CastEnumToInt),
	alignof(FRigVMDispatch_CastEnumToInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CastEnumToInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_CastEnumToInt.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_CastEnumToInt.InnerSingleton;
}
// End ScriptStruct FRigVMDispatch_CastEnumToInt

// Begin ScriptStruct FRigVMDispatch_CastIntToEnum
static_assert(std::is_polymorphic<FRigVMDispatch_CastIntToEnum>() == std::is_polymorphic<FRigVMDispatchFactory>(), "USTRUCT FRigVMDispatch_CastIntToEnum cannot be polymorphic unless super FRigVMDispatchFactory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_CastIntToEnum;
class UScriptStruct* FRigVMDispatch_CastIntToEnum::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CastIntToEnum.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_CastIntToEnum.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CastIntToEnum, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_CastIntToEnum"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_CastIntToEnum.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_CastIntToEnum>()
{
	return FRigVMDispatch_CastIntToEnum::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDispatch_CastIntToEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Enum" },
		{ "DisplayName", "Cast" },
		{ "Keywords", "As" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_CastEnum.h" },
		{ "NodeColor", "1,1,1,1" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_CastIntToEnum>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_CastIntToEnum_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMDispatchFactory,
	&NewStructOps,
	"RigVMDispatch_CastIntToEnum",
	nullptr,
	0,
	sizeof(FRigVMDispatch_CastIntToEnum),
	alignof(FRigVMDispatch_CastIntToEnum),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_CastIntToEnum_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_CastIntToEnum_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CastIntToEnum()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CastIntToEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_CastIntToEnum.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_CastIntToEnum_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_CastIntToEnum.InnerSingleton;
}
// End ScriptStruct FRigVMDispatch_CastIntToEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_CastEnum_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDispatch_CastEnumToInt::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt_Statics::NewStructOps, TEXT("RigVMDispatch_CastEnumToInt"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_CastEnumToInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_CastEnumToInt), 3629059504U) },
		{ FRigVMDispatch_CastIntToEnum::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_CastIntToEnum_Statics::NewStructOps, TEXT("RigVMDispatch_CastIntToEnum"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_CastIntToEnum, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_CastIntToEnum), 4098861910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_CastEnum_h_2930038454(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_CastEnum_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_CastEnum_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
