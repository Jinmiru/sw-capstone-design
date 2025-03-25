// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ExternalSpatialAccelerationPayload.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalSpatialAccelerationPayload() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FExternalSpatialAccelerationPayload
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalSpatialAccelerationPayload;
class UScriptStruct* FExternalSpatialAccelerationPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalSpatialAccelerationPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalSpatialAccelerationPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExternalSpatialAccelerationPayload"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalSpatialAccelerationPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExternalSpatialAccelerationPayload>()
{
	return FExternalSpatialAccelerationPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is a Chaos spatial acceleration payload that can be used for spatial acceleration structures that are meant to only be used\n * in external contexts. This provides safety as we aren't holding particle handles directly but rather going through the primitive component's\n * physics object interface to grab them when needed.\n */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ExternalSpatialAccelerationPayload.h" },
		{ "ToolTip", "This is a Chaos spatial acceleration payload that can be used for spatial acceleration structures that are meant to only be used\nin external contexts. This provides safety as we aren't holding particle handles directly but rather going through the primitive component's\nphysics object interface to grab them when needed." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalSpatialAccelerationPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ExternalSpatialAccelerationPayload",
	nullptr,
	0,
	sizeof(FExternalSpatialAccelerationPayload),
	alignof(FExternalSpatialAccelerationPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalSpatialAccelerationPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalSpatialAccelerationPayload.InnerSingleton, Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExternalSpatialAccelerationPayload.InnerSingleton;
}
// End ScriptStruct FExternalSpatialAccelerationPayload

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ExternalSpatialAccelerationPayload_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExternalSpatialAccelerationPayload::StaticStruct, Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload_Statics::NewStructOps, TEXT("ExternalSpatialAccelerationPayload"), &Z_Registration_Info_UScriptStruct_ExternalSpatialAccelerationPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalSpatialAccelerationPayload), 2094437494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ExternalSpatialAccelerationPayload_h_3612053828(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ExternalSpatialAccelerationPayload_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ExternalSpatialAccelerationPayload_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
