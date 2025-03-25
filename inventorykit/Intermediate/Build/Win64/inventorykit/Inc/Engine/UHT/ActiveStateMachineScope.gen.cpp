// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/ActiveStateMachineScope.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveStateMachineScope() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEncounteredStateMachineStack();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FEncounteredStateMachineStack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack;
class UScriptStruct* FEncounteredStateMachineStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncounteredStateMachineStack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EncounteredStateMachineStack"));
	}
	return Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEncounteredStateMachineStack>()
{
	return FEncounteredStateMachineStack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/ActiveStateMachineScope.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncounteredStateMachineStack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EncounteredStateMachineStack",
	nullptr,
	0,
	sizeof(FEncounteredStateMachineStack),
	alignof(FEncounteredStateMachineStack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEncounteredStateMachineStack()
{
	if (!Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.InnerSingleton, Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.InnerSingleton;
}
// End ScriptStruct FEncounteredStateMachineStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEncounteredStateMachineStack::StaticStruct, Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::NewStructOps, TEXT("EncounteredStateMachineStack"), &Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncounteredStateMachineStack), 4002092954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h_2087179424(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
