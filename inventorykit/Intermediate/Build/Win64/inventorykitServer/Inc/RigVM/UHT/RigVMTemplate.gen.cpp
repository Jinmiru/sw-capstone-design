// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMTemplateArgumentType();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMTemplateArgumentType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType;
class UScriptStruct* FRigVMTemplateArgumentType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMTemplateArgumentType"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMTemplateArgumentType>()
{
	return FRigVMTemplateArgumentType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CPPType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CPPTypeObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMTemplateArgumentType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMTemplateArgumentType, CPPType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPPType_MetaData), NewProp_CPPType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPTypeObject = { "CPPTypeObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMTemplateArgumentType, CPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPPTypeObject_MetaData), NewProp_CPPTypeObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPTypeObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMTemplateArgumentType",
	Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::PropPointers),
	sizeof(FRigVMTemplateArgumentType),
	alignof(FRigVMTemplateArgumentType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMTemplateArgumentType()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.InnerSingleton, Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.InnerSingleton;
}
// End ScriptStruct FRigVMTemplateArgumentType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMTemplateArgumentType::StaticStruct, Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewStructOps, TEXT("RigVMTemplateArgumentType"), &Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMTemplateArgumentType), 3613380124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTemplate_h_2141621580(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
