// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/StaticMeshDescription/Public/UVMapSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVMapSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
STATICMESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FUVMapSettings();
UPackage* Z_Construct_UPackage__Script_StaticMeshDescription();
// End Cross Module References

// Begin ScriptStruct FUVMapSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UVMapSettings;
class UScriptStruct* FUVMapSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UVMapSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UVMapSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUVMapSettings, (UObject*)Z_Construct_UPackage__Script_StaticMeshDescription(), TEXT("UVMapSettings"));
	}
	return Z_Registration_Info_UScriptStruct_UVMapSettings.OuterSingleton;
}
template<> STATICMESHDESCRIPTION_API UScriptStruct* StaticStruct<FUVMapSettings>()
{
	return FUVMapSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUVMapSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UV map generation settings that are exposed to the user for scripting and through the editor */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "UV map generation settings that are exposed to the user for scripting and through the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "UVMapSettings" },
		{ "Comment", "/** Length, width, height of the UV mapping gizmo */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Length, width, height of the UV mapping gizmo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVTile_MetaData[] = {
		{ "Category", "UVMapSettings" },
		{ "Comment", "/** Tiling of the UV mapping */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Tiling of the UV mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "GizmoTransform" },
		{ "Comment", "/** Position of the UV mapping gizmo */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Position of the UV mapping gizmo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "GizmoTransform" },
		{ "Comment", "/** Rotation of the UV mapping gizmo (angles in degrees) */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Rotation of the UV mapping gizmo (angles in degrees)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "GizmoTransform" },
		{ "Comment", "/** Scale of the UV mapping gizmo */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Scale of the UV mapping gizmo" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVTile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUVMapSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUVMapSettings, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile = { "UVTile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUVMapSettings, UVTile), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVTile_MetaData), NewProp_UVTile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUVMapSettings, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUVMapSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUVMapSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshDescription,
	nullptr,
	&NewStructOps,
	"UVMapSettings",
	Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers),
	sizeof(FUVMapSettings),
	alignof(FUVMapSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUVMapSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUVMapSettings()
{
	if (!Z_Registration_Info_UScriptStruct_UVMapSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UVMapSettings.InnerSingleton, Z_Construct_UScriptStruct_FUVMapSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UVMapSettings.InnerSingleton;
}
// End ScriptStruct FUVMapSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUVMapSettings::StaticStruct, Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewStructOps, TEXT("UVMapSettings"), &Z_Registration_Info_UScriptStruct_UVMapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUVMapSettings), 2834603343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h_425618014(TEXT("/Script/StaticMeshDescription"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
