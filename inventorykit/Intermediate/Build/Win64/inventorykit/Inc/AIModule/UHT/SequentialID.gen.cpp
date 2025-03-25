// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Public/SequentialID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequentialID() {}

// Begin Cross Module References
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSequentialIDBase();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FSequentialIDBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequentialIDBase;
class UScriptStruct* FSequentialIDBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequentialIDBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequentialIDBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequentialIDBase, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("SequentialIDBase"));
	}
	return Z_Registration_Info_UScriptStruct_SequentialIDBase.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FSequentialIDBase>()
{
	return FSequentialIDBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSequentialIDBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequentialID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequentialID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequentialIDBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequentialIDBase, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequentialIDBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequentialIDBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequentialIDBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"SequentialIDBase",
	Z_Construct_UScriptStruct_FSequentialIDBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequentialIDBase_Statics::PropPointers),
	sizeof(FSequentialIDBase),
	alignof(FSequentialIDBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequentialIDBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSequentialIDBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSequentialIDBase()
{
	if (!Z_Registration_Info_UScriptStruct_SequentialIDBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequentialIDBase.InnerSingleton, Z_Construct_UScriptStruct_FSequentialIDBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SequentialIDBase.InnerSingleton;
}
// End ScriptStruct FSequentialIDBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSequentialIDBase::StaticStruct, Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewStructOps, TEXT("SequentialIDBase"), &Z_Registration_Info_UScriptStruct_SequentialIDBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequentialIDBase), 1531186557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h_1045017689(TEXT("/Script/AIModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
