// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/StaticMeshComponentLODInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshComponentLODInfo() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FStaticMeshComponentLODInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo;
class UScriptStruct* FStaticMeshComponentLODInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshComponentLODInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshComponentLODInfo>()
{
	return FStaticMeshComponentLODInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StaticMeshComponentLODInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshComponentLODInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StaticMeshComponentLODInfo",
	nullptr,
	0,
	sizeof(FStaticMeshComponentLODInfo),
	alignof(FStaticMeshComponentLODInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.InnerSingleton;
}
// End ScriptStruct FStaticMeshComponentLODInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticMeshComponentLODInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStaticMeshComponentLODInfo::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewStructOps, TEXT("StaticMeshComponentLODInfo"), &Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshComponentLODInfo), 4131006263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticMeshComponentLODInfo_h_312153901(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticMeshComponentLODInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticMeshComponentLODInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
