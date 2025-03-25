// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/RadialBoxSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialBoxSettings() {}

// Begin Cross Module References
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FRadialBoxSettings();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FRadialBoxSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialBoxSettings;
class UScriptStruct* FRadialBoxSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialBoxSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialBoxSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialBoxSettings, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("RadialBoxSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RadialBoxSettings.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FRadialBoxSettings>()
{
	return FRadialBoxSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRadialBoxSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/RadialBoxSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingAngle_MetaData[] = {
		{ "Category", "Items" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/* At what angle will we place the first element of the wheel? */" },
		{ "ModuleRelativePath", "Public/Components/RadialBoxSettings.h" },
		{ "ToolTip", "At what angle will we place the first element of the wheel?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDistributeItemsEvenly_MetaData[] = {
		{ "Category", "Items" },
		{ "Comment", "/* Distribute Items evenly in the whole circle. Checking this option ignores AngleBetweenItems */" },
		{ "ModuleRelativePath", "Public/Components/RadialBoxSettings.h" },
		{ "ToolTip", "Distribute Items evenly in the whole circle. Checking this option ignores AngleBetweenItems" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleBetweenItems_MetaData[] = {
		{ "Category", "Items" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Amount of Euler degrees that separate each item. Only used when bDistributeItemsEvenly is false */" },
		{ "EditCondition", "!bDistributeItemsEvenly" },
		{ "ModuleRelativePath", "Public/Components/RadialBoxSettings.h" },
		{ "ToolTip", "Amount of Euler degrees that separate each item. Only used when bDistributeItemsEvenly is false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectorCentralAngle_MetaData[] = {
		{ "Category", "Items" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If we need a section of a radial (for example half-a-radial) we can define a central angle < 360 (180 in case of half-a-radial). Used when bDistributeItemsEvenly is enabled. */" },
		{ "EditCondition", "bDistributeItemsEvenly" },
		{ "ModuleRelativePath", "Public/Components/RadialBoxSettings.h" },
		{ "ToolTip", "If we need a section of a radial (for example half-a-radial) we can define a central angle < 360 (180 in case of half-a-radial). Used when bDistributeItemsEvenly is enabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingAngle;
	static void NewProp_bDistributeItemsEvenly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDistributeItemsEvenly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleBetweenItems;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SectorCentralAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialBoxSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialBoxSettings, StartingAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingAngle_MetaData), NewProp_StartingAngle_MetaData) };
void Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly_SetBit(void* Obj)
{
	((FRadialBoxSettings*)Obj)->bDistributeItemsEvenly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly = { "bDistributeItemsEvenly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRadialBoxSettings), &Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDistributeItemsEvenly_MetaData), NewProp_bDistributeItemsEvenly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_AngleBetweenItems = { "AngleBetweenItems", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialBoxSettings, AngleBetweenItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleBetweenItems_MetaData), NewProp_AngleBetweenItems_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_SectorCentralAngle = { "SectorCentralAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialBoxSettings, SectorCentralAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectorCentralAngle_MetaData), NewProp_SectorCentralAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_StartingAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_bDistributeItemsEvenly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_AngleBetweenItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewProp_SectorCentralAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"RadialBoxSettings",
	Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::PropPointers),
	sizeof(FRadialBoxSettings),
	alignof(FRadialBoxSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRadialBoxSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RadialBoxSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialBoxSettings.InnerSingleton, Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RadialBoxSettings.InnerSingleton;
}
// End ScriptStruct FRadialBoxSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RadialBoxSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRadialBoxSettings::StaticStruct, Z_Construct_UScriptStruct_FRadialBoxSettings_Statics::NewStructOps, TEXT("RadialBoxSettings"), &Z_Registration_Info_UScriptStruct_RadialBoxSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialBoxSettings), 3197049818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RadialBoxSettings_h_2557204906(TEXT("/Script/UMG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RadialBoxSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RadialBoxSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
