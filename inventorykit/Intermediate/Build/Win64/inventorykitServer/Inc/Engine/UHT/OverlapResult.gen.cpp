// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/OverlapResult.h"
#include "Runtime/Engine/Classes/Engine/ActorInstanceHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlapResult() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FOverlapResult();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FOverlapResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OverlapResult;
class UScriptStruct* FOverlapResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OverlapResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OverlapResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverlapResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("OverlapResult"));
	}
	return Z_Registration_Info_UScriptStruct_OverlapResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FOverlapResult>()
{
	return FOverlapResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOverlapResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure containing information about one hit of an overlap test */" },
		{ "ModuleRelativePath", "Classes/Engine/OverlapResult.h" },
		{ "ToolTip", "Structure containing information about one hit of an overlap test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapObjectHandle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/OverlapResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Comment", "/** PrimitiveComponent that the check hit. */" },
		{ "ModuleRelativePath", "Classes/Engine/OverlapResult.h" },
		{ "ToolTip", "PrimitiveComponent that the check hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingHit_MetaData[] = {
		{ "Comment", "/** Indicates if this hit was requesting a block - if false, was requesting a touch instead */" },
		{ "ModuleRelativePath", "Classes/Engine/OverlapResult.h" },
		{ "ToolTip", "Indicates if this hit was requesting a block - if false, was requesting a touch instead" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapObjectHandle;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
	static void NewProp_bBlockingHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverlapResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlapResult_Statics::NewProp_OverlapObjectHandle = { "OverlapObjectHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlapResult, OverlapObjectHandle), Z_Construct_UScriptStruct_FActorInstanceHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapObjectHandle_MetaData), NewProp_OverlapObjectHandle_MetaData) }; // 2065137789
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FOverlapResult_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlapResult, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
void Z_Construct_UScriptStruct_FOverlapResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
{
	((FOverlapResult*)Obj)->bBlockingHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOverlapResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOverlapResult), &Z_Construct_UScriptStruct_FOverlapResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockingHit_MetaData), NewProp_bBlockingHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOverlapResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlapResult_Statics::NewProp_OverlapObjectHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlapResult_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlapResult_Statics::NewProp_bBlockingHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlapResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverlapResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"OverlapResult",
	Z_Construct_UScriptStruct_FOverlapResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlapResult_Statics::PropPointers),
	sizeof(FOverlapResult),
	alignof(FOverlapResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlapResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOverlapResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOverlapResult()
{
	if (!Z_Registration_Info_UScriptStruct_OverlapResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OverlapResult.InnerSingleton, Z_Construct_UScriptStruct_FOverlapResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OverlapResult.InnerSingleton;
}
// End ScriptStruct FOverlapResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_OverlapResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOverlapResult::StaticStruct, Z_Construct_UScriptStruct_FOverlapResult_Statics::NewStructOps, TEXT("OverlapResult"), &Z_Registration_Info_UScriptStruct_OverlapResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOverlapResult), 3334009113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_OverlapResult_h_3705423472(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_OverlapResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_OverlapResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
