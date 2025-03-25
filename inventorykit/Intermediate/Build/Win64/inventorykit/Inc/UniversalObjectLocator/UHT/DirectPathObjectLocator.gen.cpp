// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UniversalObjectLocator/Public/DirectPathObjectLocator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectPathObjectLocator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
UNIVERSALOBJECTLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FDirectPathObjectLocator();
UPackage* Z_Construct_UPackage__Script_UniversalObjectLocator();
// End Cross Module References

// Begin ScriptStruct FDirectPathObjectLocator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectPathObjectLocator;
class UScriptStruct* FDirectPathObjectLocator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectPathObjectLocator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectPathObjectLocator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectPathObjectLocator, (UObject*)Z_Construct_UPackage__Script_UniversalObjectLocator(), TEXT("DirectPathObjectLocator"));
	}
	return Z_Registration_Info_UScriptStruct_DirectPathObjectLocator.OuterSingleton;
}
template<> UNIVERSALOBJECTLOCATOR_API UScriptStruct* StaticStruct<FDirectPathObjectLocator>()
{
	return FDirectPathObjectLocator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Object locator type that simply references its object by a direct path\n */" },
		{ "ModuleRelativePath", "Public/DirectPathObjectLocator.h" },
		{ "ToolTip", "Object locator type that simply references its object by a direct path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectPathObjectLocator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectPathObjectLocator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDirectPathObjectLocator, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UniversalObjectLocator,
	nullptr,
	&NewStructOps,
	"DirectPathObjectLocator",
	Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::PropPointers),
	sizeof(FDirectPathObjectLocator),
	alignof(FDirectPathObjectLocator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDirectPathObjectLocator()
{
	if (!Z_Registration_Info_UScriptStruct_DirectPathObjectLocator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectPathObjectLocator.InnerSingleton, Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DirectPathObjectLocator.InnerSingleton;
}
// End ScriptStruct FDirectPathObjectLocator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_DirectPathObjectLocator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDirectPathObjectLocator::StaticStruct, Z_Construct_UScriptStruct_FDirectPathObjectLocator_Statics::NewStructOps, TEXT("DirectPathObjectLocator"), &Z_Registration_Info_UScriptStruct_DirectPathObjectLocator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectPathObjectLocator), 215539717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_DirectPathObjectLocator_h_143096523(TEXT("/Script/UniversalObjectLocator"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_DirectPathObjectLocator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_DirectPathObjectLocator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
