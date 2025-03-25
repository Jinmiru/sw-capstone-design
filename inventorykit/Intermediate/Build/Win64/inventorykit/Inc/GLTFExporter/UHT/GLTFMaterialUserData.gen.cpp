// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/UserData/GLTFMaterialUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFMaterialUserData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFMaterialExportOptions();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister();
GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode();
GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup();
GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFMaterialBakeSize();
GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Enum EGLTFMaterialBakeMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFMaterialBakeMode;
static UEnum* EGLTFMaterialBakeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode, (UObject*)Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFMaterialBakeMode"));
	}
	return Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton;
}
template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialBakeMode>()
{
	return EGLTFMaterialBakeMode_StaticEnum();
}
struct Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/** Never bake material inputs. */" },
		{ "Disabled.Name", "EGLTFMaterialBakeMode::Disabled" },
		{ "Disabled.ToolTip", "Never bake material inputs." },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "Simple.Comment", "/** Only use a simple quad if a material input needs to be baked out. */" },
		{ "Simple.Name", "EGLTFMaterialBakeMode::Simple" },
		{ "Simple.ToolTip", "Only use a simple quad if a material input needs to be baked out." },
		{ "UseMeshData.Comment", "/** Allow usage of the mesh data if a material input needs to be baked out with vertex data. */" },
		{ "UseMeshData.Name", "EGLTFMaterialBakeMode::UseMeshData" },
		{ "UseMeshData.ToolTip", "Allow usage of the mesh data if a material input needs to be baked out with vertex data." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGLTFMaterialBakeMode::Disabled", (int64)EGLTFMaterialBakeMode::Disabled },
		{ "EGLTFMaterialBakeMode::Simple", (int64)EGLTFMaterialBakeMode::Simple },
		{ "EGLTFMaterialBakeMode::UseMeshData", (int64)EGLTFMaterialBakeMode::UseMeshData },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
	nullptr,
	"EGLTFMaterialBakeMode",
	"EGLTFMaterialBakeMode",
	Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode()
{
	if (!Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.InnerSingleton;
}
// End Enum EGLTFMaterialBakeMode

// Begin Enum EGLTFMaterialPropertyGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup;
static UEnum* EGLTFMaterialPropertyGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup, (UObject*)Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFMaterialPropertyGroup"));
	}
	return Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton;
}
template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialPropertyGroup>()
{
	return EGLTFMaterialPropertyGroup_StaticEnum();
}
struct Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AmbientOcclusion.DisplayName", "Ambient Occlusion" },
		{ "AmbientOcclusion.Name", "EGLTFMaterialPropertyGroup::AmbientOcclusion" },
		{ "BaseColorOpacity.DisplayName", "Base Color + Opacity (Mask)" },
		{ "BaseColorOpacity.Name", "EGLTFMaterialPropertyGroup::BaseColorOpacity" },
		{ "BlueprintType", "true" },
		{ "ClearCoatBottomNormal.DisplayName", "Clear Coat Bottom Normal" },
		{ "ClearCoatBottomNormal.Name", "EGLTFMaterialPropertyGroup::ClearCoatBottomNormal" },
		{ "ClearCoatRoughness.DisplayName", "Clear Coat + Clear Coat Roughness" },
		{ "ClearCoatRoughness.Name", "EGLTFMaterialPropertyGroup::ClearCoatRoughness" },
		{ "EmissiveColor.DisplayName", "Emissive Color" },
		{ "EmissiveColor.Name", "EGLTFMaterialPropertyGroup::EmissiveColor" },
		{ "MetallicRoughness.DisplayName", "Metallic + Roughness" },
		{ "MetallicRoughness.Name", "EGLTFMaterialPropertyGroup::MetallicRoughness" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EGLTFMaterialPropertyGroup::None" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EGLTFMaterialPropertyGroup::Normal" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGLTFMaterialPropertyGroup::None", (int64)EGLTFMaterialPropertyGroup::None },
		{ "EGLTFMaterialPropertyGroup::BaseColorOpacity", (int64)EGLTFMaterialPropertyGroup::BaseColorOpacity },
		{ "EGLTFMaterialPropertyGroup::MetallicRoughness", (int64)EGLTFMaterialPropertyGroup::MetallicRoughness },
		{ "EGLTFMaterialPropertyGroup::EmissiveColor", (int64)EGLTFMaterialPropertyGroup::EmissiveColor },
		{ "EGLTFMaterialPropertyGroup::Normal", (int64)EGLTFMaterialPropertyGroup::Normal },
		{ "EGLTFMaterialPropertyGroup::AmbientOcclusion", (int64)EGLTFMaterialPropertyGroup::AmbientOcclusion },
		{ "EGLTFMaterialPropertyGroup::ClearCoatRoughness", (int64)EGLTFMaterialPropertyGroup::ClearCoatRoughness },
		{ "EGLTFMaterialPropertyGroup::ClearCoatBottomNormal", (int64)EGLTFMaterialPropertyGroup::ClearCoatBottomNormal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
	nullptr,
	"EGLTFMaterialPropertyGroup",
	"EGLTFMaterialPropertyGroup",
	Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup()
{
	if (!Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.InnerSingleton;
}
// End Enum EGLTFMaterialPropertyGroup

// Begin ScriptStruct FGLTFMaterialBakeSize
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLTFMaterialBakeSize;
class UScriptStruct* FGLTFMaterialBakeSize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLTFMaterialBakeSize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLTFMaterialBakeSize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLTFMaterialBakeSize, (UObject*)Z_Construct_UPackage__Script_GLTFExporter(), TEXT("GLTFMaterialBakeSize"));
	}
	return Z_Registration_Info_UScriptStruct_GLTFMaterialBakeSize.OuterSingleton;
}
template<> GLTFEXPORTER_API UScriptStruct* StaticStruct<FGLTFMaterialBakeSize>()
{
	return FGLTFMaterialBakeSize::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetect_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, bake size is based on the largest texture used in the material input's expression graph. If none found, bake size will fall back to the explicit dimensions. */" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, bake size is based on the largest texture used in the material input's expression graph. If none found, bake size will fall back to the explicit dimensions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static void NewProp_bAutoDetect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLTFMaterialBakeSize>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLTFMaterialBakeSize, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLTFMaterialBakeSize, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
void Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewProp_bAutoDetect_SetBit(void* Obj)
{
	((FGLTFMaterialBakeSize*)Obj)->bAutoDetect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewProp_bAutoDetect = { "bAutoDetect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGLTFMaterialBakeSize), &Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewProp_bAutoDetect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDetect_MetaData), NewProp_bAutoDetect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewProp_bAutoDetect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	nullptr,
	&NewStructOps,
	"GLTFMaterialBakeSize",
	Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::PropPointers),
	sizeof(FGLTFMaterialBakeSize),
	alignof(FGLTFMaterialBakeSize),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGLTFMaterialBakeSize()
{
	if (!Z_Registration_Info_UScriptStruct_GLTFMaterialBakeSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLTFMaterialBakeSize.InnerSingleton, Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GLTFMaterialBakeSize.InnerSingleton;
}
// End ScriptStruct FGLTFMaterialBakeSize

// Begin ScriptStruct FGLTFOverrideMaterialBakeSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings;
class UScriptStruct* FGLTFOverrideMaterialBakeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, (UObject*)Z_Construct_UPackage__Script_GLTFExporter(), TEXT("GLTFOverrideMaterialBakeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.OuterSingleton;
}
template<> GLTFEXPORTER_API UScriptStruct* StaticStruct<FGLTFOverrideMaterialBakeSettings>()
{
	return FGLTFOverrideMaterialBakeSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSize_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, default size will be overridden by the corresponding property. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, default size will be overridden by the corresponding property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Overrides default size of the baked out texture. */" },
		{ "EditCondition", "bOverrideSize" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Overrides default size of the baked out texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFilter_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, default filtering mode will be overridden by the corresponding property. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, default filtering mode will be overridden by the corresponding property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Overrides the default filtering mode used when sampling the baked out texture. */" },
		{ "EditCondition", "bOverrideFilter" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Overrides the default filtering mode used when sampling the baked out texture." },
		{ "ValidEnumValues", "TF_Nearest, TF_Bilinear, TF_Trilinear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTiling_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, default addressing mode will be overridden by the corresponding property. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, default addressing mode will be overridden by the corresponding property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Overrides the default addressing mode used when sampling the baked out texture. */" },
		{ "EditCondition", "bOverrideTiling" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Overrides the default addressing mode used when sampling the baked out texture." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static void NewProp_bOverrideFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Filter;
	static void NewProp_bOverrideTiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTiling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tiling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLTFOverrideMaterialBakeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_SetBit(void* Obj)
{
	((FGLTFOverrideMaterialBakeSettings*)Obj)->bOverrideSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize = { "bOverrideSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGLTFOverrideMaterialBakeSettings), &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSize_MetaData), NewProp_bOverrideSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLTFOverrideMaterialBakeSettings, Size), Z_Construct_UScriptStruct_FGLTFMaterialBakeSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) }; // 3894204209
void Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_SetBit(void* Obj)
{
	((FGLTFOverrideMaterialBakeSettings*)Obj)->bOverrideFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter = { "bOverrideFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGLTFOverrideMaterialBakeSettings), &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideFilter_MetaData), NewProp_bOverrideFilter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLTFOverrideMaterialBakeSettings, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 525537855
void Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_SetBit(void* Obj)
{
	((FGLTFOverrideMaterialBakeSettings*)Obj)->bOverrideTiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling = { "bOverrideTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGLTFOverrideMaterialBakeSettings), &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideTiling_MetaData), NewProp_bOverrideTiling_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLTFOverrideMaterialBakeSettings, Tiling), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiling_MetaData), NewProp_Tiling_MetaData) }; // 2220430387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	nullptr,
	&NewStructOps,
	"GLTFOverrideMaterialBakeSettings",
	Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers),
	sizeof(FGLTFOverrideMaterialBakeSettings),
	alignof(FGLTFOverrideMaterialBakeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.InnerSingleton, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.InnerSingleton;
}
// End ScriptStruct FGLTFOverrideMaterialBakeSettings

// Begin Class UGLTFMaterialExportOptions
void UGLTFMaterialExportOptions::StaticRegisterNativesUGLTFMaterialExportOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFMaterialExportOptions);
UClass* Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister()
{
	return UGLTFMaterialExportOptions::StaticClass();
}
struct Z_Construct_UClass_UGLTFMaterialExportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** glTF-specific user data that can be added to material assets to override export options */" },
		{ "DisplayName", "GLTF Material Export Options" },
		{ "IncludePath", "UserData/GLTFMaterialUserData.h" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "glTF-specific user data that can be added to material assets to override export options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If assigned, export will use the proxy instead of the original material. */" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If assigned, export will use the proxy instead of the original material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "Override Bake Settings" },
		{ "Comment", "/** Default bake settings for this material in general. */" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Default bake settings for this material in general." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "Category", "Override Bake Settings" },
		{ "Comment", "/** Input-specific bake settings that override the defaults above. */" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Input-specific bake settings that override the defaults above." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Inputs_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Inputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFMaterialExportOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFMaterialExportOptions, Proxy), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Proxy_MetaData), NewProp_Proxy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFMaterialExportOptions, Default), Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) }; // 1666532053
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_ValueProp = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, METADATA_PARAMS(0, nullptr) }; // 1666532053
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp = { "Inputs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup, METADATA_PARAMS(0, nullptr) }; // 4087595200
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFMaterialExportOptions, Inputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 4087595200 1666532053
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Proxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::ClassParams = {
	&UGLTFMaterialExportOptions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFMaterialExportOptions()
{
	if (!Z_Registration_Info_UClass_UGLTFMaterialExportOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFMaterialExportOptions.OuterSingleton, Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFMaterialExportOptions.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFMaterialExportOptions>()
{
	return UGLTFMaterialExportOptions::StaticClass();
}
UGLTFMaterialExportOptions::UGLTFMaterialExportOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFMaterialExportOptions);
UGLTFMaterialExportOptions::~UGLTFMaterialExportOptions() {}
// End Class UGLTFMaterialExportOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGLTFMaterialBakeMode_StaticEnum, TEXT("EGLTFMaterialBakeMode"), &Z_Registration_Info_UEnum_EGLTFMaterialBakeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2787297389U) },
		{ EGLTFMaterialPropertyGroup_StaticEnum, TEXT("EGLTFMaterialPropertyGroup"), &Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4087595200U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGLTFMaterialBakeSize::StaticStruct, Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics::NewStructOps, TEXT("GLTFMaterialBakeSize"), &Z_Registration_Info_UScriptStruct_GLTFMaterialBakeSize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLTFMaterialBakeSize), 3894204209U) },
		{ FGLTFOverrideMaterialBakeSettings::StaticStruct, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewStructOps, TEXT("GLTFOverrideMaterialBakeSettings"), &Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLTFOverrideMaterialBakeSettings), 1666532053U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFMaterialExportOptions, UGLTFMaterialExportOptions::StaticClass, TEXT("UGLTFMaterialExportOptions"), &Z_Registration_Info_UClass_UGLTFMaterialExportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFMaterialExportOptions), 2104631425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_1299308471(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
