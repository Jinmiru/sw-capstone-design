// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Public/LandscapeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSettings();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSettings_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Enum ELandscapeDirtyingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeDirtyingMode;
static UEnum* ELandscapeDirtyingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeDirtyingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeDirtyingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeDirtyingMode"));
	}
	return Z_Registration_Info_UEnum_ELandscapeDirtyingMode.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeDirtyingMode>()
{
	return ELandscapeDirtyingMode_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Name", "ELandscapeDirtyingMode::Auto" },
		{ "InLandscapeModeAndUserTriggeredChanges.Name", "ELandscapeDirtyingMode::InLandscapeModeAndUserTriggeredChanges" },
		{ "InLandscapeModeOnly.Name", "ELandscapeDirtyingMode::InLandscapeModeOnly" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeDirtyingMode::Auto", (int64)ELandscapeDirtyingMode::Auto },
		{ "ELandscapeDirtyingMode::InLandscapeModeOnly", (int64)ELandscapeDirtyingMode::InLandscapeModeOnly },
		{ "ELandscapeDirtyingMode::InLandscapeModeAndUserTriggeredChanges", (int64)ELandscapeDirtyingMode::InLandscapeModeAndUserTriggeredChanges },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeDirtyingMode",
	"ELandscapeDirtyingMode",
	Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode()
{
	if (!Z_Registration_Info_UEnum_ELandscapeDirtyingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeDirtyingMode.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeDirtyingMode.InnerSingleton;
}
// End Enum ELandscapeDirtyingMode

// Begin Class ULandscapeSettings
void ULandscapeSettings::StaticRegisterNativesULandscapeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeSettings);
UClass* Z_Construct_UClass_ULandscapeSettings_NoRegister()
{
	return ULandscapeSettings::StaticClass();
}
struct Z_Construct_UClass_ULandscapeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Landscape" },
		{ "IncludePath", "LandscapeSettings.h" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfLayers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "This option controls the maximum editing layers that can be added to a Landscape" },
		{ "UIMax", "32" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxComponents_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Maximum Dimension of Landscape in Components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxImageImportCacheSizeMegaBytes_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Maximum Size of Import Image Cache in MB" },
		{ "UIMax", "1024" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintStrengthGamma_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Exponent for the Paint Tool Strength" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePaintingStartupSlowdown_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Disable Painting Startup Slowdown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeDirtyingMode_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideResolutionLimit_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLandscapeMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Default Landscape Material will be prefilled when creating a new landscape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayerInfoObject_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Default Layer Info Object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSizeUIMax_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Maximum size that can be set via the slider for the landscape sculpt/paint brushes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSizeClampMax_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Maximum size that can be set manually for the landscape sculpt/paint brushes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODMaxTextureSize_MetaData[] = {
		{ "Category", "HLOD" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "64" },
		{ "DisplayName", "HLOD Max Texture Size" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Maximum size of the textures generated for landscape HLODs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictiveMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfLayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxComponents;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxImageImportCacheSizeMegaBytes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintStrengthGamma;
	static void NewProp_bDisablePaintingStartupSlowdown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePaintingStartupSlowdown;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeDirtyingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeDirtyingMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SideResolutionLimit;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLandscapeMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLayerInfoObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSizeUIMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSizeClampMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HLODMaxTextureSize;
	static void NewProp_bRestrictiveMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictiveMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers = { "MaxNumberOfLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, MaxNumberOfLayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfLayers_MetaData), NewProp_MaxNumberOfLayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxComponents = { "MaxComponents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, MaxComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxComponents_MetaData), NewProp_MaxComponents_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxImageImportCacheSizeMegaBytes = { "MaxImageImportCacheSizeMegaBytes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, MaxImageImportCacheSizeMegaBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxImageImportCacheSizeMegaBytes_MetaData), NewProp_MaxImageImportCacheSizeMegaBytes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_PaintStrengthGamma = { "PaintStrengthGamma", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, PaintStrengthGamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintStrengthGamma_MetaData), NewProp_PaintStrengthGamma_MetaData) };
void Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bDisablePaintingStartupSlowdown_SetBit(void* Obj)
{
	((ULandscapeSettings*)Obj)->bDisablePaintingStartupSlowdown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bDisablePaintingStartupSlowdown = { "bDisablePaintingStartupSlowdown", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeSettings), &Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bDisablePaintingStartupSlowdown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisablePaintingStartupSlowdown_MetaData), NewProp_bDisablePaintingStartupSlowdown_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_LandscapeDirtyingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_LandscapeDirtyingMode = { "LandscapeDirtyingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, LandscapeDirtyingMode), Z_Construct_UEnum_Landscape_ELandscapeDirtyingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeDirtyingMode_MetaData), NewProp_LandscapeDirtyingMode_MetaData) }; // 3311933013
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_SideResolutionLimit = { "SideResolutionLimit", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, SideResolutionLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideResolutionLimit_MetaData), NewProp_SideResolutionLimit_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLandscapeMaterial = { "DefaultLandscapeMaterial", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, DefaultLandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLandscapeMaterial_MetaData), NewProp_DefaultLandscapeMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLayerInfoObject = { "DefaultLayerInfoObject", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, DefaultLayerInfoObject), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLayerInfoObject_MetaData), NewProp_DefaultLayerInfoObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_BrushSizeUIMax = { "BrushSizeUIMax", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, BrushSizeUIMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSizeUIMax_MetaData), NewProp_BrushSizeUIMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_BrushSizeClampMax = { "BrushSizeClampMax", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, BrushSizeClampMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSizeClampMax_MetaData), NewProp_BrushSizeClampMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_HLODMaxTextureSize = { "HLODMaxTextureSize", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSettings, HLODMaxTextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODMaxTextureSize_MetaData), NewProp_HLODMaxTextureSize_MetaData) };
void Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode_SetBit(void* Obj)
{
	((ULandscapeSettings*)Obj)->bRestrictiveMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode = { "bRestrictiveMode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeSettings), &Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictiveMode_MetaData), NewProp_bRestrictiveMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxImageImportCacheSizeMegaBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_PaintStrengthGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bDisablePaintingStartupSlowdown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_LandscapeDirtyingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_LandscapeDirtyingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_SideResolutionLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLandscapeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLayerInfoObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_BrushSizeUIMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_BrushSizeClampMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_HLODMaxTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSettings_Statics::ClassParams = {
	&ULandscapeSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeSettings()
{
	if (!Z_Registration_Info_UClass_ULandscapeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeSettings.OuterSingleton, Z_Construct_UClass_ULandscapeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeSettings.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSettings>()
{
	return ULandscapeSettings::StaticClass();
}
ULandscapeSettings::ULandscapeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSettings);
ULandscapeSettings::~ULandscapeSettings() {}
// End Class ULandscapeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeDirtyingMode_StaticEnum, TEXT("ELandscapeDirtyingMode"), &Z_Registration_Info_UEnum_ELandscapeDirtyingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3311933013U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeSettings, ULandscapeSettings::StaticClass, TEXT("ULandscapeSettings"), &Z_Registration_Info_UClass_ULandscapeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeSettings), 969610683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_293230732(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
