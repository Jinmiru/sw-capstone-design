// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemManager() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FParticleSystemWorldManagerTickFunction
static_assert(std::is_polymorphic<FParticleSystemWorldManagerTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FParticleSystemWorldManagerTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction;
class UScriptStruct* FParticleSystemWorldManagerTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemWorldManagerTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSystemWorldManagerTickFunction>()
{
	return FParticleSystemWorldManagerTickFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemManager.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemWorldManagerTickFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTickFunction,
	&NewStructOps,
	"ParticleSystemWorldManagerTickFunction",
	nullptr,
	0,
	sizeof(FParticleSystemWorldManagerTickFunction),
	alignof(FParticleSystemWorldManagerTickFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.InnerSingleton;
}
// End ScriptStruct FParticleSystemWorldManagerTickFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParticleSystemWorldManagerTickFunction::StaticStruct, Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::NewStructOps, TEXT("ParticleSystemWorldManagerTickFunction"), &Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleSystemWorldManagerTickFunction), 2001734133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h_1312242879(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
