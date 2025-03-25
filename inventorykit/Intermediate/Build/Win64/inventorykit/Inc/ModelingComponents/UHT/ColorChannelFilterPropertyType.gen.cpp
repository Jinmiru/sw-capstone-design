// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/PropertySets/ColorChannelFilterPropertyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorChannelFilterPropertyType() {}

// Begin Cross Module References
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin ScriptStruct FModelingToolsColorChannelFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModelingToolsColorChannelFilter;
class UScriptStruct* FModelingToolsColorChannelFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModelingToolsColorChannelFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModelingToolsColorChannelFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ModelingToolsColorChannelFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ModelingToolsColorChannelFilter.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FModelingToolsColorChannelFilter>()
{
	return FModelingToolsColorChannelFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PropertySets/ColorChannelFilterPropertyType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRed_MetaData[] = {
		{ "Category", "ChannelFilters" },
		{ "Comment", "/** Red Channel */" },
		{ "DisplayName", "R" },
		{ "ModuleRelativePath", "Public/PropertySets/ColorChannelFilterPropertyType.h" },
		{ "ToolTip", "Red Channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGreen_MetaData[] = {
		{ "Category", "ChannelFilters" },
		{ "Comment", "/** Green Channel */" },
		{ "DisplayName", "G" },
		{ "ModuleRelativePath", "Public/PropertySets/ColorChannelFilterPropertyType.h" },
		{ "ToolTip", "Green Channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlue_MetaData[] = {
		{ "Category", "ChannelFilters" },
		{ "Comment", "/** Blue Channel */" },
		{ "DisplayName", "B" },
		{ "ModuleRelativePath", "Public/PropertySets/ColorChannelFilterPropertyType.h" },
		{ "ToolTip", "Blue Channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlpha_MetaData[] = {
		{ "Category", "ChannelFilters" },
		{ "Comment", "/** Alpha Channel */" },
		{ "DisplayName", "A" },
		{ "ModuleRelativePath", "Public/PropertySets/ColorChannelFilterPropertyType.h" },
		{ "ToolTip", "Alpha Channel" },
	};
#endif // WITH_METADATA
	static void NewProp_bRed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRed;
	static void NewProp_bGreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGreen;
	static void NewProp_bBlue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlue;
	static void NewProp_bAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModelingToolsColorChannelFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bRed_SetBit(void* Obj)
{
	((FModelingToolsColorChannelFilter*)Obj)->bRed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bRed = { "bRed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModelingToolsColorChannelFilter), &Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bRed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRed_MetaData), NewProp_bRed_MetaData) };
void Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bGreen_SetBit(void* Obj)
{
	((FModelingToolsColorChannelFilter*)Obj)->bGreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bGreen = { "bGreen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModelingToolsColorChannelFilter), &Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bGreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGreen_MetaData), NewProp_bGreen_MetaData) };
void Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bBlue_SetBit(void* Obj)
{
	((FModelingToolsColorChannelFilter*)Obj)->bBlue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bBlue = { "bBlue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModelingToolsColorChannelFilter), &Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bBlue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlue_MetaData), NewProp_bBlue_MetaData) };
void Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bAlpha_SetBit(void* Obj)
{
	((FModelingToolsColorChannelFilter*)Obj)->bAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bAlpha = { "bAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FModelingToolsColorChannelFilter), &Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlpha_MetaData), NewProp_bAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bRed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bGreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bBlue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewProp_bAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"ModelingToolsColorChannelFilter",
	Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::PropPointers),
	sizeof(FModelingToolsColorChannelFilter),
	alignof(FModelingToolsColorChannelFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter()
{
	if (!Z_Registration_Info_UScriptStruct_ModelingToolsColorChannelFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModelingToolsColorChannelFilter.InnerSingleton, Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModelingToolsColorChannelFilter.InnerSingleton;
}
// End ScriptStruct FModelingToolsColorChannelFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_ColorChannelFilterPropertyType_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModelingToolsColorChannelFilter::StaticStruct, Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter_Statics::NewStructOps, TEXT("ModelingToolsColorChannelFilter"), &Z_Registration_Info_UScriptStruct_ModelingToolsColorChannelFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModelingToolsColorChannelFilter), 1132658321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_ColorChannelFilterPropertyType_h_4048388016(TEXT("/Script/ModelingComponents"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_ColorChannelFilterPropertyType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_ColorChannelFilterPropertyType_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
