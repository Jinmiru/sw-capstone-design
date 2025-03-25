// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimSubsystem_NodeRelevancy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSubsystem_NodeRelevancy() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystemInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimSubsystemInstance_NodeRelevancy
static_assert(std::is_polymorphic<FAnimSubsystemInstance_NodeRelevancy>() == std::is_polymorphic<FAnimSubsystemInstance>(), "USTRUCT FAnimSubsystemInstance_NodeRelevancy cannot be polymorphic unless super FAnimSubsystemInstance is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy;
class UScriptStruct* FAnimSubsystemInstance_NodeRelevancy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSubsystemInstance_NodeRelevancy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSubsystemInstance_NodeRelevancy>()
{
	return FAnimSubsystemInstance_NodeRelevancy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Allows anim node's relevancy (when they receive and lose weight in the graph) to be tracked */" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_NodeRelevancy.h" },
		{ "ToolTip", "Allows anim node's relevancy (when they receive and lose weight in the graph) to be tracked" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSubsystemInstance_NodeRelevancy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimSubsystemInstance,
	&NewStructOps,
	"AnimSubsystemInstance_NodeRelevancy",
	nullptr,
	0,
	sizeof(FAnimSubsystemInstance_NodeRelevancy),
	alignof(FAnimSubsystemInstance_NodeRelevancy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.InnerSingleton, Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.InnerSingleton;
}
// End ScriptStruct FAnimSubsystemInstance_NodeRelevancy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimSubsystemInstance_NodeRelevancy::StaticStruct, Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::NewStructOps, TEXT("AnimSubsystemInstance_NodeRelevancy"), &Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSubsystemInstance_NodeRelevancy), 1106290405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h_165109681(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
