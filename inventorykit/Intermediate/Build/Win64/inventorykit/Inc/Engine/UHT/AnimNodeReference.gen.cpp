// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeReference() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAnimNodeReferenceConversionResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult;
static UEnum* EAnimNodeReferenceConversionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimNodeReferenceConversionResult"));
	}
	return Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimNodeReferenceConversionResult>()
{
	return EAnimNodeReferenceConversionResult_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The result of an anim node reference conversion \n" },
		{ "Failed.Name", "EAnimNodeReferenceConversionResult::Failed" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeReference.h" },
		{ "Succeeded.Name", "EAnimNodeReferenceConversionResult::Succeeded" },
		{ "ToolTip", "The result of an anim node reference conversion" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimNodeReferenceConversionResult::Succeeded", (int64)EAnimNodeReferenceConversionResult::Succeeded },
		{ "EAnimNodeReferenceConversionResult::Failed", (int64)EAnimNodeReferenceConversionResult::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimNodeReferenceConversionResult",
	"EAnimNodeReferenceConversionResult",
	Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult()
{
	if (!Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.InnerSingleton, Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.InnerSingleton;
}
// End Enum EAnimNodeReferenceConversionResult

// Begin ScriptStruct FAnimNodeReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeReference;
class UScriptStruct* FAnimNodeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeReference"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeReference>()
{
	return FAnimNodeReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNodeReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A reference to an anim node. Does not persist, only valid for the call in which it was retrieved.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeReference.h" },
		{ "ToolTip", "A reference to an anim node. Does not persist, only valid for the call in which it was retrieved." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNodeReference",
	nullptr,
	0,
	sizeof(FAnimNodeReference),
	alignof(FAnimNodeReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNodeReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeReference.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeReference.InnerSingleton;
}
// End ScriptStruct FAnimNodeReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimNodeReferenceConversionResult_StaticEnum, TEXT("EAnimNodeReferenceConversionResult"), &Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1211585839U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNodeReference::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeReference_Statics::NewStructOps, TEXT("AnimNodeReference"), &Z_Registration_Info_UScriptStruct_AnimNodeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeReference), 3482719010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_152842323(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
