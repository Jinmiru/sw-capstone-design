// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndexedCurve() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FIndexedCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IndexedCurve;
class UScriptStruct* FIndexedCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IndexedCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IndexedCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIndexedCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("IndexedCurve"));
	}
	return Z_Registration_Info_UScriptStruct_IndexedCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIndexedCurve>()
{
	return FIndexedCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIndexedCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A curve base class which enables key handles to index lookups.\n *\n * @todo sequencer: Some heavy refactoring can be done here. Much more stuff can go in this base class.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/IndexedCurve.h" },
		{ "ToolTip", "A curve base class which enables key handles to index lookups.\n\n@todo sequencer: Some heavy refactoring can be done here. Much more stuff can go in this base class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandlesToIndices_MetaData[] = {
		{ "Comment", "/** Map of which key handles go to which indices. */" },
		{ "ModuleRelativePath", "Classes/Curves/IndexedCurve.h" },
		{ "ToolTip", "Map of which key handles go to which indices." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandlesToIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIndexedCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices = { "KeyHandlesToIndices", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIndexedCurve, KeyHandlesToIndices), Z_Construct_UScriptStruct_FKeyHandleMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyHandlesToIndices_MetaData), NewProp_KeyHandlesToIndices_MetaData) }; // 1805637467
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIndexedCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"IndexedCurve",
	Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers),
	sizeof(FIndexedCurve),
	alignof(FIndexedCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIndexedCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve()
{
	if (!Z_Registration_Info_UScriptStruct_IndexedCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IndexedCurve.InnerSingleton, Z_Construct_UScriptStruct_FIndexedCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IndexedCurve.InnerSingleton;
}
// End ScriptStruct FIndexedCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIndexedCurve::StaticStruct, Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewStructOps, TEXT("IndexedCurve"), &Z_Registration_Info_UScriptStruct_IndexedCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIndexedCurve), 1268301401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h_4134175363(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IndexedCurve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
