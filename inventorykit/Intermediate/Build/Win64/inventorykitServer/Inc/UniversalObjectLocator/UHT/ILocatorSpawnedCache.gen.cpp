// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UniversalObjectLocator/Public/ILocatorSpawnedCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILocatorSpawnedCache() {}

// Begin Cross Module References
UNIVERSALOBJECTLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FLocatorSpawnedCacheResolveParameter();
UPackage* Z_Construct_UPackage__Script_UniversalObjectLocator();
// End Cross Module References

// Begin ScriptStruct FLocatorSpawnedCacheResolveParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocatorSpawnedCacheResolveParameter;
class UScriptStruct* FLocatorSpawnedCacheResolveParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocatorSpawnedCacheResolveParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocatorSpawnedCacheResolveParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocatorSpawnedCacheResolveParameter, (UObject*)Z_Construct_UPackage__Script_UniversalObjectLocator(), TEXT("LocatorSpawnedCacheResolveParameter"));
	}
	return Z_Registration_Info_UScriptStruct_LocatorSpawnedCacheResolveParameter.OuterSingleton;
}
template<> UNIVERSALOBJECTLOCATOR_API UScriptStruct* StaticStruct<FLocatorSpawnedCacheResolveParameter>()
{
	return FLocatorSpawnedCacheResolveParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocatorSpawnedCacheResolveParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// namespace UE::UniversalObjectLocator\n" },
		{ "ModuleRelativePath", "Public/ILocatorSpawnedCache.h" },
		{ "ToolTip", "namespace UE::UniversalObjectLocator" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocatorSpawnedCacheResolveParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocatorSpawnedCacheResolveParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UniversalObjectLocator,
	nullptr,
	&NewStructOps,
	"LocatorSpawnedCacheResolveParameter",
	nullptr,
	0,
	sizeof(FLocatorSpawnedCacheResolveParameter),
	alignof(FLocatorSpawnedCacheResolveParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocatorSpawnedCacheResolveParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocatorSpawnedCacheResolveParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocatorSpawnedCacheResolveParameter()
{
	if (!Z_Registration_Info_UScriptStruct_LocatorSpawnedCacheResolveParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocatorSpawnedCacheResolveParameter.InnerSingleton, Z_Construct_UScriptStruct_FLocatorSpawnedCacheResolveParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocatorSpawnedCacheResolveParameter.InnerSingleton;
}
// End ScriptStruct FLocatorSpawnedCacheResolveParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_ILocatorSpawnedCache_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocatorSpawnedCacheResolveParameter::StaticStruct, Z_Construct_UScriptStruct_FLocatorSpawnedCacheResolveParameter_Statics::NewStructOps, TEXT("LocatorSpawnedCacheResolveParameter"), &Z_Registration_Info_UScriptStruct_LocatorSpawnedCacheResolveParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocatorSpawnedCacheResolveParameter), 2263878925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_ILocatorSpawnedCache_h_3131607400(TEXT("/Script/UniversalObjectLocator"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_ILocatorSpawnedCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_ILocatorSpawnedCache_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
