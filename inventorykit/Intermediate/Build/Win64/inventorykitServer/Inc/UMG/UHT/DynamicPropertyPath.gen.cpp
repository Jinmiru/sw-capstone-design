// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicPropertyPath() {}

// Begin Cross Module References
PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FDynamicPropertyPath
static_assert(std::is_polymorphic<FDynamicPropertyPath>() == std::is_polymorphic<FCachedPropertyPath>(), "USTRUCT FDynamicPropertyPath cannot be polymorphic unless super FCachedPropertyPath is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicPropertyPath;
class UScriptStruct* FDynamicPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicPropertyPath, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("DynamicPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicPropertyPath.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FDynamicPropertyPath>()
{
	return FDynamicPropertyPath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicPropertyPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	Z_Construct_UScriptStruct_FCachedPropertyPath,
	&NewStructOps,
	"DynamicPropertyPath",
	nullptr,
	0,
	sizeof(FDynamicPropertyPath),
	alignof(FDynamicPropertyPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicPropertyPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DynamicPropertyPath.InnerSingleton;
}
// End ScriptStruct FDynamicPropertyPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDynamicPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::NewStructOps, TEXT("DynamicPropertyPath"), &Z_Registration_Info_UScriptStruct_DynamicPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicPropertyPath), 2909106557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h_1749994567(TEXT("/Script/UMG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
