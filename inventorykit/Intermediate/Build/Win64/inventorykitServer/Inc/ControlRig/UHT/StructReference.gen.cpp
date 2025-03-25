// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/StructReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructReference() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FStructReference();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FStructReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructReference;
class UScriptStruct* FStructReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructReference, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("StructReference"));
	}
	return Z_Registration_Info_UScriptStruct_StructReference.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FStructReference>()
{
	return FStructReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStructReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Base class used to reference a struct in the graph. Don't use this directly, only derived classes.\n * Use the IMPLEMENT_STRUCT_REFERENCE macro to create new struct reference types easily.\n */" },
		{ "ModuleRelativePath", "Public/StructReference.h" },
		{ "ToolTip", "Base class used to reference a struct in the graph. Don't use this directly, only derived classes.\nUse the IMPLEMENT_STRUCT_REFERENCE macro to create new struct reference types easily." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"StructReference",
	nullptr,
	0,
	sizeof(FStructReference),
	alignof(FStructReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructReference()
{
	if (!Z_Registration_Info_UScriptStruct_StructReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructReference.InnerSingleton, Z_Construct_UScriptStruct_FStructReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StructReference.InnerSingleton;
}
// End ScriptStruct FStructReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStructReference::StaticStruct, Z_Construct_UScriptStruct_FStructReference_Statics::NewStructOps, TEXT("StructReference"), &Z_Registration_Info_UScriptStruct_StructReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructReference), 908783700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h_2729109623(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
