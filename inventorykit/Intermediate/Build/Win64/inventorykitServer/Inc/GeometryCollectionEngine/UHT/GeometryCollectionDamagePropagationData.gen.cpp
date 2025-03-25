// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionDamagePropagationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionDamagePropagationData() {}

// Begin Cross Module References
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin ScriptStruct FGeometryCollectionDamagePropagationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData;
class UScriptStruct* FGeometryCollectionDamagePropagationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionDamagePropagationData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionDamagePropagationData>()
{
	return FGeometryCollectionDamagePropagationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDamagePropagationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Damage Propagation" },
		{ "Comment", "/** Whether or not damage propagation is enabled. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDamagePropagationData.h" },
		{ "ToolTip", "Whether or not damage propagation is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakDamagePropagationFactor_MetaData[] = {
		{ "Category", "Damage Propagation" },
		{ "Comment", "/** factor of the remaining strain propagated through the connection graph after a piece breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDamagePropagationData.h" },
		{ "ToolTip", "factor of the remaining strain propagated through the connection graph after a piece breaks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShockDamagePropagationFactor_MetaData[] = {
		{ "Category", "Damage Propagation" },
		{ "Comment", "/** factor of the received strain propagated throug the connection graph if the piece did not break. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDamagePropagationData.h" },
		{ "ToolTip", "factor of the received strain propagated throug the connection graph if the piece did not break." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakDamagePropagationFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShockDamagePropagationFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionDamagePropagationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FGeometryCollectionDamagePropagationData*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryCollectionDamagePropagationData), &Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_BreakDamagePropagationFactor = { "BreakDamagePropagationFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionDamagePropagationData, BreakDamagePropagationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakDamagePropagationFactor_MetaData), NewProp_BreakDamagePropagationFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_ShockDamagePropagationFactor = { "ShockDamagePropagationFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionDamagePropagationData, ShockDamagePropagationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShockDamagePropagationFactor_MetaData), NewProp_ShockDamagePropagationFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_BreakDamagePropagationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_ShockDamagePropagationFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionDamagePropagationData",
	Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::PropPointers),
	sizeof(FGeometryCollectionDamagePropagationData),
	alignof(FGeometryCollectionDamagePropagationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionDamagePropagationData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDamagePropagationData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeometryCollectionDamagePropagationData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewStructOps, TEXT("GeometryCollectionDamagePropagationData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionDamagePropagationData), 2094228416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDamagePropagationData_h_117088698(TEXT("/Script/GeometryCollectionEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDamagePropagationData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDamagePropagationData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
