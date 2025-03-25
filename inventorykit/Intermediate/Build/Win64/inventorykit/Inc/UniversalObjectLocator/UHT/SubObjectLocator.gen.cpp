// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UniversalObjectLocator/Public/SubObjectLocator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubObjectLocator() {}

// Begin Cross Module References
UNIVERSALOBJECTLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FSubObjectLocator();
UPackage* Z_Construct_UPackage__Script_UniversalObjectLocator();
// End Cross Module References

// Begin ScriptStruct FSubObjectLocator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubObjectLocator;
class UScriptStruct* FSubObjectLocator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubObjectLocator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubObjectLocator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubObjectLocator, (UObject*)Z_Construct_UPackage__Script_UniversalObjectLocator(), TEXT("SubObjectLocator"));
	}
	return Z_Registration_Info_UScriptStruct_SubObjectLocator.OuterSingleton;
}
template<> UNIVERSALOBJECTLOCATOR_API UScriptStruct* StaticStruct<FSubObjectLocator>()
{
	return FSubObjectLocator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubObjectLocator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubObjectLocator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathWithinContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/SubObjectLocator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathWithinContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubObjectLocator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubObjectLocator_Statics::NewProp_PathWithinContext = { "PathWithinContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubObjectLocator, PathWithinContext), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathWithinContext_MetaData), NewProp_PathWithinContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubObjectLocator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubObjectLocator_Statics::NewProp_PathWithinContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubObjectLocator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubObjectLocator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UniversalObjectLocator,
	nullptr,
	&NewStructOps,
	"SubObjectLocator",
	Z_Construct_UScriptStruct_FSubObjectLocator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubObjectLocator_Statics::PropPointers),
	sizeof(FSubObjectLocator),
	alignof(FSubObjectLocator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubObjectLocator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubObjectLocator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubObjectLocator()
{
	if (!Z_Registration_Info_UScriptStruct_SubObjectLocator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubObjectLocator.InnerSingleton, Z_Construct_UScriptStruct_FSubObjectLocator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubObjectLocator.InnerSingleton;
}
// End ScriptStruct FSubObjectLocator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_SubObjectLocator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubObjectLocator::StaticStruct, Z_Construct_UScriptStruct_FSubObjectLocator_Statics::NewStructOps, TEXT("SubObjectLocator"), &Z_Registration_Info_UScriptStruct_SubObjectLocator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubObjectLocator), 1536838927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_SubObjectLocator_h_352673892(TEXT("/Script/UniversalObjectLocator"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_SubObjectLocator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_SubObjectLocator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
