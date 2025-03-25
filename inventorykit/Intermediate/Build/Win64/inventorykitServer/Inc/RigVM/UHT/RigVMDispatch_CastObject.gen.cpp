// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/RigVMDispatch_CastObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_CastObject() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CastObject();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMDispatch_CastObject
static_assert(std::is_polymorphic<FRigVMDispatch_CastObject>() == std::is_polymorphic<FRigVMDispatchFactory>(), "USTRUCT FRigVMDispatch_CastObject cannot be polymorphic unless super FRigVMDispatchFactory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_CastObject;
class UScriptStruct* FRigVMDispatch_CastObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CastObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_CastObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CastObject, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_CastObject"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_CastObject.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_CastObject>()
{
	return FRigVMDispatch_CastObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDispatch_CastObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Object" },
		{ "DisplayName", "Cast" },
		{ "Keywords", "As" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_CastObject.h" },
		{ "NodeColor", "1,1,1,1" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_CastObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_CastObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMDispatchFactory,
	&NewStructOps,
	"RigVMDispatch_CastObject",
	nullptr,
	0,
	sizeof(FRigVMDispatch_CastObject),
	alignof(FRigVMDispatch_CastObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_CastObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_CastObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CastObject()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CastObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_CastObject.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_CastObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_CastObject.InnerSingleton;
}
// End ScriptStruct FRigVMDispatch_CastObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_CastObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDispatch_CastObject::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_CastObject_Statics::NewStructOps, TEXT("RigVMDispatch_CastObject"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_CastObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_CastObject), 1977317021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_CastObject_h_3353446642(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_CastObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_CastObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
