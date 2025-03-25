// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/Chaos/PhysicsObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsObjectInterface() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FClosestPhysicsObjectResult();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin ScriptStruct FClosestPhysicsObjectResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult;
class UScriptStruct* FClosestPhysicsObjectResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClosestPhysicsObjectResult, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("ClosestPhysicsObjectResult"));
	}
	return Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FClosestPhysicsObjectResult>()
{
	return FClosestPhysicsObjectResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/PhysicsObjectInterface.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClosestPhysicsObjectResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"ClosestPhysicsObjectResult",
	nullptr,
	0,
	sizeof(FClosestPhysicsObjectResult),
	alignof(FClosestPhysicsObjectResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClosestPhysicsObjectResult()
{
	if (!Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.InnerSingleton, Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.InnerSingleton;
}
// End ScriptStruct FClosestPhysicsObjectResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_PhysicsObjectInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClosestPhysicsObjectResult::StaticStruct, Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::NewStructOps, TEXT("ClosestPhysicsObjectResult"), &Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClosestPhysicsObjectResult), 3551252038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_PhysicsObjectInterface_h_2645095494(TEXT("/Script/Chaos"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_PhysicsObjectInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_PhysicsObjectInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
