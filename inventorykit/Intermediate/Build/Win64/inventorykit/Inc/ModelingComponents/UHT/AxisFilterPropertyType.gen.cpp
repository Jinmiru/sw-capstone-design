// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/PropertySets/AxisFilterPropertyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisFilterPropertyType() {}

// Begin Cross Module References
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FModelingToolsAxisFilter();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin ScriptStruct FModelingToolsAxisFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter;
class UScriptStruct* FModelingToolsAxisFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModelingToolsAxisFilter, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ModelingToolsAxisFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FModelingToolsAxisFilter>()
{
	return FModelingToolsAxisFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PropertySets/AxisFilterPropertyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAxisX_MetaData[] = {
		{ "Category", "AxisFilters" },
		{ "Comment", "/** X Axis */" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Public/PropertySets/AxisFilterPropertyType.h" },
		{ "ToolTip", "X Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAxisY_MetaData[] = {
		{ "Category", "AxisFilters" },
		{ "Comment", "/** Y Axis */" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Public/PropertySets/AxisFilterPropertyType.h" },
		{ "ToolTip", "Y Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAxisZ_MetaData[] = {
		{ "Category", "AxisFilters" },
		{ "Comment", "/** Z Axis */" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Public/PropertySets/AxisFilterPropertyType.h" },
		{ "ToolTip", "Z Axis" },
	};
#endif // WITH_METADATA
	static void NewProp_bAxisX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAxisX;
	static void NewProp_bAxisY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAxisY;
	static void NewProp_bAxisZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAxisZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModelingToolsAxisFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX_SetBit(void* Obj)
{
	((FModelingToolsAxisFilter*)Obj)->bAxisX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX = { "bAxisX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModelingToolsAxisFilter), &Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAxisX_MetaData), NewProp_bAxisX_MetaData) };
void Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY_SetBit(void* Obj)
{
	((FModelingToolsAxisFilter*)Obj)->bAxisY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY = { "bAxisY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModelingToolsAxisFilter), &Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAxisY_MetaData), NewProp_bAxisY_MetaData) };
void Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ_SetBit(void* Obj)
{
	((FModelingToolsAxisFilter*)Obj)->bAxisZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ = { "bAxisZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModelingToolsAxisFilter), &Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAxisZ_MetaData), NewProp_bAxisZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewProp_bAxisZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"ModelingToolsAxisFilter",
	Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::PropPointers),
	sizeof(FModelingToolsAxisFilter),
	alignof(FModelingToolsAxisFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModelingToolsAxisFilter()
{
	if (!Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.InnerSingleton, Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter.InnerSingleton;
}
// End ScriptStruct FModelingToolsAxisFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_AxisFilterPropertyType_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModelingToolsAxisFilter::StaticStruct, Z_Construct_UScriptStruct_FModelingToolsAxisFilter_Statics::NewStructOps, TEXT("ModelingToolsAxisFilter"), &Z_Registration_Info_UScriptStruct_ModelingToolsAxisFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModelingToolsAxisFilter), 1039847539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_AxisFilterPropertyType_h_2807282071(TEXT("/Script/ModelingComponents"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_AxisFilterPropertyType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_AxisFilterPropertyType_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
